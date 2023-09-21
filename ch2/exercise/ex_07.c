#include <stdio.h>
int while_cnt = 0;
int swap_cnt = 0;

int gcd(int a, int b){
    int t; // st 1
    while(a >0){ // st2 comparision 
        // printf("A;%d, B:%d\n", a, b); // st 3 
        if(a<b){ // st 4
            t = a; // st 5
            a = b; // st 6
            b = t; // st 7
            swap_cnt++;
        }
        a -= b; // st 8 
        while_cnt++;
    }
    return b; // st 9 
}

int main(){
    int x, y; // st 10
    x = 12345; // st 11 
    y = 56789; // st 12
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y)); // st 13
    printf("Number of times statement executed: \n");
    // don't count these print statement as not included in previous questions 
    printf("st1: 1\n");
    printf("st2: %d\n", while_cnt);
    printf("st3: %d\n", while_cnt);
    printf("st4: %d\n", swap_cnt);
    printf("st5: %d\n", swap_cnt);
    printf("st6: %d\n", swap_cnt);
    printf("st7: %d\n", swap_cnt);
    printf("st8: %d\n", while_cnt);
    printf("st9: 1\n");
    printf("st10: 1\n");
    printf("st11: 1\n");
    printf("st12: 1\n");
    printf("st13: 1\n");
    printf("st14: 1\n");
    return 0; // st 14 
}

