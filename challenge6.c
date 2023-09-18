#include <stdio.h>
#include <string.h>
// Challenge 6 : Localisation d’une lettre
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================================ Challenge 6 : array ============================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    char texte[] = {'Q', 'u', 'e', 'l', ' ', 's', 'i', 'n', 'i', 's', 't', 'r', 'e', ' ', 'm', 'o', 't', ' ', '!', '\0'};

    for (int i = 0; i < strlen(texte); i++)
    {
        if (texte[i] == 'm')
        {
            printf("La position de la lettre 'm' est : %d\n", i);
            texte[i] = 's';
            break;
        }
    }

    for (int i = 0; i < strlen(texte); i++)
    {
        if (texte[i] == 's')
        {
            printf("La position de la lettre 's' est : %d\n", i);
            texte[i] = 'm';
            break;
        }
    }
    printf("%s\n", texte);
    int c;
    int foud = 1;
    printf("ecrire un carcter : ");
    scanf("%c", &c);
    for (int i = 0; i < strlen(texte); i++)
    {
        if (texte[i] == c)
        {
            printf("La position de la lettre '%c' est : %d\n", c, i);
            foud = 0;
            break;
        }
    }
    if (foud == 1)
        printf("le cracter '%c' pas dans texte \n", c);
    return 0;
}
