//We can create array of structure object.
#include<stdio.h>

struct Demo
{
    int iNo;
    float fvalue;
    int ivalue;
};
int main()
{
    struct Demo Arr[4];

    Arr[0].iNo=11;
    Arr[0].fvalue=10.99;
    Arr[0].ivalue=56;
/*we can read above syntax as --Arr is a one dimantional array,
  which contains four elements. each element is of type of struct Demo.
  where demo is a structure which contain three members integer, float,integer.
*/
//We can initilise above array of struction  using member by member initilisation technique.

    Arr[1].iNo=61;
    Arr[1].fvalue=56.66;
    Arr[1].ivalue=201;
    
    return 0;
}