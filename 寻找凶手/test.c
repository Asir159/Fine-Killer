#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
	int killer = 3;
	int A = 0, B = 0, C = 0, D = 0;

	if (A != killer)
	{
		B++;
		C++;
		D++;
	}
	if (B != killer)
	{
		C++;
	}
	if (C != killer)
	{
		D++;
	}
	if (D != killer)
	{

		C++;
	}

	if (A == 3)
	{
		printf("A������");
	}
	if (B == 3)
	{
		printf("B������");
	}
	if (C == 3)
	{
		printf("C������");
	}
	if (D == 3)
	{
		printf("D������");
	}

}