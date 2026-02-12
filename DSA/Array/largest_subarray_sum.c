#include <stdio.h>

int main()
{
    int a;
    int sumf;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE TARGETED SUM : ");
    scanf("%d", &sumf);
    int maxlen=0;
    for (int i = 0; i < a; i++)
    {
        int sum = 0;
        for (int j = i; j < a; j++)
        {
            sum = sum + arr[j];
            if (sum == sumf)
            {
                int len=j-i+1;
                if (len>maxlen)     
                {
                    maxlen=len;
                }
                
            }
        }
    }
    printf("%d",maxlen);
    return 0;
}