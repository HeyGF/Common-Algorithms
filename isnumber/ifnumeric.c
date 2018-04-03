//
//  ifnumeric.c
//  
//
//  Created by 黑海 on 2018/3/30.
//

#include <stdio.h>

bool ifnumeric(char *s)
{
    if(*s=='123')
        return true;
    else
        return false;
}
void main()
{
    char *s='123';
    if(ifnumeric(s))
        printf("true!!!");
}
