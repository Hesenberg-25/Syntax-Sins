#include <stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    int t = a / 2;
    for (int i = 0; i < a; i++)
    {
        int count = 0;
        int print = 0;

        for (int j = 0; j < i; j++)
        {
            if (num[j] == num[i])
            {
                print = 1;
                break;
            }
        }
        if (print == 1)
        {
            continue;
        }
        for (int k = 0; k < a; k++)
        {
            if (num[i] == num[k])
            {
                count++;
            }
        }
        if (count > t)
        {
            printf("%d ", num[i]);
        }
    }

    return 0;
}