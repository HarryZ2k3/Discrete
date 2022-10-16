//HUYNH PHUONG DAI - ITITWE21039
#include <stdio.h>
void print(int *arr, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main ()
{
    int *ptr;
    int arr[20];
    int limit=0;
    int temp;
    do
    {
        printf("How long do you want your string to be?(max 20)\n");
        scanf("%d",&limit);
    }
    while (limit>=20);
    
    
    printf("Enter the string of numbers you want to arrange\n");
    for (int i=0;i<=limit-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The arrangements for the string above are:\n");
    if(limit == 1)
    {
        printf("%d",arr[0]);
    }
    else
    {
        for (int j = 1; j <= limit; j++)
        {
            for (int i = 0; i < limit-1; i++) 
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                print(arr, limit);
	        }
        }
    }
    return 0;
}