#include <stdio.h>
#define TAILLE 100

void remplis(int T[] , int *N) ;
void affichage(int T[] , char Text[] , int N) ;
void resolution(int T[] , int N , int *a) ; 
void inser(int T[] , int *N , int a) ;
void delete(int T[] , int *N) ;
 
int main()
{
    int T[TAILLE] ;
    int N , a ;
    
    remplis(T , &N) ;
    affichage(T , "" , N) ;
    resolution(T , N , &a) ;
    affichage(T , "dont les paires sont en premiers" , N) ;
    inser(T , &N , a) ;
    affichage(T , "après ajout de nouvel élement" , N) ;  
    delete(T , &N);
    affichage(T , "après suppression d'un element" , N) ;
return (0);

}


void remplis(int T[] , int *N)
{
	
	int i ;
    
	printf("\tBienvenue sur notre Programme\n");
	printf("Entrer la taille du Tableau : ");
	scanf("%d" , N);
	printf("\nEntrer les élements du tableau : \n");
	for( i = 0 ; i < *N ; i++ )
	 {
		 printf("Saisir T[%d] : ",i+1);
		 scanf("%d" , &T[i]);
	 }
	 
}


void affichage(int T[] , char Text[] , int N)
{

	int i ;
	printf("\nAffichage des élements %s du Tableau : \n ==> ",Text);
	
	for( i = 0 ; i < N ; i++)
	 {
		 printf(" %d  ",T[i]);
	 }
	
	printf("\n\n");

}


void resolution(int T[] , int N , int *a)
{
	 int r , p , i ;
	 int tmp ;
	 
	 r = 0 ;
	 tmp = 0 ;
     for( i = 0 ; i < N ; i++)
      {
        r = T[i] % 2 ;
        
        if( r == 0 )
          {
           
            for( p = i ; p > *a ; p--)
              {
                tmp = T[p] ;
                T[p] =T[p-1];
                T[p-1] = tmp ;
               
                
              }
            
         (*a)++;
          
          }

      }
	
}

void inser(int T[] , int *N , int a) 
{   
	
	int p , X ;
	 
    printf("\n\nVous pouvez inserer un nouveau element au tableau : ");
    scanf("%d", &X);

    if((X%2) == 0 )
    {
        for( p = *N ; p > a ; p--) 
         {
            /*ici la valeur de a est a= la valeur de a++
            qui se situe a la condition que j'ai note condition(1)*/
            T[p] = T[p-1];
            T[p-1] = X ;
         }
    
    
   
    (*N)++;//on incremente la taille puisse que on insere un nouveau valeur
    }

    else 
     {
       T[*N] = X;
       (*N)++; 
     }


}


void delete(int T[] , int *N ) 
{
	int p , X ;
	
    printf("\n\n");
    printf("Vous pouvez supprimer element du tableau ! \n\n");
    
    do
    {
      printf("Saisir la position de l'element a supprimer: ");
      scanf("%d", &X);
    }while( X <= 0 || X > *N ) ;
    
    
    for( p = X-1 ; p < *N ; p++)
     {
            T[p]=T[X] ;
            T[X]=T[X+1] ;
            X++ ;
           
     }
    
    (*N)--;

    printf("\n\n");
    printf("Vous avez supprime un element dans notre tableau !! \n ");
    
    printf("\n\n");


}
