#include <stdio.h>

// Challenge 1 : Déclarer un tableau  et aficher
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ============================ Challenge 1 : Array =================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();


    int tableu[10];

    for (int i = 0; i < 10; i++)
    {

        tableu[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", tableu[i]);

        if (i < 9)
        {
            printf(" , ");
        }
    }

    printf("\n");

    return 0;
}
