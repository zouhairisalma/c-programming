#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define N 30
//////////////////EXERCICE_3///////////////////

//////////////////STRUCTURES///////////////////
typedef struct contact
{
	char full_name[N];
	int phone_number;
	int Id;
}contact;

typedef struct book 
{
    int taille;
    contact* tete;
}book;
//////////////////////////////////////////////

///////////////////*PROTOTYPES*///////////////
void add(book *);
void list(book);
void quit();
//////////////////////////////////////////////
/////////////////*FUNCTIONS*//////////////////
void add(book* M)
{
	int a;
	char s[N];
	printf("Full name is : ");
	scanf("%s",s);
	printf("phone number is : ");
	scanf("%d",&(M->tete+M->taille)->phone_number);
	strncpy((M->tete+M->taille)->full_name,s,N);
	(M->tete+M->taille)->Id=M->taille;
	M->taille+=1;
	return;
}
void list(book B)
{
	printf("%d\n",B.taille);
	for(int i=0;i<B.taille;i++)
	{
		printf("%s\t",(B.tete+i)->full_name);
		printf("%d\t",(B.tete+i)->phone_number);
		printf("%d\t",(B.tete+i)->Id);
		printf("\n");
	}
	return;
}

void quit()
{
	exit(EXIT_FAILURE);
}

int main()
{
	book M;
	M.tete=(contact *)malloc(8*sizeof(contact));
	M.taille=0;
	add(&M);
	add(&M);
	add(&M);
	list(M);
	//quit();
	// Bon probleme deja resolu mnt je me rappelle que M.taille donne la taille reelle so it s much easier now 
	return 0;
}
