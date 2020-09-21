#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonctions.h"


void
on_lbutton1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	int x;
	GtkWidget *a ,*b , *c, *lwindow1, *lwindow2;
	char login [20], password[20];
	
	lwindow1=lookup_widget (objet_graphique,"lwindow1");
	a=lookup_widget (objet_graphique,"lentry1");
	b=lookup_widget (objet_graphique,"lentry2");
	c=lookup_widget (objet_graphique,"llabel5");
	
	strcpy(login,gtk_entry_get_text(GTK_ENTRY(a)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(b)));
	x=verifier(login,password);

	if (x==1) {
		lwindow2=create_lwindow2();
		gtk_widget_show (lwindow2);
		gtk_widget_hide (lwindow1);
}
	else
	{ gtk_label_set_text(GTK_LABEL(c),"authentification non validée");}


}


void
on_lbutton2_clicked (GtkButton *button, gpointer user_data)
{
	gtk_main_quit();
}


void
on_lbutton3_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow2, *lwindow3; /* *a,*b,*c,*d,*e,*f
	char nom[20],prenom[20],cin[20],date[20],ville[20],email[20];*/

	lwindow2=lookup_widget (objet_graphique,"lwindow2");
	lwindow3=create_lwindow3();
	gtk_widget_show (lwindow3);
	gtk_widget_hide (lwindow2);
/*
a=lookup_widget(objet_graphique,"label53");
b=lookup_widget(objet_graphique,"label54");
c=lookup_widget(objet_graphique,"label55");
d=lookup_widget(objet_graphique,"label56");
e=lookup_widget(objet_graphique,"label57");
f=lookup_widget(objet_graphique,"label58");
strcpy(nom,gtk_label_get_text(GTK_LABEL(a)));
strcpy(prenom,gtk_label_get_text(GTK_LABEL(b)));
strcpy(cin,gtk_label_get_text(GTK_LABEL(c)));
strcpy(date,gtk_label_get_text(GTK_LABEL(d)));
strcpy(ville,gtk_label_get_text(GTK_LABEL(e)));
strcpy(email,gtk_label_get_text(GTK_LABEL(f)));
affiche_infos();
*/
}


void
on_lbutton16_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow2, *lwindow5;	
	lwindow2=lookup_widget (objet_graphique,"lwindow2");
	lwindow5=create_lwindow5();
	gtk_widget_show (lwindow5);
	gtk_widget_hide (lwindow2);

}


void
on_lbutton5_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_lbutton14_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow2;	
	lwindow5=lookup_widget (objet_graphique,"lwindow5");
	lwindow2=create_lwindow2();
	gtk_widget_show (lwindow2);
	gtk_widget_hide (lwindow5);
}


void
on_lbutton11_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow6, *List_View;	
	lwindow6=create_lwindow6();	
	lwindow5=lookup_widget (objet_graphique,"lwindow5");
	gtk_widget_hide (lwindow5);
	List_View=lookup_widget(lwindow6,"ltreeview1");
	afficher1(List_View);	
	gtk_widget_show (lwindow6);
	
}


void
on_lbutton10_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow9, *List_View;
	lwindow5=lookup_widget (objet_graphique,"lwindow5");	
	lwindow9=create_lwindow9();
	List_View=lookup_widget(lwindow9,"ltreeview2");
	afficher2(List_View);	
	gtk_widget_hide (lwindow5);
	gtk_widget_show (lwindow9);
	
	
}


void
on_lbutton12_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow12, *List_View;
	lwindow5=lookup_widget (objet_graphique,"lwindow5");	
	lwindow12=create_lwindow12();
	gtk_widget_show (lwindow12);
	List_View=lookup_widget(lwindow12,"lktreeview");
	lafficher(List_View);
	gtk_widget_hide (lwindow5);
}


void
on_lbutton4_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	gtk_main_quit();
}


void
on_lbutton17_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}






void
on_lbutton18_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow3, *lwindow2;	
	lwindow3=lookup_widget (objet_graphique,"lwindow3");
	lwindow2=create_lwindow2();
	gtk_widget_show (lwindow2);
	gtk_widget_hide (lwindow3);
}


void
on_lbutton23_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow6;	
	lwindow6=lookup_widget (objet_graphique,"lwindow6");
	lwindow5=create_lwindow5();
	gtk_widget_show (lwindow5);
	gtk_widget_hide (lwindow6);
}


