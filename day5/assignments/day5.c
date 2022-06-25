#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//////////////PROTOTYPE//////////////////
/*void almemset(char *, int , int );
void  almemchr(const char *, int , int ) ;
void almemcpy(char *, char , int);
void almemmove(char *,char *, int );
char * strdup(char *);
void isort(int **, int);
*/

/*
void almemset(char *str, int c, int n)
{
    int a=strlen(str);
    
    if(a<n)
    {
        printf("changer de valeur !");
        return;
    }
    for(int i=0;i<n;i++)
    {
        *(str+i)=(char)c;
        printf("%c",*(str+i));
    }
    
    
    for(int i=n;i<a;i++)
    {
        printf("%c",*(str+i));
    }
    
    printf("\n");
    return;
}







void  almemchr(const char *str, int c, int n) 
{
    int a=strlen(str);
    if(n>a)
    {
        printf("Taille depassee");
        return;
    }
    
    int m;
    int i=0;
    while(i<n)
    {
        if((*(str+i))!=(char)c)
        {
            i++;
        }
        else
        {
            m=i;
            break;
        }
    }
    if(i==n-1)
    {
        if( (*(str+i))!=(char)c )
        {
            printf("%c",(char)c);
        }
        else
        {
            printf("####vide###");
            
        }
        return;
    }
    
    
    for(i=m;i<n;i++)
    {
        printf("%c",*(str+i) ) ;
    }
    printf("\n");
    
    return;
    
}
void almemcpy(char *dest, char src, int n)// n nombre de bytes a copier dans la destination d apres la source 
{
    int a=strlen(src);
    int i=0;
    for( i=0;i<a:i++)
    {
        *(dest+i)=*(src+i);
    }
    *(dest+a)='\0';
    printf("%s",dest);
    return;
}
void almemmove(char *str1,char *str2, int n)
{
    int a=strlen(src);
    for(int i=0;i<a;i++
    {
        *(dest+i)=*(src+i);
    }
    printf("%s",dest);
    return;
}

char * strdup(char * source)
{
    int a=strlen(source);
    char * des=(char *)malloc(a*sizeof(char));
    for(int i=0;i<a;i++)
    {
        *(des +i)=*(source+i);
    }
    return des;
}
/*n ← longueur(t) 
      pour i de 0 à n - 2
          min ← i       
          pour j de i + 1 à n - 1
              si t[j] < t[min], alors min ← j
          fin pour
          si min ≠ i, alors échanger t[i] et t[min]
      fin pour



void isort(int **arr,int lenght)
{
    int m;
    int z;
    for(int i=0;i<lenght-1;i++)
    {
        m=i;
        for(int j=i+1;j<lenght;j++)
        {
            if( *(*(arr+i)) < *(*(arr+m))  )
            {
                m=j;
            }
        }
        if(m!=i)
        {
            z= *(*(arr+i));
            *(*(arr+i))= *(*(arr+m));
            *(*(arr+m))=z;
        }
    }
    return; 
}

*/




int main()
{
    /*char a[100]="Hey wassup :) ! , U good";
    char b=',';
    char c[100]="efneffelwefknefjnrnfkfnwdneklwnfe";  
    char str[50];
    int m=(int)b;
    almemchr(a,97,10);
    almemset(a,97,5);
    */
    int* T=(int*)malloc(4*sizeof(int));
    *(T)=9;
    *(T+1)=0;
    *(T+2)=5;
    *(T+3)=2;
    
    for(int i=0;i<4;i++)
    {
        printf("%d\t",T[i]);
    }
    printf("\n");
    isort(T,4);
    printf("HELLO");
    for(int i=0;i<4;i++)
    {
        printf("%d\t",T[i]);
    }
    return 0;
}
