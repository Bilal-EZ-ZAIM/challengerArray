#include <stdio.h>

// Challenge 4 :
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ============================ Challenge  : Array =================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int lassom, moyanne, n, l, ptitNote , po , grandNote;
    printf("Saisissez les points entre 0 et 20. Si vous entrez une valeur en dehors de cette plage, le programme s'arrêteraF \n");
    printf("ecrevez le nomber : ");
    scanf("%d", &l);
    if (l > 20 && l < 0)
    {
        printf("stop le programe \n");
        return 0;
    }
    int tableDesNote[l];
    for (int i = 0; i < l; i++)
    {
        printf("ecrevez le nimiro %d : ", i + 1);
        scanf("%d", &tableDesNote[i]);
    }

    n = sizeof(tableDesNote) / sizeof(tableDesNote[0]);
    printf("le nomber des notes est : %d \n", n);
    for (int j = 0; j < l; j++)
    {
        lassom += tableDesNote[j];
    }
    moyanne = lassom / n;
    printf("la moyenne : %d\n", moyanne);
    for (int u = 0; u < n; u++)
    {
        if (tableDesNote[u] == moyanne)
        {
            printf("la note %d est egal la moyenne \n", tableDesNote[u]);
        }
        else if (tableDesNote[u] > moyanne)
        {
            printf("la note %d est supérieur la moyenne \n", tableDesNote[u]);
        }
        else
        {
            printf("la note %d est inférieur la moyenne \n", tableDesNote[u]);
        }
    }
    printf("les notes supérieures à la moyenne \n");
    for (int a = 0; a < n; a++)
    {
        if (tableDesNote[a] > moyanne)
        {
            printf("%d  \n", tableDesNote[a]);
        }
    }
    ptitNote = tableDesNote[0];
    for (int p = 0; p < n; p++)
    {
        if (tableDesNote[p] < ptitNote)
        {
            ptitNote = tableDesNote[p];
            po = p;
        }
    }
    printf("la ptit note est %d \n", ptitNote);
    printf("la posistion de ptit note est %d \n", po + 1);

    for (int g = 0; g < n; g++)
    {
        if (tableDesNote[g] > grandNote)
        {
            grandNote = tableDesNote[g];
            po = g;
        }
    }
    printf("la grand note est %d \n", grandNote);
    printf("la posistion de grand note est %d \n", po + 1);
    return 0;
}
