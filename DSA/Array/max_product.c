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
    int mul;

    int mulf = num[0];

    for (int i = 0; i < a; i++)
    {
        int mul = 1;
        for (int j = i; j < a; j++)
        {
            mul *= num[j];
            if (mul > mulf)
                mulf = mul;
        }
    }
    printf("%d", mulf);
    return 0;
} // 4, 5, 3, 7, 1, 2
