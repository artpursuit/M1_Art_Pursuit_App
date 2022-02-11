#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "main.h"
#include "handmadegifts.h"

int handmade_gifts();
int course();

int main()
{
//displaying page title.
//displaying content in page.
//user can select what they want.

    printf("ART PURSUIT\n");
    printf("Hand Made Drawings and Drawing Courses\n");
    printf("1.Need to Customized Sketch\n   2.Need a Course to develop your artistic skills\n");
//int choice()

    int choice;
    printf("If you want to buy Press 1\n If you want to learn Press 2");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            handmade_gifts();
            break;
    case 2:
            course();
            break;
    default:
            printf("invalid option\n");
            printf("select either 1 or 2\n");

    }
}



