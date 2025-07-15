#include <stdio.h>
#define MAX1 50
#define MAX2 100

void remplis(int T[] , int *N , int j) ;
void afficher(int T[], char Text[] , int n) ;
void supprimerElements(int T1[], int *n1, int T2[], int n2) ;



int main() 
{
    int T1[MAX1] , T2[MAX2] ;
    int N1 , N2 ;
  
    printf("\tBienvenue sur notre Programme\n") ;
    remplis(T1 , &N1 , 1) ;
    remplis(T2 , &N2 , 2) ;
    afficher(T1, "T1 avant suppression" , N1) ;
    afficher(T2, "Les elements de T2 : " ,N2) ;
    supprimerElements(T1, &N1, T2, N2) ;
    afficher(T1,  "T1 apres suppression" , N1) ;

    return 0;
}


void remplis(int T[] , int *N , int j)
{
	
	int i ;
    
	printf("\nEntrer la taille du Tableau T%d: ",j) ;
	scanf("%d" , N);
	printf("\nEntrer les élements du tableau : \n") ;
	for( i = 0 ; i < *N ; i++ )
	 {
		 printf("Saisir T%d[%d] : ", j , i+1);
		 scanf("%d" , &T[i]);
	 }
	 
}


void afficher(int T[] , char Text[] , int N) 
{
	
	int i ;
	
	printf("\n %s ",Text);
    for ( i = 0 ; i < N ; i++)
     {
        printf("%d ", T[i]);
     }
    printf("\n");
    
    
}


void supprimerElements(int T1[], int *n1, int T2[], int n2) 
{
	
	int i , j , k , val ;
	
	val = 0 ;
	 
    for ( i = 0 ; i < n2 ; i++)
     {
        val = T2[i];
        for ( j = 0 ; j < *n1 ; j++ )
         {
            if (T1[j] == val)
             {
                // Décalage vers la gauche
                for ( k = j ; k < (*n1 - 1) ; k++ )
                 {
                    T1[k] = T1[k + 1];
                 }
                (*n1)--; // Taille de T1 diminue
                j--; // Reste à la même position pour vérifier le nouveau T1[j]
            }
        }
    }
    
    
}
