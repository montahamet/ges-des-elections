#include "observateur.h"

int ajouter(char filename[20], struct observateur o )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %d \n",o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,o.date_de_naissance);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, struct observateur nouv )
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %d \n",&o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,&o.date_de_naissance)!=EOF)
        {
            if(o.id== id)
            {
                fprintf(f2,"%d %s %s %s %s %s %d \n",nouv.id,nouv.nom,nouv.prenom,nouv.nationalite,nouv.sexe,nouv.profession,nouv.date_de_naissance);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %s %d \n",o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,o.date_de_naissance);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;


    observateur o ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %d \n",&o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,&o.date_de_naissance)!=EOF)
        {
            if(o.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %s %d \n",o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,o.date_de_naissance);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur  chercher(char * filename,int id)
{
    observateur o ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s %s %s %s %d \n",&o.id,o.nom,o.prenom,o.nationalite,o.sexe,o.profession,&o.date_de_naissance)!=EOF)
        {
            if(o.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        o.id=-1;

    return o;
}
