
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Créez une application console pour gérer
//  une liste de tâches à faire (ToDo list),
//  en permettant l'ajout, la modification, la
//   suppression et l'affichage des tâches.

void clear_screan()
{
    system("cls");
}
void ToDo_list()
{
    int tache;

    do
    {
        printf("-------ToDo list----------\n");
        printf("ajoute une tache\n");
        printf("modifier une tache\n");
        printf("suppremier une tache\n");
        printf("afficher une tache\n");
        printf("quiter\n");

        switch (tache)
        {
        case 1:
            clear_screan();
            break;
        case 2:
            clear_screan();

            break;
        case 3:
            clear_screan();

            break;
        case 4:
            clear_screan();

            break;
        case 0:
            clear_screan();
            break;

        default:
            clear_screan();
            break;
        }
        /* code */
    } while (tache == 0);
}

int main()
{
    ToDo_list();
}