#include<stdio.h>

int main()
{
 int choix,i;

    printf(" Bienvenue au restaurant de L'ECOLE POLYTECHNIQUE DE LOME\n");
    
    printf(" Voici notre menu du jour\n");
    
    printf(" Menu\n");
    
    printf("  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n");
    
    printf("Veuillez entrer votre choix\n");
    
    scanf("%d",&choix);
    
    switch(choix)
    {
    case 1: printf(" Petit dejeuner\n 1.Tasse de café au lait + pain:1500F\n 2.Tasse de milo au lait + pain:1200F\n 3.Tasse de bouillie + gateaux:1000F\n 4.Pain au chocolat:1300F\n 5.Retour au menu\n");
    printf("Veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix)
    { case 1: printf("  Merci! votre choix est TASSE DE CAFE AU LAIT + PAIN\n  combien de tasses?\n");
 printf(" veuillez entrer le nombre de tasses\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 2: printf("  Merci! votre choix est TASSE DE MILO AU LAIT + PAIN\n  combien de tasses?\n");
 printf(" veuillez entrer le nombre de tasses\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 3: printf("  Merci! votre choix est TASSE DE BOUILLIE + GATEAUX\n  combien de tasses?\n");
   printf(" veuillez entrer le nombre de tasses\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 4: printf("  Merci! votre choix est PAIN AU CHOCOLAT\n  combien de plats?\n");
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 5: printf("  Menu\n  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n  veuillez entrer votre choix\n");
            scanf("%d",&choix);
    break;
    default : printf(" SVP\n Si notre menu ne vous sied pas veuillez signaler pour un menu personnel\n Ici le client est ROI\n");
    }
    break;
    
    case 2: printf(" Dejeuner\n 1.Plat du riz au gras:4500F\n 2.Plat de spaghetti au gras:5000F\n 3.Plat de pate + sauce d'ademe:2000F\n 4.Plat de foufou + sauce d'arachide:3500F\n 5.Retour au menu\n");
    printf("veuillez entrer votr choix\n");
    scanf("%d",&choix);
    switch(choix)
    { case 1: printf(" votre choix est PLAT DU RIZ AU GRAS\n  combiende plats?\n");
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 2: printf(" votre choix est PLAT DE SPAGHETTI AU GRAS\n  combien de plats?\n");
    printf(" veuillez entrer le nombre de plats\n");
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 3: printf(" votre choix est PLAT DE PATE + SAUCE D'ADEME\n  combien de plats?\n");
   
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 4: printf(" votre choix est PLAT DE FOUFOU + SAUCE D'ARACHIDE\n  combien de plats?\n");
    
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 5: printf("  Menu\n  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n  veuillez entrer votre choix\n");
              scanf("%d",&choix);
            break;
        default : printf(" SVP\n Si notre menu ne vous sied pas veuillez signaler pour un menu personnel\n Ici le client est ROI\n");
    }
    break;
    
    case 3: printf(" Diner\n 1.Plat d'acthieke:2500F\n 2.Plat de poissons braises:7000F\n 3.Plat de gari delaye + arachide:2000F\n 4.Plat de brochettes:10000F\n 5.Retour au menu\n");
    printf("veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix)
    { case 1: printf(" votre choix est PLAT D'ATCHIEKE\n  combien de plats?\n");
    
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d", &choix);
     printf("ok");
    break;
      case 2: printf(" votre choix est PLAT DE POISSONS BRAISES\n  combien de plats?\n");

    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 3: printf(" votre choix est PLAT DE GARI DELAYE + ARACHIDE\n  combien de plats?\n");
    
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 4: printf(" votre choix est PLAT DE BROCHETTES\n  combien de plats?\n");
    
    printf(" veuillez entrer le nombre de plats\n");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 5: printf("  Menu\n  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n  veuillez entrer votre choix\n");
              scanf("%d",&choix);
    break;
    default : printf(" SVP\n Si notre menu ne vous sied pas veuillez signaler pour un menu personnel\n Ici le client est ROI\n");
    }
    break;
    
    case 4: printf(" Dessert\n 1.Grillons:1500F\n 2.chenilles grilles:4500F\n 3.Fruits:2000F\n 4.insectes grilles:5000F\n 5.Retour au menu\n");
    printf("veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix)
    { case 1: printf(" votre choix est GRILLONS\n  combien de plats?\n");
    
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 2: printf(" votre choix est CHENILLES GRILLES\n  combien de plats?\n");
    
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
     printf("ok");
    break;
      case 3: printf(" votre choix est FRUITS\n Quels fruits desirez vous?\n   1.Mangues\n   2.Ananas\n   3.Pastheques\n   4.Fraises\n   veuillez entrer votre choix\n");
              scanf("%d",&choix);
    switch(choix)
    { case 1: printf("ok");
    break;
      case 2: printf("ok");
    break;
      case 3: printf("ok");
    break;
      case 4: printf("ok");
    break;
    default : printf("Desolés nous ne disposons pas ces fruits aujourd'hui");}
    break;
      case 4: printf(" votre choix est INSECTES GRILLES\n  combien de plats?\n");
    
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 5: printf("  Menu\n  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n  veuillez entrer votre choix\n");
              scanf("%d",&choix);
    break;
    default : printf(" SVP\n Si notre menu ne vous sied pas veuillez signaler pour un menu personnel\n Ici le client est ROI\n");
    }
    break;
    
    case 5: printf(" Boissons\n 1.Sucreries: 700F la bouteille\n 2.Boissons fermentees:900F la bouteille\n 3.Boissons locales(tchouk):1200F la bouteille\n 4.Alcool pur(sodabi):1300F la bouteille\n 5.Retour au menu\n");
    printf("veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix)
    { case 1: printf("  Merci pour votre choix\n  Nous disposons de:\n   1.Youki\n   2.Chap\n   3.Chill\n   4.Youzou\n   5.Malta\n   6.Cocacola\n   7.Fanta\n  Veuillez entrer votre choix\n");
              scanf("%d",&choix);    
            switch(choix)
            { case 1: printf(" Votre choix est YOUKI\n  Combien de bouteilles?\n");
           
            printf(" Veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
              case 2: printf(" Votre choix est CHAP\n  Combien de bouteilles?\n");
          
            printf(" Veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
              case 3: printf(" Votre choix est CHILL\n  Combien de bouteilles?\n");
         
            printf(" veuillez entrer votre choix");
            scanf("%d",choix);
            printf("ok");
            break;
              case 4: printf(" votre choix est YOUZOU\n  combien de bouteilles?\n");
           
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
              case 5: printf(" votre choix est MALTA\n  combien de bouteilles?\n");
           
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
              case 6: printf(" votre choix est COCACOLA\n  combien de bouteilles?\n");

            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
             printf("ok");
            break;
              case 7: printf(" votre choix est FANTA\n  combien de bouteilles?\n");
            
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
            default : printf(" Desolés nous ne disposons pas ce gout aujourd'hui");
            }
    break;
      case 2: printf("  Merci pour votre choix\n  Nous disposons de:\n 1.Pils\n 2.Djama\n 3.Awooyo\n 4.Racines\n 5.Saison\n  Veuillez entrer votre choix\n");
              scanf("%d",&choix);
            switch(choix)
            { case 1: printf(" PILS une explosion de saveur\n  combien de bouteilles?\n");
         
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
               case 2: printf(" DJAMA une explosion de saveur\n  combien de bouteilles?\n");
         
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
               case 3: printf(" AWOOYO une explosion de saveur\n  combien de bouteilles?\n");
  
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
                case 4: printf(" RACINES une explosion de saveur\n  combien de bouteilles?\n");
         
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
                case 5: printf("SAISON une explosion de saveur\n  combien de bouteilles?\n");
            
            printf(" veuillez entrer votre choix");
            scanf("%d",&choix);
            printf("ok");
            break;
            default  : printf(" desolés nous ne disposons pas ce gout aujourd'hui");
            }
    break;
      case 3: printf("  Merci! votre choix est BOISSON LOCALE\n  combien de bouteilles?\n");
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 4: printf("  Merci! votre choix est ALCOOL PUR\n  Combien de bouteilles?\n");
    
    printf(" veuillez entrer votre choix");
    scanf("%d",&choix);
    printf("ok");
    break;
      case 5: printf("  Menu\n  1.Petit dejeuner\n  2.Dejeuner\n  3.Diner\n  4.Dessert\n  5.Boissons\n  veuillez entrer votre choix\n");
              scanf("%d",&choix);
    break;
    default : printf(" SVP\n Si notre menu ne vous sied pas veuillez signaler pour un menu personnel\n Ici le client est ROI\n");
    }
    break;
    default : printf(" SVP\n veuillez entrer votre choix dans le menu\n");
    }
    printf("     Votre choix a été bien enregistré\n        Le restaurant des ingenieurs est très heureux de vous rendre service\n         Merci!!!!!");
    
    return 0;
}