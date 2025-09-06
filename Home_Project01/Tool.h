#pragma once

// 3개의 파라메터를 받아 평균값을 리턴하는 함수
float Average(float Number1, float Number2, float Number3);

// 할인가를 구하는 함수
float Discount(int Number1, float Number2);

// 주사위를 굴린 결과 함수
int RandDice(int Number1);

// 성적 A~F 주는 함수
int ScoreClass(int Number1);

// Clamp 템플릿 함수
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

// 10진수를 2진수로 출력하는 재귀 함수
int Recurcive(int Number1);