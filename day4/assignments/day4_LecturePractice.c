#include <stdio.h>
#include "string.h"
////////////////////////////////Lecture Practice///////////////////////////////////
int main()
{
    char a[]="Hello";
    char b[6];
    strcpy(b,"World");
    char c[11];
    int i=0;
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    c[5]=' ';
    for(i=6;i<11;i++)
    {
        c[i]=b[i-6];
    }
    strcat(c,a);
    strcat(c,' ');
    strcat(c,b);
    strcpy(c,"Hello World");
    /*char s1[ ] = "Hello";    
    char s2[ ] = "hello";     
    char s3[ ] = {'h', 'e', 'l' , 'l', '\0'}   
    strcmp(s1, s2);          ->returns <0 int because in ascii h is greater than H
    strcmp(s2, s1);          ->returns >0 int because in ascii h is greater than H
    strcmp(s1, s3);          ->returns <0  int because in ascii h is greater than H
    strcmp(s2, s3);          ->returns 0 because se and s3 are equal
    */
    
char* al_gets(char *strPtr)
{
    int k ;
    int a = getchar();
    k=0;
    while(a != '\0')
    {
        strPtr[k] = (char)a;
        a = getchar();
        k++;
    }
    return strPtr;
}



char* al_puts(char *strPtr)
{
    int k=0;
    
    while(strPtr[k] != '\0')
    {
        putchar(strPtr[k]);
        i++;
    }
    return strPtr;
}


void fct()
{
    char a[10];
    char c[] = "on_teste";
    gets(a);
    if(strcmp(a, c) == 0)
        puts("succes");
    else 
        puts("echec");
    return;
}
