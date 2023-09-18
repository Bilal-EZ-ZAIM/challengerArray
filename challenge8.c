#include <stdio.h>

// Challenge 8 : tableu
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================================ Challenge 8 : array ============================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int nomberDeling, nomberDecolms, l;
    char tableuDe[3][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i', 'j', 'k', 'l'},
    };

    nomberDeling = sizeof(tableuDe) / sizeof(tableuDe[0]);
    nomberDecolms = sizeof(tableuDe[0]) / sizeof(tableuDe[0][0]);
    l = nomberDeling  * nomberDecolms;
    char tableuxUnmonstion[l];
    for (int i = 0; i < nomberDeling; i++)
    {
        for (int j = 0; j < nomberDecolms; j++)
        {
            printf("%c ", tableuDe[i][j]);
        }
        printf("\n");
    }
    int index = 0;
    for(int i = 0 ; i < nomberDeling ; i++){
        for (int j = 0; j < nomberDecolms; j++)
        {
            tableuxUnmonstion[index] = tableuDe[i][j];
            index++;
        }
    }
    printf("tableu un demintion\n");
    for(int i = 0 ; i < l ; i++){
        printf("%c " , tableuxUnmonstion[i]);
    }
    return 0;
}