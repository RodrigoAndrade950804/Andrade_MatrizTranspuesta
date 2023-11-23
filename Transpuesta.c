#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char const *argv[])
{
    int n , m; 
    printf("Ingrese filas: ");
    scanf("%d", &n);    
    printf("Ingrese columas: ");
    scanf("%d", &m);
    srand (time(NULL));
    int Matriz[n][m];
    printf("Matriz Original: \n"); 
        for (int i = 0; i < n; i++)
    {       
        printf("\n");        
        for(int j = 0; j < m; j++){    
            Matriz[i][j]=rand()%101;; 
            printf("%d\t", Matriz[i][j]);                       
        }
    }
    int Matriz2[m][n];   
    printf("\n"); 
    printf("\nMatriz Transpuesta: \n \n");     

    for (int i = 0; i < n; i++)
    {               
        for(int j = 0; j < m; j++){  
            Matriz2[i][j]=Matriz[j][i];          
            printf("%d\t", Matriz2[i][j]);                                             
        }
        printf("\n");
    } 
    return 0;
}