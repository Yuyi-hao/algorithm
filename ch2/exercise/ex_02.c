// Question: Check what values your C system computes for u%v when u and v are not necessarily positive.

#include <stdio.h>
int main(){
    int x = 12;
    int y = -5;
    printf("Value of x\%y when x and y can be non positive\n");
    printf("X: %d, Y: %d, X\%Y: %d\n", x, y, x%y);
    return 0;
}