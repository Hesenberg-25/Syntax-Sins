#include<stdio.h>

int main(){
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d",&a);
    int num[a];
    int num2 [a];
    for (int i = 0; i < a; i++)
    {   
        printf("ENTER THE ELEMENT NO %d : ",i+1);
        scanf("%d",&num[i]);
        num2[i]=num[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (num[i]<num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
            
        }
            
    }
    for (int i = 0; i < a; i++)
    {   
        if (num[i]==num2[i])
        {
            printf("TRUE");
        }
    }
    return 0;
}