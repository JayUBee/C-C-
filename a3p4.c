/*
CH-230-A
a3p4.c
Tayyab Butt
tbutt@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int position(char str[], char c){
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != NULL; idx++){}
/* do nothing */
return idx+1; // change from ++idx --> idx++
}

int main() {
char line[80];
while (1) {
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of ’g’ is: %d\n", position(line, 103)); //change 'g' to ASCII (103)
}
}
