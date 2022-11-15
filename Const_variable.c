#include<stdio.h>
const int A = 40;   //Global constant

int main()
{
    int No1 = 30;
    const int No2 = 20;
    
    No1++;   //allowed
    //No2++;   Not allowed

    No1 = 10;   //allowed
    //No2 = 10;   //Not allowed 

    return 0;
}

/* There is also anothe one type of volatile keyword
      --If we use the volatile keyword we request to the compiler 
      that you should avoid any optimixation startars with that perticular 
      variable.

      --Concept of volatile is not Practically usefull in today's compiler.
*/      