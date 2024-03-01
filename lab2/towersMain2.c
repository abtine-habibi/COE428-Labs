#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n, from, dest;
    if(argc == 1){
    n = 3;
    from = 2;
    dest = 3;
    }
    else if (argc == 2) {
        n = atoi(argv[1]);
	from = 2;
	dest = 3;
    }
    else if (argc == 4 && (atoi(argv[2]) == 1 || atoi(argv[2]) == 2 || atoi(argv[2]) == 3) && (atoi(argv[3]) == 1 || atoi(argv[3]) == 2 || atoi(argv[3]) == 3) && (atoi(argv[2]) != atoi(argv[3]))) {
        n = atoi(argv[1]);
        int arg2 = atoi(argv[2]);
        int arg3 = atoi(argv[3]);
        from = arg2;
        dest = arg3; 

        
    }
    else{
      printf("There was an error \n");
      return 1; 
    }

    towers(n, from, dest);
    exit(0);
}

