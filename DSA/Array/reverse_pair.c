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
    }int count=0;
    for (int i = 0; i < a; i++)
    {   
        for (int j = i+1; j < a; j++)
        {
            if (num[i]>(2*num[j]))
            {
                count++;
            }
            
        }
        
    }
    printf("%d",count);
    return 0;
}
// 6, 4, 1, 2, 7
// 5, 4, 4, 3, 3