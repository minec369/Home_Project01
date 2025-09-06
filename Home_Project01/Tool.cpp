#include "Tool.h"
#include <random>
#include <time.h>

float Average(float Number1, float Number2, float Number3)
{
	float Result = 0.0f;

	Result = (Number1 + Number2 + Number3) / 3;

	return Result;
}

float Discount(int Number1, float Number2)
{
	int Result = 0;

	Result = Number1 - (Number1 * Number2);

	return Result;
}

int RandDice(int Number1)
{
	srand(time(0));
	Number1 = (rand() % 6) + 1;

	return Number1;
}

int ScoreClass(int Number1)
{
	if (Number1 < 60)
	{
		printf("F\n\n");
	}
	else if (Number1 < 70)
	{
		printf("D\n\n");
	}
	else if (Number1 < 80)
	{
		printf("C\n\n");
	}
	else if (Number1 < 90)
	{
		printf("B\n\n");
	}
	else
	{
		printf("A\n\n");
	}

	return Number1;
}

int Recurcive(int Number1)
{
	const int BitCount = 2;

	if (Number1 == 0)
	{
		return 0;
	}

	printf("%d", Number1 % BitCount);
	return Recurcive(Number1 / BitCount);
}
