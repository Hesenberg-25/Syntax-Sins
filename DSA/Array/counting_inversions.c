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
            if (num[i]>num[j])
            {
                count++;
            }
            
        }
        
    }
    printf("%d",count);
    return 0;
}//2, 3, 7, 1, 3, 5
//-10, -5, 6, 11, 15, 17