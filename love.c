#include <stdio.h>
#include <stdbool.h>

 int main(){

     char fixed='y';
     char user;

    while (true)
    {
        printf("Do you love me? y/n :");
        scanf("%c",&user);

        if (user == fixed)
        {
            printf("Thank,i love you too\n");
            break;
        }else{
            printf("No problem,I love you\n");
        }
        
    }
    



     return 0;
 }