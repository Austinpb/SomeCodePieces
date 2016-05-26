#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <pthread.h>
using namespace std;


void fail(int code){
    std::cout << "Error! code: " << code << std::endl;
    };
class User{
protected:
    // int id;
    double balance;
    string userName;
    string password;
public:
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
    // string author;
    Books(string na,string ow,int am, double pris,int IS){
        this -> name = na;
        this -> owner = ow;
        this -> amount = am;
        this -> price = pris;
        this -> ISBN = IS;
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
    map<string, class Seller> registeredSeller;
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
            pair<string, class Books> oneItems;
            starter >> oneItems.first;

            };
        };
        starter.close();
        printf("Game is started!\n");
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
