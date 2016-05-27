#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <curses.h>
#include <pthread.h>
#include <ncurses.h>
#include <boost/algorithm/string.hpp>
#include <cstdlib>

using namespace std;
#define NUM_THREADS 5

// void * sayHi(void* args){
//     cout << "1" << endl;
//     cout << "2" << endl;
//     cout << "3" << endl;
//     cout << "4" << endl;
// };
// bool checkAccount(string un, string pw){
//     ifstream checker;
//     checker.open("File");
//     for (string s; s!="#EOF";) {
//       //   getline(checker, s);
//       checker >> s;
//       if(s == "#EOF") break;
//       if(s == "Buyer" || s == "Member" || s == "Seller") continue;
//       if (s == un){
//           checker >> s;
//           if (s == pw) return true;
//       }
//       getline(checker, s);
//     }
//     checker.close();
//     return false;
// };
// bool accept(){
//     std::cout << "Do you want to procced (y or n)? \n" << std::endl;
//     char answer = 0;
//     cin >> answer;
//     if(answer == 'y')return true;
//     return false;
// }
// struct Books{
//     string name;
//     int number;
// };
// // std::vector <Entry> phone_book[100];
// // std::vector<char> v;
// class Book {
//     public:
//         double length;
//         double breadth;
//         double height;
//
//         double getVolume(void){
//             return length * breadth * height;
//         }
//         void setLength(int Len){
//             length = Len;
//         }
//         void setBreadth(int Bre){
//             breadth = Bre;
//         }
//         void setHeight(int Hei){
//             height = Hei;
//         }
//
// };
// class Line{
//    public:
//       void setLength( double len );
//       double getLength( void );
//       Line();
//
//    private:
//       double length;
// };
// Line::Line(void){
//     cout << "Object is being created" << endl;
// }
// void Line::setLength( double len ){
//     length = len;
// }
// double Line::getLength( void ){
//     return length;
// }
// class a{
// protected:
//     int aa;
// public:
//     void setaa(int vb){
//         this -> aa = vb;
//     }
// };
// class b:public a{
// public:
//     int bb;
//     b():bb(32){cout << "a" <<endl;}
// };
// class c:public b{
// public:
//     // c():aa(0),bb(0),cc(0){}
//     c(int aaa = 0,int bbb = 4,int ccc = 2){
//         aa = aaa;
//         bb = bbb;
//         cc = ccc;
//     };
//     int cc;
//     int id;
//     double balance;
//     string userName;
//     string password;
//     int showaa(){return aa;};
// };
int main( )
{
   // pthread_t tids[NUM_THREADS];
   //  for(int i = 0; i < NUM_THREADS; ++i)
   //  {
   //      //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
   //      int ret = pthread_create(&tids[i], NULL, sayHi, NULL);
   //      if (ret != 0)
   //      {
   //         cout << "pthread_create error: error_code=" << ret << endl;
   //      }
   //  }
   //  //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
   //  pthread_exit(NULL);
   //
   // // line.setLength(6.0);
   // // cout << "Length of line : " << line.getLength() <<endl;
   // std::cout << "asdfasdf" << std::endl;
   // std::cout << "BCZAB" << std::endl;
   // std::cout << "KALAB" << std::endl;
   //
   // return 0;
   // Line line;
   // cout << "test\n";
   // int acb = 123;
   // string str1 = "Hi";
   // string str2 = "You";
   // string str3;
   // str3 = str1 + str2;
   // std::cout << str3 << std::endl;
   // Book book1;
   // book1.length = 10;
   // book1.breadth = 20;
   // book1.height = 40;
   // cout << book1.getVolume() <<std::endl;
   // fstream file;
   // file.open("File",ios::in|ios::out);
   // file << "asdflkajsdf;o";
   // initscr();
   // box(stdscr, ACS_VLINE, ACS_HLINE);
   // move(LINES/2, COLS/2);
   // waddstr(stdscr, "Hello, world!");
   // refresh();
   //
   // return 0;
   //
   // // ifstream checker;
   // // checker.open("File");
   // // string s;
   // if(checkAccount("austin","test"))cout << "abc" << endl;
   // else cout << "error" << endl;
   // int i = 20;
   // while (i>0) {
   //  //    getline(checker,s);
   //     if(s == "#EOF")break;
   //  //    cout << s << endl;
   //     checker >> s;
   //     cout << s << endl;
   //  //    getline(checker,s);
   //  //    cout << s << endl;
   //     i--;
   // }
   // c test;
   // vector<class c>biu;
   //
   // test.cc = 1024;
   // test.setaa(2048);
   // test.bb = 3072;
   // biu.push_back(test);
   // vector<class c>::iterator iter = biu.begin();
   // cout << test.cc << ' ' << test.showaa() << ' ' << test.bb << endl;
   // cout << biu[0].cc << ' ' << biu[0].showaa() << ' ' << biu[0].bb << endl;
   // cout << iter->cc << ' ' << iter->showaa() << ' ' << iter->bb << endl;
   //
   // // *oo = "BiuBiu";
   // // *oo = endl;
   // ifstream file;
   // file.open("File");
   // // file.open("File",ios::in|ios::out);
   // istream_iterator<string>oo(file);
   // string s = *oo;
   // // file >> s;
   // // string b = *oo;
   // string b;
   // file >> b;
   // double ccc = 1.1;
   // ccc = stod(b);
   // file.close();
   // cout << s<< ccc<< ' '<< b << endl;
   // void creatAccount
   // vector<char> v;
 // b aaa(9);
   // cout << aaa.bb << endl;
   // test(2,4,5);
    printf("Loading...\n");
    ifstream file;
    file.open("File1");
    istream_iterator<string>file_iter(file);
    cout << *file_iter++ << endl;
    cout << *file_iter++ << endl;
    cout << *file_iter << endl;
    file.close();
    file.open("File2");
    new(&file_iter(file)) istream_iterator<string>;
    cout << *file_iter++ << endl;
    cout << *file_iter++ << endl;
    cout << *file_iter++ << endl;
    cout << *file_iter << endl;
    // string s;
    // cout << *file_iter << endl;
    // file >> s;
    // cout << "s拿出来的: " << s<< endl;
    // getline(file,s);
    // cout << "拿走了: " << s << endl;
    // *file_iter++;
    // cout << *file_iter <<endl;
    // cout << "*file拿出来的" << *file_iter++ <<endl;
    // cout << *file_iter++ <<endl;
    // cout << *file_iter++ <<endl;
   // for(string s;s != "#EOF";){
   //     file >> s;
   //     cout << s << endl;
   // }
   //
   // ifstream starter;
   // starter.open("UserDate");
   // // // istream_iterator<string>file(starter);
   // for(string s;s != "#EOF";){
   //     starter >> s;
   // //     printf("i can read!\n" );
   //     cout << s << endl;
   // //     if (s == "Buyer") {
   // //      //    string First = *file;
   // //         // std::cout << "Catch" << First << std::endl;
   // //         printf("sds\n");
   // //     }
   // }
   // c test(1,6);
   // cout << test.showaa() << ' ' << test.bb << ' ' << test.cc << endl;
}
