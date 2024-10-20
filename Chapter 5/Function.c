#include<stdio.h>

// prototype declaration
void helloprint();
void okbyebye();

int main(){

// function Call
    helloprint();
    helloprint();
    helloprint();
    okbyebye();

    return 0;
}

// function Definition
void helloprint(){
    printf("Hello Guys \n");
}

void okbyebye(){
    printf("Oye Hoye");
}
