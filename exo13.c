#include <stdio.h>
#define TAILLE 100


int demande() ;
void calcul(int Tab[][TAILLE] , int N) ;
void result(int Tab[][TAILLE] , int N) ;

int main()
{
    
    int Tab[TAILLE][TAILLE]={0} ;
    int N ;
    
    N = demande() ;
    calcul(Tab , N) ;
    result(Tab , N) ;

  return (0);
 
}
 
 
int demande()
{
	
	int N ;
	
	printf("\tTRIANGLE DE PASCAL \n\n") ;
    printf("Saisir le nombre de ligne : ") ;
    scanf("%d", &N ) ;
    
    return (N) ;
    
    
}


void calcul(int Tab[][TAILLE] , int N)
{
	
	int i , j ;
	
    Tab[0][0]=1; 
    for(i = 0 ; i < N ; i++ )
     {
        Tab[i][0]=1;
        Tab[i][i]=1;
        for( j = 1 ; j < i; j++ )
         {
         
            Tab[i][j]= Tab[i-1][j-1] + Tab[i-1][j];
            
         }
     }


}


void result(int Tab[][TAILLE] , int N)
{
	
	int i , j ;
	
    for(i = 0 ; i < N ; i++ )
     {
        for( j = 0 ; j < N ; j++ )
         {
            if( Tab[i][j] != 0)
             {
               printf(" %d \t", Tab[i][j] );
             }
         }
         
        printf("\n\n");
     }

    printf("\n\n");


}
