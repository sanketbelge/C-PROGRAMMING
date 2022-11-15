#include<stdio.h>
int i = 90;
void fun()
{
    printf("\n Inside function fun which is extern");
}
//compile above program as
//gcc first.c second.c -o myexe
//and execute the program ./myexe