#include "Project_01.h"
#include "Tool.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <time.h>
#include <random>

int main()
{
	// �� 3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ� �����
	//float Num1 = 0;
	//float Num2 = 0;
	//float Num3 = 0;
	//float Ave = 0.0f; // ��հ�

	//printf("ù ��° ���� �Է����ּ���.: ");
	//std::cin >> Num1;
	//printf("�� ��° ���� �Է����ּ���.: ");
	//std::cin >> Num2;
	//printf("�� ��° ���� �Է����ּ���.: ");
	//std::cin >> Num3;

	//Ave = Average(Num1, Num2, Num3);

	//printf("�� ���� ��� ���� %.1f�̴�.\n\n", Ave);


	// �� ������ ������ �Է� �޾� ���ΰ� ���ϴ� �Լ� �����

	//int FixedPrice = 0; // ���� ����
	//float DiscountRate = 0.0f; // ������ ����
	//int Price = 0; // ���ΰ� ����
	//
	//printf("������ �Է����ּ���. : ");
	//std::cin >> FixedPrice;
	//printf("�������� �Է����ּ��� [����) 10%% = 0.1 �Դϴ�].: ");
	//std::cin >> DiscountRate;
	//Price = Discount(FixedPrice, DiscountRate);
	//printf("���ΰ��� %d�Դϴ�.\n\n", Price);


	// �� �ֻ����� ���� ����� �����ϴ� �Լ� �����

	//int Dice = 0; // �ֻ��� ����

	//Dice = RandDice(Dice);

	//printf("�ֻ����� ���ȴ��� %d�� ���Խ��ϴ�.\n\n", Dice);


	// �� ������ �ָ� ����(A~F)�� �ִ� �Լ� �����
	/*int Score = 0;
	printf("������ �Է����ּ���. : ");
	std::cin >> Score;
	ScoreClass(Score);*/


	// �� ���ø� �Լ��� Clamp �Լ� �����ϱ�

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
		�� �ڸ��� �и��ϱ�(�Է��� �ڸ� �� ���� ����)
			- �� �ڸ��� ���� ���ؼ� ����ϱ�
	*/

	//int NumberA = 0;
	//printf("���� �Է����ּ���. : ");
	//std::cin >> NumberA;

	//int Sum = 0;	//�� �ڸ��� �� ���� ����
	//int DigitNumber = 0;	//�� �ڸ��Ǽ�

	//while (NumberA > 0)
	//{
	//	DigitNumber = NumberA % 10;	// �� ������ �ڸ��� ���� ����
	//	Sum += DigitNumber;	// ���� ���ڸ� �տ� ����
	//	NumberA /= 10;	// ��ü ���ڸ� ��ĭ�� ���������� �ű� �׷��鼭 �ڿ������� ������ 1�� �ڸ��� �ִ� ���ڸ� ����
	//}

	//printf("�� �ڸ����� ����: %d\n\n", Sum);


	/*
		�� ��� �Լ��� �̿��Ͽ� 10������ �Է¹޾� 2������ ����ϴ� �Լ� �����
	*/

	/*int TenNumber = 0;
	printf("10���� ���ڸ� �Է��Ͻÿ�. : ");
	std::cin >> TenNumber;

	printf("2������: ");
	Recurcive(TenNumber);
	printf("\n\n");*/



	/*
		�� ���� �ӽ� ���� �����
			- ���� �ݾ� 10000
			- ���ǿ� ������  �ּ� 100 �����ؾ� ��. ���� �����ݾ��� 100 ������ ��� ���� ����.
			- ���� ���� 3���� ������ 50��� ���� �޴´�.
			- ���� 777�̸� 10000�� ����
	*/

	//int StartMoney = 10000;	//���� �ݾ� 10000
	//int BetMoney = 0;	// ���� �ݾ�
	//int BetMoney50 = 0;	// ���� 50��
	//int BetMoney777 = 0;	// ���� 10000��

	//int RandNumber1 = 0;	//ù ��° ����
	//int RandNumber2 = 0;	//�� ��° ����
	//int RandNumber3 = 0;	//�� ��° ����
	//srand(time(0));

	//

	//while (StartMoney > 100)
	//{
	//	RandNumber1 = rand() % 10;
	//	RandNumber2 = rand() % 10;
	//	RandNumber3 = rand() % 10;

	//	printf("���� �÷��̾��� �ݾ��� %d�Դϴ�. ���� �Ͻ� �ݾ��� �Է����ּ���. : ", StartMoney);
	//	std::cin >> BetMoney;
	//	if (BetMoney >= 100)
	//	{
	//		StartMoney -= BetMoney;
	//		printf("���� �ӽ��� ������� [%d][%d][%d]�Դϴ�.\n", RandNumber1, RandNumber2, RandNumber3);

	//		if ((RandNumber1 == RandNumber2) && (RandNumber2 == RandNumber3) && RandNumber1 != 7)	// 3���� ���ڰ� �� ������ 7�� �ƴҰ��
	//		{
	//			BetMoney50 = BetMoney * 50;
	//			printf("�����մϴ�. ���� ���ڰ� 3���� �����ż� ������ %d�� 50�� �ؼ� %d�� ���� �帳�ϴ�.\n", BetMoney, BetMoney50);
	//			StartMoney += BetMoney50;
	//		}
	//		else if ((RandNumber1 == 7) && (RandNumber2 == 7) && (RandNumber3 == 7))	// 3���� ���ڰ� �� 7�� ���
	//		{
	//			BetMoney777 = BetMoney * 10000;
	//			printf("����Դϴ�!!! ���� 7�� 3���� �����ż� ������ %d�� 10,000�� �ؼ� %d�� ���� �帳�ϴ�.\n", BetMoney, BetMoney777);
	//			StartMoney += BetMoney777;
	//		}


	//	}
	//	else
	//	{
	//		printf("�ּ� 100 �̻��� �����ϼž� �մϴ�.\n");
	//	}

	//}
	//printf("���� ����\n\n");



	/*
		�� �÷��̾�� ���� ���� ���� �����
			- HP�� 100���� ����
			- ������ �� �� ���濡�� 5~15�� �������� �ش�.
			- 10%�� Ȯ���� ũ��Ƽ���� �߻��� 2���� �������� �ش�.
			- ������ HP�� 0 ���ϰ� �Ǹ� �¸��Ѵ�.
	*/

	//int PlayerHP = 100;	//�÷��̾� ü�� ����
	//int EnemyHP = 100;	//�� ü�� ����
	//int Damage = 0;		//���� �� �� ������ ����
	//int Critical = 0;	//ũ��Ƽ�� ����
	//int Select = 0;		//���� ����

	//const int AttackFive = 5;		//���� �ѹ� �Ⱦ�����
	//const int AttackTen = 10;		//���� �ѹ� �Ⱦ�����
	//const int AttackEleven = 11;	//���� �ѹ� �Ⱦ�����

	//srand(time(0));

	//while (true)
	//{

	//	printf("���� �÷��̾��� ü���� [%d]\n������ ü���� [%d]�Դϴ�. ���� �����Ͻðڽ��ϱ�?\n", PlayerHP, EnemyHP);
	//	printf("[1.�� 2.�ƴϿ�] ");
	//	std::cin >> Select;

	//	switch (Select)
	//	{
	//		case 1:
	//		{
	//			printf("\n");
	//			if (Critical != 9)	// ũ��Ƽ���� �� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������

	//				printf("�÷��̾ ������ �����Ͽ� %d�� �������� �־����ϴ�.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//			else if (Critical == 9)	// ũ��Ƽ���� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				Critical = rand() % AttackTen;					// 0~9�� �̾Ƽ� 10%�� ����

	//				Damage *= 2;
	//				printf("ũ��Ƽ���� �߻��Ͽ����ϴ�. ���� �÷��̾ ���濡�� %d�� �������� �־����ϴ�.\n", Damage);
	//				EnemyHP -= Damage;
	//			}

	//			if (Critical != 9)	// ũ��Ƽ���� �� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				printf("������ �÷��̾ �����Ͽ� %d�� �������� �־����ϴ�.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//			else if (Critical == 9)	// ũ��Ƽ���� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				Critical = rand() % AttackTen;					// 0~9�� �̾Ƽ� 10%�� ����

	//				Damage *= 2;
	//				printf("ũ��Ƽ���� �߻��Ͽ����ϴ�. ���� ������ �÷��̾�� %d�� �������� �־����ϴ�.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//		}
	//		printf("\n");
	//		break;
	//		case 2:
	//		{
	//			printf("\n");
	//			if (Critical != 9)	// ũ��Ƽ���� �� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				printf("������ �÷��̾ �����Ͽ� %d�� �������� �־����ϴ�.\n", Damage);
	//				PlayerHP -= Damage;
	//			}
	//			else if (Critical == 9)	// ũ��Ƽ���� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				Critical = rand() % AttackTen;					// 0~9�� �̾Ƽ� 10%�� ����

	//				Damage *= 2;
	//				printf("ũ��Ƽ���� �߻��Ͽ����ϴ�. ���� ������ �÷��̾�� %d�� �������� �־����ϴ�.\n", Damage);
	//				PlayerHP -= Damage;
	//			}

	//			if (Critical != 9)	// ũ��Ƽ���� �� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				printf("�÷��̾ ������ �����Ͽ� %d�� �������� �־����ϴ�.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//			else if (Critical == 9)	// ũ��Ƽ���� ������ ���
	//			{
	//				Damage = (rand() % AttackEleven) + AttackFive;	// 5~15�� ������
	//				Critical = rand() % AttackTen;					// 0~9�� �̾Ƽ� 10%�� ����

	//				Damage *= 2;
	//				printf("ũ��Ƽ���� �߻��Ͽ����ϴ�. ���� �÷��̾ ���濡�� %d�� �������� �־����ϴ�.\n", Damage);
	//				EnemyHP -= Damage;
	//			}
	//		}
	//		printf("\n");
	//		break;
	//		default:
	//		{
	//			printf("1�� �ƴϸ� 2���� �����ּ���!!!\n\n");
	//			break;
	//		}
	//	}


	//	if (EnemyHP <= 0)
	//	{
	//		printf("������ ü���� 0�� �Ǿ� �й��߽��ϴ�.\n\n");
	//		break;
	//	}
	//	if (PlayerHP <= 0)
	//	{
	//		printf("�÷��̾ ü���� 0���ϰ� �Ǿ� �й��߽��ϴ�.\n\n");
	//		break;
	//	}

	//}


	/*
		�뵵�� ��� �����
			- ���� �ݾ� 10000
			- ���ǿ� ������ �ּ� 100 �����ؾ� ��. ���� �����ݾ��� 100 ������ ��� ���� ����.
			- ������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
			- �÷��̾�� ������ ī�� �� ������ �����Ѵ�.
			- ���� �÷��̾ ��Ŀ�� ���ִٸ� �÷��̾��� �¸�. ���� �ݾ��� 2�踦 �޴´�.
			- �÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.
	*/

	//int StartCash = 10000;		// ���� �ݾ� ����
	//int BetCash = 0;			// ���� �ݾ� ����
	//int TrumpCard1 = 0;			// ù ��° Ʈ���� ī�� ����
	//int TrumpCard2 = 0;			// �� ��° Ʈ���� ī�� ����
	//int Joker = 0;				// ��Ŀ ī�� ����
	//int SelectKey = 0;		// ��Ŀ �� �̾����� ������ Ű ����
	//const int AKcard = 13;		// A~K ���� ī�� ���
	//const int MagicNumber = 1;	// ���� �ѹ� 1�� ����� ����
	//const int ThreeCard = 3;	// 3���� ����

	//while (StartCash > 100)
	//{
	//	srand(time(0));
	//	TrumpCard1 = (rand() % AKcard) + MagicNumber;	//A~K ���� �� �� ����
	//	TrumpCard2 = (rand() % AKcard) + MagicNumber;	//A~K ���� �� �� ����
	//	int Dealer = 1;									//���� ����

	//	printf("���� ���� �ݾ��� %d �Դϴ�.\n", StartCash);
	//	printf("�����Ͻ� �ݾ��� �Է����ּ���. : ");
	//	std::cin >> BetCash;
	//	if (BetCash >= 100)
	//	{
	//		StartCash -= BetCash;
	//		if (TrumpCard1 != TrumpCard2)	// �ߺ��� ���� ���
	//		{
	//			Joker = rand() % ThreeCard;	// ��Ŀ�� ��ġ�� ����.
	//			Dealer = Dealer << Joker;	// ��Ŀ�� 0�̸� ������ 001, ��Ŀ�� 1�̸� ������ 010, ��Ŀ�� 2�� ������ 100�̴�.
	//			int PlayerSlect = 0;		// �÷��̾� ������ ����

	//			printf("��Ŀ�� ���� ��ġ�� ����ּ��� [1��, 2��, 3��]: ");
	//			std::cin >> PlayerSlect;

	//			switch (PlayerSlect)
	//			{
	//			case 1:
	//			{
	//				if (PlayerSlect != Dealer)	//��Ŀ�� �� ã�� ���
	//				{
	//					printf("��Ŀ�� ���� ���ϼ̽��ϴ�.\n ���� ������ �Ͻðų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ֽ��ϴ�.\n");
	//					printf("[1. ���� ������ �Ѵ�. 2. ���� �ݾ��� 2�踦 �߰��� �����Ͽ� �ѹ� �� �����Ѵ�.] ");
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
	//						printf("��Ŀ�� ���� ��ġ�� ����ּ��� [1��, 2��]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							PlayerSlect += 1;	// ���� ��Ŀ�� 010, 100 �ε� 1�� ������ϱ� 1�� ���ؼ� 010���� ���������.

	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							PlayerSlect += 2;	// ���� ��Ŀ�� 010, 100 �ε� 2�� ������ϱ� 2�� ���ؼ� 100���� ���������.

	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						}

	//					}

	//				}
	//				else if (PlayerSlect == Dealer)	//��Ŀ�� ã�� ���
	//				{
	//					printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			case 2:
	//			{
	//				if (PlayerSlect != Dealer)	//��Ŀ�� �� ã�� ���
	//				{
	//					printf("��Ŀ�� ���� ���ϼ̽��ϴ�.\n ���� ������ �Ͻðų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ֽ��ϴ�.\n");
	//					printf("[1. ���� ������ �Ѵ�. 2. ���� �ݾ��� 2�踦 �߰��� �����Ͽ� �ѹ� �� �����Ѵ�.] ");
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
	//						printf("��Ŀ�� ���� ��ġ�� ����ּ��� [1��, 2��]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							PlayerSlect += 2;	// ���� ��Ŀ�� 001, 100 �ε� 2�� ������ϱ� 2�� ���ؼ� 100���� ���������.

	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						}

	//					}
	//				}
	//				else if (PlayerSlect == Dealer)	//��Ŀ�� ã�� ���
	//				{
	//					printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			case 3:
	//			{
	//				PlayerSlect += 1;	// ������ 1, 2, 4 �ϱ� �������� ���� 001 010 100 �̾ 3�� 4�� �ٲ������
	//				if (PlayerSlect != Dealer)	//��Ŀ�� �� ã�� ���
	//				{
	//					printf("��Ŀ�� ���� ���ϼ̽��ϴ�.\n ���� ������ �Ͻðų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ֽ��ϴ�.\n");
	//					printf("[1. ���� ������ �Ѵ�. 2. ���� �ݾ��� 2�踦 �߰��� �����Ͽ� �ѹ� �� �����Ѵ�.] ");
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
	//						printf("��Ŀ�� ���� ��ġ�� ����ּ��� [1��, 2��]: ");
	//						std::cin >> PlayerSlect;

	//						switch (PlayerSlect)
	//						{
	//						case 1:
	//						{
	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						break;
	//						case 2:
	//						{
	//							if (PlayerSlect == Dealer)	// ��Ŀ�� ã���� ���
	//							{
	//								printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//								StartCash = StartCash + (BetCash * 2);
	//							}
	//							else if (PlayerSlect != Dealer)	// ��Ŀ�� ��ã���� ���
	//							{
	//								printf("��Ŀ�� �� ã���̽��ϴ�.\n\n");
	//							}
	//						}
	//						}

	//					}
	//				}
	//				else if (PlayerSlect == Dealer)	//��Ŀ�� ã�� ���
	//				{
	//					printf("��Ŀ�� ã���̽��ϴ�. ���� �ݾ��� 2�踦 �帮�ڽ��ϴ�.\n\n");
	//					StartCash = StartCash + (BetCash * 2);
	//				}
	//			}
	//			break;
	//			default:
	//			{
	//				printf("�߸��� �Է��Դϴ�.\n\n");
	//				break;
	//			}
	//			}

	//		}
	//	}
	//	else if (BetCash < 100)
	//	{
	//		printf("�ּ� 100 �̻��� �����ϼž� �մϴ�.\n\n");
	//	}


	//}
	//printf("���� ����\n");


	return 0;

}