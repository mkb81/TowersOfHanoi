//
//  main.c
//  Hanoi
//
//  Created by Marc-Kevin Bendig on 02.11.14.
//  Copyright (c) 2014 Marc-Kevin Bendig. All rights reserved.
//

#include "Hanoi.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int numberOfDisks = 0;
    int retVal = EXIT_SUCCESS;

    if (argc != 2) {
        printf("\nNumber of arguments are not correct!\n");
        manual();
        retVal = EXIT_FAILURE;

    } else if (sscanf(argv[1], "%i", &numberOfDisks) != 1) {
        printf("\nParameter 1 is not an integer!\n");
        manual();
        retVal = EXIT_FAILURE;
    } else {
        numberOfDisks = atoi(argv[1]);
        if (numberOfDisks <= 0) {
            printf("\nParameter 1 must be bigger than 0!\n\n");
            retVal = EXIT_FAILURE;
        } else {
            hanoi(numberOfDisks, 'a', 'c', 'b');
        }
    }

    return retVal;
}
