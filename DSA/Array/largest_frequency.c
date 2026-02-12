#include<stdio.h>

int main(){
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
    for (int i = 0; i < a; i++)
    {   int count=0;
        for (int j = 0; j < a; j++)
        {
            if (num[i]==num[j])
            {
                count++;
            }
            
            
        }
        if (count>max)
            {   
                max=count;
                element=num[i];
            }
    }
    printf("%d ",element);
    return 0;
}