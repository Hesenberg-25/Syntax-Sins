#include <stdio.h>

int main()
{
    int a, b;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMN : ");
    scanf("%d", &b);
    int mat[a][b];
    int mat2[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("ENTER THE ELEMENT AT %d , %d : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            mat2[i][j]=mat[i][j];

        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < b; k++)
                {
                    mat2[i][k] = 0;
                }
                for (int k = 0; k < a; k++)
                {
                    mat2[k][j] = 0;
                }
            }
        }
    }
    printf("\nModified Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}