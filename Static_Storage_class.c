#include <stdio.h>
/*
Storage class  :  Static
Scope   :         Local to the block, in which the variable is defined.
Lifetime :        Value of the variable persists between different function calls.
Linkage  :        Internal linkage
Default value:    Zero
Memory allocation:BSS/Non BSS
*/
/*
There are two types of static variables :-
      1.  Local Static:- static variables inside a method or function 
                        retain its value between invocations
      2.  Global Static:- static variable decleared globaly can called by any fun or method, 
                         so long as those function in the same file as the static variable.
*/
static int Global_static = 20;
void fun_Normal()
{
    //this is local static variable.
    //whose value persist throughout the function call.
    //Initilisation of static variable only once.

    static int i = 20;
    ++i;  //incrimenting value of i.
    printf("\n value of i from fun_Normal is :%d",i);
    //printf("\n address of static variable is :%u", &i);
}                                           
    //Recursive function which use static vriable
void Gun_Recursive_static()
{
    static int i = 8;
    i--;
    if(i!=0)
    {
        printf("\n In Gun_Recursive_static value of is : %d",i);

        Gun_Recursive_static();
    }
}    
//Recursive function which use auto variable.
//This function runs infinitely due to the auto variables
void Gun_Recusive_auto()
{
    auto int i = 8;
    i--;
    if(i!=0)
    {
        printf("\n Gun_Recursive_auto value of is : %d",i);
        Gun_Recusive_auto();

    }
}
int main()
{
    // Calling function multiple time
    fun_Normal();
    fun_Normal();
    fun_Normal();

    Gun_Recursive_static();
    //Gun_Recusive_auto();
    return 0;
}