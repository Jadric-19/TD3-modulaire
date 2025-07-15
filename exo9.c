#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100


void remplis(char W[] , int *l) ;
void operation(char W[] , char U[] , char U1[] , int l ) ;
void result(char U[] , char U1[]) ;


int main()
{
  char W[TAILLE] , U[TAILLE] , U1[TAILLE] ;
  int L ;
  
  remplis(W , &L) ;
  operation(W , U , U1 , L) ;
  result(U , U1) ; 
  
  

return (0);

}


void remplis(char W[] , int *l)
{
	 
	 printf("Saisir votre chaine : \n ==> ") ;
     scanf("%s" ,W) ;

     *l = strlen(W) ;
     
}


void operation(char W[] , char U[] , char U1[] , int l )
{
	
    int i , r ;

    printf("\n") ;
    
    r = l % 2 ;
    if( r != 0 )
     {
        printf("La chaine n'est pas carrer\n") ;
        printf("\n\n") ;
        exit (0);
     }
  
    for( i = 0 ; i < (l/2) ; i++)
     {
        U[i] = W[i] ;
        U1[i] = W[i+(l/2)] ;

     }
   
   
}


void result(char U[] , char U1[])
{
	
	if((strcmp(U1,U) == 0))
    {
       printf("Le chaine que vous avez donné est carré \n") ;
    }
    else 
     {
        printf("La chaine n'est pas carré magique \n") ;
     }

    printf("\n\n") ;


}
