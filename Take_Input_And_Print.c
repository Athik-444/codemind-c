#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000];
    fgets(str,1000,stdin);
    puts(str);
    return 0;
}