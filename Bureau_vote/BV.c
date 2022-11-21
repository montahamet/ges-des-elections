#include <stdio.h>

#include <stdlib.h>

#include "BV.h"





void ajouter(char fich[],BV n)

{

    FILE *f=NULL;







    f = fopen(fich,"a");

    if (f!=NULL){



        printf("donner identifiant\n");

        scanf("%d",&n.id);



        printf("donner la capacite des electeurs\n");

        scanf("%d",&n.cap_elec);

        printf("donner la capacite des observateurs\n");

        scanf("%d",&n.cap_ob);

        printf("donner la capacite des observateurs nat\n");

        scanf("%d",&n.cap_ob_nat);



        printf("donner le nombre de la salle\n");

        scanf("%d",&n.salle);



        printf("donner le nom d agent BV\n");

        scanf("%s",n.agent_BV);



        printf("donner le temp d ajout\n");

               scanf("%d%d%d",&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s);



         printf("donner le nom bloc \n");

        scanf("%s",n.Bloc);

         printf("donner l ecole\n");

        scanf("%s",n.ecole);

        fprintf(f,"%d %d %d %d %d  %s %d %d %d %s %s \n",n.id,n.cap_elec,n.cap_ob,n.cap_ob_nat,n.salle,n.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,n.Bloc,n.ecole);

    }

    fclose(f);



}

void modifier(char fich[], int id1,BV n)

{

    BV nouv;

    FILE *f=NULL;

    FILE *aux = NULL;

    f = fopen(fich,"r");

    aux= fopen("nouveau.txt" , "a+");

    char a;

    if (f!=NULL)

    {

    while (fscanf(f,"%d %d %d %d %d %s %d %d %d %s %s \n",&n.id,&n.cap_elec,&n.cap_ob,&n.cap_ob_nat,&n.salle,n.agent_BV,&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s,n.Bloc,n.ecole

)!=EOF){

            if (n.id==id1){

            do {



                printf("1.changer la capacite des electeurs\n");

                printf("2.changer la capacite  des observateurs\n");

                printf("3.changer le nombre de la salle \n");

                printf("4.changer le nom d agent de vote\n");

                printf("5.changer le nom bloc\n");

                printf("6.changer l'ecole \n");

                printf("7.changer le nbre d observateur nat \n");

                scanf(" %c",&a);

            }while (a!='1' && a!='2' && a!='3' && a!='4' && a!='5' && a!='6' && a!='7') ;

                switch (a){

                case '1':

                    printf("donner la capacite des electeurs\n");

        scanf("%d",&nouv.cap_elec);



                    break;

                case '2':

                     printf("donner la capacite des observateurs\n");

        scanf("%d",&nouv.cap_ob);



                    break;

                case '3':

                     printf("donner la nbre de la salle\n");

        scanf("%d",&nouv.salle);



                    break;

                case '4':



                    printf("donner le nom d agent BV\n");

        scanf("%s",nouv.agent_BV);

                    break;

                case '5':



                    printf("donner le nom bloc \n");

        scanf("%s",nouv.Bloc);

                    break;

                case '6':



                     printf("donner l ecole\n");

        scanf("%s",nouv.ecole);

                    break;

                case '7':



                    printf("donner le nbre des observateur nat \n");

        scanf("%s",nouv.cap_ob_nat);

                }

            }



              fprintf(aux,"%d %d %d %d %d %s %d %d %d %s %s \n",nouv.id,nouv.cap_elec,nouv.cap_ob,nouv.cap_ob_nat,nouv.salle,nouv.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,nouv.Bloc,nouv.ecole);

            }}

            else

               fprintf(aux,"%d %d %d %d %s %d %d %d %s %s \n",n.id,n.cap_elec,n.cap_ob,n.cap_ob_nat,n.salle,n.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,n.Bloc,n.ecole);













        fclose(f);

        remove(fich);

        fclose(aux);

        rename("nouveau.txt",fich);



    }







