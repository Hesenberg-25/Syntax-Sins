/*#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int mat[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int top = 0, bottom = a - 1;
    int left = 0, right = b - 1;

    while (top <= bottom && left <= right) {

        // left → right
        for (int j = left; j <= right; j++)
            printf("%d ", mat[top][j]);
        top++;

        // top → bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", mat[i][right]);
        right--;

        // right → left
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                printf("%d ", mat[bottom][j]);
            bottom--;
        }

        // bottom → top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", mat[i][left]);
            left++;
        }
    }

    return 0;
}
*/

#include<stdio.h>

int main(){
     int a, b;
    scanf("%d %d", &a, &b);

    int mat[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int mat_2[a][b];
    int top=0;
    int left=0;
    int right=b-1;
    int bottom=a-1;

    while (top<=bottom && left<=right)
    {
        for (int i = left; i < right; i++)
        {
            printf("%d ",mat[top][i]);
        }
        top++;
        
        
        
    }
    
    
}