#include <stdio.h>

int main()
{
    int numero, compteur;
    printf("Donne ton numero de classe : ")
    scanf("%d", &numero);  
    if ( numero == 3){
        printf("je t'aime bien")
    }else{
        printf("tete de neuille")
        for (compteur = 1; <= 6; compteur ++){
            printf("%d", compteur); 
        }
    }
    return 0; 
}