/*
Break & Continue en C

*/

#include <stdio.h>  


int main()
{

    int num = 0;
    while (num <= 7)
    {
        if(num == 2)
        {
            num++;
            continue;
        }
        printf("%i",num);
        if(num < 7)
        {
            printf(",");
        }
        num++;

    }
    return 0;

}