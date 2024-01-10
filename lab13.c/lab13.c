#include<stdio.h>
void main() 
{char A[50];
int i , kelime = 0 , sayaç = 0 ;
printf("bir sayi gir :");
gets(A);
for (i=0;A[i] != '\0' ; i++)
{
    if(A[i] == 'e ')
    sayaç ++
    else if(A[i]=='')
    {
        keime++
        printf("%d. kelime %d adet e harfi var \n", keime, sayaç);
        sayaç = 0 

    }
}
kelime++;
printf("%d.kelimede %d adet e hatfi var \n",kelime,sayaç);
}