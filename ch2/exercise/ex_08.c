// the GCD of a, b and c is equal to gcd(gcd(a,b), c) 

#include <stdio.h>
int gcd(int a, int b){
    int t;
    while(a >0){
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
    int x, y, z;
    x = 24;
    y = 36;
    z = 16;
    printf("GCD of %d, %d  and %d is %d\n", x, y, z, gcd(z, gcd(x, y)));
    return 0;
}