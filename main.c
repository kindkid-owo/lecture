#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:4996)

// ## 0819 
/*
int main(void)
{
	int unit_price, apple_count, price;

	printf("��� 1���� ������ ���Դϱ�? ");
	scanf("%d", &unit_price);

	printf("����� ������ ��� �� �� �Դϱ�? ");
	scanf("%d", &apple_count);

	price = apple_count * unit_price;

	printf("��ü ����� ������ %d�� �Դϴ�. \n", price);

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, result;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d  %d", &num1, &num2);
		
	result = num1 + num2;
	printf("������ ����� %d �Դϴ� \n", result);

	result = num1 - num2;
	printf("������ ����� %d �Դϴ� \n", result);

	result = num1 * num2;
	printf("������ ����� %d �Դϴ� \n", result);

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, num3, total, avg;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	total = num1 + num2 + num3;
	avg = total / 3;
	
	printf("����� %d �Դϴ�. ", avg);
	return 0;
}
*/

/*
int main(void)
{
	float num1, num2, num3;
	float average;

	printf("Input three numbers : ");
	scanf("%f %f %f", &num1, &num2, &num3);

	average = (num1 + num2 + num3) / 3;

	printf("Average is %f \n", average);

	return 0;
}
*/

/*
int main(void)
{
	int apple_count;

	printf("����� ������? ");
	scanf("%d", &apple_count);

	if (apple_count > 30) {
		printf("�� �ڽ��� ���� �� �����ϴ�.\n");
	}
	else {
		printf("�� �ڽ��� ���� �� �ֽ��ϴ�.\n");
	}
}
*/

/*
int main(void)
{
	int age;											// ����
	int gender;											// ���� (1: ����, 2: ����)

	printf("����� ���̴�? ");
	scanf("%d", &age);
	
	if (age <= 0)
	{
		printf("���̸� �߸� �Է��Ͽ����ϴ�.\n");
		exit(1);										// ���α׷� ����
	}

	printf("����� ������? (1:����, 2:����) ");
	scanf("%d", &gender);

	if (gender == 1)									// ������ ������ ���
		printf("����� %d���� �����Դϴ�.\n", age);
	else if (gender == 2)								// ������ ������ ���
		printf("����� %d���� �����Դϴ�.\n", age);
	else
	{
		printf("������ �߸� �Է��Ͽ����ϴ�.\n");		// �߸� �Էµ� ���
		exit(1);
	}
	return 0;
}
*/

//�Ѱ��� ���� �Է¹޾� ������� �������� �Ǵ��ϴ� ���α׷��� ������!
/*
int main(void)
{
	int number;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &number);

	if (number > 0)
	{
		printf("����Դϴ�.\n");
	}
	else if (number < 0)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("0�Դϴ�.\n");
	}
	return 0;
}
*/

/*
int main(void)
{
	int age;
	
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	
	if (age >= 65)
	{
		printf("����\n");
	}

	else if (age >= 20)
		printf("�����Դϴ�\n");
	else if (age >= 13)
		printf("û�ҳ��Դϴ�\n");
	else if (age >= 0)
		printf("����Դϴ�\n");
	else
		printf("���̸� �߸� �Է��Ͽ����ϴ�.\n");

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, num3;
	int min, max;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = num1;
	min = num1;

	if (min > num2)
		min = num2;
	if (min > num3)
		min = num3;

	if (max < num2)
		max = num2;
	if (max < num3)`
		max = num3;

	printf("�ּҰ��� %d, �ִ밪�� %d �Դϴ�.\n", min, max);

	return 0;
}
*/

// ## 0902 ���� ������, ��Ʈ ������, ���ǹ�, �ݺ���
/*
int main(void)
{
	int num1 = 10;
	int num2;

	num2 = (num1 == 10) ? 100 : 200;

	printf("%d\n", num2);
	return 0;
}
*/

/*
int main(void)
{
	unsigned char num1 = 1;			// 0000 0001
	unsigned char num2 = 3;			// 0000 0011

	printf("%d\n", num1 & num2);	// 0000 0001: 01�� 11�� ��Ʈ AND�ϸ� 01�� ��
	printf("%d\n", num1 | num2);	// 0000 0001: 01�� 11�� ��Ʈ OR�ϸ� 11�� ��
	printf("%d\n", num1 ^ num2);	// 0000 0001: 01�� 11�� ��Ʈ XOR�ϸ� 10�� ��

	return 0;

}
*/

/*
int main(void)
{
	int num1;

	scanf("%d", &num1);			// ���� �Է¹���


	switch (num1)
	{
	case 1:
		printf("1�Դϴ�.\n");
		break;
	case 2:
		printf("2�Դϴ�.\n");
		break;
	default:
		printf("default\n");
		break;
	}
	return 0;
}
*/

/*
int main(void)
{
	int num1;

	scanf("%d", &num1);			// ���� �Է¹���

	switch (num1)
	{
	case 1:
		int num2 = num1;
		printf("%d�Դϴ�.\n", num2);
		break;
	case 2:
		printf("2�Դϴ�.\n");
		break;
	default:
		printf("default\n");
		break;
	}
	return 0;
}
*/

/*
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("Hello, World!\n");
	}

	return 0;
}
*/

/*
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Hello, World!\n");
	}

	printf("%d\n", i);

	return 0;
}
*/

/*
int main(void)
{
	int cnt, i;

	printf("input number : ");
	scanf("%d", &cnt);

	for (i=0; i<cnt; i++)
		printf("Hello, World!\n");
}
*/

/*
int main(void)
{
	for (int i = 0, j = 0; i < 10; i++, j += 2)
	{
		printf("i: %d, j: %d\n", i, j);
	}
	return 0;
}
*/

