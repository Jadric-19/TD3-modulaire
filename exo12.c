#include <stdio.h>
#define TAILLE 100 

void remplis(int Tab[][TAILLE] , int *l , int *c) ;
void somme_L(int Tab[][TAILLE] , int T[] , int l , int c , int *a) ;
void somme_C(int Tab[][TAILLE] , int J[] , int l , int c , int *b) ;
void affiche_matriciel(int Tab[][TAILLE] , int l , int c) ;
void affiche_S(int T[] , char Text[] , int N) ;
void resultat(int T[] , int J[] , int a , int b) ;

int main()
{
	int Tab[TAILLE][TAILLE] , J[TAILLE] , T[TAILLE] ;
	int C , L , a , b ;
	
	remplis(Tab , &L , &C) ;
	somme_L(Tab , T , L , C , &a) ;
	somme_C(Tab , J , L , C , &b) ;
	affiche_matriciel(Tab , L , C) ;
	affiche_S(T , "ligne" , a) ;
	affiche_S(J , "colonne" , b) ;
	resultat(T , J , a , b) ;
	
	return (0) ;
	
}

void remplis(int T[][TAILLE] , int *l , int *c)
{
	
	int i , j ;
	
    printf("\t CARRE MAGIQUE  \n\n") ;
    printf("Saisir le nombre de ligne : \n ==> ") ;
    scanf("%d", l) ;
    printf("Saisir le nombre de colonne : \n ==> ") ;
    scanf("%d", c) ;
    printf("\n\n") ;

    for( i = 0 ; i < *l ; i++)
     {
		 for( j = 0 ; j < *c ; j++ )
          {
             printf("Entrer Tab[%d][%d] : ", i , j) ;
             scanf("%d", &T[i][j]) ;
          }    
         printf("\n") ;  
      }
      
      
}


void somme_L(int Tab[][TAILLE] , int T[] , int l , int c , int *a)
{
	
	int i , j , S ;
	*a = 0 ;
	/*On va stocker les sommes de ligne dans un tableau */  
    for( i = 0 ; i < l ; i++ )
     { 
        S = 0 ;
        for( j = 0 ; j < c ; j++ )
         {
            S = Tab[i][j] + S ;
         }
    
         T[i]= S ;
         (*a)++;
    }
    
    
}


void somme_C(int Tab[][TAILLE] , int J[] , int l , int c , int *b)
{
	
	 /*On va stocker les somme colonne dans un autre tableau */
     int i , j , S ; 
     
     *b = 0 ; 
     for( j = 0 ; j < c ; j++ )
      { 
         S = 0 ;
         for( i = 0 ; i < l ; i++ )
          {
             S = Tab[i][j] + S ;
          }
       
         J[j]= S ;
         (*b)++;
     }
     
     
}


    /*On afficher la forme matricielle */
   
void affiche_matriciel(int Tab[][TAILLE] , int l , int c)
{
	
	int i , j ;
	    
    for( i = 0 ; i < l ; i++ )
     {
        for( j = 0 ; j < c ; j++ )
         {
  
          printf(" %d ", Tab[i][j] );

         }
         
         printf("\n\n");
     }


}


/*On  vas maintenant afficher les somme des lignes*/
     
     
void affiche_S(int T[] , char Text[] , int N)
{     
       
    int i ;
    
    printf("\n La somme du %s numero :  \n",Text) ;
    for( i = 0 ; i < N ; i++ )
     {
         printf(" %d est : %d \n", i+1 , T[i]) ;
     }

     
}


 /*On va faire une comparaison sur les sommes des lignes et colonnes */
  /*Si la comparaison est egal alors cela sera un carrer magique le cas contraire sinon*/
  /*c est une variable Boolen elle renvoye 0 si et stop directement la boucle */
  /*si elle rencontre une somme differente de l'autre*/ 
 
void resultat(int T[] , int J[] , int a , int b)
{
	int i , j , c ; 
    
    c = 1 ;
    for( i=0 ; i < a ; i++ )
     {
       for( j = 0 ; j < b ; j++ )
        {
          if( T[i] != J[j] )
           {
              c = 0;
              break;
           }
          else 
           {
             continue;
           }
       
        }

     }

     if( c )
      {
         printf("\nC'est un carre magique \n\n");
      }

     else
      {
         printf("\nCe n'est pas un carre magique \n\n");
      }
      
}
