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
    for (int i = a - 2; i >= 0; i--)
    {
        if (num[a - 1] > num[i])
        {
            int temp = num[a - 1];
            num[a - 1] = num[i];
            num[i] = temp;
            break;
        }
        break;
    }
    for (int j = 0; j < a; j++)
    {
        printf("%d ", num[j]);
    }

    return 0;
}