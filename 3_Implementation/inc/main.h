/**
 * @file main.h
 * @author Lokesh ()
 * @brief ArtPursuit selling art
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __ARTPURSUIT_H__
#define __ARTPURSUIT_H__

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct artpursuit
{
	char name[30];
	char email[30];
	char address[100];
	int phonenumber[10];
};

struct artpursuit a;

#endif

