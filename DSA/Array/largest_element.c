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
    int largest;
    largest = num[0];
    for (int i = 0; i < a; i++)
    {
        if (largest < num[i])
        {
            largest = num[i];
        }
    }
    printf("%d",largest);
    return 0;
}