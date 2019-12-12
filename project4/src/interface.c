/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *destination;
  GtkWidget *duree;
  GtkWidget *prix;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *buttonvalider;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label5;
  GtkWidget *buttonafficher;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label6;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  destination = gtk_entry_new ();
  gtk_widget_show (destination);
  gtk_fixed_put (GTK_FIXED (fixed1), destination, 120, 32);
  gtk_widget_set_size_request (destination, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (destination), 8226);

  duree = gtk_entry_new ();
  gtk_widget_show (duree);
  gtk_fixed_put (GTK_FIXED (fixed1), duree, 120, 72);
  gtk_widget_set_size_request (duree, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (duree), 8226);

  prix = gtk_entry_new ();
  gtk_widget_show (prix);
  gtk_fixed_put (GTK_FIXED (fixed1), prix, 120, 112);
  gtk_widget_set_size_request (prix, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (prix), 8226);

  label1 = gtk_label_new (_("destination"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 0, 32);
  gtk_widget_set_size_request (label1, 104, 32);

  label2 = gtk_label_new (_("duree"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 0, 72);
  gtk_widget_set_size_request (label2, 120, 32);

  label3 = gtk_label_new (_("prix"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 0, 112);
  gtk_widget_set_size_request (label3, 112, 32);

  buttonvalider = gtk_button_new ();
  gtk_widget_show (buttonvalider);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonvalider, 88, 184);
  gtk_widget_set_size_request (buttonvalider, 96, 32);
  gtk_button_set_focus_on_click (GTK_BUTTON (buttonvalider), FALSE);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (buttonvalider), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox1), label5, FALSE, FALSE, 0);

  buttonafficher = gtk_button_new ();
  gtk_widget_show (buttonafficher);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonafficher, 208, 184);
  gtk_widget_set_size_request (buttonafficher, 104, 32);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (buttonafficher), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-info", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox2), label6, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) buttonvalider, "clicked",
                    G_CALLBACK (on_buttonvalider_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonafficher, "clicked",
                    G_CALLBACK (on_buttonafficher_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, destination, "destination");
  GLADE_HOOKUP_OBJECT (window1, duree, "duree");
  GLADE_HOOKUP_OBJECT (window1, prix, "prix");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, buttonvalider, "buttonvalider");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, buttonafficher, "buttonafficher");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *buttonmodifier;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label7;
  GtkWidget *buttonsupprimer;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label8;
  GtkWidget *buttonajouter;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label9;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 64, 8);
  gtk_widget_set_size_request (treeview1, 304, 224);

  buttonmodifier = gtk_button_new ();
  gtk_widget_show (buttonmodifier);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonmodifier, 24, 248);
  gtk_widget_set_size_request (buttonmodifier, 96, 32);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (buttonmodifier), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox3), label7, FALSE, FALSE, 0);

  buttonsupprimer = gtk_button_new ();
  gtk_widget_show (buttonsupprimer);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonsupprimer, 144, 248);
  gtk_widget_set_size_request (buttonsupprimer, 120, 32);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (buttonsupprimer), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox4), label8, FALSE, FALSE, 0);

  buttonajouter = gtk_button_new ();
  gtk_widget_show (buttonajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonajouter, 288, 248);
  gtk_widget_set_size_request (buttonajouter, 104, 32);
  gtk_button_set_focus_on_click (GTK_BUTTON (buttonajouter), FALSE);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (buttonajouter), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label9 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (hbox5), label9, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonmodifier, "clicked",
                    G_CALLBACK (on_buttonmodifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonsupprimer, "clicked",
                    G_CALLBACK (on_buttonsupprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonajouter, "clicked",
                    G_CALLBACK (on_buttonajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window2, buttonmodifier, "buttonmodifier");
  GLADE_HOOKUP_OBJECT (window2, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window2, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window2, image3, "image3");
  GLADE_HOOKUP_OBJECT (window2, label7, "label7");
  GLADE_HOOKUP_OBJECT (window2, buttonsupprimer, "buttonsupprimer");
  GLADE_HOOKUP_OBJECT (window2, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window2, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window2, image4, "image4");
  GLADE_HOOKUP_OBJECT (window2, label8, "label8");
  GLADE_HOOKUP_OBJECT (window2, buttonajouter, "buttonajouter");
  GLADE_HOOKUP_OBJECT (window2, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window2, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window2, image5, "image5");
  GLADE_HOOKUP_OBJECT (window2, label9, "label9");

  return window2;
}

GtkWidget*
create_dialog2 (void)
{
  GtkWidget *dialog2;
  GtkWidget *dialog_vbox1;
  GtkWidget *dialog_action_area1;
  GtkWidget *cancelbutton1;
  GtkWidget *okbutton1;

  dialog2 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog2), _("dialog2"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog2), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog2), FALSE);

  dialog_vbox1 = GTK_DIALOG (dialog2)->vbox;
  gtk_widget_show (dialog_vbox1);

  dialog_action_area1 = GTK_DIALOG (dialog2)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  cancelbutton1 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog2), cancelbutton1, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton1, GTK_CAN_DEFAULT);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog2), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog2, "dialog2");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (dialog2, cancelbutton1, "cancelbutton1");
  GLADE_HOOKUP_OBJECT (dialog2, okbutton1, "okbutton1");

  return dialog2;
}

