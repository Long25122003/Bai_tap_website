#include <stdio.h>

int main()
{
    int i , n;
    printf("Nhap phan tu cua mang :");
    scanf("%d" , n);
    int A[100];
    printf("Nhap các phan tu mang cua n");
    for (i = 0 ; i < n ; i++)
    {
    printf("a[%d]=" , i);
    scanf("%d" , &A[i]);
    }

    printf("Cac phan tu cua mang la :\n");
    for(i = 0 ; i < n ; i++)
    {
    printf("%d" , A[i]);
    }
    return 0;
}