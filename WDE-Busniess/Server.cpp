#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
void fail() { std::cout << "Error!" << std::endl; }
class User {
protected:
  int id;
  double balance;
public:
  std::string userName;
  std::string password;

  bool onlinestatus;

  bool checkAccount(int number) {

  };

  // 查看用户个人信息
  void viewaccount() {}
  void viewitems() {}
  void signUp(){

  }
  void login() {
    std::string userName;
    std::cout << "Username: " << std::endl;
    std::cin >> userName;
    std::string password;
    std::cout << "Password: " << std::endl;
    std::cin >> password;
};
  void logout() { std::cout << "Logout Success!" << std::endl; }
};

class Buyer : public User {
  void recharge(double money) { balance += money; }
  bool Buy(int item_id, int item_counts, int item_price){

        }
    };
  class Member : public Buyer {
    int level;
    int token;
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

  class Daily : public Sales_item {
    std::string Brand;
  };
  class System {
      saveGame(){
          s;
      };
      loadGame(){

      };
  };
  // class admin {};
  int main() {
    //读文件，读取用户格式


    while (true) {
      // cin 登录

      // cin 决定操作
    }
    return 0;
  }
