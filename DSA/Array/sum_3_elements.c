#include <stdio.h>

int main()
{
    int a, t;
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
        for (int j = i+1; j < a; j++)
        {
            for (int k = j+1; k < a; k++)
            {
                if (0 == num[i] + num[j] + num[k] && i!=j && i!=k && j!=k)
                {
                    printf(" [%d , %d , %d]\n", num[i], num[j], num[k]);
                    break;
                }
            }
        }
    }

    return 0;
}
//2, -2, 0, 3, -3, 5