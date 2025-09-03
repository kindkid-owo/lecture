#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// ## 0819 

//int main(void)
//{
//	int unit_price, apple_count, price;
//
//	printf("사과 1개의 가격은 얼마입니까? ");
//	scanf("%d", &unit_price);
//
//	printf("사과의 개수는 모두 몇 개 입니까? ");
//	scanf("%d", &apple_count);
//
//	price = apple_count * unit_price;
//
//	printf("전체 사과의 가격은 %d원 입니다. \n", price);
//
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, result;
//
//	printf("두 개의 숫자를 입력하세요 : ");
//	scanf("%d  %d", &num1, &num2);
//		
//	result = num1 + num2;
//	printf("덧셈의 결과는 %d 입니다 \n", result);
//
//	result = num1 - num2;
//	printf("덧셈의 결과는 %d 입니다 \n", result);
//
//	result = num1 * num2;
//	printf("곱셈의 결과는 %d 입니다 \n", result);
//
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3, total, avg;
//	
//	printf("세 개의 숫자를 입력하세요 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	total = num1 + num2 + num3;
//	avg = total / 3;
//	
//	printf("평균은 %d 입니다. ", avg);
//	return 0;
//}

//int main(void)
//{
//	float num1, num2, num3;
//	float average;
//
//	printf("Input three numbers : ");
//	scanf("%f %f %f", &num1, &num2, &num3);
//
//	average = (num1 + num2 + num3) / 3;
//
//	printf("Average is %f \n", average);
//
//	return 0;
//}

//int main(void)
//{
//	int apple_count;
//
//	printf("사과의 개수는? ");
//	scanf("%d", &apple_count);
//
//	if (apple_count > 30) {
//		printf("한 박스에 담을 수 없습니다.\n");
//	}
//	else {
//		printf("한 박스에 담을 수 있습니다.\n");
//	}
//}

//int main(void)
//{
//	int age;											// 나이
//	int gender;											// 성별 (1: 남성, 2: 여성)
//
//	printf("당신의 나이는? ");
//	scanf("%d", &age);
//	
//	if (age <= 0)
//	{
//		printf("나이를 잘못 입력하였습니다.\n");
//		exit(1);										// 프로그램 종료
//	}
//
//	printf("당신의 성별은? (1:남성, 2:여성) ");
//	scanf("%d", &gender);
//
//	if (gender == 1)									// 성별이 남자인 경우
//		printf("당신의 %d세의 남자입니다.\n", age);
//	else if (gender == 2)								// 성별이 여자인 경우
//		printf("당신의 %d세의 여자입니다.\n", age);
//	else
//	{
//		printf("성별을 잘못 입력하였습니다.\n");		// 잘못 입력된 경우
//		exit(1);
//	}
//	return 0;
//}
//한개의 수를 입력받아 양수인지 음수인지 판단하는 프로그램을 만들어보자!

//int main(void)
//{
//	int number;
//
//	printf("값을 입력하세요 : ");
//	scanf("%d", &number);
//
//	if (number > 0)
//	{
//		printf("양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("음수입니다.\n");
//	}
//	else
//	{
//		printf("0입니다.\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int age;
//	
//	printf("나이를 입력하세요 : ");
//	scanf("%d", &age);
//	
//	if (age >= 65)
//	{
//		printf("노인\n");
//	}
//
//	else if (age >= 20)
//		printf("성인입니다\n");
//	else if (age >= 13)
//		printf("청소년입니다\n");
//	else if (age >= 0)
//		printf("어린이입니다\n");
//	else
//		printf("나이를 잘못 입력하였습니다.\n");
//
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3;
//	int min, max;
//
//	printf("세 개의 숫자를 입력하세요 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	max = num1;
//	min = num1;
//
//	if (min > num2)
//		min = num2;
//	if (min > num3)
//		min = num3;
//
//	if (max < num2)
//		max = num2;
//	if (max < num3)`
//		max = num3;
//
//	printf("최소값은 %d, 최대값은 %d 입니다.\n", min, max);
//
//	return 0;
//}
//

// ## 0902 이항 연산자, 비트 연산자, 조건문, 반복문

//int main(void)
//{
//	int num1 = 10;
//	int num2;
//
//	num2 = (num1 == 10) ? 100 : 200;
//
//	printf("%d\n", num2);
//	return 0;
//}

//int main(void)
//{
//	unsigned char num1 = 1;			// 0000 0001
//	unsigned char num2 = 3;			// 0000 0011
//
//	printf("%d\n", num1 & num2);	// 0000 0001: 01과 11을 비트 AND하면 01이 됨
//	printf("%d\n", num1 | num2);	// 0000 0001: 01과 11을 비트 OR하면 11이 됨
//	printf("%d\n", num1 ^ num2);	// 0000 0001: 01과 11을 비트 XOR하면 10이 됨
//
//	return 0;
//
//}

//int main(void)
//{
//	int num1;
//
//	scanf("%d", &num1);			// 값을 입력받음
//
//
//	switch (num1)
//	{
//	case 1:
//		printf("1입니다.\n");
//		break;
//	case 2:
//		printf("2입니다.\n");
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//	return 0;
//}

