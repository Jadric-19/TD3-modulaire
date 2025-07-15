#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define TAILLE 100

void remplis(char Text[] , char big[] , int *l) ;
int compte(char Text[] , char big[] , int l) ;
void result(char big[] , int cmp) ;

int main()
{
    char text[TAILLE] , big[3];
    int compteur , l ;
    
    remplis(text , big , &l) ;
    compteur = compte(text , big , l) ;
    result(big , compteur) ; 
   
   
return (0);
    
}


void remplis(char Text[] , char big[] , int *l) 
{
	
    printf("\tPROGRAMME BIGRAMME \n\n") ;
    printf("Saisir un petit texte : \n ==> ") ;
    fgets(Text , 100 , stdin) ;
    printf("\n") ;
    
    do 
     {
       printf("Saisir le bigramme a rechercher : \n ==> ") ;
       scanf("%s" , big);
       
     }while( strlen(big) != 2 ) ;
     
    *l = strlen(Text) - 1 ;
    
    
}


int compte(char Text[] , char big[] , int l)
{
	
   int cmp , i ;
   
   cmp = 0 ;
   for( i = 0 ; i < l ; i++ )
    {
       if( Text[i]==big[0] && Text[i+1]==big[1] )
        {
            cmp++;   
        }
    }
    
    return cmp ;
    
}


void result(char big[] , int cmp)
{ 
	
	if( cmp > 0 )
	 {
 	   printf("\nIl existe %d  bigramme de < %s > dans votre chaîne . \n\n",cmp,big) ;
     }
    else
     {
		 printf("\nIl n'y a pas de bigramme de < %s > dans votre chaîne . \n\n",big) ;
	 }
	 
}
