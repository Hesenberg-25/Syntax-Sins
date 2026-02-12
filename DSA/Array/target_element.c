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
    printf("ENTER THE TARGET ELEMENT : ");
    int t;
    scanf("%d", &t);
    for (int i = 0; i < a; i++)
    {
        if (num[i] == t)
        {
            printf("%d\n", i);
            break;
        }
        else
        {
            printf("%d", -1);
        }
    }

    return 0;
}