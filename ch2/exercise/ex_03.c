#include <stdio.h>
typedef struct {
    int numerator;
    int denominator;
} fraction;

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
    int numerator = 36;
    int denominator = 24;
    fraction number = {
        .numerator = numerator,
        .denominator = denominator
    };
    int gcd_res = gcd(number.numerator, number.denominator);
    printf("simple form of %d/%d is %d/%d\n", numerator, denominator, numerator/gcd_res, denominator/gcd_res);
    return 0;
}