{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 //Keith Crosby\
//Created September 21, 2010\
//This program counts the least amount of bills from an ATM machine for the given amount.\
//Shows the user how many 50's, 20's and 10's the user will receive.\
\
#include<stdio.h>\
 \
int bills (int a)\
\{\
        int j=0, i=0, w=0;                //declaring j: number of 50's, i: number of 20's and w: number of 10's\
        while (a >= 50)                 //while the amount given is > or equal to 50, loop until condition met\
        \{\
                j++;                                //add one to the number of 50's\
                a=a-50;                      //number given = the number given minus 50\
        \}\
        while (a >= 20)             //while the amount given is > or equal to 20, loop until condition met\
        \{\
                i++;\
                a=a-20;\
        \}\
        while (a >= 10)              //while the amount given is > or equal to 10, loop until condition met\
        \{\
                w++;\
                a=a-10;\
        \}\
        printf("You will receive %d 50's %d 20's and %d 10's\\n", j, i, w);\
        return(0);\
\}\
\
int main (void)  \
\{\
        int a;                                                           //the amount inputted by the user\
        char z='y';\
        int j=0, i=0, w=0;                                      //# of bills\
        \
        while (z != 'n')\
        \{\
                printf("What amount of money would you like to withdraw? Please only ask for amounts that are multiples of 10\\n");\
                scanf("%d", &a);\
                if (a%10==0)          //if the remainder of a divided by 10 is 0 continue the program\
                \{\
                        bills(a);\
                \}\
	else\
                \{\
                        printf("That is not a valid amount to withdraw.\\n");\
                \}   \
        printf("Would you like to withdraw more?\\n");\
        fflush(stdin);\
        scanf("%c", &z);\
        fflush(stdin);\
        \}\
        return (0);\
\}}