#include <stdio.h>

void changeMin(int arr[], int n){
    int min=arr[0], minind=0, min1=arr[1], minind1=1, tem;
    for (int i=2; i<n; i++){
        if (arr[i] < min){
            min1 = min;
            minind1 = minind;
            min = arr[i];
            minind = i;
        } else if (arr[i] < min1){
            min1 = arr[i];
            minind1=i;
        }
    }
    tem = arr[minind];
    arr[minind] = arr[minind1];
    arr[minind1] = tem;
    }

int main(){
    int n=5, arr[]={3, 2, 1, 4, 0};
    changeMin(arr, n);
    // for (int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    return 0;
}