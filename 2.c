#include <stdio.h>

float sumFoo(int n){
    float sum=1;
    if (n == 0){
        return 0;
    }
    for (int i=3; i <= n; i++){
        sum += (float)1/(i*(i-1));
    }
    return sum;
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%g\n", sumFoo(N));
    return 0;
}