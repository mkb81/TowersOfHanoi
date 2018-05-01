//
//  Hanoi.h
//  TowersOfHanoi
//
//  Created by Marc-Kevin Bendig on 02.11.14.
//  Copyright (c) 2014 Marc-Kevin Bendig. All rights reserved.
//

#ifndef __TowersOfHanoi__Hanoi__
#define __TowersOfHanoi__Hanoi__

#include <stdio.h>

static int numberOfMoves = 0;

/**
 Shows every disk move

 @param src Source tower
 @param dest Destination tower
 */
void moveDisk(char src, char dest);

/**
 Tower of Hanoi game function.
 Moves a stack of disks from tower A to tower C

 @param disks Number of disks
 @param src Tower A
 @param dest Tower C
 @param tmp Tower B
 */
void hanoi(int disks, char src, char dest, char tmp);

/**
 Shows help message
 */
void manual(void);

#endif /* defined(__TowersOfHanoi__Hanoi__) */
