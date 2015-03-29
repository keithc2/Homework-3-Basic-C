//Keith Crosby
//Created September 18, 2010
//This program uses a call function "population" to predict the population in Gotham City.

#include<stdio.h>

float population (int t)                                        //declare function: an int put in to the function and a float comes out
{
        float z;                                                         //declaring a float
        z=((52.966)+(2.184*(t-1990)));
        return(z);                                                       //returning the value of "z" in for population
}

int main (void)
{
        int x;
	
        printf("Please enter any year after 1990 to predict the population in Gotham City.\n");
        scanf("%d", &x);

        printf("The predicted population in Gotham City for the year %d will be about %.2f thousand\n", x, population(x));    //printing x: the years the user inputted and population(x)=z
        return (0);
}