void
on_lbutton21_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow6, *lwindow7;	
	lwindow6=lookup_widget (objet_graphique,"lwindow6");
	lwindow7=create_lwindow7();
	gtk_widget_show (lwindow7);
	gtk_widget_hide (lwindow6);
}


void
on_lbutton25_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow6, *lwindow7, *List_View;	
	lwindow7=lookup_widget (objet_graphique,"lwindow7");
	lwindow6=create_lwindow6();
	gtk_widget_show (lwindow6);
	List_View=lookup_widget(lwindow6,"ltreeview1");
	afficher1(List_View);
	gtk_widget_hide (lwindow7);
}


void
on_lbutton26_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_lbutton24_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *a ,*b,*c,*d ,*lwindow7, *lwindow6, *List_View;
	char nom[20],prenom[20],date [20],traitement[20];
	
	a=lookup_widget(objet_graphique,"lentry5");
	b=lookup_widget(objet_graphique,"lentry6");
	c=lookup_widget(objet_graphique,"lentry9");
	d=lookup_widget(objet_graphique,"lentry8");
	strcpy(nom,gtk_entry_get_text(GTK_ENTRY(a)));
	strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(b)));
        strcpy(date,gtk_entry_get_text(GTK_ENTRY(c)));
	strcpy(traitement,gtk_entry_get_text(GTK_ENTRY(d)));
        ajouter(nom,prenom,date,traitement);

	lwindow6=create_lwindow6();
	lwindow7=lookup_widget(objet_graphique,"lwindow7");
	gtk_widget_hide(lwindow7);
	List_View=lookup_widget(lwindow6,"ltreeview1");
	afficher1(List_View);
	gtk_widget_show (lwindow6);
}


void
on_lbutton27_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	gtk_main_quit();
}


void
on_ltreeview1_row_activated             (GtkWidget     *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkWidget *nomk,*prenomk,*datek,*traitementk,*lwindow8,*lwindow6, *List_View;
	char *nom,*prenom,*date,*traitement;
	List_View=lookup_widget(objet_graphique,"ltreeview1");
	
	lwindow6=lookup_widget(objet_graphique,"lwindow6");
	lwindow8=create_lwindow8();

	nomk=lookup_widget(lwindow8,"lentry10");
	prenomk=lookup_widget(lwindow8,"lentry11");
	datek=lookup_widget(lwindow8,"lentry12");
	traitementk=lookup_widget(lwindow8,"lentry13");
	GtkTreeIter iter;
	GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(List_View));
	gtk_tree_model_get_iter(model,&iter,path);
	gtk_tree_model_get(model,&iter,0,&nom,1,&prenom,2,&date,3,&traitement,-1);
	printf("%s %s %s %s",nom,prenom,date,traitement);
	gtk_entry_set_text(GTK_ENTRY (nomk),_(nom));
	gtk_entry_set_text(GTK_ENTRY (prenomk),_(prenom));
	gtk_entry_set_text(GTK_ENTRY (datek),_(date));
	gtk_entry_set_text(GTK_ENTRY (traitementk),_(traitement));
	gtk_widget_show(lwindow8);
	gtk_widget_hide(lwindow6);

}


void
on_lbutton28_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *nomk,*prenomk,*datek,*traitementk,*current, *lwindow6,*lwindow8,*List_View;
	char nom[20],prenom[20],date[20],traitement[20];
	nomk=lookup_widget(objet_graphique,"lentry10");
	prenomk=lookup_widget(objet_graphique,"lentry11");
	datek=lookup_widget(objet_graphique,"lentry12");
	traitementk=lookup_widget(objet_graphique,"lentry13");
	strcpy(nom,gtk_entry_get_text(GTK_ENTRY(nomk)));
	strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(prenomk)));
	strcpy(date,gtk_entry_get_text(GTK_ENTRY(datek)));
	strcpy(traitement,gtk_entry_get_text(GTK_ENTRY(traitementk)));
	modifier(nom,prenom,date,traitement);
	current=lookup_widget(objet_graphique,"lwindow8");
	gtk_widget_hide(current);


lwindow6=create_lwindow6();
List_View=lookup_widget(lwindow6,"ltreeview1");
lwindow8=lookup_widget(objet_graphique,"lwindow8");
gtk_widget_hide(lwindow8);
gtk_widget_show(lwindow6);
afficher1(List_View);

	
}