/*
int main(void)		// ���� ����
{
	for (;;)
	{
		printf("Hello");
	}
}
*/

/*
int main(void)
{
	int i, j;
	for (i = 2, j = 5; j > 0; i *= 2, j--)

	{
		printf("%d %d\n", i, j);	
	}
	return 0;	
}
*/

/*
int main(void)
{
	unsigned char i = 1;
	while (i != 0)
	{
		printf("%u\n", i);
		i <<= 1;		
	}
	
	return 0;
}
*/

/*
int main(void)
{
	srand(time(NULL));

	int i = 0;
	while (i != 3)
	{
		i = rand() % 10;
		printf("%d\n", i);
	}
	return 0;
}
*/

/*
int main(void)
{
	int i = 0;
	srand((unsigned int)time(NULL));
	i = rand() % 10 + 1;
 	printf("%d\n", i);
}
*/

/*
int main(void)
{
	char c1;

	do
	{
		scanf("%c", &c1);
	} while (c1 != 'q');

	printf("���α׷� ����\n");

	return 0;
}
*/

// ����
/*
1.
int main(void)
{
	int i, j;
	
	scanf("%d", &i);
	for (j = 1; j < 10;)
	{		
		printf("%d * %d = %d\n", i, j, i * j);
		j++;
	}
	
	return 0;
}

2.
int main(void)
{
	int i;
	int j = 1;

	printf("Input number : ");
	scanf("%d", &i);
	while (j < 10)

	{
		printf("%d * %d = %d\n", i, j, i * j);
		j++;
	}

	return 0;
}

3.
int main(void)
{

	int sum = 0;
	int i = 1;

	do {
		sum = sum + i;
		i++;
	
	} while (i <= 100);

	printf("result of sum : %d\n", sum);

	return 0;
}

4. 
int main(void)
{
	int i = 0;
	int result = 0;
	int num;

	while (i < 5)
	{
		printf("Input number : ");
		scanf("%d", &num);

		result = result + num;
		printf("���� �հ� : %d\n", result);

		i++;
	}
	return 0;
}

// 5.

 6-1.
int main(void)
{
	int i;
	printf("input number : ", i);
	scanf("%d", &i);

	while (i > 0);
	{
		printf("%d! = \n", i);
		i = i * (i - 1);
	}
}

 6-2.
int main(void)
{
	int i, num;
	int result = 1;

	printf("input number : ", i);
	scanf("%d", &num);

	for (i = num; i > 0; i--)
	{
		printf("%d! = \n", i);
		if (i == 1)
			printf("= ");
		else
			printf("* ");
		result = result * i;
	}
	printf("%d", result);
	return 0;
}

 6-3. 
int main(void)
{
	int i, num;
	int result = 1; \
	char ch;

	printf("input number : ");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
	{
		printf("%d ", i);
		ch = (i == 1) ? '=' : '*';
		printf("%c ", ch);

		result = result * i;
	}
	printf("%d", result);
	return 0;
}
 7.
int main(void)
{
	int max = -1;
	int min = 101;
	int i, num;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if (num > 100 || num < 0)
		{
			printf("Incorrect input\n");
			exit(1);
		}

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}
	printf("max: %d, min: %d\n", max, min);

	return 0;
}
*/

/*
int main(void)
{
	int i = 1;
	
	while(1)

	{
		if (i % 10 != 3)
		{
			i++;
			continue;
		}
		if (i > 103);
			break;

		printf("%d ", i);
		i++;
		}

	return 0;
}
*/

/*
int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
int main(void)

{
	for (int i = 0; i < 5; i++) // ����
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
				printf("*");	
		}
		printf("\n");
	}
	return 0;
}
*/

/*
int main(void)

{
	for (int i = 0; i < 5; i++) // ����
	{
		for (int j = 0; j <= i; j++)
				printf("*");
		printf("\n");
	}
	return 0;
}
*/

/*
int main(void)
{
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	printf("\n");
}
*/

/*
int main(void)

{
	for (int i = 0; i < 5; i++) // ����
	{
		for (int j = 0; j <= i; j++)
				printf("*");
		printf("\n");
	}
	return 0;
}
*/

/*
int main(void)
{
	int max_i = 5;

	for (int i = 0; i < max_i; i++) // ����
	{
		for (int j = 1; j <= max_i - i; j++)
			printf("*");

		for (int j = 0; j < i; j++)
			printf(" ");

		printf("\n");
	}
	return 0;
}
*/

// 0903 �迭

/*
 sizeof(int) = 4
 sizeof(char) = 1
 sizeof(double) = 8
 sizeof(float) = 4
 sizeof(short) = 2
 sizeof(long) = 4
 int numArr[10]; // 40 bytes
 sizeof(numArr) = 40

 int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
 int result = 0; // �ʱ�ȭ
 for (int i = 0; i < 10; i++)
     result = result + arr[i];

int main(void)
{
	float scores[10] = { 
		67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 
		63.0f, 90.1f, 88.0f, 79.7f, 95.3f
};

	float sum = 0.0f;
	float average;

	for (int i = 0; i < sizeof(scores) / sizeof(float); i++)
	{
		sum = sum += scores[i];
	}
	
	average = sum / (sizeof(scores) / sizeof(float));

	printf("%f\n", average);
	
	return 0;

}
*/

/*
int main(void)
{
	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 }; \
	int i;
	int count = 0;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] == 10)
			count++;
	printf("���� 10 count: %d\n", count);	
}
*/

/*
int main(void)
{
	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 };
	int i, j;
	int flag = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		
	{
		for (j = 0; j < i; j++)			// ���� 1
		{
			if (arr[i] == arr[j])		// ���� 3
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)					// ���� 2
			printf("%d ", arr[i]);
		else
			flag = 0;
	}
	return 0;

}
*/

