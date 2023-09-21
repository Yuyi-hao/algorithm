#include <stdio.h>
void binary(int num){
    int res[32];
    if(!num){
        printf(" 0");
        return;
    }
    int i = 0;
    while(num){
        res[i] = num%2;
        num /= 2;
        i++;
    }
    for(int j = i-1; j > -1; j--){
        printf(" %d", res[j]);
    }

}
int main(){
    int num = 5;
    printf("Binary representation of %d: ", num);
    binary(num);
    printf("\n");
    return 0;
}