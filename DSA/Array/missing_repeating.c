#include <stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT : ");
    scanf("%d", &a);
    int num[a];
    int final[2];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            if (num[i] == num[j])
            {
                final[0] = num[i];
            }
        }
    }
    int count;
    for (int i = 1; i < a + 1; i++)
    {
        count = 0;
        for (int j = 0; j < a; j++)
        {
            if (num[j] == i)
            {
                count++;
            }
        }
        if (count < 1)
        {
           final[1] = i;
        }
    }

    printf("%d , %d", final[0],final[1]);
    return 0;
} // 3,5,4,1,1