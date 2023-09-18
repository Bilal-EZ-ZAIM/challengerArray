#include <stdio.h>
#include <string.h>
// Challenge 5 : Nombre de caractères dans une chaîne
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================================ Challenge 5 : array ============================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    char nom[15];

    printf("ecrivez le nom : ");
    scanf("%s",nom);
    printf("le nom : %s\n", nom);

    printf("le nomber de caracter est  : %d", strlen(nom));

    return 0;
}
