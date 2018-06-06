#include <stdio.h>

int reverse(int number)
{
	if(number>9999 || number <1000)
		perror("Wrong number");
	return number/1000 + (number/100 - (number/1000)*10)*10 + (number/10 - (number/100)*10)*100 + (number - (number/10)*10)*1000;
}