//int main(void)
//{
//	int num1;
//
//	scanf("%d", &num1);			// 값을 입력받음
//
//	switch (num1)
//	{
//	case 1:
//		int num2 = num1;
//		printf("%d입니다.\n", num2);
//		break;
//	case 2:
//		printf("2입니다.\n");
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//	return 0;
//}

//int main(void)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("Hello, World!\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("Hello, World!\n");
//	}
//
//	printf("%d\n", i);
//
//	return 0;
//}

//int main(void)
//{
//	int cnt, i;
//
//	printf("input number : ");
//	scanf("%d", &cnt);
//
//	for (i=0; i<cnt; i++)
//		printf("Hello, World!\n");
//}

//int main(void)
//{
//	for (int i = 0, j = 0; i < 10; i++, j += 2)
//	{
//		printf("i: %d, j: %d\n", i, j);
//	}
//	return 0;
//}

//int main(void)		// 무한 루프
//{
//	for (;;)
//	{
//		printf("Hello");
//	}
//}

//int main(void)
//{
//	int i, j;
//	for (i = 2, j = 5; j > 0; i *= 2, j--)
//
//	{
//		printf("%d %d\n", i, j);	
//	}
//	return 0;	
//}

//int main(void)
//{
//	unsigned char i = 1;
//	while (i != 0)
//	{
//		printf("%u\n", i);
//		i <<= 1;		
//	}
//	
//	return 0;
//}

//int main(void)
//{
//	srand(time(NULL));
//
//	int i = 0;
//	while (i != 3)
//	{
//		i = rand() % 10;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	i = rand() % 10 + 1;
// 	printf("%d\n", i);
//}

//int main(void)
//{
//	char c1;
//
//	do
//	{
//		scanf("%c", &c1);
//	} while (c1 != 'q');
//
//	printf("프로그램 종료\n");
//
//	return 0;
//}

// 문제
//1.
//int main(void)
//{
//	int i, j;
//	
//	scanf("%d", &i);
//	for (j = 1; j < 10;)
//	{		
//		printf("%d * %d = %d\n", i, j, i * j);
//		j++;
//	}
//	
//	return 0;
//}

//2.
//int main(void)
//{
//	int i;
//	int j = 1;
//
//	printf("Input number : ");
//	scanf("%d", &i);
//	while (j < 10)
//
//	{
//		printf("%d * %d = %d\n", i, j, i * j);
//		j++;
//	}
//
//	return 0;
//}

//3.
//int main(void)
//{
//
//	int sum = 0;
//	int i = 1;
//
//	do {
//		sum = sum + i;
//		i++;
//	
//	} while (i <= 100);
//
//	printf("result of sum : %d\n", sum);
//
//	return 0;
//}

//4. 
//int main(void)
//{
//	int i = 0;
//	int result = 0;
//	int num;
//
//	while (i < 5)
//	{
//		printf("Input number : ");
//		scanf("%d", &num);
//
//		result = result + num;
//		printf("누적 합계 : %d\n", result);
//
//		i++;
//	}
//	return 0;
//}

// 5.

// 6-1.
//int main(void)
//{
//	int i;
//	printf("input number : ", i);
//	scanf("%d", &i);
//
//	while (i > 0);
//	{
//		printf("%d! = \n", i);
//		i = i * (i - 1);
//	}
//}

// 6-2.
//int main(void)
//{
//	int i, num;
//	int result = 1;
//
//	printf("input number : ", i);
//	scanf("%d", &num);
//
//	for (i = num; i > 0; i--)
//	{
//		printf("%d! = \n", i);
//		if (i == 1)
//			printf("= ");
//		else
//			printf("* ");
//		result = result * i;
//	}
//	printf("%d", result);
//	return 0;
//}

// 6-3. 
//int main(void)
//{
//	int i, num;
//	int result = 1; \
//	char ch;
//
//	printf("input number : ");
//	scanf("%d", &num);
//
//	for (i = num; i > 0; i--)
//	{
//		printf("%d ", i);
//		ch = (i == 1) ? '=' : '*';
//		printf("%c ", ch);
//
//		result = result * i;
//	}
//	printf("%d", result);
//	return 0;
//}
//7.

// 7.
//int main(void)
//{
//	int max = -1;
//	int min = 101;
//	int i, num;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &num);
//		if (num > 100 || num < 0)
//		{
//			printf("Incorrect input\n");
//			exit(1);
//		}
//
//		if (num > max)
//			max = num;
//
//		if (num < min)
//			min = num;
//	}
//	printf("max: %d, min: %d\n", max, min);
//
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	
//	while(1)
//
//	{
//		if (i % 10 != 3)
//		{
//			i++;
//			continue;
//		}
//		if (i > 103);
//			break;
//
//		printf("%d ", i);
//		i++;
//		}
//
//	return 0;
//}

//int main(void)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//
//{
//	for (int i = 0; i < 5; i++) // 세로
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (j <= i)
//				printf("*");	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//
//{
//	for (int i = 0; i < 5; i++) // 세로
//	{
//		for (int j = 0; j <= i; j++)
//				printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//	printf("\n");
//}

