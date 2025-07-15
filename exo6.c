#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

void remplis(char chaine[] , int *l) ;
void copie(char chaine[] , char pal[] , int l) ;
void resultat(char chaine[] , char pal[]) ;

int main()
{
  
    char chaine[TAILLE] , pal[TAILLE] ;
    int  l ;
    
    remplis(chaine , &l) ;
    copie(chaine , pal , l) ;
    resultat(chaine , pal);


  
return (0) ;

}


void remplis(char chaine[] , int *l)
{
    
    printf("\tON VA DIRE SI UNE CHAINE EST PALINDROME OU PAS\n\n");

    printf("Saisir une chaine sans espace : \n ==> ") ;
    scanf("%s" , chaine ) ;
    *l = strlen(chaine) ;
    
    printf("\n\n") ;
    
}


void copie(char chaine[] , char pal[] , int l)
{
	int i ;
	for( i = l ; i > 0 ; i--)
     {
        pal[l-i] = chaine[i-1] ;
     }

}


void resultat(char chaine[] , char pal[])
{
	
    if((strcmp(pal,chaine)) == 0 )
     {
        printf("\nLa chaine que vous avez saisi est un palindrome") ; 
     }
    else
     {
        printf("\nLa chaine que vous avez saisi n'est pas un palindrome") ;
     }

    printf("\n\n") ;
	
}
