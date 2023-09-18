#include <stdio.h>

// Challenge 3 : les trie de plus grand au plus petit
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ================================ Challenge 3 : array ============================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    int tableu[10] ;
    int swap = 0;

    for(int i = 0 ; i < 10 ; i++){
        printf("ecrevez le nimiro %d : " , i + 1);
        scanf("%d",&tableu[i]);
    }
    for(int j = 1 ; j < 10 ; j++){
        for(int u = 0 ; u < j ; u++){
            if(tableu[j] > tableu[u]){
                swap = tableu[j];
                tableu[j] = tableu[u];
                tableu[u] = swap;
            }
        }
    }
    for(int a = 0 ; a < 10 ; a++){
        printf("tableu[%d]  %d\n", a + 1 ,tableu[a]);
    }

    return 0;
}
