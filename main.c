#include <stdio.h>
#include <string.h>
#include "AD.h"

int main()
{
	UTILISATEUR uti1={"maalaoui","hiba","h.m@gmail.com","hibm1","hibm1",1,{1,2,3}};
	printf("%d %s %s %s %s %s %d %d %d \n",uti1.CIN, uti1.nom, uti1.prenom, uti1.email, uti1.mdp, uti1.mdp2, uti1.date.jour, uti1.date.mois, uti1.date.annee);
	UTILISATEUR uti2={"raggad" ,"eya", "eya@gmail.com","eyatest","eya2test",2,{11,12,13}};
	printf("%d %s %s %s %s %s %d %d %d \n",uti2.CIN, uti2.nom, uti2.prenom, uti2.email, uti2.mdp, uti2.mdp2, uti2.date.jour, uti2.date.mois, uti2.date.annee);
	UTILISATEUR uti3={"uti","3","uti3@gmail.com","utii3","utii3",3,{4,5,6}};
	printf("%d %s %s %s %s %s %d %d %d \n",uti3.CIN, uti3.nom, uti3.prenom, uti3.email, uti3.mdp, uti3.mdp2, uti3.date.jour, uti3.date.mois, uti3.date.annee);
	int u;
	//ajout
	u=ajouter("utilisateur.txt",uti1);
	printf("%d %s %s %s %s %s %d %d %d \n",uti1.CIN, uti1.nom, uti1.prenom, uti1.email, uti1.mdp, uti1.mdp2, uti1.date.jour, uti1.date.mois, uti1.date.annee);
	if(u==1)
		printf(" l'utilisateur a été ajouté \n");
	else 
		printf(" veuillez réessayer l'ajout \n");
	u=ajouter("utilisateur.txt",uti2);
	u=ajouter("utilisateur.txt",uti3);
	//modification
	u=modifier("utilisateur.txt",1,uti2);
	if(u==1)
		printf(" l'utilisateur a été modifié \n");
	else 
		printf(" veuillez réessayer la modification \n");
	//suppression
	u=supprimer("utilisateur.txt",2);
	if (u==1)
		printf("l'utilisateur a été supprimé \n");
	else 
		printf("veuillez réessayer la suppression \n");
	//recherche
	uti3=chercher("utilisateur.txt",2);
	if(uti3.CIN==-1)
		printf("utilisateur introuvable");
	return(0);
}
