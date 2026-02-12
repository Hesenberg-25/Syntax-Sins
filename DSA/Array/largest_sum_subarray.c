#include <stdio.h>

int main()
{
    int a;

    int summax = 0;
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
        int sum = 0;
        for (int j = i; j < a; j++)
        {
            sum = sum + num[j];
            if (sum > summax)
            {
                summax = sum;
                printf("%d ", num[j]);
            }
        }
    }
    printf("%d ", summax);
    return 0;
}// -2,1,-3,4,-1,2,1,-5,4