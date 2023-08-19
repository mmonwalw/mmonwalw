#include<stdio.h>
  struct Employe{
                   char nom[100];
                   char prenom[100];
                   int age;
                   char sexe[100];
                   int numero_matricule;
                   char etat_civil[100];
                };
  struct Employe enregistrer_un_Employe(struct Employe u_e)
       {
          printf(" nom:");
          scanf("%s",&u_e.nom);
          printf(" prenom:");
          scanf("%s",&u_e.prenom);
          printf(" age:");
          scanf("%d",&u_e.age);
          printf(" sexe:");
          scanf("%s",&u_e.sexe);
          printf(" numero matricule:");
          scanf("%d",&u_e.numero_matricule);
          printf(" etat civil (marié/célibataire):");
          scanf("%s",u_e.etat_civil);
          return (u_e);
       }
  void afficher_un_Employe(struct Employe u_e)
     {
        printf("%s    %s    %dans    %s    %d    %s\n",u_e.nom,u_e.prenom,u_e.age,u_e.sexe,u_e.numero_matricule,u_e.etat_civil);
     }


int main()
{ struct Employe liste[1000],u_e;
  int n,i;
    printf(" SAISIE DE LA LISTE DES EMPLOYES\n");
    printf(" Entrer le nombre d'Employes\n");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
          {
            liste[i]=enregistrer_un_Employe(u_e);
          }
    printf("  LISTE DES EMPLOYES\n");
    printf("NOMS   -  PRENOMS   -  AGE  -   SEXE   -  NUMEROS_MAT  -  ETAT-CIVIL\n");
        for(i=1;i<=n;i++)
          {
            afficher_un_Employe(liste[i]);
          }
    return 0;
}
