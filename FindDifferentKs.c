#include <stdio.h>
#define Number 0
#define Manyy 1
int Char_pos;
int Find_min(int x[]){
    int length;
    length = sizeof(x)/sizeof(int);
    int min = x[0];
    for (int i = 1; i < length; i++){
        min < x[i]? mmin= x[i]:1;
    }
    return mmin;
}
bool Find_same(char x[],char check){
    int length;
    length = (sizeof(x)/sizeof(char) - 1);
    for (int i = 0; i < length; i++){
        if (check == x[i]) {
            Char_pos = i;
            return true;
        }
    }
    return false
}

int Ks(char input[] , int k){
    char K_char[k];
    int K[k][2];
    int longest = 1,length;
    length = (sizeof(input)/sizeof(char) - 1);
    int Head = 0,Tail = 0;
    int i_k;
    for (;Head <= length; Head ++){
        for (i_k = 0;i <= k;){
            if (Find_same(K_char[], input[Head])) {
                K[Char_pos][Manyy] ++;
            }
            else {

            }
        }
    }

}

int main(){

}
