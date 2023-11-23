//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Inicio del programa
int main (int argc, char const *argv[])
{
    //Entrada de variables e impresiones de entrada
    int n , m; 
    printf("Ingrese filas: ");
    scanf("%d", &n);    
    printf("Ingrese columas: ");
    scanf("%d", &m);
    //Instruccion aletoria
    srand (time(NULL));
    //Entrada de resulado 1 e impresion de titulo de matriz original
    int Matriz[n][m];
    printf("Matriz Original: \n"); 
    //Inicio de funciones 
    for (int i = 0; i < n; i++)
    {          
        printf("\n");        
        for(int j = 0; j < m; j++){ 
            //Calculos necesarios para numeros aletorios de 0 a 100 e impresion de dichos numeros en la matriz original   
            Matriz[i][j]=rand()%101;; 
            printf("%d\t", Matriz[i][j]);                       
        }
    }
    //Entrada de resulado 2 e impresion de titulo de matriz transpuesta
    int Matriz2[m][n];   
    printf("\n"); 
    printf("\nMatriz Transpuesta: \n \n");     

    for (int i = 0; i < n; i++)
    {               
        for(int j = 0; j < m; j++){  
            //Calculos necesarios la matriz transpuesta
            Matriz2[i][j]=Matriz[j][i];          
            printf("%d\t", Matriz2[i][j]);                                             
        }
        printf("\n");
    } 
    return 0;
}