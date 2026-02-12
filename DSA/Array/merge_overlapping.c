#include <stdio.h>

int main()
{   int k;
    int l;
    int intervals[4][2]= {{1,5},{3,6},{8,10},{15,18}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (intervals[i][1]>=intervals[j][0])
            {
                intervals[i][1]=intervals[j][1];
                k=j;
            }
            if (intervals[i][0]>=intervals[j][1])
            {
                intervals[j][1]=intervals[i][1];
                l=j;
            }
            
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        if (i!=k || i!=l)
        {
            printf("[%d, %d]\n", intervals[i][0], intervals[i][1]);
        }
        
    }

    return 0;
}