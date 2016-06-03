#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <pthread.h>
using namespace std;


void insertaLineinfile(string title,fstream file){
    vector<string> v;
    for(string s;s!="#EOF";){
        getline(file,s);
        v.push_back(s);
    }
    v.pop_back();
    v.push_back(title);
    v.push_back("#EOF");
    for(vector<string>::iterator iter = v.begin();*iter != "#EOF";){
        file << *iter++ <<endl;
    }
}
void fail(int code){
    std::cout << "Error! code: " << code << std::endl;
    };
class User{
public:
// protected:
    // int id;
    double balance;
    string userName;
    string password;
// public:
    bool checkAccount(string un, string pw){
        ifstream checker;
        checker.open("UserData");
        for (string s; s!="#EOF";) {
          //   getline(checker, s);
          checker >> s;
          if(s == "#EOF") break;
          if(s == "Buyer" || s == "Member" || s == "Seller") continue;
          if (s == un){
              checker >> s;
              if (s == pw) return true;
          }
          getline(checker, s);
        }
        checker.close();
        return false;
    };
    void setUser(double bal,string un,string pw){
        this -> balance = bal;
        this -> userName = un;
        this -> password = pw;
    };
};
class Buyer: public User{
public:
    Buyer(string un = NULL,string pw = NULL, double bal = 0){
        userName = un;
        password = pw;
        balance = bal;
    };
    void evilWelcome(){
        cout << "Hello "<< userName << endl;
        cout << "You have ";
        printf("%.2f\n",balance );
    }

};
/*
class Member:public Buyer;
*/
class Seller:public User{
public:
    Seller(string un = NULL,string pw = NULL, double bal = 0){
        userName = un;
        password = pw;
        balance = bal;
    };
    void evilWelcome(){
        cout << "Hello "<< userName << endl;
        cout << "You have ";
        printf("%.2f\n",balance );
    }
};

////////////////////////////////////////

class Sales_item {
public:
  // int id;
  string name;
  string owner;
  int amount;
  double price;
  // int productionDate;
  // int shelfLife;
  // std::string discountReason;
  // int discountPeriod;
};
class Books : public Sales_item{
public:
    int ISBN;
    string author;
    string publisher;
    Books(string na,string ow,int am, double pris,int IS,string pub){
        name = na;
        owner = ow;
        amount = am;
        price = pris;
        ISBN = IS;
        publisher = pub;
    }
};
/*class Food : public Sales_item {
  std::string taste;
};

class Electronics : public Sales_item {
  std::string type;
};

class DailyUse : public Sales_item {
  std::string Brand;
};
*/
////////////////////////////////////////

