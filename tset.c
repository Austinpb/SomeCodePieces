int canWinNim(int n) {
    n%4?return 1:return 0;

}
int main(){
    printf("%d",canWinNim(10));
}
