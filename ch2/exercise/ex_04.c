#include <stdio.h>
int convert(int *arr, int size){
    int res = 0;
    for(int i=0; i< size; ++i){
        res *= 10;
        res += arr[i];
    }
    return res;
}
int main(){
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    printf("Stream of digits: \n");
    for(int i=0; i<size; ++i){
        printf(" %d", arr[i]);
    }
    printf("\n");

    printf("Number made by these digits: %d\n", convert(arr, size));
    return 0;
}