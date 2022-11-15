//Inside a structure we can create an a array.
#include<stdio.h>
struct Demo
{
    int arr[3];
    float brr[2];
};
int main()
{
    struct Demo obj;
/*obj  is the object of struct demo demo is a structure 
which contains two mwmbers. first nmember is onedimentional arrau which 
contains three elements and each element type of integer.
second member is one diamentional arrau which contains two
 members and each member is of type float.
 */
 //We can initilis the above structure using member by member initilisation techinique as.
    obj.arr[0]=11;
    obj.arr[1]=22;
    obj.arr[3]=33;

    obj.brr[0]=11.11;
    obj.brr[1]=22.22;

    printf("%d\n",obj.arr[0]);

    return 0;
}
