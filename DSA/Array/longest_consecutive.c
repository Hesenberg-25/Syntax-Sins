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
    int count;
    int final = 0;
    for (int i = 0; i < a; i++)
    {
        count = 0;

        int target = num[i];
        for (int j = 0; j < a; j++)
        {
            if (num[j] == target + 1 + j)
            {
                count++;
                break;
            }
        }
        if (count > final)
        {
            final = count;
        }
    }

    printf("%d", final);
    return 0;
}
// 100,4,200,1,3,2