#include <stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER FOR ARRAY 1 : ");
    scanf("%d", &a);
    int num1[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num1[i]);
    }
    int b;
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
    for (int i = 0; i < a; i++)
    {
        num[i] = num1[i];
    }
    for (int i = 0; i < b; i++)
    {
        num[a+i] = num2[i];
    }
    for (int i = 0; i < c; i++)
    {
        if (num[i]==-1)
        {
           continue;
        }
        for (int j = i+1; j < c; j++)
        {
            if (num[i]==num[j])
            {
                num[j]=-1;
            }
            
        }
        
    }
    for (int d = 0; d < c; d++)
    {
        if (num[d]!=-1)
        {
            printf("%d ",num[d]);
        }
        
    }
    
    return 0;
}