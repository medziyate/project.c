#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

int i;

int affiche(int T[],int fin)
{
    int *P3=T;
    P3=T;
    if (fin==1){printf("\n{ %d }\n",*P3);}
    else if (fin==0){printf("\n{ }\n");} 
    else
    {
        for (P3=T;P3<T+fin;P3++)
        {
            if (P3==T){printf("\n{ %d ,",*P3);}
            else if (P3==T+fin-1){printf(" %d }\n",*P3);} 
            else {printf(" %d ,",*P3);}
        }
    }
    return 0;
     
}

int remoove(int T[],int in)
{
    int *P1;
    int *P2;
    for (P1=T+in;P1<T+N-1;P1++)
    {
        P2=P1+1;
        *P1=*P2;
    }
    P1=T+N-1;
    *P1=0;
    return 0;
}

int remplissage(int T[N])
{
    int *P4=T;
    P4=T;
    for (P4=T;P4<T+N;P4++)
        {
            printf("Entrez l'element %d : ",P4-T);
            scanf("%d",P4);
        }
    return 0;
}


int main()
{
    int *P;
    int T[N];
    int X;

    /*message d erreur*/
    if (N<2)
    {
        printf("\nerreur, N doit etre >2\n");
        return 0;
    }


    printf("\nentrez les elements de votre tableau:\n");
    remplissage(T);


    printf("\nvoici votre tableau:\n");
    affiche(T,N);


    printf("\nentrez l'element a eliminer:\n\n");
    scanf("%d",&X);


    i=0;
    for (P=T;P<T+N;P++)
    {
        if (*P==X)
        {
            remoove(T,P-T);
            i++;
            P--;
        }  
    }
    

    printf("\nvoici le nouveau tableau:\n");
    affiche(T,N-i);


    return 0;
}
