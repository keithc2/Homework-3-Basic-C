//Keith Crosby
//Created September 21, 2010
//This program reads a series of numbers from the file numbers.dat,
//Then finds the number of prime numbers within that file and prints how many prime numbers in a new file primes.dat

#include<stdio.h>\
#include<math.h>\

#define PRIME 1                  //prime will always equal 1
#define NOT 0                     //declaring NOT to equal 0 always

int primality (int n)   //the function to count the number of prime numbers in numbers.dat\
{
	int m;

	if(m<=sqrt(n))                                                     //if m is less then or equal to the square root of n
	{
		while(m > 1)                                           //loop while m is greater then one
		{
			if (n%m==0)                              //if the remainder of n / m is 0
				return(NOT);                 //returns 0
			else
				return(PRIME);               //return 1
		}
	}
	else\
		return(NOT);                                           //return 0
}

int main (void)
{
	int no_num=1, N;
	FILE *inp, *outp;                                                       //declare input and outputs

	inp = fopen ("numbers.dat", "r");                           //open input "numbers.dat"
	if (inp == NULL)                                                        //if input equals 0
		{ printf("This file does not exist.\\n"); }
	else
	{
		while (1)                                                        //loop always
		{
			if(feof(inp))                                        //if the end of the file
				break;                                    //stop the while loop
			else\
			\{\
				fscanf(inp, "%d", N);              //scan inside the input
				primality(N);                            //call the function
				++no_num;\
				//sum+=N
			}
		}
		fclose (inp);                                                        //close the input
		outp=fopen ("primes.dat", "w");                      //open the output
		fprintf(outp, "The number of primes in the file numbers.dat is %d\\n", no_num);    //print the number of primes from numbers.dat
		fclose (outp);                                                       //close output
	}
	return (0);                                                                         //end program
}}