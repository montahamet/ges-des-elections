#ifndef AD_h_INCLUDED
#define AD_h_INCLUDED
#include <stdio.h>
typedef struct DATE
	{
	int jour;
	int mois;
	int annee;
	}DATE;
typedef struct UTILISATEUR
	{
char nom[30];
char prenom[30];
char email[50];
char mdp[20];
char mdp2[20];
int CIN;
	DATE date;
	
	}UTILISATEUR;
//prototypes
int ajouter(char filename[20],UTILISATEUR uti);
int modifier(char *filename,int CIN,UTILISATEUR uti);
int supprimer(char *filename,int CIN);
UTILISATEUR chercher(char *filename, int CIN);
#endif
