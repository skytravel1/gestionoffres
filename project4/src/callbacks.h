#include <gtk/gtk.h>


void
on_buttonvalider_clicked               (GtkWidget       *obj,
                                        gpointer         user_data);

void
on_buttonafficher_clicked              (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonmodifier_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonsupprimer_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_buttonajouter_clicked               (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);
