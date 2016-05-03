#include <iostream>
#include <vector>
#include<string>
using namespace std;

bool accept(){
    std::cout << "Do you want to procced (y or n)? \n" << std::endl;
    char answer = 0;
    cin >> answer;
    if(answer == 'y')return true;
    return false;
}

struct Books{
    string name;
    int number;
};

// std::vector <Entry> phone_book[100];
// std::vector<char> v;
class Book {
    public:
        double length;
        double breadth;
        double height;

        double getVolume(void){
            return length * breadth * height;
        }
        void setLength(int Len){
            length = Len;
        }
        void setBreadth(int Bre){
            breadth = Bre;
        }
        void setHeight(int Hei){
            height = Hei;
        }

};

int main(){
    cout << "test\n";
    int acb = 123;
    // std::cout << "tset" << "Biu biu biu";

    // if(accept()){
        // printf("asdfasdfasdf\n" );
// /    }
    string str1 = "Hi";
    string str2 = "You";
    string str3;
    str3 = str1 + str2;
    std::cout << str3 << std::endl;
    Book book1;
    book1.length = 10;
    book1.breadth = 20;
    book1.height = 40;
    cout << book1.getVolume() <<std::endl;
    return 0;
}
