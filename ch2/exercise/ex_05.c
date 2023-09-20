#include <stdio.h>
void binary(int num){
    if(!num){
        printf(" 0");
        return;
    }
    while(num){
        printf(" %d", num%2==0);
        num /= 2;
    }
}
int main(){
    int num = 32;
    printf("Binary representation of %d: ", num);
    binary(num);
    printf("\n");
    return 0;
}