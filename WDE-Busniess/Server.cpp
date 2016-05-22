#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <pthread.h>
using namespace std;

void fail() { std::cout << "Error!" << std::endl; }

class User {
protected:
  int id;
  double balance;
  std::string userName;
  std::string password;
public:
  bool onlineStatus;
  bool checkAccount(string un, string pw){
      ifstream checker;
      checker.open("UserData.dat");
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
  virtual void viewAccount() = 0;
  virtual void signUp() = 0;
  virtual void logout() = 0;
  void login() {
    std::string userName;
    std::cout << "Username: ";
    std::cin >> userName;
    std::string password;
    std::cout << "Password: ";
    std::cin >> password;
    if(this-> checkAccount())cout << "Success!" << endl;
    else cout << "try again" << endl;
  };
};

class Buyer : public User {
protected:
    int;
public:
  void recharge(double money) { balance += money; }
  bool Buy(int item_id, int item_counts, int item_price){};
  void signUp(){
      std::string userName;
      std::cout << "Username: ";
      std::cin >> userName;
      checkAccount();
      if
      std::string password;
      std::cout << "Password: ";
      std::cin >> password;
  }
};

class Member : public Buyer {
private:
    int level;
    int token;
public:

  //代币与现金1:1兑换
  void exchange(int exchangeNumber) {
    if (exchangeNumber < token) {
      this->balance += exchangeNumber;
      token -= exchangeNumber;
    }
    else
      fail();
  }
};

class Seller : public User {
  map ownItems;
  void addItems;
  void checkItems;
};

////////////////////////////////////////

class Sales_item {
public:
  int id;
  std::string name;
  std::string owner;
  int amount;
  double price;

  int productionDate;
  int shelfLife;
  std::string discountReason;
  int discountPeriod;
};

class Food : public Sales_item {
  std::string taste;
};

class Electronics : public Sales_item {
  std::string type;
};

class DailyUse : public Sales_item {
  std::string Brand;
};

////////////////////////////////////////

class System {
    map<key, value> userinfo;
    map<key, value> iteminfo;
    saveGame(){
        //save userinfo
        //save iteminfo
    };
    loadGame(){

    };
};
////////////////////////////////////////

int main() {
  //读文件，读取用户格式


  while (true) {
    // cin 登录

    // cin 决定操作
  }
  return 0;
}
