#ifndef bureau_de_vote_H_INCLUDED
#define bureau_de_vote _H_INCLUDED
#include <stdio.h>
typedef struct
{
    int h;
    int m;
    int s; }temp;

typedef struct 
{   int id ;
    int cap_elec;
    int cap_ob;
    int cap_ob_nat;
    int salle;
    char agent_BV[20];
    temp temp_ajout;
    char Bloc[20];
    char ecole[20];
    
    
 } BV;

void ajouter(char fich[],BV n);
void modifier(char fich[], int id1,BV n);
void supprimer(char fich[], int id1,BV n);
void rechercher(char fich[], int id1 ,BV n);
void afficher(char fich[],BV n);
void nbe( char filename[], int id,BV n );



#endif

