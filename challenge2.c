#include <stdio.h>

// Challenge 2 :  Afficher le tableau, ainsi que le nombre le plus petit et le plus grand
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ============================ Challenge  :  tableau ==============================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    int tablEnteir[10];
    int grand = 0, ptit = 0;
    int l = sizeof(tablEnteir) / sizeof(tablEnteir[0]);

    for (int i = 0; i < l; i++)
    {
        printf("ecrevez le nomber  %d   : ", i + 1);
        scanf("%d", &tablEnteir[i]);
    }
    ptit = tablEnteir[0];
    for (int j = 0; j < l; j++)
    {
        
        if (tablEnteir[j] > grand)
        {
            grand = tablEnteir[j];
        }
        if (tablEnteir[j] < ptit)
        {
            ptit = tablEnteir[j];
        }
    }
    for (int u = 0; u < l; u++)
    {
        printf("le nomber table[%d] =  %d \n", u, tablEnteir[u]);
    }

    printf("grand  : %d  \n", grand);
    printf("ptit  : %d  ", ptit);
}