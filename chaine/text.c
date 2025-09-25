// Objectif :

// Aujourd’hui, vous allez renforcer vos compétences en programmation C en résolvant des problèmes mathématiques avec des tableaux et des fonctions. Vous pratiquerez l’écriture de code modulaire et réutilisable tout en travaillant sur des concepts comme les suites de Fibonacci, les factoriels, les nombres premiers, et bien plus.

// Instructions :


// Vous recevrez un défi à la fois.

// Chaque défi comporte 3 mises à jour progressives : commencez par le problème de base et ajoutez les améliorations après avoir terminé chaque étape.

// Utilisez le programme de départ fourni pour saisir et afficher les tableaux. Concentrez-vous sur l’implémentation des fonctions pour votre défi.

// Chaque défi est prévu pour être résolu en environ 15 minutes.



// Programme de départ :
// =====================================================================
#include <stdio.h>

#define SIZE 100  // Maximum array size

// Function prototypes

void inputArray(int arr[], int n);

void printArray(int arr[], int n);



int main() {

    int n, arr[SIZE];



    printf("Enter the number of elements (max %d): ", SIZE);

    scanf("%d", &n);



    inputArray(arr, n);

    printArray(arr, n);



    // Call your challenge function here



    return 0;

}



void inputArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        printf("Enter element %d: ", i + 1);

        scanf("%d", &arr[i]);

    }

}



void printArray(int arr[], int n) {

    printf("Array elements: ");

    for(int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");


}