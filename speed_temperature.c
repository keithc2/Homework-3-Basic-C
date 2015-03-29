{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 //Keith Crosby\
//Created September 21, 2010\
//This program calculates the speed of sound in the given temperature.\
//It also displays instructions for further enjoyment.\

#include<stdio.h>
#include<math.h>                                               //links the math library

void speed (void)                                               //no arguments for this function
{
        printf("          \\n");                                         //an extra line printed to increase space
        printf("If you inputed an integer in degrees Fahrenheit, it will be put in the equation as follows,\\n");
        printf("1086*sqrt(((5.0*T+297)/(247))), where T is the temperature.\\n");
        printf("So, T was multiplied by 5 then 297 added to that. Then that answer is divided by 247\\n");
        printf("Finally find the square root of that total and multiply it by 1086.\\n");
        printf("          \\n");
}

int main (void)
{
        float T;                                                                                    //Temperature in Fahrenheit\
        char x='y';                                                                              //variable that controls while loop\
        float alpha;                                                                            //speed of sound\

        while (x!='n')                                                                       //loop to continue with more calculations until the user says no\
        {
                printf("What is the temperature in Fahrenheit?\\n");\
                scanf("%f", &T);\
                alpha=1086*sqrt(((5.0*T+297)/(247)));\
                printf("The speed of sound is %.2f at the temperature %.2f\\n", alpha, T);\
                speed();                                                                             //calling function
                printf("Would you like to find the speed of sound in another temperature y/n? please enter lowercase\\n");
                fflush(stdin);
                scanf("%c", &x);
                fflush(stdin);
		}
        return(0);
}}