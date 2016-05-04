#include<string>
#include<iostream>
#include<fstream>
#include<vector>
void fail(){

}
class User{
	int id;
	string userName;
	string password;
	double balance;
    bool onlinestatus;

    // 查看用户个人信息
    void viewaccount(){

    }
    void viewitems(){

    }

};


class Buyer: public User {
    void recharge(double money){
        balance += money
    }
    bool Buy(int item_id, int item_counts, int item_price){

    }
};
class Member : public Buyer{
    int level;
    int token;
    //代币与现金1:1兑换
    void exchange(int exchangeNumber){
        if (exchangeNumber < token) {
            this.balance += exchangeNumber;
            token -= exchangeNumber;
        }
        else fail();
    }
}
class Seller: public User {
    void
};

class Item{
	int id;
	string name;
	int amount;
	double price;
	string owner;
	productionDate;
	int shelfLife;
	string discountReason;
	discountDate;
};

class Food: public item{
	string taste;
};

class Electronics: public item{
	string type;
};

class Daily: public item{
	string Brand;
};
class System{
    void login(){
        int temp
        std::cout << "Username: " << std::endl;
        cin >> temp
        if (/* condition */) {
            /* code */
        }
        std::cout << "Password: " << std::endl;
        cin >>
    }
    void logout(){

    }
};
class admin{

};
int main(){
	//读文件，读取用户格式
	while (true) {
		//cin 登录

		//cin 决定操作
	}
	return 0;
}
