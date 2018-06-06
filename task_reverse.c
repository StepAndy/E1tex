#include <stdio.h>
int reverse(int number)
{
	if(number>9999 || number <1000)
		perror("Wrong number");
	return number/1000 + (number/100 - (number/1000)*10)*10 + (number/10 - (number/100)*10)*100 + (number - (number/10)*10)*1000;
}

int main(int argc, char const *argv[])
{
	int number;
	printf("[Введите 4-х значное число]\n");
	scanf("%d",&number);
	printf("[Обратный порядок]\n%s",reverse(number));
	return 0;
}