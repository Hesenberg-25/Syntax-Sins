/*#include<stdio.h>

int main(){
    int a;
    int r;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d",&a);
    int num[a];
    for (int i = 0; i < a; i++)
    {   
        printf("ENTER THE ELEMENT NO %d : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("BY HOW MUCH STEP DO WANT TO ROTATE : ");
    scanf("%d",&r);
    //int first=num[0];
    for (int i = 0; i < a-1; i++)
    {
        num[i]=num[i+r];
    }
    //num[a-1]=first;
    for (int i = r-1; i < a; i++)
    {
        num[i]=num[i-r+1];
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    int a,r;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d",&a);
    int num[a];
    for (int i = 0; i < a; i++)
    {   
        printf("ENTER THE ELEMENT NO %d : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("BY HOW MUCH STEP DO WANT TO ROTATE : ");
    scanf("%d",&r);
    r=r%a;
    for (int j = 0; j < r; j++)
    {
        int first=num[0];
        for (int i = 0; i < a-1; i++)
        {
           num[i]=num[i+1]; 
        }
        num[a-1]=first;
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}