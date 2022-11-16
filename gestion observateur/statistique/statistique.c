#include <stdio.h>
#include <string.h>
#include"statistique.h"
#include <stdlib.h>


int nbobserver( char * filename)
{
int nbo=0;
FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {   
     while(fscanf(f,"%d",&o.id)!=EOF )
       {
        nbo=nbo+1;
        //printf("le nombre des observateur est:%d",nbo);
        }
     }
    // printf("observateur introuvable");
     return nbo;
}
fclose(f);
void taux ( char * filename , float * tn, float * te)
  {
  int nbe=0,nbn=0;
  int nbt=nbobserver(filename);
FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {   
     while(fscanf(f,"%s",o.nationalite)!=EOF )
       {
         if((o.nationalite=="tunisien")||(o.nationalite=="tunisienne"))
          {
            nbn+=1;
            printf("le taux d observateur tunisiens",*tn=nbn/nbt);
          }
         if((o.nationalite=="etranger")||(o.nationalite=="etrangere"))
          {
            nbe+=1;
            printf("le taux d observateur etrangers",*te=nbe/nbt);
          }
       }
fclose(f);






