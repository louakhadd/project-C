#include <stdio.h>
#include <string.h>
#include "fonctions.h"

void ajouter (char nom[], char prenom [], char date [], char traitement [])
{
	FILE *f;
	f=fopen("/home/loua/Projects/project2/src/traitement.txt","a+");
	if(f!=NULL) {
		fprintf(f,"%s %s %s %s\n",nom,prenom,date,traitement);
	}
	fclose(f);

}

void afficher ()
{
	FILE *f;
	f=fopen("/home/loua/Projects/project2/lusers.txt","r");
	char login[20],password[20];
	int role;
	while(fscanf(f,"%s %s %d",login,password,&role) !=EOF){
		printf("%s %s %d\n", login, password,role);
	}
	fclose(f);
}

int verifier (char login [], char password [])
{
	FILE *f;
	f=fopen("/home/loua/Projects/project2/lusers.txt","r");
	int role=-1;
	char login1[20],password1[20];
	while (fscanf(f,"%s %s %d\n",login1, password1, &role)!=EOF) {
		if (strcmp(login1,login)==0 && strcmp (password1,password)==0)
		{
			fclose(f);
			return role;
		}
	}
	fclose(f);
	return (role);
}
void afficher1(GtkWidget *plistview)
{ 
enum { COL_NOM,
       COL_PRENOM,
       COL_DATE,
       COL_TRAITEMENT,
       NUM_COLS
      };
char nom[20],prenom[20],date [20],traitement[20];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/loua/Projects/project2/src/traitement.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s %s %s",nom,prenom,date,traitement)!=EOF){
           GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_NOM, nom,
		          COL_PRENOM, prenom,
			  COL_DATE, date,
		          COL_TRAITEMENT, traitement,
                       -1);}
	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("nom",celrender,"text",COL_NOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("prenom",celrender,"text",COL_PRENOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes
("date",celrender,"text",COL_DATE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes

("traitement",celrender,"text",COL_TRAITEMENT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);


	gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
}
  
                        
void modifier (char nom[], char prenom[], char date [], char traitement [])
{
	char nomk[20], prenomk[20], datek[20],traitementk[20];
	FILE *f, *tmp;
	f=fopen("/home/loua/Projects/project2/src/traitement.txt","r");
	tmp=fopen("/home/loua/Projects/project2/src/traitement.tmp","a+");
	while(fscanf(f,"%s %s %s %s",nomk,prenomk,datek,traitementk)!=EOF){
		if(!strcmp(nom,nomk) && !strcmp(prenom,prenomk)){fprintf(tmp,"%s %s %s %s\n",nom,prenom,date,traitement);}
		else fprintf(tmp,"%s %s %s %s \n",nomk,prenomk,datek,traitementk);
}
fclose(f);
fclose(tmp);
rename("/home/loua/Projects/project2/src/traitement.tmp","/home/loua/Projects/project2/src/traitement.txt");
}


int supprimer (char nom[], char prenom[], char date [], char traitement [])
{
	char nomk[20], prenomk[20], datek[20],traitementk[20];
	FILE *f, *tmp;
	f=fopen("/home/loua/Projects/project2/src/traitement.txt","r");
	tmp=fopen("/home/loua/Projects/project2/src/traitement.tmp","a+");
	while(fscanf(f,"%s %s %s %s\n",nomk,prenomk,datek,traitementk)!=EOF){
		if(!strcmp(nom,nomk) && !strcmp(prenom,prenomk)) {continue;}
else fprintf(tmp,"%s %s %s %s\n",nomk,prenomk,datek,traitementk);
}
fclose(f);
fclose(tmp);
rename("/home/loua/Projects/project2/src/traitement.tmp","/home/loua/Projects/project2/src/traitement.txt");
}


void ajouter2 (char heures [],int jour, int mois, int annee)
{
	FILE *f;
	f=fopen("/home/loua/Projects/project2/src/dispo.txt","a+");
	if(f!=NULL) {
		fprintf(f,"%s %d %d %d\n",heures,jour,mois,annee);
	}
	fclose(f);

}


void afficher2(GtkWidget *plistview)
{ 
enum {  COL_HEURES,
	COL_JOUR,
	COL_MOIS,
	COL_ANNEE,
        NUM_COLS
      };
char heures[20];
int jour,mois,annee;
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_UINT,G_TYPE_UINT,G_TYPE_UINT);
FILE *f=NULL;
f=fopen("/home/loua/Projects/project2/src/dispo.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %d %d %d\n",heures,&jour,&mois,&annee)!=EOF){
           GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_HEURES, heures,
			  COL_JOUR, jour,
			  COL_MOIS, mois,
			  COL_ANNEE, annee,
		          -1);}
	


	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes

