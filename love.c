#include <stdio.h>
#include <stdbool.h>

 int main(){

     char fixed ='y';
     char user ;
        
    // printf("%s -is",fixed);

    while (true)
    {
        printf("Do you love me? y/n : ");
        scanf("%c",&user);
        if (user == fixed){
            printf("Thanks,I think I also love you!!!\n");
            break;
        }else{
            printf("No problem,I love you\n");
        }
    }
     return 0;
 }