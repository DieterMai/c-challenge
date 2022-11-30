// https://www.codewars.com/kata/56fcfad9c7e1fa2472000034
#include <stdio.h>
#include <limits.h>

const char *evil(int value);


const char *evil(int value)
{
	int counter = 0;
	for(int bitfield = (INT_MAX/2)+1; bitfield > 0; bitfield = bitfield >> 1)
	{
		int isSet = (bitfield & value) ? 1 : 0;
		if(isSet)
		{
			counter++;
		}
	}
	
	if(counter % 2 != 1)
	{
		return "It's Evil!";
	}
	else
	{
		return "It's Odious!";
	}
}


int main()
{
	puts("Hello world");
	puts(evil(1));
	puts(evil(2));
	puts(evil(3));
	
}
