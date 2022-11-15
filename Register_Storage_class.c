#include<stdio.h>
/*
Storage clss :    Register
Scope  :          local(inside the block)
Lifetime :        local
Linkage :         No linkage
Default Value:    Garbage
Memory loction:   CPU Register
*/

//Register storage class is Request 
//If the registers are available then our request is accept
//we can not decleare register storage class variable in global scope

//register int c;

void fun()
{
    register int i;
    //it is not allowed to create pointer to rebister variable in c;
    //int *p=&i;    it is allowed in c++

    //any variable stored in cup register or not depend on capacity of microprocessor
    //if the microprocessor has 16 bit register then they can not hold a float valure or a double value
    
    //which require 4&8 bytes respectively.
    //If we use the register storage class for float,double variable then we want get any error.
    //because complier treat is as default storae class i.e auto.

    register double d = 3.45;

}
void gun()
{
    // This is the better use of register storage class
    register int i;
    for(i=11;i>0;--i)
    {
        printf("%d",i);
    }
}
int main()
{
    fun();
    gun();
    
    return 0;
}