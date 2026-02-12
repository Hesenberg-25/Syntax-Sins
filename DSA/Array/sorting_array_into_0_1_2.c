#include<stdio.h>

int main(){
    int a;
    int zero=0;
    int one=0;
    int two=0;
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
        if (num[i]==0)
        {
            zero++;
        }
        else if (num[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for (int i = 0; i < zero; i++)
    {
        num[i]=0;
    }
    for (int i = zero; i < zero+one; i++)
    {
        num[i]=1;
    }
    for (int i = zero+one; i < a; i++)
    {
        num[i]=2;
    }
    printf("[ ");
    for (int i = 0; i < a; i++)
    {
         printf("%d ",num[i]);
    }
    printf("]");
    return 0;
}