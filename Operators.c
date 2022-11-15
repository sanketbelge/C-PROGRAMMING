#include<stdio.h>

int main()
{
    int no = 55;
    char ch = 'A';

    printf("value of no :%d\n",no);
    printf("value of ch : %c\n",ch);

    printf("Address of no :\n%ls\n",&no);
    printf("Address of ch :\n%s\n",&ch);

    printf("Size of no : %ld\n",sizeof(no));
    printf("Seze of ch :%ld\n",sizeof(ch));
    
    return 0;
}