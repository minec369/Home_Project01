#include "Project_01.h"
#include "Tool.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <time.h>
#include <random>

int main()
{
	// ① 3개의 파라메터를 받아 평균값을 리턴하는 함수 만들기
	//float Num1 = 0;
	//float Num2 = 0;
	//float Num3 = 0;
	//float Ave = 0.0f; // 평균값

	//printf("첫 번째 수를 입력해주세요.: ");
	//std::cin >> Num1;
	//printf("두 번째 수를 입력해주세요.: ");
	//std::cin >> Num2;
	//printf("세 번째 수를 입력해주세요.: ");
	//std::cin >> Num3;

	//Ave = Average(Num1, Num2, Num3);

	//printf("세 수의 평균 값은 %.1f이다.\n\n", Ave);


	// ② 정가와 할인율 입력 받아 할인가 구하는 함수 만들기

	//int FixedPrice = 0; // 정가 선언
	//float DiscountRate = 0.0f; // 할인율 선언
	//int Price = 0; // 할인가 선언
	//
	//printf("정가를 입력해주세요. : ");
	//std::cin >> FixedPrice;
	//printf("할인율을 입력해주세요 [예시) 10%% = 0.1 입니다].: ");
	//std::cin >> DiscountRate;
	//Price = Discount(FixedPrice, DiscountRate);
	//printf("할인가는 %d입니다.\n\n", Price);


	// ③ 주사위를 굴린 결과를 리턴하는 함수 만들기

	//int Dice = 0; // 주사위 선언

	//Dice = RandDice(Dice);

	//printf("주사위를 굴렸더니 %d가 나왔습니다.\n\n", Dice);


	// ④ 점수를 주면 성적(A~F)를 주는 함수 만들기
	/*int Score = 0;
	printf("점수를 입력해주세요. : ");
	std::cin >> Score;
	ScoreClass(Score);*/


	// ⑤ 템플릿 함수로 Clamp 함수 구현하기

	/*int ChoiceNumber1 = 0;
	ChoiceNumber1 = Clamp(3, 7, 12);
	printf("%d\n", ChoiceNumber1);

	float ChoiceNumber2 = 0.0f;
	ChoiceNumber2 = Clamp(18.7, 11.6, 15.4);
	printf("%.1f\n", ChoiceNumber2);

	int ChoiceNumber3 = 0;
	ChoiceNumber3 = Clamp(9, 7, 12);
	printf("%d\n", ChoiceNumber3);
	*/

	/*
		① 자리수 분리하기(입력은 자리 수 제한 없음)
			- 각 자리의 수를 합해서 출력하기
	*/

	//int NumberA = 0;
	//printf("수를 입력해주세요. : ");
	//std::cin >> NumberA;

	//int Sum = 0;	//각 자리의 수 합을 선언
	//int DigitNumber = 0;	//각 자리의수

	//while (NumberA > 0)
	//{
	//	DigitNumber = NumberA % 10;	// 맨 오른쪽 자리의 수를 저장
	//	Sum += DigitNumber;	// 위의 숫자를 합에 저장
	//	NumberA /= 10;	// 전체 숫자를 한칸씩 오른쪽으로 옮김 그러면서 자연스럽게 기존의 1의 자리에 있던 숫자를 없앰
	//}

	//printf("각 자리수의 합은: %d\n\n", Sum);


	/*
		② 재귀 함수를 이용하여 10진수를 입력받아 2진수로 출력하는 함수 만들기
	*/

	/*int TenNumber = 0;
	printf("10진수 숫자를 입력하시오. : ");
	std::cin >> TenNumber;

	printf("2진수는: ");
	Recurcive(TenNumber);
	printf("\n\n");*/



	/*
		③ 슬롯 머신 게임 만들기
			- 시작 금액 10000
			- 한판에 무조건  최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
			- 같은 숫자 3개가 나오면 50배로 돌려 받는다.
			- 만약 777이면 10000배 받음
	*/

	//int StartMoney = 10000;	//시작 금액 10000
	//int BetMoney = 0;	// 베팅 금액
	//int BetMoney50 = 0;	// 베팅 50배
	//int BetMoney777 = 0;	// 베팅 10000배

	//int RandNumber1 = 0;	//첫 번째 숫자
	//int RandNumber2 = 0;	//두 번째 숫자
	//int RandNumber3 = 0;	//세 번째 숫자
	//srand(time(0));

	//

	//while (StartMoney > 100)
	//{
	//	RandNumber1 = rand() % 10;
	//	RandNumber2 = rand() % 10;
	//	RandNumber3 = rand() % 10;

	//	printf("현재 플레이어의 금액은 %d입니다. 베팅 하실 금액을 입력해주세요. : ", StartMoney);
	//	std::cin >> BetMoney;
	//	if (BetMoney >= 100)
	//	{
	//		StartMoney -= BetMoney;
	//		printf("슬롯 머신을 돌린결과 [%d][%d][%d]입니다.\n", RandNumber1, RandNumber2, RandNumber3);

	//		if ((RandNumber1 == RandNumber2) && (RandNumber2 == RandNumber3) && RandNumber1 != 7)	// 3개의 숫자가 다 같지만 7이 아닐경우
	//		{
	//			BetMoney50 = BetMoney * 50;
	//			printf("축하합니다. 같은 숫자가 3개가 나오셔서 베팅한 %d를 50배 해서 %d로 돌려 드립니다.\n", BetMoney, BetMoney50);
	//			StartMoney += BetMoney50;
	//		}
	//		else if ((RandNumber1 == 7) && (RandNumber2 == 7) && (RandNumber3 == 7))	// 3개의 숫자가 다 7일 경우
	//		{
	//			BetMoney777 = BetMoney * 10000;
	//			printf("대박입니다!!! 숫자 7이 3개가 나오셔서 베팅한 %d를 10,000배 해서 %d로 돌려 드립니다.\n", BetMoney, BetMoney777);
	//			StartMoney += BetMoney777;
	//		}


	//	}
	//	else
	//	{
	//		printf("최소 100 이상을 배팅하셔야 합니다.\n");
	//	}

	//}
	//printf("게임 종료\n\n");



	/*
		④ 플레이어와 적의 턴제 전투 만들기
			- HP는 100으로 시작
			- 공격을 할 때 상대방에게 5~15의 데미지를 준다.
			- 10%의 확률로 크리티컬이 발생해 2배의 데미지를 준다.
			- 상대방의 HP가 0 이하가 되면 승리한다.
	*/

	//int PlayerHP = 100;	//플레이어 체력 선언
	//int EnemyHP = 100;	//적 체력 선언
	//int Damage = 0;		//공격 할 때 데미지 선언
	//int Critical = 0;	//크리티컬 선언
	//int Select = 0;		//선택 선언

	//const int AttackFive = 5;		//매직 넘버 안쓰려고
	//const int AttackTen = 10;		//매직 넘버 안쓰려고
	//const int AttackEleven = 11;	//매직 넘버 안쓰려고

	//srand(time(0));

	//while (true)
	//{

	//	printf("현재 플레이어의 체력은 [%d]\n상대방의 체력은 [%d]입니다. 먼저 공격하시겠습니까?\n", PlayerHP, EnemyHP);
	//	printf("[1.네 2.아니오] ");
	//	std::cin >> Select;

	//	switch (Select)
	//	{
	//		case 1:
	//		{
	//			printf("\n");
	//			if (Critical != 9)	// 크리티컬이 안 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지

	//				printf("플레이어가 상대방을 공격하여 %d의 데미지를 주었습니다.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//			else if (Critical == 9)	// 크리티컬이 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				Critical = rand() % AttackTen;					// 0~9를 뽑아서 10%를 만듬

	//				Damage *= 2;
	//				printf("크리티컬이 발생하였습니다. 따라서 플레이어가 상대방에게 %d의 데미지를 주었습니다.\n", Damage);
	//				EnemyHP -= Damage;
	//			}

	//			if (Critical != 9)	// 크리티컬이 안 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				printf("상대방이 플레이어를 공격하여 %d의 데미지를 주었습니다.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//			else if (Critical == 9)	// 크리티컬이 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				Critical = rand() % AttackTen;					// 0~9를 뽑아서 10%를 만듬

	//				Damage *= 2;
	//				printf("크리티컬이 발생하였습니다. 따라서 상대방이 플레이어에게 %d의 데미지를 주었습니다.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//		}
	//		printf("\n");
	//		break;
	//		case 2:
	//		{
	//			printf("\n");
	//			if (Critical != 9)	// 크리티컬이 안 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				printf("상대방이 플레이어를 공격하여 %d의 데미지를 주었습니다.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//			else if (Critical == 9)	// 크리티컬이 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				Critical = rand() % AttackTen;					// 0~9를 뽑아서 10%를 만듬

	//				Damage *= 2;
	//				printf("크리티컬이 발생하였습니다. 따라서 상대방이 플레이어에게 %d의 데미지를 주었습니다.\n", Damage);
	//				PlayerHP -= Damage;
	//			}

	//			if (Critical != 9)	// 크리티컬이 안 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				printf("플레이어가 상대방을 공격하여 %d의 데미지를 주었습니다.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//			else if (Critical == 9)	// 크리티컬이 터졌을 경우
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15의 데미지
	//				Critical = rand() % AttackTen;					// 0~9를 뽑아서 10%를 만듬

	//				Damage *= 2;
	//				printf("크리티컬이 발생하였습니다. 따라서 플레이어가 상대방에게 %d의 데미지를 주었습니다.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//		}
	//		printf("\n");
	//		break;
	//		default:
	//		{
	//			printf("1번 아니면 2번을 눌러주세요!!!\n\n");
	//			break;
	//		}
	//	}


	//	if (EnemyHP <= 0)
	//	{
	//		printf("상대방의 체력이 0이 되어 패배했습니다.\n\n");
	//		break;
	//	}
	//	if (PlayerHP <= 0)
	//	{
	//		printf("플레이어가 체력이 0이하가 되어 패배했습니다.\n\n");
	//		break;
	//	}

	//}


	/*
		⑤도둑 잡기 만들기
			- 시작 금액 10000
			- 한판에 무조건 최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
			- 딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
			- 플레이어는 딜러의 카드 중 한장을 선택한다.
			- 만약 플레이어가 조커를 뽑있다면 플레이어의 승리. 배팅 금액의 2배를 받는다.
			- 플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.
	*/

	//int StartCash = 10000;		// 시작 금액 선언
	//int BetCash = 0;			// 배팅 금액 선언
	//int TrumpCard1 = 0;			// 첫 번째 트럼프 카드 선언
	//int TrumpCard2 = 0;			// 두 번째 트럼프 카드 선언
	//int Joker = 0;				// 조커 카드 선언
	//int SelectKey = 0;		// 조커 못 뽑았을때 선택할 키 선언
	//const int AKcard = 13;		// A~K 까지 카드 장수
	//const int MagicNumber = 1;	// 매직 넘버 1을 상수로 만듬
	//const int ThreeCard = 3;	// 3장을 선언

	//while (StartCash > 100)
	//{
	//	srand(time(0));
	//	TrumpCard1 = (rand() % AKcard) + MagicNumber;	//A~K 에서 한 장 뽑음
	//	TrumpCard2 = (rand() % AKcard) + MagicNumber;	//A~K 에서 한 장 뽑음
	//	int Dealer = 1;									//딜러 선언

	//	printf("현재 소지 금액은 %d 입니다.\n", StartCash);
	//	printf("베팅하실 금액을 입력해주세요. : ");
	//	std::cin >> BetCash;
	//	if (BetCash >= 100)
	//	{
	//		StartCash -= BetCash;
	//		if (TrumpCard1 != TrumpCard2)	// 중복이 없을 경우
	//		{
	//			Joker = rand() % ThreeCard;	// 조커의 위치를 정함.
	//			Dealer = Dealer << Joker;	// 조커가 0이면 딜러는 001, 조커가 1이면 딜러는 010, 조커가 2면 딜러는 100이다.
	//			int PlayerSlect = 0;		// 플레이어 선택을 선언

	//			printf("조커가 있을 위치를 골라주세요 [1번, 2번, 3번]: ");
	//			std::cin >> PlayerSlect;

	//			switch (PlayerSlect)
	//			{
	//			case 1:
	//			{
	//				if (PlayerSlect != Dealer)	//조커를 못 찾은 경우
	//				{
	//					printf("조커를 뽑지 못하셨습니다.\n 다음 게임을 하시거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있습니다.\n");
	//					printf("[1. 다음 게임을 한다. 2. 배팅 금액을 2배를 추가로 지불하여 한번 더 선택한다.] ");
	//					std::cin >> SelectKey;
	//					

	//					if (SelectKey == 1)
	//					{
	//						break;
	//					}
	//					else if (SelectKey == 2)
	//					{
	//						BetCash *= 2;
	//						StartCash -= BetCash;
	//						printf("조커가 있을 위치를 골라주세요 [1번, 2번]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							PlayerSlect += 1;	// 현재 조커는 010, 100 인데 1을 골랐으니까 1을 더해서 010으로 맞춰줘야함.

	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							PlayerSlect += 2;	// 현재 조커는 010, 100 인데 2를 골랐으니까 2를 더해서 100으로 맞춰줘야함.

	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						}

	//					}

	//				}
	//				else if (PlayerSlect == Dealer)	//조커를 찾은 경우
	//				{
	//					printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			case 2:
	//			{
	//				if (PlayerSlect != Dealer)	//조커를 못 찾은 경우
	//				{
	//					printf("조커를 뽑지 못하셨습니다.\n 다음 게임을 하시거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있습니다.\n");
	//					printf("[1. 다음 게임을 한다. 2. 배팅 금액을 2배를 추가로 지불하여 한번 더 선택한다.] ");
	//					std::cin >> SelectKey;
	//					

	//					if (SelectKey == 1)
	//					{
	//						break;
	//					}
	//					else if (SelectKey == 2)
	//					{
	//						BetCash *= 2;
	//						StartCash -= BetCash;
	//						printf("조커가 있을 위치를 골라주세요 [1번, 2번]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							PlayerSlect += 2;	// 현재 조커는 001, 100 인데 2를 골랐으니까 2를 더해서 100으로 맞춰줘야함.

	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						}

	//					}
	//				}
	//				else if (PlayerSlect == Dealer)	//조커를 찾은 경우
	//				{
	//					printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			case 3:
	//			{
	//				PlayerSlect += 1;	// 딜러가 1, 2, 4 니까 이진수로 보면 001 010 100 이어서 3을 4로 바꿔줘야함
	//				if (PlayerSlect != Dealer)	//조커를 못 찾은 경우
	//				{
	//					printf("조커를 뽑지 못하셨습니다.\n 다음 게임을 하시거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있습니다.\n");
	//					printf("[1. 다음 게임을 한다. 2. 배팅 금액을 2배를 추가로 지불하여 한번 더 선택한다.] ");
	//					std::cin >> SelectKey;
	//					

	//					if (SelectKey == 1)
	//					{
	//						break;
	//					}
	//					else if (SelectKey == 2)
	//					{
	//						BetCash *= 2;
	//						StartCash -= BetCash;
	//						printf("조커가 있을 위치를 골라주세요 [1번, 2번]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							if (PlayerSlect == Dealer)	// 조커를 찾았을 경우
	//							{
	//								printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// 조커를 못찾았을 경우
	//							{
	//								printf("조커를 못 찾으셨습니다.\n\n");
	//							}
	//						}
	//						}

	//					}
	//				}
	//				else if (PlayerSlect == Dealer)	//조커를 찾은 경우
	//				{
	//					printf("조커를 찾으셨습니다. 배팅 금액의 2배를 드리겠습니다.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			default:
	//			{
	//				printf("잘못된 입력입니다.\n\n");
	//				break;
	//			}
	//			}

	//		}
	//	}
	//	else if (BetCash < 100)
	//	{
	//		printf("최소 100 이상은 배팅하셔야 합니다.\n\n");
	//	}


	//}
	//printf("게임 종료\n");


	return 0;

}