//int main(void)
//
//{
//	for (int i = 0; i < 5; i++) // 세로
//	{
//		for (int j = 0; j <= i; j++)
//				printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int max_i = 5;
//
//	for (int i = 0; i < max_i; i++) // 세로
//	{
//		for (int j = 1; j <= max_i - i; j++)
//			printf("*");
//
//		for (int j = 0; j < i; j++)
//			printf(" ");
//
//		printf("\n");
//	}
//	return 0;
//}

// 0903 배열

// sizeof(int) = 4
// sizeof(char) = 1
// sizeof(double) = 8
// sizeof(float) = 4
// sizeof(short) = 2
// sizeof(long) = 4
// int numArr[10]; // 40 bytes
// sizeof(numArr) = 40
//
// int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
// int result = 0; // 초기화
// for (int i = 0; i < 10; i++)
//     result = result + arr[i];

//int main(void)
//{
//	float scores[10] = { 
//		67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 
//		63.0f, 90.1f, 88.0f, 79.7f, 95.3f
//};
//
//	float sum = 0.0f;
//	float average;
//
//	for (int i = 0; i < sizeof(scores) / sizeof(float); i++)
//	{
//		sum = sum += scores[i];
//	}
//	
//	average = sum / (sizeof(scores) / sizeof(float));
//
//	printf("%f\n", average);
//	
//	return 0;
//
//}

//int main(void)
//{
//	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 }; \
//	int i;
//	int count = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//		if (arr[i] == 10)
//			count++;
//	printf("숫자 10 count: %d\n", count);	
//}

//int main(void)
//{
//	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 };
//	int i, j;
//	int flag = 0;
//
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//		
//	{
//		for (j = 0; j < i; j++)			// 조건 1
//		{
//			if (arr[i] == arr[j])		// 조건 3
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)					// 조건 2
//			printf("%d ", arr[i]);
//		else
//			flag = 0;
//	}
//	return 0;
//
//}
//int main(void)
//{
//	int arr[10] = { 10, 11, 12, 10, 9, 8, 10, 11, 10, 9 };
//	int arr_idx = 0;
//	int i, j;
//	int flag = 0;
//
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		for (j = 0; j < sizeof(arr_idx); j++)			// 조건 1
//		{
//			if (arr[i] == arr_idx[j])		// 조건 3
//			{
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)					// 조건 2
//		{
//			arr[arr_idx++] = arr[i];
//			arr_idx++;
//		}
//		else
//			flag = 0;
//		
//		printf("%d ", arr[i]);
//	}
//}

//int main(void)
//{
//	int arr[3] = { 1, 2, 3 };
//	int arr2[3] = { 4, 5, 6 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int sum = arr[i] + arr2[i];
//		printf("%d ", sum);
//	}
//
//	/*
//	for (i =0; i < sizeof(arr)/sizeof(int); i++)
//		printf("%d ", arr[i] + arr2[i]);
//	*/
//}

//// 2진수 -> 10진수 변환
//int main(void)
//{
//	int decimal = 0;
//	int binary[4] = { 1, 1, 0, 1 };
//
//	for (int i = 0; i < sizeof(binary) / sizeof(int); i++)
//		decimal = decimal * 2 + binary[i];
//	
//	printf("%d\n", decimal);
//	return 0;
//}

//int main(void)
//{
//	int decimal = 0;
//	int binary[4] = { 1, 1, 0, 1 };
//
//	{
//		for (int i = 0; i <= 3; i++)
//			decimal = (int)pow(2, 3 - i) * binary[i] + decimal;
//	}
//	printf("%d\n", decimal);
//	return 0;
//	
//}

//int main(void)
//{
//	int matrix[8][8] = {
//		{  1,  2,  3,  4,  5,  6,  7,  8},
//		{  9, 10, 11, 12, 13, 14, 15, 16},
//		{ 17, 18, 19, 20, 21, 22, 23, 24},
//		{ 25, 26, 27, 28, 29, 30, 31, 32},
//		{ 33, 34, 35, 36, 37, 38, 39, 40},
//		{ 41, 42, 43, 44, 45, 46, 47, 48},
//		{ 49, 50, 51, 52, 53, 54, 55, 56},
//		{ 57, 58, 59, 60, 61, 62, 63, 64}
//	};
//	for (int i = 0; i <sizeof(matrix[i]) / sizeof(int); i++)			//sizeof(matrix)/ sizeof(matrix[0]), i++)
//		for (int j = 0; j < sizeof(matrix[j]) / sizeof(int); j++)		//sizeof(matrix[0])/ sizeof(int), j++)
//			if (i == j)		
//			printf(" %d\n", matrix[i][j]);
//		return 0;
//}

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
		if (num == 1)
		{
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					printf("%d ", arr[2 - j][i]);
				}
				printf("\n");
			}
		}
		else if (num == 2)
		{
			for (i = 0; i< 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					printf("%d ", arr[2 - i][2 - j]);
				}
				printf("\n");
			}
		}
		else if (num == 3)
		{
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



