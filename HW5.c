//HUYNH_PHUONG_DAI_ITITWE21039

#include <stdio.h>
#include <time.h>
void towerOfHanoi(int n,char from_rod, char to_rod, char aux_rod)
{
    if (n==0)
    {
        return;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("Move disk %d from rod %c to rod %c \n",n,from_rod,to_rod);

    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n;//setup number of disks
    printf("Enter the number of rod ");
    scanf("%d",&n);
    clock_t begin = clock();
    towerOfHanoi(n,'A','C','B'); //A,B,C are the names of the rods
    clock_t end=clock();
    double time_spent = (double)(end-begin);
    printf("Processing time: %.2f ms",time_spent);
    return 0;
}