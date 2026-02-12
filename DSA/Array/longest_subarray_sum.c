#include <stdio.h>

int main()
{
    int a;
    int element;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    int max=0;
    int sum=0;
    int len=0;
    for (int j = 0; j < a; j++)
    {
        sum = 0;
        for (int i = j; i < a; i++)
        {
            sum = sum + num[i];
            if (sum == 0)
            {
                len=i-j+1;
            }
            if (len > max)
            {
                max=len;
            }
            
            
            
        }
    }printf("%d", max);
    return 0;
}
// 15, -2, 2, -8, 1, 7, 10, 23
