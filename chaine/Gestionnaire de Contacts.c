// 4. Mini-Projet : Gestionnaire de Contacts
// Contexte : Créez un programme qui :
// Demande à l'utilisateur de saisir un nom et un numéro de téléphone.
// Stocke ces informations dans une chaîne formatée.
// Affiche tous les contacts ajoutés.
// Bonus : Ajoutez une fonction de recherche par nom.
// Exemple d'exécution :
// --- Gestionnaire de Contacts ---
// 1. Ajouter un contact
// 2. Afficher tous les contacts
// 3. Rechercher un contact
// 4. Quitter
// Choix : 1
// Nom : Alice
// Numéro : 0612345678
// Contact ajouté avec succès!

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//fonction qui Demande à l'utilisateur de saisir un nom et un numéro de téléphone.

char * ajouter_contact( ){
char nom[10],num_tele[10];
char nom[10],num_tele[10],* contact = malloc(100);
printf("entre le nom : ");
scanf("%s",&nom);
system("cls");
getchar();
printf("entre le nemuro de telephone : ");
scanf("%s",&num_tele);
system("cls");
strcpy(contact,"nom :");
strcat(contact,nom); 
strcat(contact,"\n Numero  :");
strcat(contact,num_tele); 
printf("%s \nContact ajoute avec succes!",contact);
return contact;
}

char  Afficher_tous_les_contacts(){
char nom[10],num_tele[10],* contact = malloc(100);
printf("entre le nom : ");
scanf("%s",&nom);
system("cls");
getchar();
printf("entre le nemuro de telephone : ");
scanf("%s",&num_tele);
system("cls");
strcpy(contact,"nom :");
strcat(contact,nom); 
strcat(contact,"\n Numero  :");
strcat(contact,num_tele); 
return contact;
}

void menu(){

    printf("\n1. Ajouter un contact \n2. Afficher tous les contacts \n3. Rechercher un contact \n4. Quitter");

}



int main(){
char *chaine = malloc(10 * sizeof(char*));

//  chaine[0]= malloc(10 * sizeof(char*));
 chaine= ajouter_contact(chaine);

 printf("%s", chaine);

// menu();


}