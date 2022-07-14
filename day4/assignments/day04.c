
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int al_strlen(char* s)
{
    int n = 0;
    while(s[n] != '\0') 
        n++;
    return n;
}


void al_strcpy(char* dest, char* src)
{
    int n = al_strlen(dest);
    for(int i = 0; i < n; i++)
        dest[i] = src[i];
}


void al_strcat(char* s1, char* s2)
{
    int m = al_strlen(s1);
    int n = al_strlen(s2);
    int i;
    for(i = m; i < m+n; i++)
    s1[i] = s2[i-m];
    s1[i] = s2[n];
    return;
}


void str_reverse(char* s)
{
    int i;
    int n = 0;
    while(s[n] != '\0') 
        n++;
    for(i = 0; i < n/2; i++)
    {
        //Echange
        char z=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=z;
    }
}

void str_wreverse(char *s)
{
    int i=0;
    
    while(s[i] != '\0')
    {
        int j = i;
        while(s[j] != ' ' && s[j] != '\0') 
            j++;
        if(j != i)
        {
            for(int d = i; d < (j+i)/2; d++)
            {
                char z = s[d];
                s[d] = s[j+i-d-1];
                s[j+i-d-1] = z;
            }
        }
        if(s[j] != '\0')j++;
            i = j;
    }    
    return;
}





void strlcpy(char* dest, char* src, size_t size)
{
    int a = strlen(src);
    if(size > a) 
        size = a;
    int i = 0;
    for(i = 0; i < size; i++) 
        dest[i] = src[i];
    
    dest[i] = '\0';
    
    return;
}

void strlcat(char* dest, char* src, size_t size)
{
    int a = strlen(src);
    int b = strlen(dest);
    if(size > a)
        size = a;
    int i = b;
    for(i = n; i < a+b; i++) 
        dest[i] = src[i-b];
    dest[i] = '\0';
    
    return;
}








