#include <stdio.h>
#include <string.h>
#include "AD.h"

//ajout
int ajouter(char  filename[40],UTILISATEUR uti)
{ 
	FILE * f=fopen("utilisateur.txt", "a");
	if(f!=NULL)
	{	fprintf(f,"%d %s %s %s %s %s %d %d %d \n",uti.CIN, uti.nom, uti.prenom, uti.email, uti.mdp, uti.mdp2, uti.date.jour, uti.date.mois, uti.date.annee);
		
		fclose(f);
		return(1);
	}
	else return(0);
}
//modification

int modifier( char *filename, int CIN, UTILISATEUR nouv)
{
	int tr=0;
	UTILISATEUR uti;
	FILE * f=fopen(filename, "r");
	FILE * f2=fopen("nouv.txt","w");
	if(f!=NULL && f2!=NULL)
	{
		while (fscanf(f,"%d %s %s %s %s %s %d %d %d \n",&uti.CIN, &uti.nom, &uti.prenom, &uti.email, &uti.mdp, &uti.mdp2, &uti.date.jour, &uti.date.mois, &uti.date.annee)!=EOF)
		 {if(uti.CIN==CIN)
			{
			fprintf(f2,"%d %s %s %s %s %s %d %d %d \n", nouv.CIN, nouv.nom, nouv.prenom, nouv.email, nouv.mdp, nouv.mdp2, nouv.date.jour, nouv.date.mois, nouv.date.annee);
			tr=1;
			}
		  else
			fprintf(f2,"%d %s %s %s %s %s %d %d %d \n",uti.CIN, uti.nom, uti.prenom, uti.email, uti.mdp, uti.mdp2, uti.date.jour, uti.date.mois, uti.date.annee); //nouv 
		  }


	fclose(f);
	fclose(f2);
	remove(filename);
	rename("nouv.txt",filename); //hedhaa
	return(tr);
	}
}
//suppression
int supprimer(char * filename, int CIN)
{
	int tr=0;
	UTILISATEUR uti;
	FILE *f=fopen(filename,"r");
	FILE *f2=fopen("nouv.txt","w"); //hedha2
	if ((f!=NULL) && (f2!=NULL))
	{
		while((fscanf(f,"%d %s %s %s %s %s %d %d %d \n",&uti.CIN, &uti.nom, &uti.prenom, &uti.email, &uti.mdp, &uti.mdp2, &uti.date.jour, &uti.date.mois, &uti.date.annee))!=EOF)
		{if(uti.CIN==CIN)
			tr=1;
		else
			fprintf(f2,"%d %s %s %s %s %s %d %d %d \n", uti.CIN, uti.nom, uti.prenom, uti.email, uti.mdp, uti.mdp2, uti.date.jour, uti.date.mois, uti.date.annee);
		}
	}
	fclose(f);
	fclose(f2);
	remove(filename);
	rename("nouv.txt","filename"); //hedhaa
	return tr;
}
//recherche
UTILISATEUR chercher(char * filename, int CIN)
{
	UTILISATEUR uti;
	int tr=0;
	FILE * f=fopen(filename, "r");
	if(f!=NULL)
	{
		while((tr==0) && (fscanf(f,"%d %s %s %s %s %s %d %d %d \n",&uti.CIN, &uti.nom, &uti.prenom, &uti.email, &uti.mdp, &uti.mdp2, &uti.date.jour,&uti.date.mois,&uti.date.annee)!=EOF))
		{
			if(uti.CIN == CIN)
                           tr=1;
		}
	}
	fclose(f);
	if(tr==0)
		uti.CIN=-1;
	return uti;
}
