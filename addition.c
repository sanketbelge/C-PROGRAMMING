#include<stdio.h>

int addition(int ino1, int ino2)
{
    int ans = 0;
    ans = ino1+ino2;
    return ans;
}
int main()
{
    int a = 11;
    int b = 21;
    int c = 0;

    c = addition(a,b);
    
    printf("%d\n",c);
    return 0;
}