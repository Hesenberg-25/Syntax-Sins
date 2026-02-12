#include <stdio.h>

int main()
{
    int a, z;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("ENTER THE SUM NUMBER : ");
    scanf("%d", &z);
    int count = 0;
    for (int j = 0; j < a; j++)
    {
        int sum = 0 ;
        for (int i = j; i < a; i++)
        {
            sum = sum + num[i];
            if (sum == z)
            {
                count++;

                break;
            }
        }
    }

    printf("%d", count);
    return 0;
}