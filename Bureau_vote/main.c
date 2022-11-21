#include <stdio.h>
#include <stdlib.h>
#include "BV.h"




int main()
{   int T[1][2];
    BV n;
float tn=0;
float te=0;

    
    char fich[30]="BV.txt";
    int id,i,identifiant;

    int a;
         do{
            printf("\n\n1.ajouter un bv\n");
            printf("2.modifier un bv\n");
            printf("3.supprimer un bv\n");
            printf("4.rechercher bv \n");
            printf("5.afficher tous les bv \n");
            printf("0.quittez\n");
            scanf(" %d",&a);
            printf("____________________________________________\n\n");
         }while(a!=1 && a!=2 && a!=3 && a!=4 && a!=5  && a!=0);

         switch (a){
            case 1:
                ajouter( fich,n);
                break;
            case 2:
                printf("donner ID:\n");
                scanf("%d",&id);
                modifier(fich, id, n);
                break;
            case 3:
                printf("donner ID:\n");
                scanf("%d",&id);
                supprimer( fich,id, n);
                break;
            case 4:
                printf("donner ID:\n");
                scanf("%d",&id);
                rechercher(fich,id, n);
                break;
            case 5:
                afficher(fich,n);
                break;
            case 0:
                printf("merci :) \n");
            }
printf("donner identifiant\n");
scanf("%d",&identifiant);


 nbe(fich ,identifiant,n);




return 0;
    
}