/*
int main(void)
{
	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 };
	int arr_idx = 0;
	int i, j;
	int flag = 0;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		for (j = 0; j < sizeof(arr_idx); j++)			// ���� 1
		{
			if (arr[i] == arr_idx[j])		// ���� 3
			{
				flag = 1;
			}
		}

		if (flag == 0)					// ���� 2
		{
			arr[arr_idx++] = arr[i];
			arr_idx++;
		}
		else
			flag = 0;
		
		printf("%d ", arr[i]);
	}
}
*/

/*
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	int arr2[3] = { 4, 5, 6 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		int sum = arr[i] + arr2[i];
		printf("%d ", sum);
	}


//	for (i =0; i < sizeof(arr)/sizeof(int); i++)
//		printf("%d ", arr[i] + arr2[i]);

}
*/

// 2���� -> 10���� ��ȯ

/*
int main(void)
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };

	for (int i = 0; i < sizeof(binary) / sizeof(int); i++)
		decimal = decimal * 2 + binary[i];
	
	printf("%d\n", decimal);
	return 0;
}
*/

/*
int main(void)
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };

	{
		for (int i = 0; i <= 3; i++)
			decimal = (int)pow(2, 3 - i) * binary[i] + decimal;
	}
	printf("%d\n", decimal);
	return 0;
	
}
*/

/*
int main(void)
{
	int matrix[8][8] = {
		{  1,  2,  3,  4,  5,  6,  7,  8},
		{  9, 10, 11, 12, 13, 14, 15, 16},
		{ 17, 18, 19, 20, 21, 22, 23, 24},
		{ 25, 26, 27, 28, 29, 30, 31, 32},
		{ 33, 34, 35, 36, 37, 38, 39, 40},
		{ 41, 42, 43, 44, 45, 46, 47, 48},
		{ 49, 50, 51, 52, 53, 54, 55, 56},
		{ 57, 58, 59, 60, 61, 62, 63, 64}
	};
	for (int i = 0; i <sizeof(matrix[i]) / sizeof(int); i++)			//sizeof(matrix)/ sizeof(matrix[0]), i++)
		for (int j = 0; j < sizeof(matrix[j]) / sizeof(int); j++)		//sizeof(matrix[0])/ sizeof(int), j++)
			if (i == j)		
			printf(" %d\n", matrix[i][j]);
		return 0;
}
*/

/*
int main(void)
{
	int i, j, num;
	int arr[3][3] =	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
		printf("1: 90deg, 2: 180deg, 3: 270deg ");
		scanf("%d", &num); 
		{
				if (num == 1) {
					for (i = 0; i < 3; i++)
					{
						for (j = 0; j < 3; j++)
						{
							printf("%d ", arr[2 - j][i]);
						}
						printf("\n");
					}
				}
				else if (num == 2) {
					for (i = 0; i < 3; i++)
					{
						for (j = 0; j < 3; j++)
						{
							printf("%d ", arr[2 - i][2 - j]);
						}
						printf("\n");
					}
				}
				else if (num == 3){
					for (i = 0; i < 3; i++)
					{
						for (j = 0; j < 3; j++)
						{
							printf("%d ", arr[j][2 - i]);
						}
						printf("\n");
					}
				}
				else
					printf("Incorrect Number\n");
		}
			return 0;
}
*/

/*
 other solution
			for (i = 0; i < 3; i++)
				for (j = 0; j < 3; j++)
					result[j][i] = arr[i][3 - 1 - j];
 ������
 �⺻����
 �ڷ��� *�������̸�;
 ������ = &����;
 int* numPtr = �ڷ����� �����ͺ��� ����
 int *numPtr = ������ ���� ����
 ������ ������ �׻� 4byte
 // double* = char* = int* = 4byte
int main()
{
	int* numPtr;					// ������ ���� ����
	int num1 = 10;					// int�� ������ �����ϰ� 10 ����

	numPtr = &num1;					// num1�� �޸� �ּҸ� ������ ������ ����

	printf("%p\n", numPtr);			// 0055FC24: ������ ���� numPtr�� �� ���
									// ��ǻ�͸���, ������ ������ �޶���
	printf("%p\n", &numPtr);		// 0055FC24: ���� num1�� �޸� �ּ� ���
									// ��ǻ�͸���, ������ ������ �޶���
	printf("%d\n", num1);
	printf("%d\n", *numPtr);
	
	return 0;
}
*/

/*
 ������ ������ ����ϱ�
int main()
{
	int* numPtr;					// ������ ���� ���� (�򰥸� ������ ���� ��Ÿǥ��)
	int num1 = 10;					// ������ ������ �����ϰ� 10 ����

	numPtr = &num1;					// num1�� �޸� �ּҸ� ������ ������ ����
	
	*numPtr = 20;					// ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ����

	printf("%d\n", *numPtr);		// 20: ������ �����ڷ� �޸� �ּҿ� �����Ͽ� ���� ������
	printf("%d\n", num1);			// 20: ���� num1�� ���� �ٲ�

	return 0;
}
*/

// 0910 ������ (=��)

/*
int main()
{
	int* numPtr;					// ������ ���� ���� (�򰥸� ������ ���� ��Ÿǥ��)
	int num1 = 10;					// ������ ������ �����ϰ� 10 ����

	numPtr = &num1;					// num1�� �޸� �ּҸ� ������ ������ ����
	
	*numPtr = 20;					// ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ����

	printf("%d\n", *numPtr);		// 20: ������ �����ڷ� �޸� �ּҿ� �����Ͽ� ���� ������
	printf("%d\n", num1);			// 20: ���� num1�� ���� �ٲ�

	return 0;
}
*/

