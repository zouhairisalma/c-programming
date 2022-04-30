
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

void count_w(char*str,char delim)
{
//cas d'une chaine d'espaces è revoir

	int i=0;
	int p=0;
	
	while(i<strlen(str))
	{
		while(str[i]==delim)
		{
			i+=1;
		}	
		while(str[i]!=delim)
		{	
			i+=1;
		}
			p+=1;
		while(str[i]==delim)
		{
			i+=1;
		}	
		

	}
	//p nombres de tableaux à creer nombre de mots
	
	
	int T[p];
	// ce tableau de taille nombre de mots a la case correspondante à chaque mot on affecte la taille du mot cad taille du tableau corrrepondant au mot 
	int j=0;
	int b=0;
	int s=0;
	while(j<strlen(str))
	{
		while(str[j]==delim)
			j+=1;
	        
		while(str[j]!=delim && str[j]!='\0')
		{	s=s+1;
			j+=1;
		}	
		T[b]=s;
		s=0;
		b=b+1;
		
	}
	
	//Afficher le tableau
	/*
	for (int t=0;t<p;t++)

		printf("%d\t",T[t]);
	printf("\n\n");
	*/
	//Calcul et Affichage du max
	
	int max=T[0];
	for (i=0;i<p;i++)
	{
	    if (T[i]>max)
	        max=T[i];
	}
	//printf("%d\n\n",max);
	
	
	
//mnt qo'on a les tailles de diffferents mots let's prend le max comme nbr de colonne du nouvea tableau will it work when filling it idk 
		
//mnt on a arrive à savoir la taille de chaque mot on passe ensuite à l'etape suivante celle de creation des p tableaux chacun de taille T[i]


	//mnt le tableau est creer faut le remplir 

char ** L = (char **)malloc(p *sizeof(char *));
    for(int n =0;n<p;n++)
    {
        L[n] = (char *)malloc(T[n]*sizeof(char));
    }
    unsigned k =0;
    i = 0;
    j =0;
    while(i<p)
    {
        
        while(j<T[i])
        {
            while(str[k] == delim)
            {
                k++;
            }
            while(str[k]!= delim && str[k] != '\0')
            {
                L[i][j] = str[k];
                k ++;
                j ++;
            }
        }
        j =0;
        i ++;
    }
    
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<T[i];j++)
            printf("%c",L[i][j]);
    }
	//Affichage du tableau
    for (j=0;j<p;j++)
        printf("\n");
	    {for (i=0;i<max;i++)
	        printf("%c\t",L[i][j]);
	    }
	return ;
}
//////////////////////////////////Fonction principale/////////////////////////////////////////
int main()
{
	char delim=' ';
	char* str="saa  hod  Lo";
	count_w(str,delim);
	return 0;
}


