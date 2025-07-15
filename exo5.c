#include <stdio.h>
#include <math.h>
#define TAILLE 100

void remplis(int T[] , int *N) ;
void affichage(int T[] , int N) ;
void resolution(int T[] , int N , float *M , int *note) ;
void resultat(float M , int note) ;

int main()
{

    int T[TAILLE] ;
    int N , note ;
    float moyenne ;
    
    remplis(T , &N) ;
    resolution(T , N , &moyenne , &note ) ;
    affichage(T , N) ;
    resultat(moyenne , note) ;
    
       

return (0);    
}


void remplis(int T[] , int *N)
{
	
	int i ;
	
    printf("\n VOS NOTES DOIVENT ETRE ENTRE  0 ET 20\n\n") ;
    printf("Combien de note voulez vous saisir ?\n ==> ") ;
    scanf("%d", N);
    printf("\n") ;

    for( i = 0 ; i < *N ; i++)
     {
        printf("veuillez inserer la note numero %d : ", i+1) ;
        scanf("%d", &T[i]) ;
        
     }  


}

 
void affichage(int T[] , int N)
{
	
	int i ;
	
	printf("\nLes notes que vous avez saisi sont : \n") ;

    for( i = 0 ; i < N ; i++ )
     {
        printf(" %d ", T[i]) ;
     }

	
}


void resolution(int T[] , int N , float *M , int *note)
{
	
	int T1[N] ;
	int i , S  , B ; 
	int min ;
	
	S = 0 ;
    for( i = 0 ; i < N ; i++ )
     {
        S = S + T[i] ;
     } 

     *M = S / N ; 
       
     for( i = 0 ; i < N ; i++)
      {
         B = fabs( *M - T[i] ) ;
         T1[i] = B ;
        
      }

     min = T1[0] ; 

     for( i = 0 ; i < N ; i++ )
      { 
         if( T1[i] < min )
          {
             min = T1[i] ; 
             *note = T[i] ;
          }
      }
      
      	
}
 

void resultat(float M , int note)
{

    printf("\nLa moyenne est : %.2f \n", M ) ;
    printf("\nEt la note la plus proche de la moyenne est : %d", note ) ;   
    printf("\n") ;

}
