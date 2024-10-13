#include<stdio.h>

int main(){
        int n;
        do
        {
            printf("Enter a Numer : ");    
            scanf("%d", & n);

            // if (n % 2 != 0) // for odd number
            // {
            //     break;
            //     /* code */
            // }

                if (n % 7 == 0) // Multiple of 7 test
                {
                    break;
                    /* code */
                }
                
            
        } while (1);
        printf("Thank you");
        

    return 0;
}