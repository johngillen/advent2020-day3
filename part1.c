#include <stdlib.h>
#include <stdio.h>
#include "advent.h"

int main(int argc, char const *argv[])
{
    FILE * file;
    file = fopen("input", "r");

    int length = inputlen(file);

    char field[length][32];

    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < 32; j++)
        {
            field[i][j] = fgetc(file);
            if (field[i][j] == '\n') { field[i][j] = '\0'; }
        }
    }
    
    int treecount = 0;
    int x = 0; int y = 0;
    char toboggan = field[y][x];
    while (1)
    {
        x += 3; y += 1;
        if (y > length) { break; }
        if (x > 30) { x -= 31; }
        
        toboggan = field[y][x];
        
        if (toboggan == '#') { treecount++; }

    }
    
    printf("trees encountered: %d\n", treecount);

    return 0;
}