("heures",celrender,"text",COL_HEURES,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes
("jour",celrender,"text",COL_JOUR,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);


	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes
("mois",celrender,"text",COL_MOIS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes
("annee",celrender,"text",COL_ANNEE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);



	gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));
}
fclose(f);
} 
 


void modifier2(char heures [],int jour, int mois, int annee)
{
	char heuresk[20];
	int jourk, moisk,anneek;
	FILE *f, *tmp;
	f=fopen("/home/loua/Projects/project2/src/dispo.txt","r");
	tmp=fopen("/home/loua/Projects/project2/src/dispo.tmp","a+");
	while(fscanf(f,"%s %d %d %d",heuresk,&jourk,&moisk,&anneek)!=EOF){
		if((jour==jourk) && (mois==moisk) && (annee==anneek)) {fprintf(tmp,"%s %d %d %d\n",heures,jour,mois,annee);}
		else fprintf(tmp,"%s %d %d %d\n",heuresk,jourk,moisk,anneek);
}
fclose(f);
fclose(tmp);
rename("/home/loua/Projects/project2/src/dispo.tmp","/home/loua/Projects/project2/src/dispo.txt");


}

void supprimer2(char heures [],int jour, int mois, int annee)
{
	char heuresk[20];
	int jourk, moisk,anneek;
	FILE *f, *tmp;
	f=fopen("/home/loua/Projects/project2/src/dispo.txt","r");
	tmp=fopen("/home/loua/Projects/project2/src/dispo.tmp","w+");
	while(fscanf(f,"%s %d %d %d",heuresk,&jourk,&moisk,&anneek)!=EOF){
		if((jour==jourk) && (mois==moisk) && (annee==anneek)) {continue;}
		else fprintf(tmp,"%s %d %d %d\n",heuresk,jourk,moisk,anneek);
}
fclose(f);
fclose(tmp);
rename("/home/loua/Projects/project2/src/dispo.tmp","/home/loua/Projects/project2/src/dispo.txt");
}


void afficher3(GtkWidget *plistview)
{ 
enum { COL_NOM,
       COL_PRENOM,
       NUM_COLS
      };
char nom[20],prenom[20];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/loua/Projects/project2/src/patients.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s",nom,prenom)!=EOF){
           GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_NOM, nom,
		          COL_PRENOM, prenom,
			  -1);}
	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("nom",celrender,"text",COL_NOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("prenom",celrender,"text",COL_PRENOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);


	gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
} 

void lafficher(GtkWidget *lktreeview)
{

 enum{
     COL_NOM,
     COL_PRENOM,
     COL_DATE,
     COL_SEXE,
     COL_TAILLE,
     COL_POIDS,
     COL_OBSERVATION,
     COL_TRAITEMENT,
     COL_IDENTIFIANT,
     NUM_COLS
     };
char nom[20], prenom[20], date[20], sexe[20], taille[20], poids[20], observation[100], traitement[100], identifiant[20];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/loua/Projects/project2/src/MED.txt","r");
if(f!=NULL) {
             while(fscanf(f,"%s %s %s %s %s %s %s %s %s", nom,prenom,date,sexe,taille,poids,observation,traitement,identifiant)!=EOF) {
               GtkTreeIter iter;
               gtk_list_store_append(liststore, &iter);
               gtk_list_store_set(liststore, &iter,
               COL_NOM, nom,
               COL_PRENOM, prenom,
               COL_DATE, date,
               COL_SEXE, sexe,
               COL_TAILLE, taille,
               COL_POIDS, poids,
               COL_OBSERVATION, observation,
               COL_TRAITEMENT, traitement,
               COL_IDENTIFIANT, identifiant,
                     -1);}

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("nom" ,celrender, "text",COL_NOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("prenom" ,celrender, "text",COL_PRENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);        

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("date" ,celrender, "text",COL_DATE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("sexe" ,celrender, "text",COL_SEXE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("taille" ,celrender, "text",COL_TAILLE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("poids" ,celrender, "text",COL_POIDS,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("observation" ,celrender, "text",COL_OBSERVATION,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("traitement" ,celrender, "text",COL_TRAITEMENT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

celrender = gtk_cell_renderer_text_new();
col = gtk_tree_view_column_new_with_attributes("identifiant" ,celrender, "text",COL_IDENTIFIANT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(lktreeview),col);

gtk_tree_view_set_model (GTK_TREE_VIEW(lktreeview), GTK_TREE_MODEL (liststore));
}
fclose(f);
}



