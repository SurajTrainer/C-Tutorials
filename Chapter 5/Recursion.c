#include<stdio.h>

int sum(int n);

int main(){
    printf("Sum is : %d", sum(4));

    return 0;
}

// Recursive function

int sum(int n){
    if (n == 1)
    {
        return 1;
    }
int SumNum1 = sum(n-1);
    int SumN = SumNum1 + n;
    return SumN;
}

