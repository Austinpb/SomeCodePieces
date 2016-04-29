#include <stdio.h>
int ac;
void aaa(){
    ac = 1234;
}
int main(int argc, char const *argv[]) {
    puts("HelloWorld!");
    /*
    int abc = 4;
    int x[abc];
    for (int i = 23,b = 3; b >= 0; b--){
        x [b] = i ++;
    }
    printf("%d\n",x[2] );
*/
    char charrr[] = "hahaha";
    int i;
    // i = sizeof(charrr)/sizeof(char);
    // charrr[6] = 'b';
    // charrr[7] = 'c';
    1==1? charrr[2] = 'b':1;
    ac = 123;
    aaa();
    printf("%s  %d\n",charrr , ac );
    return 0;
}
