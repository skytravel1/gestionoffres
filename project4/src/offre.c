#include "offre.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gtk/gtk.h>

enum
{
 DESTINATION,
 DUREE,
 PRIX,
 COLUMNS
};

void ajout (char gestionoffre[], offres *h)
{
FILE *f;
f=fopen(gestionoffre,"ab+");
char temp[1024];
sprintf(temp," touch %s" , gestionoffre);
if (!f)  {g_print("error"); system(temp) ; f=fopen(gestionoffre,"rb");}  

fwrite(h,sizeof(offres),1,f);
fclose(f);
}


void afficher_offre(GtkWidget *show,offres h)
{
	GtkCellRenderer *render ;
        GtkTreeViewColumn *column;
        GtkTreeIter miter;
        GtkListStore *store ;

	char destination[650];
	char duree[120];
	char prix[30];
      store = NULL;


	store =gtk_tree_view_get_model(GTK_TREE_VIEW(show));
	if(!store){
          render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("destination",render,"text",DESTINATION,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);


	render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("duree",render,"text",DUREE,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);

	render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("prix",render,"text",PRIX,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);


}
 store = gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

	FILE *f = fopen("fichier","rb") ;
	if(!f) exit(-1);

      while(fread(&h,sizeof(offres),1,f)==1)
      {
          gtk_list_store_append(store,&miter);
          
          gtk_list_store_set(store,&miter,DESTINATION,h.destination,DUREE,h.duree,PRIX,h.prix,-1);

      }
      fclose(f);
      gtk_tree_view_set_model(GTK_TREE_VIEW(show),GTK_TREE_MODEL(store));
      g_object_unref(store);

}


void supprimer1 (char *destination)
{
offres h1;

FILE *old;
FILE *new_=NULL;

new_=fopen("rem_offre","wb");
fclose(new_);

old=fopen("fichier","rb");
new_=fopen("rem_offre","ab");

int i=0;
while(!(feof(old)))
       {i++;
        fread(&h1,1,sizeof(offres),old);
       }
fclose(old);
old=fopen("fichier","rb");

int j=0;
while(j<i-1)
      {j++;
       fread(&h1,1,sizeof(offres),old);

       if(strcmp(h1.destination, destination))
             {
             fwrite(&h1,sizeof(destination),1,new_);
             }
      }
fclose(new_);
fclose(old);
remove("fichier");
rename("rem_offre","fichier");
}
void dell_user(char *destination)
{
offres h1;
FILE *old;
FILE *new=NULL;

new=fopen("noffres","wb");

fclose(new);
old=fopen("fichier","rb");
new=fopen("noffres","ab");


int i=0;
while(!(feof(old)))
{i++;
fread(&h1,1,sizeof(offres),old);}
fclose(old);
old=fopen("fichier","rb");
int j=0;
while(j<i-1)
{
j++;
fread(&h1,1,sizeof(offres),old);
g_print("pseudo:%s \n",h1.destination);
if(strcmp(h1.destination,destination))
{
fwrite(&h1,sizeof(offres),1,new);
}
}
fclose(new);
fclose(old);
remove("fichier");
rename("noffres","fichier");
}

















    



























