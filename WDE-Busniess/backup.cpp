class User {

public:
  bool onlineStatus;
  
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
