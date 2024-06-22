#include <stdio.h>

char string[] =
{
#include "firstline"
    ,
#include "secondline"
    ,
#include "thirdline"
    ,
#include "fourthline"
    ,
#include "fifthline"
    ,
#include "zero"
};

int main(void)
{
    char *i = string-1;
    while (*++i != 0) putchar(*i);
}
