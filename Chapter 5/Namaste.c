#include<stdio.h>

void namaste();
void pranam();

int main(){

printf("Enter n for namaste & p for garhwali pranam : ");
char ch;

scanf("%c", &ch);
        if (ch == 'n')
        {
            namaste();
            /* code */
        }else if (ch == 'p')
        {
            pranam();
            /* code */
        }else
        {
            printf("Please Enter only n Or p");
        }
        
        
        
    return 0;
}

void namaste(){
    printf("Namste ji kaise ho");
};

void pranam(){
    printf("Or Bheji pranam Kan Chaa Tum ");
};

