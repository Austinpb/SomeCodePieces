#include <iostream>
#include <vector>
#include<string>
#include<iostream>
#include <fstream>
#include<curses.h>
#include<ncurses.h>
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

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();

   private:
      double length;
};

Line::Line(void)
{
    cout << "Object is being created" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}

int main( )
{
   Line line;

   // line.setLength(6.0);
   // cout << "Length of line : " << line.getLength() <<endl;
   std::cout << "asdfasdf" << std::endl;
   std::cout << "BCZAB" << std::endl;
   std::cout << "KALAB" << std::endl;

   return 0;
}
/*
int main(){
    cout << "test\n";
    int acb = 123;
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
    fstream file;
    file.open("File",ios::in|ios::out);
    file << "asdflkajsdf;o";
    initscr();
    box(stdscr, ACS_VLINE, ACS_HLINE);
    move(LINES/2, COLS/2);
    waddstr(stdscr, "Hello, world!");
    refresh();

    return 0;
}
*/
