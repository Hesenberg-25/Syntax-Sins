#include <stdio.h>

int main()
{
    int a;
    int profit = 0;
    int profitm = 0;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            profit = num[j] - num[i];
            if (profit > 0)
            {
                profitm = profit;
            }
        }
    }

    printf("TOTAL PROFIT = %d", profitm);
    return 0;
}