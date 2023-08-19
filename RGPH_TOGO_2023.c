#include<stdio.h>
 struct Enfant{
                char nom[100];
                char prenom[100];
                int age;
                char sexe[100];
              };
struct Mere{
              char nom[100];
              char prenom[100];
              int age;
              char sexe[100];
            };
 struct Pere{
              char nom[100];
              char prenom[100];
              int age;
              char sexe[100];
            };
 struct Famille_simple{
                        struct Pere pere;
                        struct Mere mere;
                        int nombre_enfant;
                        struct Enfant EFS[100];
                      };
 struct Famille_complexe{
                          struct Pere pere;
                          int nombre_femme;
                          int nombre_enfant;
                          struct Mere MFC[100];
                          struct Enfant EFC[100];
                        };
 struct Famille_simple enregistrer_une_famille_simple(struct Famille_simple u_f_s)
       { int i;
         printf("RECENSEMENT D'UNE FAMILLE SIMPLE\n");
         printf("nom du père\n");
         scanf("%s",&u_f_s.pere.nom);
         printf("prenom du père\n");
         scanf("%s",&u_f_s.pere.prenom);
         printf("age du père\n");
         scanf("%d",&u_f_s.pere.age);
         printf("sexe du père\n");
         scanf("%s",&u_f_s.pere.sexe);
         printf("nom de la mère\n");
         scanf("%s",&u_f_s.mere.nom);
         printf("prenom de la mère\n");
         scanf("%s",&u_f_s.mere.prenom);
         printf("age de la mère\n");
         scanf("%d",&u_f_s.mere.age);
         printf("sexe de la mère\n");
         scanf("%s",&u_f_s.mere.sexe);
         printf("nombre d'enfants\n");
         scanf("%d",&u_f_s.nombre_enfant);
         printf("RECENSEMENT DES ENFANTS DE LA FAMILLE\n");
           for(i=1;i<=u_f_s.nombre_enfant;i++)
              {
                 printf("nom de l'enfant\n");
                 scanf("%s",u_f_s.EFS[i].nom);
                 printf("prenom de l'enfant\n");
                 scanf("%s",&u_f_s.EFS[i].prenom);
                 printf("age de l'enfant\n");
                 scanf("%d",&u_f_s.EFS[i].age);
                 printf("sexe de l'enfant\n");
                 scanf("%s",&u_f_s.EFS[i].sexe);
              }
            return (u_f_s);
       }
 struct Famille_complexe enregistrer_une_famille_complexe(struct Famille_complexe u_f_c)
       {
         int i;
         printf("RECENSEMENT D'UNE FAMILLE COMPLEXE\n");
         printf("nom du père\n");
         scanf("%s",&u_f_c.pere.nom);
         printf("prenom du père\n");
         scanf("%s",&u_f_c.pere.prenom);
         printf("age du père\n");
         scanf("%d",&u_f_c.pere.age);
         printf("sexe du père\n");
         scanf("%s",&u_f_c.pere.sexe);
         printf("nombre de femmes\n");
         scanf("%d",&u_f_c.nombre_femme);
         printf("nombre d'enfants\n");
         scanf("%d",&u_f_c.nombre_enfant);
         printf("RECENSEMENT DES FEMMES DE LA FAMILLES\n");
              for(i=1;i<=u_f_c.nombre_femme;i++)
                 {
                    printf("nom de la femme\n");
                    scanf("%s",&u_f_c.MFC[i].nom);
                    printf("prenom de la femme\n");
                    scanf("%s",&u_f_c.MFC[i].prenom);
                    printf("age de la femme\n");
                    scanf("%d",&u_f_c.MFC[i].age);
                    printf("sexe de la femme\n");
                    scanf("%s",&u_f_c.MFC[i].sexe);
                 }
          printf("RECENSEMENT DES ENFANTS DE LA FAMILLE\n");
               for(i=1;i<=u_f_c.nombre_enfant;i++)
                  {
                     printf("nom de l'enfant\n");
                     scanf("%s",&u_f_c.EFC[i].nom);
                     printf("prenom de l'enfant\n");
                     scanf("%s",&u_f_c.EFC[i].prenom);
                     printf("age de l'enfant\n");
                     scanf("%d",&u_f_c.EFC[i].age);
                     printf("sexe de l'enfant\n");
                     scanf("%s",&u_f_c.EFC[i].sexe);
                  }
             return (u_f_c);
       }
 int nombre_recense_une_famille_simple(struct Famille_simple u_f_s)
    {
       int nombre_recense_u_f_s;
       nombre_recense_u_f_s=(u_f_s.nombre_enfant+2);
       return nombre_recense_u_f_s;
    }
 int nombre_recense_une_famille_complexe(struct Famille_complexe u_f_c)
    {
       int nombre_recense_u_f_c;
       nombre_recense_u_f_c=(u_f_c.nombre_enfant+u_f_c.nombre_femme+1);
       return nombre_recense_u_f_c;
    }
 void afficher_une_famille_simple(struct Famille_simple u_f_s)
     {
       int i;
        printf("NOUVELLE FAMILLE RECENSEE\n Nombre total de personnes recensées: %d\n",nombre_recense_une_famille_simple(u_f_s));
        printf(" Details du recensement de la famille\n");
        printf("nom du père: %s prenom: %s age: %dans sexe: %s\n",u_f_s.pere.nom,u_f_s.pere.prenom,u_f_s.pere.age,u_f_s.pere.sexe);
        printf("nom de la mère: %s prenom: %s age: %dans sexe: %s\n",u_f_s.mere.nom,u_f_s.mere.prenom,u_f_s.mere.age,u_f_s.mere.sexe);
        printf("LES ENFANTS DE LA FAMILLE\n");
            for(i=1;i<=u_f_s.nombre_enfant;i++)
              {
                  printf("nom: %s prenom: %s age: %dans sexe: %s\n",u_f_s.EFS[i].nom,u_f_s.EFS[i].prenom,u_f_s.EFS[i].age,u_f_s.EFS[i].sexe);
              }
    }
 void afficher_une_famille_complexe(struct Famille_complexe u_f_c)
     {
       int i;
        printf("NOUVELLE FAMILLE RECENSEE\n Nombre total de personnes recensées: %d\n",nombre_recense_une_famille_complexe(u_f_c));
        printf(" Details du recensement de la famille\n");
        printf("nom du père: %s prenom: %s age: %dans sexe: %s\n",u_f_c.pere.nom,u_f_c.pere.prenom,u_f_c.pere.age,u_f_c.pere.sexe);
        printf("LES FEMMES DE LA FAMILLE\n");
            for(i=1;i<=u_f_c.nombre_femme;i++)
              {
                  printf("nom: %s prenom: %s age: %dans sexe: %s\n",u_f_c.MFC[i].nom,u_f_c.MFC[i].prenom,u_f_c.MFC[i].age,u_f_c.MFC[i].sexe);
              }
        printf("LES ENFANTS DE LA FAMILLE\n");
            for(i=1;i<=u_f_c.nombre_enfant;i++)
              {
                  printf("nom: %s prenom: %s age: %dans sexe: %s\n",u_f_c.EFC[i].nom,u_f_c.EFC[i].prenom,u_f_c.EFC[i].age,u_f_c.EFC[i].sexe);
              }
     }



int main()
{
  struct Famille_simple u_f_s,f1;
  struct Famille_complexe u_f_c,f2;
  int n;
    printf("  RECENSEMENT GENERAL DE LA POPULATION OU DE L'HABITAT (RGPH) AU TOGO\n");
    printf("  Salut!\n On s'adresse au chef de famille (le père)\n");
    printf("  svp avez_vous combien de femmes?\n");
    scanf("%d",&n);
       if(n==1)
         {
            f1=enregistrer_une_famille_simple(u_f_s);
            nombre_recense_une_famille_simple(f1);
            afficher_une_famille_simple(f1);
         }
       else
          if(n>1)
           {
             f2=enregistrer_une_famille_complexe(u_f_c);
             nombre_recense_une_famille_complexe(f2);
             afficher_une_famille_complexe(f2);
           }
    return 0;
}