// ���� = �޸� �ּҸ� ���� ���� �������ų� ������ �� �ִ�
// & = �ּҿ����ڴ� ������ �޸� �ּҸ� ���Ѵ�
// * = ������ �����ڴ� �޸𸮿� ����� ���� �����Ͽ� ���� �������� �����Ѵ�
// ~Ptr = ������ �޸� �ּҸ� ��Ÿ����

// ��������
/*
int main(void)
{
	int* numPtr;
	int num1 = 10;
	int num2 = 20;

	numPtr = &num1;
	printf("%d\n", *numPtr);

	numPtr = &num2;
	printf("%d\n", *numPtr);

	return 0;
}
*/

/*
int* num;
int* numPtr;

int main(void)
	{
	numPtr = &num;
	printf("Input number : ");
	scanf("%d", &num);
	number();
	return 0;
	}

int number()
	{
	if (*numPtr % 2 == 0)
		printf("¦���Դϴ�.");
	else
		printf("Ȧ���Դϴ�.");
	return 0;
	}
*/

// �ٸ� Ǯ��
/*
int isEven(int a);

int main(void)
{
	int num;
	printf("Input number : ");
	scanf("%d", &num);
	if (isEven(num) == 1)
		printf("Even.\n");
	else
		printf("Odd.\n");
	return 0;
}
// 1
int isEven(int a)
{
	if (a % 2 == 0)
		return 1;
	else
		return 0;
}
// 2
void isEven(int a)
{
		if (a % 2 == 0)
		printf("Even.\n");
	else
		printf("Odd.\n");
		return;
}
*/
/*
int num1;
int num2;


int main(void)
{
	printf("���� 2���� �Է��ϼ��� : ");
	scanf("%d %d", num1, num2);
	add(num1, num2);
	printf("������ ����� %d �Դϴ� \n", add());
	sub(num1, num2);
	printf("������ ����� %d �Դϴ� \n", sub());
	mul(num1, num2);
	printf("������ ����� %d �Դϴ� \n", mul());
	div(num1, num2);
	printf("�������� ����� %d �Դϴ� \n", div());

}

int add()
{
	return num1 + num2;
}
int sub()
{
	return num1 - num2;
}
int mul()
{
	return num1 * num2;
}
int div()
{
	return num1 / num2;
}
*/

/*
����(����)�� �Է¹޾� �� ������ ���丮���� ����ϴ� �Լ��� �ۼ��غ���
�Լ� ��ȯ�� void, int �Ѵ� ����
int factorial(int num);

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d! = %d\n", num, factorial(num));
	return 0;
}
int factorial(int num)
{
	int result = 1;
	for (int i = num; i > 0; i--)
		result = result * i;
	return result;
}
void v_factorial(int num);

int main(void)
{
	int num;
	scanf("%d", &num);
	v_factorial(num);
}
void v_factorial(int num)
{
	int result = 1;
	for (int i = num; i > 0; i--) 

		result = result * i;
	printf("%d! = %d\n", num, result);

}
*/

/*
int isPrime(int num);
int num;
int main(void)
{
	scanf("%d", &num);
	if (isPrime(num))
		printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", num);
	else
		printf("%d��(��) �Ҽ� �Դϴ�.\n", num);
}
int isPrime(int num)
{
	int i=0;
	for (int i = 0; i <= num; i++);
	{
		if (i % 2 == 0)
			return 0;
		else if (i % 3 == 0)
			return 0;
		else
			return 1;
	}
}
*/

/*
void startGame();
int num;

int main(void)
{
	srand((unsigned int)time(NULL));
	startGame();
	return 0;
}
void startGame()
{
	int x, y;
	int result;

	for (int i = 0; i < 5; i++)
	{
		x = (rand() & 8) + 1;
		y = (rand() % 8) + 1;
		result = x * y;
		printf("%d �� %d = ? \n", x, y);
		scanf("%d", num);

		if (num == &result)
			printf("�����Դϴ�.\n");
		else
			printf("�����Դϴ�.\n");
		printf("������ %d �Դϴ�.\n", result);
	}	
}
rand() % 8 -->0~8 ����
rand() % 8 + 1 -->1~9 ����
*/

// ������ ����

/*
int main(void)
{
	int num1 = 1;
	int num2 = 2;

	printf("%d %d\n", num1, num2);
	test(&num1, &num2);
	printf("%d %d\n", num1, num2);
}
void test(int* num1, int* num2)
{
	*num1 = 10;
	*num2 = 20;
}
*/

// ���ϰ� ������ ���� main �Լ��� ����
/*
int main(void)
{
	return 0;
}
void main(void)
{
}

 ���ϰ� ������ ���� main �Լ��� ����
int main(int argc, char* argv[])
{
	return 0;
}
void main(int argc, char* argv[])
{
}
*/

/*
void swap1(int* n1, int* n2);
void swap2(int* n1, int* n2);

int main()
{
	int num1 = 10;
	int num2 = 20;

	swap1(&num1, &num2);
	printf("%d %d\n", num1, num2); // 20, 10

	swap2(&num1, &num2);
	printf("%d %d\n", num1, num2); // 10, 20
}
//�ּҿ� �ִ� ������ ����
void swap1(int* n1, int* n2)
{
	int tmp;
	tmp = *n1; // tmp = *n1 = num1 = 10
	*n1 = *n2; // *n1 = *n2 = num2 = 20
	*n2 = tmp; // *n2 = tmp = *n1 = num1 = 10
}
//�ּҸ� �����Ͽ� ���� ����� (��Ȯ���� ����Ȱ�ó�� ���̴°�)
void swap2(int* n1, int* n2)
{
	int* tmp;
	tmp = n1; // tmp = n1(0x0000)
	n1 = n2;  // n1 = n2(0x0004)
	n2 = tmp; // n2 = tmp(=n1(0x0000)
}
*/

