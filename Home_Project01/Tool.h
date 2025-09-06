#pragma once

// 3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ�
float Average(float Number1, float Number2, float Number3);

// ���ΰ��� ���ϴ� �Լ�
float Discount(int Number1, float Number2);

// �ֻ����� ���� ��� �Լ�
int RandDice(int Number1);

// ���� A~F �ִ� �Լ�
int ScoreClass(int Number1);

// Clamp ���ø� �Լ�
template <typename T>
T Clamp(T value, T min, T max)
{
	float Result = 0.0f;
	if (value < min)
	{
		Result = min;
	}
	else if (value > max)
	{
		Result = max;
	}
	else if (min <= value <= max)
	{
		Result = value;
	}

	return Result;
};

// 10������ 2������ ����ϴ� ��� �Լ�
int Recurcive(int Number1);