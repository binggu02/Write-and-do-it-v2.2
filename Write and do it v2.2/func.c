#include "func.h"

extern int num;
extern char inputString[128];

void prt_start()
{
	//printf(" �ȳ��ϼ���. ���� ����� ��Ű���?\n"); 1
	prt_sentences(1);
}

void split_w1()
{
	printf(" 1. ����\n");
	printf(" 2. ���δ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c1()
{
	//printf(" �����ϴ�. ������ ��ȹ�� ����̳���?\n"); 2
	prt_sentences(11);
	printf(" 1. ��\n");
	printf(" 2. �ƴϿ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c2()
{
	//printf(" � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)\n"); 3
	prt_sentences(21);
	printf(" �Է� : ");
	scanf("%s", &inputString);
	getchar();
	printf("\n");
	num = EOF;
}

void prt_motivation()
{
	int case_num;


	creat_rand();
	case_num = rand() % 4 + 1;

	switch (case_num)
	{
	case 1:
		printf(" ����̰ڱ���. �����մϴ�.\n");
		Sleep(2000);
		printf(" �׷� ��Ȳ�̶�� ���� ������� �̴ϴ�.\n\n");
		Sleep(2000);
		printf(" �׷����� �̹����� ���� �׸� �����ϼ����� ���ڽ��ϴ�.\n\n");
		Sleep(2000);
		printf(" ������ ������ ��� �ϴٺ��� ������ ������ ���� �� ������ ���̴ϴ�.\n");
		Sleep(2000);
		printf(" ���� ����ؼ� ������ ������ �������ٸ� �̷��� �غ�����.\n\n");
		Sleep(2000);
		printf(" ���� �ִ°����� ���� ������ �̵��ϼ���.\n");
		Sleep(2000);
		printf(" ��å�� �ϰų� ��ǥ�� ����� ������.\n\n");
		Sleep(2000);
		printf(" ���� ���� �츮���� �ʿ��� ���� ��ǥ�� ����� �޼������μ� �������� ��� ������ ���ư��� ���Դϴ�.\n\n");
		Sleep(2000);
		printf(" �����ͺ��� õõ�� �η������� ���� �� ���� ���� ����ֵ��� ����սô�.\n\n");
		Sleep(2000);
		break;
	case 2:
		printf(" ����� �� ������ ���ݰ� ���� ���� ���� ���� ������ �˴ϴ�.\n\n");
		Sleep(2000);
		printf(" �� � ������ ���� ��� �ϴ� �� �ƴմϴ�. �׳� ���� ���� ������� �ᰡ�鼭\n\n");
		Sleep(2000);
		printf(" � �� ������ ����� �� ������, ��� �ذ��� ������ �ذ����� �����ϸ鼭 ���� ���� ����\n");
		printf(" ����� ������ �̴ϴ�.\n\n");
		Sleep(2000);
		break;
	case 3:
		printf(" �λ��� ������ó�� �Ѿ����ٰ� �����°� �ƴմϴ�.\n\n");
		Sleep(2000);
		printf(" �ƹ��� ������� ���� �� ������ �ߵ�����, �߾��� �ǰ� ������ ���� ����� �ѵ��� �� �̴ϴ�.\n\n");
		Sleep(2000);
		break;
	case 4:
		printf(" ���ɼ��̶� �����̶�� �Ͱ� ���� ���̴�.\n\n");
		Sleep(2000);
		printf(" ������� ���� � ���� �ϱ� ���� ���� ���� �ϴ� �ൿ�� �ٷ� ����̴�.\n\n");
		Sleep(2000);
		printf(" �Ӹ������� ����� �� �ϰ� ���� ��� ������ ������ ���̴�.\n\n");
		Sleep(2000);
		printf(" �� ������ ������ ���ɼ��� �����ϰ� �ֱ� �����̴�.\n\n");
		Sleep(2000);
		printf(" �ΰ��� ����� ���� ��� ���� �� ����� �̹� ��ǥ�� �̷�� ���� �ൿ�� �ϴ� �ݸ�,\n");
		Sleep(2000);
		printf(" �ٸ� ����� ��ǥ�� �̷�� ���� ����� �Ѵٰ� �����Ѵٸ� �ൿ�� ���� �� ����� ��ǥ�� �޼��� ���ɼ��� ����.\n\n");
		Sleep(2000);
		printf(" �� ������ ���ɼ��� �ø��� ����� �ٷ� �ൿ�̱� �����̴�.\n\n");
		Sleep(2000);
		printf(" ��ǥ�� �̷�� ���� ����Ѱ��̶� �Ѵٸ� ���ɼ��� �ö�����, �����ϰ� ����ϴ� ���� ���ɼ����� �Ÿ��� �ֱ� �����̴�.\n\n");
		Sleep(2000);
		printf(" � ��ǥ�� ����� �̷���� �Ѵٸ� �������� �ൿ�� ������.\n\n");
		Sleep(2000);
		break;
	default:
		printf("Error for func.c in prt_motivation() Line : 53\n\n");
		break;
	}
	



}

void prt_end()
{
	if (num == 1)
	{
		printf(" ��������! � ��ȹ�� ����̳���?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		scanf("%s", &inputString);

	}
	else
	{
		printf(" �����ͺ��� �����غ���. ��ÿ� ������ �ұ��?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		scanf("%s", &inputString);

	}

	printf("\n");
	printf(" �����ϼ̽��ϴ�.\n\n");
	printf(" ���� ��ȹ �� �̷�ñ� �ٶ��ϴ�.\n");
	printf(" ������ ��ȹ : %s\n\n", inputString);


	printf(" ���α׷� ����\n");
}


void rand_prt(int gubun)
{



}

int creat_rand()
{
	srand(time(NULL));

}

void prt_sentences(int gubun)
{
	int case_num = 0;
	// gubun�� ���� 1, 11�̳� 21 �̷������� ���ؾ� ��.
	// case_num = rand() % 10 + 1 : 1 ~ 10������ ���� ���
	// case_num = rand() % 10 + 11 : 1 ~ 10������ ���� ��� �� 1�̸� 12���, 5�� 16���
	// 0 ~ 9������ ���� ��� : rand() % 10			// 0 ~ 9
	// 1 ~ 10������ ���� ��� : rand() % 10 + 1		// 1 ~ 10 ���� 11�̻��̸� ������
	// rand() % 10 + 11 : 11 ~ 20������ ���� ���		// 11 ~ 20
	// rnad() % 10 + 21 : 21 ~ 30������ ���� ���		// 21 ~ 30

	// �λ縻
	// set up 
	// 1 ~ 10 -> �λ縻 / 11�� �ݺ� ���� ���� : set up number = 1
	// 21 ~ 30 -> ��ȹ ����� /				: set up number = 11
	// 41 ~ 51 -> ��� ����� /				: set up number = 21
	// 
	while (1)
	{
		creat_rand();
		case_num = rand() % 10 + gubun;


		// �λ縻
		switch (case_num)
		{
		case 1:
			printf(" �ȳ��ϼ���. ���� ����� ��Ű���?\n");
			break;
		case 2:
			printf(" ���� �Ϸ��Դϴ�. ������ ����� ��Ű���?\n");
			break;
		case 3:
			printf(" ���õ� ���� �Ϸ� ��������. ������ ����� ��Ű���?\n");
			break;
		case 4:
			printf(" ���� �Ϸ� ������ ������. �ְ��� �Ϸ� ��������. ������ ����� ��Ű���?\n");
			break;
		default:
			if (case_num > 11)
				break;
			else
				continue;
		}

		if (case_num < 11) // while �� ����������
			break;


		// ��ȹ �����
		switch (case_num)
		{
		case 11:
			printf(" �����ϴ�. ������ ��ȹ�� ����̳���?\n");
			break;
		case 12:
			printf(" ������ ���� ��ȹ�� �����Ű���?\n");
			break;
		case 13:
			printf(" ���� � ���� ���� ���ϼ̳���?\n");
			break;
		default:
			if (case_num > 21)
				break;
			else
				continue;
		}

		if (case_num < 21)
			break;


		// ��� �����
		switch (case_num)
		{
		case 21:
			printf(" � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)\n");
			break;
		case 22:
			printf(" ����� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�.\n");
			break;
		case 23:
			printf(" ���� ���� �ִٸ� �����ּ���.(�����ʹ� ������� �ʽ��ϴ�)\n");
			break;
		default:
			if (case_num > 31)
				break;
			else
				continue;
		}

		if (case_num < 31)
			break;


		// 
		switch (case_num)
		{
		case 31:
			printf(" � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)\n");
			break;
		case 32:
			printf(" ����� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�.\n");
			break;
		case 33:
			printf(" ���� ���� �ִٸ� �����ּ���.(�����ʹ� ������� �ʽ��ϴ�)\n");
			break;
		default:
			if (case_num > 41)
				break;
			else
				continue;
		}

		if (case_num < 41)
			break;




	}



}