////�迭�� �����ʹ�
/*
int main(void)
{
	int arr[10];

	printf("%p \n", arr);
	printf("%p \n", &arr[0]);
	return 0;
}
*/

//// �迭�� �̸��� �� �迭�� ù��° �ּҰ��� ��Ÿ����.

/*
int main(void)
{
	int arr[10];

	for (int i = 0; i < 10; i++)
		arr[i] = i;

	printf("%d \n", *(arr + 1)); // arr[1]
	
	return 0;
}
*/

/*
void initArray(int* arr);

int main(void)
{
	int arr[10];

	initArray(arr);
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void initArray(int* arr)
{
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1 ;
}
*/

// ����, �迭ũ�⸦ �Է��ؼ� �ִ밪 ã�� (ing)
/*
int findMax(int* arr, int size)
int input1, input2, arr;

int main(void)
{

	printf("���ڸ� �Է��ϼ��� \n");
	scanf("%d ", &input1);
	printf("�迭�� ũ��: \n");
	scanf("%d ", &input2);
	findMax(input1, input2);
	printf("�ִ밪: %d\n", findMax(arr, input2));
}

int findMax(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
*/

// ���� - 'c';, 'a';, 'b';
// ���ڿ� - "abc";
/*
int main(void) {
	char str[7];
	str[0] = 'c';
	str[1] = 'o';
	str[2] = 'd';
	str[3] = 'i';
	str[4] = 'n';
	str[5] = 'g';
	str[6] = '\0'; // NULL

	printf("%s", str);
}

int main(void) {
	char str1[7];
	str1[0] = 'c';
	str1[1] = 'o';
	str1[2] = 'd';
	str1[3] = 'i';
	str1[4] = 'n';
	str1[5] = 'g';

	printf("%s", str1);	// NULL �߻�!
}
int main(void) {
	char str2[7];
	str2[0] = 'c';
	str2[1] = 'o';
	str2[2] = 'd';
	str2[3] = 'i';
	str2[4] = 'n';
	str2[5] = 'g';

	for (int i = 0; i <= 5; i++)
		printf("%c", str2[i]);	// NULL ����!
}
*/

/*
int main(void) {
	char str3[7];
	str3[0] = 'c';
	str3[1] = 'o';
	str3[2] = 'd';
	str3[3] = 'i';
	str3[4] = 'n';
	str3[5] = 'g';

	for (int i = 0; i <= 5; i++)
		printf("%d\n", str3[i]);	// NULL ����!
}
*/

/*
 '0' -> 48
 'A' -> 65
 'a' -> 97
int main(void)
{
	char str4[7];
	str4[0] = 97;
	str4[1] = 98;
	str4[2] = 99;
	str4[3] = '\0';

	printf("%c", str4[0], str4[1], str4[2]);
	printf("%s", str4);
}
*/

//Palindrome(ȸ��) -> ������ ������, �ڷ� ������ ���� ���ڿ� ex) aka, abba, abcba
//����ڷκ��� ���ڿ��� �Է¹޾� ȸ������ �ƴ��� �˻��ϴ� ���α׷��� ������

/*
int isPalindrome(char* str, int size);

int main(void)
{
	char str[10];
	int len = 0;
	printf("input: ");
	scanf("%s", str);

	for (int i = 0; i < 10; i++)
	{
		if (str[i] != '\0')
			break;
		else
			len++;
	}
	printf("%d\n", len);

	if (inPalindrome(str, len))
		printf("It's palindrome\n");
	else
		printf("It's Non-palindrome\n");

	return 0;
}

int isPalindrome(char* str, int size)
{
	int i;

	for (i = 0; i < size/2; i++);
	{
		if (str[i] == str[size - i - 1])
			return 0;
	}
	return 1;
}
*/

// �迭���� Ư�� ���� ���� ����
/*
int countChar(char* str, char ch);

int main(void)
{
	char str[100];
	char ch;
	
	printf("input string : ");
	scanf("%s", str);							// fflush(stdout) = ������ input�� ������ ���۸� ����� ����Ѵ�;
	printf("input character : ");
	scanf("%c", &ch);
	scanf("%c", &ch);
	
	printf("%d\n", countChar(str, ch));

	return 0;

}
int countChar(char* str, char ch)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
			count++;
	}
	if (ch == 0)
		return 0;
	else
		return count;
	
}
*/

// 0916
/*
 ���ڿ��� ���� �˾ƺ���
int main(void)
{
	char str[10];
	int len;
	scanf("%s", str);	<--- "hello"
	len = strlen(str);
	printf("%d", len);
	return 0;
}
*/

/*
int main(void) {
	char str1[12] = "Hello World";
	char str2[12];
	strcpy(str2, str1);
	printf("%s", str2);
}
*/

/*
int main(void)
 {
 char* str1 = "Hello World";
	char str2[12];
	strcpy(str2, str1);
	printf("%s", str2);

	return 0;
}
*/

/*
int main(void)
 {
 char* str1 = "Hello World";
    char str2[12];
	strncpy(str2, str1, 5);
	str2[5] = '\0';  // NULL���� ���Ե��� ���� ��� ������ NULL���� �־��־�� ���ڿ��� ����� ��
	printf("%s", str2);

	return 0;
}
*/

/*
int main(void)
 {
 har* str1 = "Hello World";
	char str2[12] = "Hi";
	
	if (strcmp(str1, str2) == 0)
		printf("It's the same\n");
	else
		printf("It's not same\n");

	return 0;
}
*/

/*
int main(void)
{
	char str[80];

	printf("����� �̸��� �Է��ϼ��� > ");
	fgets(str, (int)(sizeof(str) * sizeof(char)), stdin);	// ����, ���� ��� �Է��� �޴´�
	str[strlen(str) - 1] = '\0';
	printf("�Է��Ͻ� �̸��� %s�Դϴ�.\n", str);
	return 0;
}
*/

