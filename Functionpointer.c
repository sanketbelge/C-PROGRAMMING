#include<stdio.h>

int Addition(int no1,int no2)
{
    int ans =0;
    ans = no1+no2;
    return ans;
}
int main()
{
    int  a = 20,b = 30;
    int ret = 0;

    //ret = Addition(a,b);
    int(*fptr)(int, int);
    fptr = Addition;

    printf("Address of addition function is %d\n",Addition);

    ret = fptr(a,b);
    
    printf("Addition is %d\n",ret);

    return 0;
}