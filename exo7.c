#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAILLE 100

void remplis(char Text[] , int *l) ;
void compte(char Text[] , int *a , int *es) ; 
void result(int a , int es) ;


int main()
{
    
    char text[TAILLE] ;
    int  a , es , L ;
    
    remplis(text , &L) ;
    compte(text , &a , &es) ;
    result(a , es) ;

return (0); 

}


void remplis(char Text[] , int *l)
{
	
	printf("\tCOMPTAGE DE \"a\" et \"es\" \n\n") ;
	do
	 {
	   
        printf("Saisir un petit texte : \n") ;
        fgets(Text,100,stdin) ;
        
        *l = strlen(Text) - 1 ;
     
     }while( ( Text[ *l - 1 ] != '.' ) || ( *l > TAILLE ) ) ;
     
     
}


void compte(char Text[] , int *a , int *es)
{
    
    int i ;
    
    *a = 0 ;
    *es = 0 ;

    for( i = 0 ; i != '.' ; i++ )
     {
        if( (Text[i] == 'a'))
         {
            (*a)++ ;
         }
  
        else if( (Text[i]=='e') && (Text[i+1] == 's') )
         {
            (*es)++ ;
         }
     }
   
   
}

void result(int a , int es)
{
	
	if( a > 0 )
	 {
	    printf("Le nombre d'apparition de 'a' dans ce texte est de : %d ",a) ;
     }
    else
     {
		printf("Il n'y a pas d'apparition de 'a' dans ce texte ") ;
     }
     
    printf("\n\n") ;
    if( es > 0 )
     {
        printf("Le nombre d'apparition de 'es' dans ce texte est de : %d ",es) ;
     }
    else
     {
		printf("Il n'y a pas d'apparition de 'es' dans ce texte") ;
	 }
    printf("\n\n") ;

	
}



  
