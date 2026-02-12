#include <stdio.h>

int main()
{
    int a;
    printf("THIS IS A SQUARE MATRIX SO NO OF ROWS AND COLUMN SHOULD BE EQUAL.\n");
    printf("ENTER THE NO OF (ROWS/COLUMN) : ");
    scanf("%d", &a);
    int smat[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("ENTER THE ELEMENT AT %d , %d : ", i + 1, j + 1);
            scanf("%d", &smat[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            int temp = smat[i][j];
            smat[i][j] = smat[j][i];
            smat[j][i] = temp;
        }
    }

    for (int z = 0; z < a; z++)
    {
        for (int y = 0; y < a/2; y++)
        {
            int temp = smat[z][y];
            smat[z][y] = smat[z][a - 1 - y];
            smat[z][a - 1 - y] = temp;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", smat[i][j]);
        }
        printf("\n");
    }

    return 0;
}