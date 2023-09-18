#include <stdio.h>
// Challenge 7 : tableu deux de  dimensions
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================================ Challenge 7 : array ============================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    printf("posible enter nomber de ling et colom enter (0 / 50)\n");
    int ling, colom, nomberDeling, nomberDecolms, laSomme = 0;
    printf("Ecrire le nomber de line ");
    scanf("%d", &ling);
    printf("Ecrire le nomber de colom ");
    scanf("%d", &colom);
    int tableDeDimontin[ling][colom];
    nomberDeling = sizeof(tableDeDimontin) / sizeof(tableDeDimontin[0]);
    nomberDecolms = sizeof(tableDeDimontin[0]) / sizeof(tableDeDimontin[0][0]);
    printf("nomberDeling = %d\n", nomberDeling);
    printf("nomberDecolms = %d\n", nomberDecolms);
    for (int i = 0; i < nomberDeling; i++)
    {
        for (int j = 0; j < nomberDecolms; j++)
        {
            printf("rembler le tableux tableDeDimontin[%d][%d] = ", i, j);
            scanf("%d", &tableDeDimontin[i][j]);
        }
    }
    for (int i = 0; i < nomberDeling; i++)
    {
        for (int j = 0; j < nomberDecolms; j++)
        {
            printf("%d ", tableDeDimontin[i][j]);
            laSomme += tableDeDimontin[i][j];
        }
        printf("\n");
    }
    printf("la somme %d\n", laSomme);
    return 0;
}
