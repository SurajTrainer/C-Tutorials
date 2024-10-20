#include<stdio.h>

int fact(int n);

int main(){
    printf("Fact is : %d", fact(4));

    return 0;
}

// Factorial

int fact(int n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
int FactNm1 = fact(n-1);
    int FactN = FactNm1 * n;
    return FactN;
}