void supprimer(char fich[], int id1,BV n)

{

    FILE *f=NULL;

    FILE *aux = NULL;







    f = fopen(fich,"r");

    aux = fopen("nouveau.txt" , "a+");

    char a;

    if (f!=NULL)

    {

     while (fscanf(f,"%d %d %d %d %d %s %d %d %d %s %s \n",&n.id,&n.cap_elec,&n.cap_ob,&n.cap_ob_nat,&n.salle,n.agent_BV,&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s,n.Bloc,n.ecole

 )!=EOF){

            if (n.id!=id1){

                fprintf(aux,"%d %d %d %d %d  %s %d %d %d %s %s \n",n.id,n.cap_elec,n.cap_ob,n.cap_ob_nat,n.salle,n.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,n.Bloc,n.ecole);

    }

        }

        fclose(f);

        remove(fich);

        fclose(aux);

        rename("temp.txt",fich);



    }



}

void rechercher(char fich[], int id1 ,BV n)

{

    FILE *f=NULL;





     f = fopen(fich,"r");

    if (f!=NULL)

    {

    while (fscanf(f,"%d %d %d %d %d %s %d %d %d %s %s \n",&n.id,&n.cap_elec,&n.cap_ob,&n.cap_ob_nat,&n.salle,n.agent_BV,&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s,n.Bloc,n.ecole

 )!=EOF){

            if (n.id==id1){

                    printf("id; %d cap_elec; %d cap_ob;%d cap_ob_nat;%d salle;%d agent_BV;%s  heure;%d minute;%d seconde;%d bloc;%s ecole; %s \n",n.id,n.cap_elec,n.cap_ob,n.cap_ob_nat,n.salle,n.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,n.Bloc,n.ecole);

    }

        }

        fclose(f);

    }

}





void afficher(char fich[],BV n)

{

     FILE *f=NULL;









    f = fopen(fich,"r");

    if (f!=NULL)

    {

     while (fscanf(f,"%d %d %d %d %d %s %d %d %d %s %s \n",&n.id,&n.cap_elec,&n.cap_ob,&n.cap_ob_nat,&n.salle,n.agent_BV,&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s,n.Bloc,n.ecole

 )!=EOF){



                       printf("id; %d cap_elec; %d cap_ob;%d cap_ob_nat;%d salle;%d agent_BV;%s  heure;%d minute;%d seconde;%d bloc;%s ecole; %s \n",n.id,n.cap_elec,n.cap_ob,n.cap_ob_nat,n.salle,n.agent_BV,n.temp_ajout.h,n.temp_ajout.m,n.temp_ajout.s,n.Bloc,n.ecole);

    }

        fclose(f);

    }

    }

void nbe(char filename[], int id,BV n)

{int T[1][2];

 int tr=0;
 int i;
FILE *f=NULL;
FILE *aux = NULL;
f = fopen(filename,"r");
aux = fopen("nouveau.txt" , "a+");



 if(f!=NULL)

   { while(tr==0&& fscanf(f,"%d %d %d %d %d %s %d %d %d %s %s \n",&n.id,&n.cap_elec,&n.cap_ob,&n.cap_ob_nat,&n.salle,n.agent_BV,&n.temp_ajout.h,&n.temp_ajout.m,&n.temp_ajout.s,n.Bloc,n.ecole

 )!=EOF)

        {if(n.id== id)

                {tr=1;
                fprintf(aux,"%d %d  \n",n.id,n.cap_elec); }

    }}

    fclose(f);
    if(aux!=NULL)
{  while( fscanf(f,"%d %d  \n",&n.id,&n.cap_elec)!=EOF) 
                {printf("%d %d  \n",n.id,n.cap_elec);}}
      fclose(aux);
    
   
   if(tr==0)

        {printf("l'identifiant n'existe pas");}







}












  






 
   










 
  
