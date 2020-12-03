#include <stdlib.h>
#include <stdio.h>

int inputlen(FILE * file)
{
    int lines;
    while(!feof(file))
    {
        char c = fgetc(file);
        if(c == '\n')
        {
            lines++;
        }
    }
    rewind(file);
    return lines;
}