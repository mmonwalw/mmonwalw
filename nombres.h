#ifndef nombres.h
#define nombres.h

//definiton de la structure
typedef struct listeChaine listeChaine;
struct listeChaine
{
    float nbr;
    listeChaine *suiv;
};
listeChaine *tete;

//prototypes des fonctions
listeChaine *creerListeChaine();
listeChaine *ListeParDefaut();
void afficherListeChaine(listeChaine *l);
int calculLongueurListeChaine(listeChaine *l);
void ajouterNombreEnTeteDeListeChaine(listeChaine *l, float val);
void ajouterNombreEnFinDeListeChaine(listeChaine *l, float val);
void ajouterNombreEnPositionPDeListeChaine(listeChaine *l, float val, int position);
void supprimerNombreEnTeteDeListeChaine(listeChaine *l);
void supprimerNombreEnFinDeListeChaine(listeChaine *l);
void supprimerNombreEnPositionPDeListeChaine(listeChaine *l, int position);

#endif // nombres.h
