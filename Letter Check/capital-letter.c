#include <stdio.h>

int main(){

     char uinput;

    scanf("%c",&uinput);

    if (uinput >= 'a' && uinput <= 'z'){
        printf("%c--Is a lower case letter\n",uinput);
    }else{
        printf("%c--Is a upper case letter\n",uinput);
    }
    

     return 0;
 }