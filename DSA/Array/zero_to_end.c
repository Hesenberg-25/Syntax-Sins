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
    int j = 0;
    for (int i = 0; i < a; i++)
    {
        if (num[i] != 0)
        {
            num[j] = num[i];
            j++;
        }
    }
    for (int i = j; i < a; i++)
    {
        num[i]=0;
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}//0,1,0,3,12