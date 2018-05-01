//
//  Hanoi.c
//  TowersOfHanoi
//
//  Created by Marc-Kevin Bendig on 02.11.14.
//  Copyright (c) 2014 Marc-Kevin Bendig. All rights reserved.
//

#include "Hanoi.h"


void moveDisk(char src, char dest) {
    numberOfMoves = numberOfMoves + 1;
    printf("Move: %5i -> %c to %c\n", numberOfMoves, src, dest);
}

void hanoi(int disks, char src, char dest, char tmp) {
    if (disks == 1) {
        moveDisk(src, dest);
    } else {
        hanoi(disks - 1, src, tmp, dest);
        moveDisk(src, dest);
        hanoi(disks - 1, tmp, dest, src);
    }
}

void manual(void) {
    printf("\nUsing: TowersOfHanoi <Parameter>");
    printf("\nParameter 1:");
    printf("\n\tNumber of disks <integer value>\n\n");
}