/*
int main(void)
{
	char str[80];

	char str1[100] = " World";
	char str2[100] = "Hello";

	strcat(str2, str1);
			
	printf("%s\n", str2);
	return 0;
}
*/

/*
 �Է¹��� ���ڿ� ���� ���
int main(void)
{
	char str[50];
	char tmp;
	int len;
	len = strlen(str);
	printf("Input: ");
	scanf("%s", str);

	reverse(str);

	printf("%s\n", str);
	
	void reverse(char* str[]);
	
	int i;
		for (i = len - 1; i >= 0; --i)
		{
			tmp = str[i];
		}			
	return 0;
}
*/

/*
int main(void)
{
	char str[50];

	printf("Input: ");
	scanf("%s", str);

	lenEncode(str);

	void lenEncode(char str[]);
	
	char tmp;
	int num;
	num = 1;
	tmp = str[i];

		int i;
		for (i = 1; i < strlen(str); i++)
		{
			if (str[i] != str[i - 1])
				printf("%s", tmp);

			else (str[i] == str[i - 1]);
				num ++;
				printf("%s", num);			
		}
}
*/

/*
char* encodinf(char str[]);
void decoding(char str[]);

int main(void)
{
	
	char str[100];
	char* enStr;

	printf("Input String: ");
	scanf("%s", str);

	enStr = encoding(str);
	printf("%s", enStr);

	return 0;

}
char* encoding(char str[])
{
		char encodedString[100];
		int encodedString_len = 0;
		char startCh = '\0';
		int chLen = 1;

		int i;
		for (i = 0; i < strlen(str); i++)
		{
			startCh = str[i];

			if (str[i] == str[i+1])
				chLen++;
			else
			{
				encodedString[encodedString_len++] = startCh;
				encodedString[encodedString_len++] = chLen + '0';
				encodedString[encodedString_len] = '\0';
				chLen = 1;
			}
		}
		return encodedString;
}
*/

/*
int main(void)
{
	int a = 123;
	int arr[10];
	char num[10] = "456";
	itoa(a, arr, 10);				// itoa : �������� ���ڿ��� ��ȯ
	printf("%s\n", arr);

	printf("%d\n", atoi(num));		// atio : ���ڿ��� ���������� ��ȯ
}
*/

#include <math.h>
/*
int main(void)
{
	// ���� ����
	// (-b + root(b2-4ac)) / 2a;

	// 3x^2 + 2x + 1

	(-2 + sqrt(pow(3, 5) - (4 * 3 * 1))) / (2 * 3);

}
*/

/*
int main()
{
	for (int i = 1; i <= 20; i++)
	{
		printf("%d�� �������� %.3f�Դϴ�.\n", i, sqrt((double)i));
	}
	return 0;
}
*/

/*
int main()
{
	float number[10];
	int max_index;
	int i;
	for (int i = 0; i < 10; i++)
	{
		printf("%d��° ���ڸ� �Է��Ͻÿ� >", i + 1);
		scanf("%f", &number[i]);
	}
	max_index = 0;		// �켱 ù��° ���ڸ� ���� ū���� ���Ѵ�.
	for (i = 1; i < 10; i++)
	{		// �ι�° ���ں��� ����° ���ڱ��� �ݺ�
		if (fabs(number[i]) > fabs(number[max_index]))
			max_index = i;
	}
	printf("10���� ���� �߿��� ������ ���� ū ���� %.1f�Դϴ�.", number[max_index]);
	return 0;
}
*/

// ����ü (Struct)
/*
struct StudentInformation
{
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

struct StudentInformation setinfo(struct StudentInformation strinfo);	// �ڷ���(-- �ڷ����̸�) -- �Լ��� ( �ڷ���(--�ڷ����̸�) -- ������)
int main(void)
{
	struct StudentInformation stdinfo = { 0 };
	stdinfo = setinfo(stdinfo);

	printf("%s\n", stdinfo.name);
	printf("%d\n", stdinfo.studentNumber);
	return 0;
}

struct StudentInformation setinfo(struct StudentInformation stdinfo)
{
	stdinfo.studentNumber = 2025001001;
	stdinfo.major = 100;
	strcpy(stdinfo.name, "ȫ�浿");
	strcpy(stdinfo.address, "���� ������....");
	
	return stdinfo;
}
*/

// 0923

/* ����ü �ʱ�ȭ
struct StudentInformation {
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

int main(void)
{
	struct StudentInformation si;
	char arr[10];

	si.studentNumber = 1;
	si.major = 2;
	strcpy(si.name, "Gil-Dong");
	strcpy(si.address, "Jin-Ju-si");
	return 0;
}

*/

/*
struct StudentInformation {
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

int main(void)
{
	struct StudentInformation si = { 0 };

	printStudentInfo(si);

	return 0;
}

struct StudentInformation printStudentInfo(struct StudentInformation stdinfo)
{
	print("%s\n", stdinfo.name);
	print("%s\n", stdinfo.studentNumber);
	print("%s\n", stdinfo.major);
	print("%s\n", stdinfo.address);

	return stdinfo;
}
*/
/*
struct StudentInformation {
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

int main(void)
{
	struct StudentInformation si = { 0 };

	printStudentInfo(&si);

	printf("student Number :%d\n", si.studentNumber);

	return 0;
}

void printStudentInfo(struct StudentInformation* stdinfo)
{
	(*stdinfo).studentNumber = 1;
}
*/

