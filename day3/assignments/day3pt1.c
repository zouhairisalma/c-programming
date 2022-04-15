#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//*******************Exercice_1**************************

typedef struct 
{
    float Re;
    float Im;
}complex;

//Prototypes
complex sum(complex,complex);
complex mult(complex,complex);
complex inverse(complex);
complex divi(complex,complex);
void affichage(complex);
//Fonction principale
int main()
{
    complex M={2,0.3};
    complex N={3,4.1};
    complex G;
    G=sum(M,N);
    affichage(G);
    G=mult(M,N);
    affichage(G);
    G=divi(M,N);
    affichage(G);
}
//Fonctions
void affichage(complex A)
{
    printf("%f+ i*%f\n\n\n",A.Re,A.Im);
    return;
}

complex sum (complex A ,complex B)
{
    complex somme={0,0};
    somme.Re=A.Re + B.Re;
    somme.Im=A.Im+ B.Im;
    return somme;
}

complex mult(complex A ,complex B)
{
    complex produit={0,0};
    produit.Re=A.Re*B.Re -A.Im*B.Im ;
    produit.Im=A.Re*B.Im + B.Re*A.Im;
    return produit;
}


complex inverse(complex C)
{
    complex inv ={0,0};
    if (C.Re!=0 | C.Im!=0)
    {
    inv.Re=(float) C.Re/(pow(C.Re,2)+pow(C.Im,2));
    inv.Im=(float)(-C.Im)/(pow(C.Re,2)+pow(C.Im,2));
    return inv;
    }

}


complex divi(complex A,complex B)
{
    complex res={0,0};
    res=mult(A,inverse(B));
    return res;
}

//*************Exercice 2*********************************

typedef struct 
{
    int a;
    char s[3];
}ic;

void swap(ic *,ic *);
void affichage(ic A);

void affichage(ic A)
{
    printf("a=%d\ns=%s\n",A.a,A.s);
}
void swap( ic *A ,ic *B )
 {
    int i=0;
    ic *Z ;
    Z=(ic *)malloc(sizeof(ic));
    Z->a=A->a;
    A->a=B->a;
    B->a=Z->a;
    for (i=0; i<3;i++)
    {
        Z->s[i]=A->s[i];
        A->s[i]=B->s[i];
        B->s[i]=Z->s[i];
    }
    return;
}

int main()
{
    ic A={1,"abc"};
    ic B= {2,"szq"};
    affichage(A);
    affichage(B);
    swap(&A,&B);
    affichage(A);
    affichage(B);
    return 0;
}



