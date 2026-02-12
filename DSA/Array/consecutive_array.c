#include <stdio.h>

int main()
{
    int arr[8] = {1, 1, 0, 0, 1, 1, 1, 0};
    int count = 0;
    int maxcount=0;
    for (int i = 0; i < 8; i++)
    {

        if (arr[i] == 1)
        {
            count++;
            for (int j = 0; j < 8; j++)
            {
                if (arr[j] == 1)
                {
                    count++;
                    if (count>maxcount)
                    {
                        maxcount=count;
                    }
                    
                }
                else
                {
                    count = 0;
                }
            }
        }
    }
    printf("%d", maxcount);
    return 0;
}