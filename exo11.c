#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100


void remplis(char Text[] , int *l) ;
void decryptage(char Text[] , int *l) ; 
void affichage(char Text[]) ;

int main()
{
    char text[TAILLE] ;
    int L ;

    remplis(text , &L) ;
    decryptage(text , &L) ;
    affichage(text) ;

    return(0);
}


void remplis(char Text[] , int *l)
{
	
	printf("\tDECRYPTAGE \"IT\" \n\n") ;
	printf("Saisir votre chaine : \n ==> ") ;
    fgets(Text , 100 , stdin) ;

    *l = strlen(Text) - 1 ;
    
    
}


void decryptage(char Text[] , int *l)
{
	
	int i , k ;
	
	for( i = 0 ; i < *l ; i++ )
     {
        if(Text[i]== 'I' && Text[i+1] == 'T')
         {
            for( k = i ; k < *l ; k++ )
             {
                Text[k] = Text[ k + 2 ] ;/*On ecrase "IT" en declant vers la gauche*/
             } 
            
            (*l) -= 2 ;
         }  
     
     }
  

}


void affichage(char Text[])
{
    
    printf("\n") ;
    printf("Chaine decrypter : \n ==> %s \n\n",Text) ;
    
    
}
