#include <stdio.h>
int K_Char_pos,K_pos;
int  Find_min (int x[],int length){
    int min = x[0];
    K_pos = 0;
    for (int i = 1; i < length; i++){
        if (x[i]< min){
            min = x[i];
            K_pos = i;
        }
    }
    return min;
}
int Find_same(char x[],int length,char check){
    K_Char_pos = 0;
    for (K_Char_pos = 0; K_Char_pos < length; K_Char_pos++){
        if (check == x[K_Char_pos]) return 1;
    }
    return 0;
}
int Ks(char input[] , int length , int k){
    char K_char[k];
    int K[k];
    int Charcatched = 0;
    int longest = 0,Longest = 0;
    int Head = 0,Tail = 0;
    // printf("%d\n",length );
    for (;Head < length; Head ++){
        // puts("Trace");
        if ( Charcatched == k){

            if (Find_same(K_char, k , input[Head])) {
                K[K_Char_pos] = Head;
                }
            else{
                Tail = Find_min(K , k);
                // printf("Cut: %c\n",K_char[K_pos] );
                K_char[K_pos] = input[Head];
                K[K_pos] = Head;
                }

        }

        else {
            if (Find_same(K_char, k , input[Head])) {
                K[K_Char_pos] = Head;
                }
            K_char[Charcatched] = input[Head];
            K[Charcatched] = Head;
            Charcatched ++;
            }

        longest = Head - Tail;
        if (longest > Longest) Longest = longest;
        // printf("%c %c %c\n",K_char[0],K_char[1],K_char[2] );
        // printf("%d %d %d\n",K[0] , K[1] , K[2] );
        // printf("longest:%d\n",longest );
        // printf("Head: %d\n",Head );
        // printf("Tail: %d\n",Tail );
        // puts(" ");
    }
    return Longest;
}
int main(){
    char test[] = "abceaccgbcae";
    int length = (sizeof(test)/sizeof(test[0]) - 1);
    int result = Ks(test ,length, 4);
    printf("%d\n",result );
    return 0;
}
