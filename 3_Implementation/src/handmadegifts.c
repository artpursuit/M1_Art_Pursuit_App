#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "main.h"

int handmade_gifts()
{
    printf("*******Canvas size********\n");
    printf("1. A5 - small \n");
    printf("2. A4 - Medium \n");
    printf("3. A3 - Large\n");
    printf("Press 1 for A5\nPress 2 for A4\nPress 3 for A3\n");
    printf("enter your Option");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
          A5();
          break;
    case 2:
          A4();
          break;
    case 3:
          A3();
          break;

    }

}

int A5()
{
    int person,canvas,frame=400,shipping=100,price=0,one=650,two=1200;
    printf("*******Select the number of Person*******\n");
    printf("1.Single person\n");
    printf("2.Double person\n");
    printf("********Press 1 for Single person********** \n*********Press 2 for Double person***********\n");
    scanf("%d",&person);
    printf("******Select the canvas type *******\n");
    printf("1.Rolled Canvas\n");
    printf("2.Framed canvas\n");
    printf("*****Press 1 for Rolled Canvas*******\n");
    printf("*****Press 2 for Framed Canvas*******\n");
    scanf("%d",&canvas);
    if (person == 1 && canvas == 1)
    {
        price = one+shipping;

    }
    else if (person == 1 && canvas == 2)
    {

        price = one+frame+shipping;

    }
    else if (person == 2 && canvas == 1)
    {
        price = two+shipping;

    }
    else if (person == 2 && canvas == 2)
    {

        price = two+shipping+frame;
    }
    printf("The Price is - %d\n",price);
    int purchase;
    printf("if you want to procced with your order press 1\n");
    printf("if you want to change your order or need to go home page press 0\n");
    scanf("%d",&purchase);
    if (purchase==1)
    {
    address();
    printf("\nThis is your billing address\n");
    printf("%s\n",a.name);
    printf("%s\n",a.address);
    printf("%d\n",a.phonenumber);
    printf("*************your order has been succesfully placed*****************\n");
    printf("**************will be delivered within 15 working days*********\n");
    printf("**********************thank you*******************\n");
    }
    else if (purchase==0)
    {

        handmade_gifts();
    }

}

int A4()
{
    int person,canvas,frame=600,shipping=100,price=0,one=1000,two=1800;
    printf("*******Select the number of Person*******\n");
    printf("1.Single person\n");
    printf("2.Double person\n");
    printf("********Press 1 for Single person********** \n*********Press 2 for Double person***********\n");
    scanf("%d",&person);
    printf("******Select the canvas type *******\n");
    printf("1.Rolled Canvas\n");
    printf("2.Framed canvas\n");
    printf("*****Press 1 for Rolled Canvas*******\n");
    printf("*****Press 2 for Framed Canvas*******\n");
    scanf("%d",&canvas);
    if (person == 1 && canvas == 1)
    {
        price = one+shipping;

    }
    else if (person == 1 && canvas == 2)
    {

        price = one+frame+shipping;

    }
    else if (person == 2 && canvas == 1)
    {
        price = two+shipping;

    }
    else if (person == 2 && canvas == 2)
    {

        price = two+shipping+frame;
    }
    printf("The Price is - %d\n",price);
    int purchase;
    printf("if you want to procced with your order press 1\n");
    printf("if you want to change your order or need to go home page press 0\n");
    scanf("%d",&purchase);
    if (purchase==1)
    {
    address();
     printf("\nThis is your billing address\n");
    printf("%s\n",a.name);
    printf("%s\n",a.address);
    printf("%d\n",a.phonenumber);
    printf("*************your order has been succesfully placed*****************\n");
    printf("**************will be delivered within 15 working days*********\n");
    printf("**********************thank you*******************\n");
    }
    else if (purchase==0)
    {

    handmade_gifts();
    }

}

int A3()
{
    int person,canvas,frame=800,shipping=200,price=0,one=2000,two=3200,three=4000;
    printf("*******Select the number of Person*******\n");
    printf("1.Single person\n");
    printf("2.Double person\n");
    printf("3.Double person\n");
    printf("********Press 1 for Single person********** \n*********Press 2 for Double person***********  \n*********Press 3 for triple person***********\n ");
    scanf("%d",&person);
    printf("******Select the canvas type *******\n");
    printf("1.Rolled Canvas\n");
    printf("2.Framed canvas\n");
    printf("*****Press 1 for Rolled Canvas*******\n");
    printf("*****Press 2 for Framed Canvas*******\n");
    scanf("%d",&canvas);
    if (person == 1 && canvas == 1)
    {
        price = one+shipping;

    }
    else if (person == 1 && canvas == 2)
    {

        price = one+frame+shipping;

    }
    else if (person == 2 && canvas == 1)
    {
        price = two+shipping;

    }
    else if (person == 2 && canvas == 2)
    {

        price = two+shipping+frame;
    }
    else if (person == 3 && canvas == 1)
    {
        price = three+shipping;

    }
    else if (person == 3 && canvas == 2)
    {
        price = three+frame+shipping;

    }
    printf("The Price is - %d\n",price);
    int purchase;
    printf("if you want to procced with your order press 1\n");
    printf("if you want to change your order or need to go home page press 0\n");
    scanf("%d",&purchase);
    if (purchase==1)
    {
    address();
     printf("\nThis is your billing address\n");
    printf("%s\n",a.name);
    printf("%s\n",a.address);
    printf("%d\n",a.phonenumber);
    printf("*************your order has been succesfully placed*****************\n");
    printf("**************will be delivered within 15 working days*********\n");
    printf("**********************thank you*******************\n");
    }
    else if (purchase==0)
    {

    handmade_gifts();
    }

}

int address()
{
    printf("Please enter your Billing details below\n ");
    printf("Enter your name\n");
    scanf("%s",a.name);
    printf("enter your address\n");
    scanf("%s",a.address);
    printf("Enter your phone number");
    scanf("%d",a.phonenumber);
}



