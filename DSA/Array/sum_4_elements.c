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
    printf("ENTER THE SUM NUMBER : ");
    scanf("%d",&t);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            for (int k = j + 1; k < a; k++)
            {
                for (int l = k + 1; l < a; l++)
                {
                    if (t == num[i] + num[j] + num[k] + num[l] && i != j && i != k && j != k && i!=l && j!=l && k!=l)
                    {
                        printf("[%d , %d , %d , %d]\n", num[i], num[j], num[k], num[l]);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}//1, -2, 3, 5, 7, 9