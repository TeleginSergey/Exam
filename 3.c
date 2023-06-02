#include <stdio.h>

int main(){
    int num, sum=0, cnt=0;
    scanf("%d", &num);
    while (num != 0){
        if (num % 10 == 3){
            sum += num;
            cnt++;
        }
        scanf("%d", &num);
    }
    printf("%g\n", (float)sum/cnt);
    return 0;
}