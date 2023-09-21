#include <stdio.h>
int gcd(int a, int b){
    int t;
    while(a >0){
        printf("A;%d, B:%d\n", a, b);
        if(a<b){
            t = a;
            a = b;
            b = t;
        }
        a -= b;
    }
    return b;
}

int main(){
    int x, y;
    x = 12345;
    y = 56789;
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}