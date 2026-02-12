#include<stdio.h>

int main(){
    int a,t;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("ENTER THE SUM NUMBER : ");
    scanf("%d",&t);
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (t==num[i]+num[j])
            {
                printf("%d , %d\n",i,j);
            }
            
        }
        
    }
    
    return 0;
}