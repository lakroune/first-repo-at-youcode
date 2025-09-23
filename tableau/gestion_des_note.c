#include <stdio.h>

// fficher toutes les notes.

void affiche_les_notes(int taille_de_table, float table_des_notes[])
{
    int i;
    for (i = 0; i < taille_de_table; i++)
        printf("note num %d = %.2f \n", i + 1, table_des_notes[i]);
}

// Calculer et afficher la moyenne.
float calcule_le_moyenne(int taille_de_table, float table_des_notes[])
{
    int i;
    float sum = 0;
    for (i = 0; i < taille_de_table; i++)
        sum += table_des_notes[i];
    return sum / taille_de_table;
}

// Trouver et afficher la note maximale

void Trouver_et_afiche_la_note_maximale(int taille_de_table, float table_des_notes[])
{
    int i;
    float max = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (max < table_des_notes[i])
            max = table_des_notes[i];
     printf(" la note maximale n%.2f .\n", max);
}

//  fonction pour trouver la note minimale.
float  trouver_la_note_minimale(float taille_de_table, float table_des_notes[])
{
    int i;
    float min = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (min > table_des_notes[i])
            min = table_des_notes[i];
    return min;
}



int main()
{
    int nombre_des_notes, i;

    printf("svp donne la nombre des notes .");
    scanf("%d", &nombre_des_notes);

    float notes[nombre_des_notes];
    printf("svp donne saisir les  notes .");
    for (i = 0; i < nombre_des_notes; i++)
    {
        printf("note n%d .", i + 1);
        scanf("%f", &notes[i]);
    }

    affiche_les_notes(nombre_des_notes,notes);
    Trouver_et_afiche_la_note_maximale(nombre_des_notes,notes);
    printf("la note  maximal est %.2f .",trouver_la_note_minimale(nombre_des_notes,notes));
    printf("la moyenne des notes est  %.2f ", calcule_le_moyenne(nombre_des_notes,notes));

}

