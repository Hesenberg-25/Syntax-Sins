#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER FOR ARRAY 1 : ");
    scanf("%d", &a);
    int num1[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num1[i]);
    }
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER FOR ARRAY 2 : ");
    scanf("%d", &b);
    int num2[b];
    for (int i = 0; i < b; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num2[i]);
    }
    int c = a + b;
    int num[c];
    int numm[c];
    for (int i = 0; i < a; i++)
    {
        num[i] = num1[i];
        numm[i] = num1[i];
    }
    for (int i = a; i < a + b; i++)
    {
        num[i] = num2[i - a];
        numm[i] = num2[i - a];
    }

    int count = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (num[j] > num[j+1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {   
        if (num[i]==0)
        {
            continue;
        }
        
        printf("%d ", num[i]);
    }
    return 0;
} //[-5, -2, 4, 5] [-3, 1, 8]
//[1,2,3,0,0,0],[2,5,6]