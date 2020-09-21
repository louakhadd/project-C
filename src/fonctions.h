#include <gtk/gtk.h>
void ajouter (char nom [], char prenom [], char date [], char traitement []);
void afficher();
int verifier (char login [], char password[]);
void afficher1(GtkWidget *plistview);
void modifier (char nom [], char prenom [], char date [], char traitement []);
int supprimer (char nom [], char prenom [], char date [], char traitement []);
void ajouter2 (char heures [],int jour,int mois,int annee);
void afficher2(GtkWidget *plistview);
void modifier2(char heures [],int jour,int mois,int annee);
void supprimer2(char heures [],int jour,int mois,int annee);
void afficher3(GtkWidget *plistview);
void lafficher(GtkWidget *lktreeview);

