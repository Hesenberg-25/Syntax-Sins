#include<stdio.h>

int main(){
    int a;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d",&a);
    int num[a];
    for (int i = 0; i < a; i++)
    {   
        printf("ENTER THE ELEMENT NO %d : ",i+1);
        scanf("%d",&num[i]);
    }
    int first=num[0];
    for (int i = 0; i < a-1; i++)
    {
        num[i]=num[i+1];
    }
    num[a-1]=first;
    for (int i = 0; i < a; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}