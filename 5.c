#include <stdio.h>

struct Car{
    char* brand;
	char* model;
    int price;
};

int sumCarPrice(struct Car cars[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum += cars[i].price;
    }
    return sum;
}

int main(){
    struct Car arr[] = {
        {"BMW", "X6", 1111111},
        {"Mercedes-Benz", "C-класс AMG 2017", 3000000},
        {"LADA", "Niva Legend Bronto", 1200000}
    };
    int n=3;
    printf("%d\n", sumCarPrice(arr, n));
    return 0;
}