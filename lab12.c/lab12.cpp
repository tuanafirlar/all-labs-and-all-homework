 #include <stdio.h>
 #include <string.h>
 int main ()
 {
     char firstString[50] = "Ahmet" ;
     char secondString[50]= "Ali" ;
     strcat(firstString ,secondString);

     printf("concatenate two string:%s \n",firstString);

    return 0 ;


 }
