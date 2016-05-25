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
        this -> userName = un;
        this -> password = pw;
        this -> balance = bal;
    };
    void buy(){
        cout << "Buy!!!" << endl;
    }

};
/*
class Member:public Buyer;
*/
class Seller:public User{

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
    map<string, class Buyer> onlineBuyer;
    map<string, class Seller> onlineSeller;
    map<string, class Sales_item> onshelfItems;
// public:
    void startGame(){
        printf("Loading...\n");
        ifstream starter;
        starter.open("UserData");
        for (string s ; s != "#EOF";) {
            starter >> s;
            printf("i can read!\n" );
            cout << s << endl;
            istream_iterator<string>file(starter);
            if (s == "Buyer") {
                string First = *file;
                // std::cout << "Catch" << First << std::endl;
                printf("sds\n");
                Buyer Second(*file++,*file++,stod(*file++));
                pair<string, class Buyer> oneBuyer(First, Second);
                onlineBuyer.insert(oneBuyer);
                // getline(starter,s);
            }/*
            else if(s == "Seller"){
                string First = *file;
                Seller Second(*file++,*file++,stod(*file++));
                pair<string, class Seller> oneBuyer(First, Second);
                onlineBuyer.insert(oneBuyer);
            }*/
        }
        starter.close();/*
        starter.open("ItemData");
        for (string s ; s != "#EOF";) {
            starter >> s;
            if(s == "Books"){
            pair<string, class Books> oneItems;
            starter >> oneItems.first;

            };
        };
        starter.close();*/
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
  while (true) {
    // cin 登录
    int rounds = 0;
    printf("Round %d\n",rounds);
    System Star;
    Star.startGame();
    Buyer one = Star.onlineBuyer["austin"];
    one.buy();
    // cin 决定操作
  }
  return 0;
}
