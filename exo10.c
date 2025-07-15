#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100


void remplis(char Text[] , int *l) ;
void cryptage(char Text[] , int *l) ; 
void affichage(char Text[]) ;

int main()
{
    char text[TAILLE] ;
    int L ;

    remplis(text , &L) ;
    cryptage(text , &L) ;
    affichage(text) ;

    return(0);
}

void remplis(char Text[] , int *l)
{
	
	printf("\tCRYPTAGE \"IT\" \n\n") ;
	printf("Saisir votre chaine : \n ==> ") ;
    fgets(Text , 100 , stdin) ;

    *l = strlen(Text) - 1 ;
    
    
}


void cryptage(char Text[] , int *l)
{
	
	int i , j , k ;
	char V[7] = "aoieyu" ;
	 for( i = 0 ; i < *l ; i++ )
      {
        for( j = 0 ; j < 7 ; j++ )
         {
            if( Text[i] != V[j] && Text[i+1] == V[j])
             {
                for(k = *l ; k > i; k--)
                 {
                    Text[k+2] = Text[k];/*On met de l'espace pour "IT" en declant vers la droite*/
                 }
               
                Text[i+1] = 'I';
                Text[i+2] = 'T';
                (*l) += 2 ;
                i += 2 ;

             }    
         }
      }


}


void affichage(char Text[])
{
	
	printf("\n") ;
    printf("Chaine crypter : \n ==> %s \n\n", Text) ;
 	
}
