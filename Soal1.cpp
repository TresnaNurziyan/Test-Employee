#include<stdio.h>

main()
{
    int arr[10], check[10], i, j, pairs = 0;
    int n;
    
    printf("Masukkan jumlah kaos kaki : ");
    scanf("%d", &n);
    
    for(i = 0; i<n; i++)
    {
    	printf("Masukkan nilai kaos kaki - %d :", i + 1);
        scanf("%d", &arr[i]);
        check[i]    =   0;
    }
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j] && check[j] ==  0   &&  check[i]    ==  0)
            {
                pairs++;
                check[j]    =   1;
                check[i]    =   1;
            }
        }
    }
    printf("Kaos Kaki yang berpasangan ada %d", pairs);

}
