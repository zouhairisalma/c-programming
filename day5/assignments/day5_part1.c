#include <stdio.h>
#include "string.h"
#include <stdlib.h>

/********PROTOTYPES*******/
void* al_memchr(char*, char, unsigned);
void* al_memset(void*, int, unsigned);
void* al_memcpy(void*, const void*, unsigned);
void* al_memmove(void*, const void*, unsigned);
char* al_strdup(const char*);
void sort(int[], unsigned);

void* al_memchr(char* src, char s, unsigned n)
{
    char*d =src;
    int i;
    for(i= 0; i < n; i++)
    {
        if(*(d+i) == s) 
            return d+i;
    }
    return NULL;
}

void* al_memset(void* src, int s, unsigned n)
{
    char* d = src;
    int i;
    for( i= 0; i < n; i++)
    {
        *(d+i) = s;
    }
    return d;
}

void* al_memcpy(void* dest , const void* src, unsigned n)
{
    
    char* v_src = dest;
    const char* s= src;
    int  i;
    for ( i= 0 ; i<num ; i++)
    {
        *(vsrc+i) = *(s+i);
    }
    return dest;
}

void* al_memmove(void* dest, const void* src, unsigned n)
{
    char *vsrc = dest;
    const char *s= src;
    int j;
    for (j= 0; j< n; j++)
        *(vsrc+n-j) = *(s+n-j);
    return dest;
}


char* al_strdup(const char* s)
{
    char* d=(char*)malloc(sizeof(*s)*strlen(s));
    int i;
    int a=strlen(s);
    for(i=0;i<a*sizeof(*s); i++)
        *(p+i) = *(s+i);
    return d;
}

void sort(int *a, unsigned n)
{
    int i,j,k,z;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            if(*(a+i) > *(a+i+1))
            {
                z = *(a+i+1);
                *(a+i+1) = *(a+i);
                *(a+i) = z;
            }
        }
    }
}


