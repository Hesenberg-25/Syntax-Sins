#include<stdio.h>
//-3, 4, 5, 1, -4, -5
int main(){
    int a;
    int b=0;
    printf("ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ");
    scanf("%d", &a);
    int num[a];
    int final[a];
    int index=0;
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE ELEMENT NO %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++){
            if (num[i]>num[j])
            {
                b++;
                final[index]=num[i];
                index++;
                break;
            }
            break;
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d ",final[i]);
    }
    printf("%d",num[a-1]);
    return 0;
}