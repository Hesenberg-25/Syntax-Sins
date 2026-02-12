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
    for (int i = 0; i < a; i++)
    {   if (num[i]==-1)
    {
        continue;
    }
    
        for (int j = i+1; j < a; j++)
        {
            if(num[i]==num[j]){
                num[j]=-1;
            }
        }
        
    }
    for (int i = 0; i < a; i++)
    {   
        if (num[i]!=-1)
        {
            printf("%d ",num[i]);
        }
    }
    return 0;
}