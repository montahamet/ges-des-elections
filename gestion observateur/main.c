#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
    observateur o1={111,"montaha","metjaouel","tunisienne","femme","etudiante",05/01/2001},o2={222,"nawress","jbeli","tunisienne","femme","etudiante",02/01/2001},o3={333,"dhiya","naffati","tunisien","homme","etudiant",03/01/2001};
   
    int x;
/*x=ajouter("observateur.txt", o1);
   
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");
x=ajouter("observateur.txt", o2);
   
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");
        x=ajouter("observateur.txt", o3);
   
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");*/
    x=modifier("observateur.txt",111,o2 );

    if(x==1)
        printf("\n Modification d un observateur  avec succés");
    else printf("\n echec Modification");
    x=supprimer("observateur.txt",222);
    if(x==1)
        printf("\n Suppression d'un observateur  avec succés");
    else printf("\n echec Suppression");
    o3=chercher("observateur.txt",333 );
    if(o3.id==-1)
        printf("introuvable");
else
printf("\n existe ");
    return 0;
}
