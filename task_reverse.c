#include <stdio.h>

extern int reverse(int number);

int main(int argc, char const *argv[])
{
	int number;
	printf("[Введите 4-х значное число]\n");
	scanf("%d",&number);
	printf("[Обратный порядок]\n%s",reverse(number));
	return 0;
}
