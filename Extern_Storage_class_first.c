#include<stdio.h>
/*
    Storage class :         Extern
    Scope :                 Throughout the program
    Lifetime :              As long as the program's execution dosen't come to an end.
    Linkage :               External Link
    Default value :         Zero
*/
//This is also a variable having extern storage class.

int global = 20;

int main()
{
    //This is decleration of the variable i.
    //Effect of extern variable is only inside the block in which it is decleard.

    extern int i;

    //As like a variable we can also access the function.
    //which is defined outside

    extern void fun();

    //we can not initilise extern variable
    //extern int i = 30;

    printf("\n value of external variable i is %d",i);

    //calling the function which is defined outside the file.

    fun();
    return 0;
}