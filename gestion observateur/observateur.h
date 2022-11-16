#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
typedef struct observateur
{
int id;
char nom [20];
char prenom [20];
char nationalite [20];
char sexe [20];
char profession [20];
int date_de_naissance;
} observateur;

int ajouter(char * filename,struct observateur );
int modifier( char * filename, int id,struct observateur );
int supprimer(char * filename, int id);
observateur  chercher(char * filename,int id);

#endif
