#include <stdio.h>

int main()
{
    int a = 1;
    int r, c;
    printf("ENTER THE ROW NO : ");
    scanf("%d", &r);
    printf("ENTER THE ELEMENT NO : ");
    scanf("%d", &c);
    int pascal[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j]=1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            printf("%d", pascal[i][j]);
        }
        printf("\n");
    }
    printf("%d",pascal[r-1][c]);
    return 0;
}