void
on_lbutton29_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow8, *lwindow6, *List_View;	
	lwindow8=lookup_widget (objet_graphique,"lwindow8");
	lwindow6=create_lwindow6();
	gtk_widget_show (lwindow6);
	List_View=lookup_widget(lwindow6,"ltreeview1");
	afficher1(List_View);
	gtk_widget_hide (lwindow8);
}


void
on_lbutton31_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	gtk_main_quit();
}


void
on_lbutton32_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow5, *lwindow9;
	lwindow9=lookup_widget (objet_graphique,"lwindow9");	
	lwindow5=create_lwindow5();
	gtk_widget_show (lwindow5);
	gtk_widget_hide (lwindow9);
}


void
on_lbutton33_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *nomk,*prenomk,*datek,*traitementk,*lwindow6, *lwindow8, *List_View;
	char nom[20],prenom [20],date[20],traitement[20];
	lwindow6=create_lwindow6();
	List_View=lookup_widget(lwindow6,"ltreeview1");
	lwindow8=lookup_widget(objet_graphique,"lwindow8");
	nomk=lookup_widget(objet_graphique,"lentry10");
	prenomk=lookup_widget(objet_graphique,"lentry11");
	datek=lookup_widget(objet_graphique,"lentry12");
	traitementk=lookup_widget(objet_graphique,"lentry13");
	strcpy(nom,gtk_entry_get_text(GTK_ENTRY(nomk)));
	strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(prenomk)));
	strcpy(date,gtk_entry_get_text(GTK_ENTRY(datek)));
	strcpy(traitement,gtk_entry_get_text(GTK_ENTRY(traitementk)));
	supprimer(nom,prenom,date,traitement);
	afficher1(List_View);
	gtk_widget_show (lwindow6);
	gtk_widget_hide(lwindow8);

}






void
on_lbutton34_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow9, *lwindow10, *List_View;	
	lwindow9=lookup_widget (objet_graphique,"lwindow9");
	lwindow10=create_lwindow10();
	gtk_widget_show (lwindow10);
	List_View=lookup_widget(lwindow9,"ltreeview2");
	afficher2(List_View);
	gtk_widget_hide (lwindow9);
}


void
on_lbutton35_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow9, *lwindow11;	
	lwindow9=lookup_widget (objet_graphique,"lwindow9");
	lwindow11=create_lwindow11();
	gtk_widget_show (lwindow11);
	gtk_widget_hide (lwindow9);
}


void
on_lbutton36_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	gtk_main_quit();
}


void
on_lbutton37_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow9, *lwindow10, *List_View;	
	lwindow10=lookup_widget (objet_graphique,"lwindow10");
	lwindow9=create_lwindow9();
	gtk_widget_show (lwindow9);
	List_View=lookup_widget(lwindow9,"ltreeview2");
	afficher2(List_View);
	gtk_widget_hide (lwindow10);
}


void
on_lbutton38_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *a ,*b,*c, *lwindow9,  *lwindow10, *List_View;
	GtkWidget *lcombobox2;
	char heures[20];
	int jour,mois,annee;
	
	lcombobox2=lookup_widget(objet_graphique,"lcombobox2");
	a=lookup_widget(objet_graphique,"lspinbutton8");	
	b=lookup_widget(objet_graphique,"lspinbutton1");
	c=lookup_widget(objet_graphique,"lspinbutton2");
	jour=gtk_spin_button_get_value_as_int (a);
	mois=gtk_spin_button_get_value_as_int (b);
	annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(c));
	strcpy(heures,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lcombobox2)));
	
        ajouter2(heures,jour,mois,annee);

	lwindow9=create_lwindow9();
	lwindow10=lookup_widget(objet_graphique,"lwindow10");
	gtk_widget_hide(lwindow10);
	List_View=lookup_widget(lwindow9,"ltreeview2");
	afficher2(List_View);
	gtk_widget_show (lwindow9);

}  


void
on_lbutton43_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	gtk_main_quit();
}


void
on_lbutton44_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow9, *lwindow11, *List_View;	
	lwindow11=lookup_widget (objet_graphique,"lwindow11");
	lwindow9=create_lwindow9();
	gtk_widget_show (lwindow9);
	List_View=lookup_widget(lwindow9,"ltreeview2");
	afficher2(List_View);
	gtk_widget_hide (lwindow11);
}


