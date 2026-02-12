#include<stdio.h>

int main(){
    int arr[7]={1, 3, 10, 3, 5, 1, 5};
    for (int i = 0; i < 7; i++)
    {
        int found=0;
        for (int j = 0; j < 7; j++)
        {
            if(arr[j]==arr[i]){
                found++;
            }
        }
        if (found<2)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
    return 0;
}