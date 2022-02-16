#include <stdio.h>

int main(){
    int i,j,rows;
    int space,star;

    printf("Enter The value of Row: ");
    scanf("%d",&rows);

    star = 1;
    space = rows - 1;

    for ( i = 1; i < rows * 2; i++){
        for (j = 1; j <= space; j++){
            printf(" ");
        }
    for (j = 1; j < star * 2; j++){
        printf("*");
    }
        printf("\n");

        if(i<rows){
            space--;
            star++;
        }else{
            space++;
            star--;
        }
    }
    


    return 0;
}