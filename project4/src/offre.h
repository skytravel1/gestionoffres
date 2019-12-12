#include <gtk/gtk.h>

typedef struct offres offres;
struct offres
{
char destination[30];
char duree[30];
char prix[30];

} ;

void ajout (char gestionoffre[], offres *h);
void afficher_offre (GtkWidget * liste,offres h);
void supprimer1 (char *duree);
void dell_user(char *destination);
