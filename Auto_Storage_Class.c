#include<stdio.h>
//This is the default storage class for all local vriables;
/*
  Storage class:    auto
  Scope :           local(inside the block)
  Lifetime :        local
  Linkage :         No linkage
  Default Value:    Garbage
  */
 void fun(int I)
 {
    auto int i;
    auto int j =10;     //auto keyword is optional
    int k =40;          //This is also auto variable

    printf("scope of auto variables starts from heare in function fun\n");

    printf("\n Default value of uninitialised auto variable is%d",i);

    printf("\n scope of auto variable ends heare in function fun\n");

 }
 int main()
 {
    //This is not allowed to access auto variables outside its sco[e 
    //printf("%d",i);

    fun(10);

    return 0;
 }