/*
struct StudentInformation {
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

int main(void)
{
	struct StudentInformation si = { 0 };
	int arr[10];
	
		for (int i = 0; i < 10; i++)
		{
			*(arr + i)= i;		// ���� ǥ���� 1
			arr[i] = i;			// ���� ǥ���� 2
		}
		printStudentInfo(&si);

		printf("student Number :%d\n", si.studentNumber);

		return 0;
}

void printStudentInfo(struct StudentInformation* stdinfo)
{
	(*stdinfo).studentNumber = 1;
}
*/

/*	�Ϲ� �����ΰ��
*	p->name
*	p[0].name
*	(*(p)).name
* 
*	�迭�� ���
*	(p+1)->name
*	p[1].name
*	(*(p+1)).name
*/

/*
struct StudentScore {
	char name[100];
	int stdNum;
	int score[100];
};

int main(void)
{
	struct StudentScore ss = { 0 };
	
	scanf("�л��� �̸�, �й�, ������ �Է��ϼ��� : ", &ss);
	printinfo;
	
		
	return 0;
}
void printInfo(struct stdInfo* stdinfo)
{
	int i, j;

	struct stdInfo tmp;

	for (i = 0; i < 2; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (stdinfo[i].score < stdinfo[j].score)
			{
				strcpy(tmp.name, stdinfo[i].name);
				tmp.stdNum = stdinfo[i].stdNum;
				tmp.score = stdinfo[i].score;

				strcpy(stdinfo[i].name, stdinfo[j].name);
				stdinfo[i].stdNum = stdinfo[j].stdNum;
				stdinfo[i].score = stdinfo[j].score;


				strcpy(stdinfo[j].name, tmp.name);
				stdinfo[j].stdNum = tmp.stdNum;
				stdinfo[j].score = tmp.score;
			}
		}
	}
	for (i = 0; i < 3; i++)
		printf("%s, %d, %f\n", stdinfo[i].name, stdinfo[i].stdNum, stdinfo[i].score);
}
*/

// ���� �����

/*	FILE* f = fopen("myText.txt", "w");
* 
*	fputs("Hello World\n", 
*	
*	fclosd(f);
* 

*/

/*
int main(void)
{
	//FILE* f = fopen("myText.txt", "wt/rt");
	//fputs("Hello World", f);					// ����
	//fgets(line, 100, f);						// �б�

	FILE* f = fopen("myText.txt", "rt");		
	int a, b;
	char line[100];
	//fprintf(f, "Hello World !%d", a);
	fscanf(f, "%s %d %d", line, &a, &b);
	printf("%s %d %d\n", line, a, b);
		
	fclose(f);

	return 0;
}

*/

/*
int main(void)
{
	FILE* f = fopen("lotto.txt", "wt");
	int i;

	srand(time(NULL));
	
	for (i = 0; i < 6; i++)
		fprintf(f, "%d ", rand() % 46);
	
	fclose(f);

	return 0;
}
*/

// �� ĭ�� �˸��� ���ĺ� ���߱�
/*
#define N_WORDS 7			// ��ó��

int main(void)
{
	FILE* f = fopen("words.txt", "rt");
	char wordList[N_WORDS][20];

	int i, randomWord, blank;
	int menu;
	char blankedChar, c;

	srand((unsigned int)time(NULL));

	for (i = 0; i < N_WORDS; i++)
	{
		fgets(wordList[i], sizeof(wordList) / sizeof(char), f);
		if(wordList[i][strlen(wordList[i]) - 1] == '\n')
			wordList[i][strlen(wordList[i]) - 1] = '\0';
	}
	while (1)
	{
		menu = printMenu();

		if (menu == 1)
		{
			randomWord = rand() % N_WORDS;
			blank = rand() % strlen(wordList[randomWord]);
			blankedChar = wordList[randomWord][blank];
			wordList[randomWord][blank] = '_';

			printf("Fill in the blank\n%s\n", wordList[randomWord]);

			i = 0;
			while (i < 3)
			{
				printf("Input character: ");
				scanf("%c", &c);
				while (getchar() != '\n');

				if (c == blankedChar)
				{
					printf("It's correct\n");
					wordList[randomWord][blank] = blankedChar;
					printf("The Full sentence is '%s'\n", wordList[randomWord]);
					break;
				}
				else
					printf("It's wrong, remain %d. \n", 2 - i);
				i++;
			}

		}
		else if (menu == 2)
		{
			system("cls");
		}
		else if (menu == 3)
		{
			return 0;		// == exit(0 or 1)
		}
		else
		{
			printf("Please check the number\n");
		}
	}

	fclose(f);
	return 0;
}

int printMenu()
{
	int menu;

	printf("=============================\n");
	printf("1. Game Start\n");
	printf("2. Clear\n");
	printf("3. Exit\n");
	printf("=============================\n");
	scanf("%d", &menu);
	while (getchar() != '\n');
	printf("=============================\n");

	return menu;
}
*/