void
on_lbutton46_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *heuresk,*current,*jourk,*moisk,*anneek,*lwindow11,*lwindow9,*List_View;
	char heures[20];
	int jour,mois,annee;

	jourk=lookup_widget(objet_graphique,"lspinbutton9");
	moisk=lookup_widget(objet_graphique,"lspinbutton10");
	anneek=lookup_widget(objet_graphique,"lspinbutton11");
	heuresk=lookup_widget(objet_graphique,"lcombobox10");
	
	jour=gtk_spin_button_get_value_as_int(jourk);
	mois=gtk_spin_button_get_value_as_int(moisk);
	annee=gtk_spin_button_get_value_as_int(anneek);
	strcpy(heures,gtk_combo_box_get_active_text(GTK_COMBO_BOX(heuresk)));

	supprimer2(heures,jour,mois,annee);
	current=lookup_widget(objet_graphique,"lwindow11");
	gtk_widget_hide(current);

lwindow9=create_lwindow9();
List_View=lookup_widget(lwindow9,"ltreeview2");
lwindow11=lookup_widget(objet_graphique,"lwindow11");
gtk_widget_hide(lwindow11);
gtk_widget_show(lwindow9);
afficher2(List_View);

}



void
on_lbutton45_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *heuresk,*jourk,*moisk,*anneek,*lwindow11,*lwindow9,*List_View;
	char heures[20];
	int jour,mois,annee;

	jourk=lookup_widget(objet_graphique,"lspinbutton9");
	moisk=lookup_widget(objet_graphique,"lspinbutton10");
	anneek=lookup_widget(objet_graphique,"lspinbutton11");
	heuresk=lookup_widget(objet_graphique,"lcombobox10");
	
	jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jourk));
	mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(moisk));
	annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(anneek));
	strcpy(heures,gtk_combo_box_get_active_text(GTK_COMBO_BOX(heuresk)));

	modifier2(heures,jour,mois,annee);
	
	

	lwindow9=create_lwindow9();
	List_View=lookup_widget(lwindow9,"ltreeview2");
	lwindow11=lookup_widget(objet_graphique,"lwindow11");
	gtk_widget_hide(lwindow11);
	gtk_widget_show(lwindow9);
	afficher2(List_View);
 
}



void
on_lkbutton_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *lwindow12, *lwindow5;	
	lwindow12=lookup_widget (objet_graphique,"lwindow12");
	lwindow5=create_lwindow5();
	gtk_widget_show (lwindow5);
	gtk_widget_hide (lwindow12);
}

void
on_ltreeview2_row_activated             (GtkWidget     *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkWidget *jourk,*moisk,*anneek,*heuresk,*lwindow9,*lwindow11, *List_View;
	char heures[20];
	int jour,mois,annee;
	List_View=lookup_widget(objet_graphique,"ltreeview2");
	
	lwindow9=lookup_widget(objet_graphique,"lwindow9");
	lwindow11=create_lwindow11();

	jourk=lookup_widget(lwindow11,"lspinbutton9");
	moisk=lookup_widget(lwindow11,"lspinbutton10");
	anneek=lookup_widget(lwindow11,"lspinbutton11");

	heuresk=lookup_widget(lwindow11,"lcombobox10");
	

	GtkTreeIter iter;
	GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(List_View));
	gtk_tree_model_get_iter(model,&iter,path);
	gtk_tree_model_get(model,&iter,0,&heures,1,&jour,2,&mois,3,&annee,-1);
	g_printf("%s %d %d %d ",heures,jour,mois,annee);

	gtk_spin_button_set_value(GTK_SPIN_BUTTON (jourk),(jour));
	gtk_spin_button_set_value(GTK_SPIN_BUTTON (moisk),(mois));
	gtk_spin_button_set_value(GTK_SPIN_BUTTON (anneek),(annee));
	gtk_entry_set_text(GTK_ENTRY (heuresk),_(heures));
	
	gtk_widget_show(lwindow11);
	gtk_widget_hide(lwindow9);
}



void
on_lbutton700_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	
	GtkWidget *lwindow1, *lwindow2, *List_View;	
	lwindow2=lookup_widget (objet_graphique,"lwindow2");
	lwindow1=create_lwindow1();
	gtk_widget_show (lwindow1);
	gtk_widget_hide (lwindow2);
}

