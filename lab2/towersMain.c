#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 2;
    int dest = 3;
    if (argc > 1) {
        n = atoi(argv[1]);
    }
    towers(n, from, dest);
    exit(0);
}