/*
int main()
{
	int* pnum;
	int size, maxi = 0;
	printf("�������� ������? > ");
	scanf("%d", &size);
	pnum = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		printf("%d��° ��? > ", i + 1);
		scanf("%d", &pnum[i]);
		if(pnum[maxi] < pnum[i]) maxi = i;
	}
	printf("���� ū ���� %d��° ���� %d�Դϴ�.\n", maxi + 1, pnum[maxi]);
	return 0;
}
*/
/*
int factorial(int n) {
	if (n == 1) return 1;					// n�� 1�� ���
	else return (n * factorial(n - 1));		// n�� 1���� ū ���
}

int main(void)
{
	print("3! is %d\n", factorial(3));

	return 0;
}
*/
// baseball game
/*
MAZE ESCAPE
int main(void)
{
	int Num[3];
	int inNum[3];
	int strike;
	int ball;
	int out;


	srand((unsigned int)time(NULL));

	while (1)
	{
		memu = printMenu();
		if (menu == 1)
		{
			while (1) {
			for (int i = 0; i < 3; i++)
				Num[i] = rand() % 10;

			if (Num[0] != Num[1] && Num[1] != Num[2] && Num[0] != Num[2])
			break;
		}
		printf("%d %d %d\n", Num[0], Num[1], Num[2]);
	}

	while (1)
	{
		printf("Input three numbers : ");
		scanf("%d %d %d", &inNum[0], &inNum[1], &inNum[2]);

		if (Num[0] == inNum[0])
			strike++;
		if (Num[1] == inNum[1])
			strike++;
		if (Num[2] == inNum[2])
			strike++;
		if (Num[0] == inNum[1] | Num[0] == inNum[2])
			ball++;
		if (Num[1] == inNum[0] | Num[1] == inNum[2])
			ball++;
		if (Num[2] == inNum[0] | Num[2] == inNum[1])
			ball++;

		out = 3 - strike - ball;
		printf("%d Strike, %d Ball, %d Out\n", strike, ball, out);

		if (strike == 3)
		{
			printf("Game Over");
			break;
		}
		strike = ball = out = 0;
	}
}
int printMenu()
{
	int menu;

	printf("=============================\n");
	printf("1. Game Start\n");
	printf("2. Clear\n");
	printf("3. Exit\n");
	printf("=============================\n");
	scanf("%d", &menu);
	while (getchar() != '\n');
	printf("=============================\n");

	return menu;
}
*/

#include <stdio.h>

int printMenu();
char** loadMap(int *row, int *col);
void printMap(char** map, int row, int col);
void startGame(char** map, int row, int col);

int main(void)
{	
	char** map = NULL;
	int row, col;
	int num;

	while (1)
	{
		num = printMenu();
	
		switch(num)
		{
		case 1:
			map = loadMap(&row, &col);
			break;
		case 2:
			printMap(map, row, col);
			break;
		case 3:
			startGame(map, row, col);
			break;
		default:
			break;

		}
	}

	// ���� �Ҵ� �� free�� �־�� �޸� ������ �߻����� �ʴ´�
	for (int i=0; i < row; i++)
		free(map[i]);
	free(map);

	return 0;
}
int printMenu()
{
	int num;

	printf("=============================\n");
	printf("1. Load map\n");
	printf("2. Show map\n");
	printf("3. Start Game\n");
	printf("=============================\n");

	printf("Input number: ");
	scanf("%d", &num);
	while (getchar() != '\n');
	printf("\n");

	return num;
}

char** loadMap(int *r, int *c)
{
	FILE* file = fopen("map.txt", "rt");
	int row;
	int col;
	char** map;

	fscanf(file, "%d", &row);
	fscanf(file, "%d", &col);

	*r = row;
	*c = col;

	map = (char**)malloc(col * sizeof(char*));
	for (int i = 0; i < row; i++)
		map[i] = (char*)malloc(row * sizeof(char));

	for (int i = 0; i < col; i++)
		for (int j = 0; j < row; j++)
			map[i][j] = '\0';

	char ch = fgetc(file);

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row + 1; j++)
		{
			ch = fgetc(file);
			if (ch == '\n')
				break;
			else
				map[i][j] = ch;
		}
	}
	return map;
}

void printMap(char** map, int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			printf("%c", map[i][j]);
		printf("\n");		
	}
}

void startGame(char** map, int row, int col)
{
	int mx, my;
	char dir;
	int nMove;

	// S�� ��ġ�� ã�Ƽ� mx,my�� ���
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (map[i][j] == 'S')
			{
				mx = j;
				my = i;
			}
		}
	}

	system("cls");
	printMap(map, row, col);

	// ����ڰ� �Է��� ��ġ�� �̷ο��� �̵� ���� ���� �˻�
	while (1)
	{
		//printf("Input direction and move number: ");
		//scanf(" %c %d", &dir, &nMove);
		/*while (getchar() != '\n');*/

		int ch;

		nMove = 1;
		ch = getch();

		//int nx = mx;
		//int ny = my;

		if (ch == 72)
		{
			if (my - nMove < 0)
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my - nMove][mx] == '#')
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my - nMove][mx] == ' ')
			{
				map[my][mx] = ' ';
				map[my - nMove][mx] = 'S';

				my = my - nMove;
				mx = mx;
			}
			else if (map[mx][my - nMove] == 'E')
			{
				printf("Goal!\n");
				break;
			}
		}
		else if (ch == 80)
		{
			if (my + nMove >= col)
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my + nMove][mx] == '#')
			{
				printf("Can't move\n");
				continue;
			}

			else if (map[my + nMove][mx] == ' ')
			{
				map[my][mx] = ' ';
				map[my + nMove][mx] = 'S';

				my = my + nMove;
				mx = mx;
			}
			else if (map[mx][my + nMove] == 'E')
			{
				printf("Goal!\n");
				break;
			}
		}
		else if (ch == 75)
		{
			if (mx - nMove < 0)
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my][mx - nMove] == '#')
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my][mx - nMove] == ' ')
			{
				map[my][mx] = ' ';
				map[my][mx - nMove] = 'S';

				mx = mx - nMove;
				my = my;
			}
			else if (map[my][mx - nMove] == 'E')
			{
				printf("Goal!\n");
				break;
			}
		}
		else if (ch == 77)
		{
			if (mx + nMove >= row)
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my][mx + nMove] == '#')
			{
				printf("Can't move\n");
				continue;
			}
			else if (map[my][mx + nMove] == ' ')
			{
				map[my][mx] = ' ';
				map[my][mx + nMove] = 'S';

				mx = mx + nMove;
				my = my;
			}
			else if (map[my][mx + nMove] == 'E')
			{
				printf("Goal!\n");
				break;
			}
		}
		system("cls");
		printMap(map, row, col);
	}

}

