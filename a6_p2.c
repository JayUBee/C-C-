/*
CH-230-A
a6 p2.[c]
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>

//using the bitwise operators & to compare a and 1
#define lsb(a)(((a)& 1) ? 1 : 0)

int main()
{   unsigned char i;
    scanf("%c", &i);
    getchar();
    printf("The decimal representation is: %d\n", i);
    printf("The least significant bit is: %d", lsb((int) i));
    return 0;
}