class System {
// private:
public:
    map<string, class Buyer> registeredBuyer;
    map<string, int>onlineBuyer;
    map<string, class Seller> registeredSeller;
    map<string, int>onlineSeller;
    map<string, class Sales_item> onshelfItems;
// public:
    void startGame(){
        printf("Loading...\n");
        ifstream starter;
        starter.open("UserData");
        istream_iterator<string>file(starter);
        for (string s;s != "#EOF";) {
            cout << "Next Signal: " << *file << endl;
            if (*file == "Buyer") {
                *file++;
                string First = *file;
                cout << "Yet Another Buyer:" << First << endl;
                Buyer Second(*file++,*file++,stod(*file++));
                pair<string, class Buyer> oneBuyer(First, Second);
                registeredBuyer.insert(oneBuyer);
            }
            else if(*file == "Seller"){
                *file++;
                string First = *file;
                cout << "Yet Another Seller:" << First << endl;
                Seller Second(*file++,*file++,stod(*file++));
                pair<string, class Seller> oneSeller(First, Second);
                registeredSeller.insert(oneSeller);
            }
            else if(*file == "#EOF"){break;}
            else {
                getline(starter,s);
                *file++;
                s = *file;
                cout << "Yeah" <<endl;
            }
        }
        starter.close();
        starter.open("ItemData");
        for (string s ; s != "#EOF";) {
            starter >> s;
            if(s == "Books"){
            pair<string, class Books>oneItems;
            starter >> oneItems.first;

            };
        };
        starter.close();
        printf("Game is started!\n");
    }
    int checkAccount(string name,string word,int type){
        // tpye == 1(buyer) 2(seller);
        // return 1;//无用户名
        // return 2;//有用户名，密码不对
        // return 3;//用户名与密码匹配
        if (type == 1) {
            map<string ,class Buyer>::iterator it = registeredBuyer.find(name);
            if(it == registeredBuyer.end()){
                return 1;
            }
            else {
                if (it -> second.password == word){
                    return 3;
                }
                else return 2;
            }
        }
        else if (type == 2) {
            map<string, class Seller>::iterator it = registeredSeller.find(name);
            if(it == registeredSeller.end()){
                return 1;
            }
            else{
                if(it -> second.password == word){
                    return 3;
                }
                else return 2;
            }
        }
    }
    int signin(string name = "NULL",string word = "NULL" ,int type = 0){
        if (name == "NULL" || word == "NULL" || type == 0){
            cout << "username: ";
            cin >> name;
            cout << "password: ";
            cin >> word;
            cout << "Buyer or Seller:";
            string Stype;
            cin >> Stype;
            if(Stype == "Buyer")type = 1;
            else if(Stype == "Seller")type = 2;
            else {
                cout << "Excuse me? " << endl;
                return 0;
            }
        }
        int aUser = checkAccount(name, word,type);
        if (aUser == 3){
            if (type == 1){
                if (onlineBuyer.find(name) == onlineBuyer.end()){
                    pair<string, int>goonline;
                    goonline.first = name;
                    goonline.second = 1;
                    onlineBuyer.insert(goonline);
                    cout << "Sign in Success!" << endl;
                    return 0;
                }
                else {
                    cout << "Can't sign in!";
                    return 1;
                }
            }
            if (type == 2){
                if (onlineSeller.find(name) == onlineSeller.end()){
                    pair<string, int>goonline;
                    goonline.first = name;
                    goonline.second = 1;
                    onlineSeller.insert(goonline);
                    cout << "Sign in Success!" << endl;
                    return 0;
                }
                else {
                    cout << "Can't sign in!";
                    return 1;
                }
            }
            onlineBuyer.find(name);

            pair<string, int>goonline;
            goonline.first = name;
            goonline.second = 1;

        }
        else if(aUser == 2){
            cout << "Wrong Password! Try Again or Say \"No\": ";
            string tryagain;
            cin >> tryagain;
            if (tryagain == "No"){

            }
        }
        else if(aUser == 1){
            cout << "You may want to sign up? Y/n";
            string opi;
            cin >> opi;
            if (opi == "Y"){

            }
            else {
                cout << "OK..." << endl;
            }
        };
    }
    int signup(string name = "NULL",string word = "NULL" ,int type = 0){
        if (name == "NULL" || word == "NULL" || type == 0){
            cout << "username: ";
            cin >> name;
            cout << "password: ";
            cin >> word;
            cout << "Buyer or Seller:";
            string Stype;
            cin >> Stype;
            if(Stype == "Buyer")type = 1;
            else if(Stype == "Seller")type = 2;
            else {
                cout << "excuse me? " << endl;
                return 0;
            }
        }
        /*if (*file == "Buyer") {
            *file++;
            string First = *file;
            cout << "Yet Another Buyer:" << First << endl;
            Buyer Second(*file++,*file++,stod(*file++));

            pair<string, class Buyer> oneBuyer(First, Second);

            registeredBuyer.insert(oneBuyer);
        }*/
        if (type == 1){
            Buyer Second(name,word,0);
            pair<string,class Buyer>newBuyer(name, Second);
            registeredBuyer.insert(newBuyer);

        }
        else if(type == 2){
            Seller Second(name,word,0);
            pair<string,class Seller>newSeller(name, Second);
            registeredSeller.insert(newSeller);
        }

    }
    /*void loadGame(){

    }

    void saveGame(){
        ifstream saver;
        saver.open("UserData");
        for (string s ; s != "#EOF";) {
            saver >> s;
        }
        saver.close();
        saver.open("ItemData");
        saver.close();
    }
    */
};
////////////////////////////////////////

int main() {
  //读文件，读取用户格式
  int i = 0;
  while (i == 0) {
    // cin 登录
    int rounds = 0;
    printf("Round %d\n",rounds);
    System Star;
    Star.startGame();
    Buyer one = Star.registeredBuyer["austin"];
    one.evilWelcome();
    // cin 决定操作
    cout << "Which item do you want check?";













    i++;
  }
  return 0;
}
