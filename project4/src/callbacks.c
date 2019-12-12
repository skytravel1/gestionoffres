#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "offre.h"

offres h1;
offres y;
void
on_buttonvalider_clicked               (GtkWidget      *obj,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3;
offres h;
input1=lookup_widget(obj,"destination");
input2=lookup_widget(obj,"duree");
input3=lookup_widget(obj,"prix");

strcpy (h.destination,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.duree,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(h.prix,gtk_entry_get_text(GTK_ENTRY(input3)));



ajout("fichier",&h);

if((strcmp((gtk_entry_get_text(GTK_ENTRY(input1))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(input2))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(input3))),"")==0))
{
GtkWidget *dialog2;
dialog2=create_dialog2() ;
gtk_widget_show(dialog2) ;

}
}


void
on_buttonafficher_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
offres h1;
GtkWidget *treeview1;
  fenetre_ajout=lookup_widget(objet,"window1");
  gtk_widget_destroy(fenetre_ajout);
  fenetre_afficher=lookup_widget(objet,"window2");
  fenetre_afficher=create_window2();
   gtk_widget_show(fenetre_afficher);
treeview1=lookup_widget(fenetre_afficher,"treeview1");
afficher_offre(treeview1,h1);

}


void
on_buttonmodifier_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)h1.destination);
GtkWidget *fenetre_afficher=lookup_widget(GTK_WIDGET(button),"window2");

GtkWidget *fenetre_ajout;
fenetre_ajout=lookup_widget(GTK_WIDGET(button),("window1"));

gtk_widget_destroy(fenetre_afficher);
fenetre_ajout=create_window1();
gtk_widget_show(fenetre_ajout);
GtkWidget *destination=lookup_widget(fenetre_ajout,"destination");
GtkWidget *duree=lookup_widget(fenetre_ajout,"duree");
GtkWidget  *prix=lookup_widget(fenetre_ajout,"prix");

gtk_entry_set_text(GTK_LABEL(destination),h1.destination);
gtk_entry_set_text(GTK_LABEL(duree),h1.duree);
gtk_entry_set_text(GTK_LABEL(prix),h1.prix);

}


void
on_buttonsupprimer_clicked             (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
supprimer1(&h1.destination);
GtkWidget *fenetre_afficher=lookup_widget(GTK_WIDGET(button),"window2");
treeview1=lookup_widget(fenetre_afficher,"treeview1");
afficher_offre(treeview1,h1);
gtk_widget_show(treeview1);


}


void
on_buttonajouter_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fen_log,*fen2 ;

fen2 = lookup_widget(objet,"window1");
gtk_widget_destroy(fen2);
fen_log = create_window1();
gtk_widget_show(fen_log);

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;

  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter,0, &str_data, -1);
  }
strcpy(h1.destination,str_data);


}

