#include <stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    int num2[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    int posindex = 0;
    int negindex = 1;
    for (int i = 0; i < a; i++)
    {
        if (num[i] >= 0 && posindex < a)
        {
            num2[posindex] = num[i];
            posindex = posindex + 2;
        }
        else if (num[i] < 0 && negindex < a)
        {
            num2[negindex] = num[i];
            negindex = negindex + 2;
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", num2[i]);
    }

    return 0;
}