#include <stdio.h>

int isPalindrom(int n){
    int s = n, nn;
    while ( s != 0 ){
        nn = nn*10 + s % 10;
        s /= 10;
    }
    if (nn == n){
        return 1;
    }
    return 0;
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", isPalindrom(N));
    return 0;
}