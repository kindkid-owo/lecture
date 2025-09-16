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

	printf("사과 1개의 가격은 얼마입니까? ");
	scanf("%d", &unit_price);

	printf("사과의 개수는 모두 몇 개 입니까? ");
	scanf("%d", &apple_count);

	price = apple_count * unit_price;

	printf("전체 사과의 가격은 %d원 입니다. \n", price);

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, result;

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%d  %d", &num1, &num2);
		
	result = num1 + num2;
	printf("덧셈의 결과는 %d 입니다 \n", result);

	result = num1 - num2;
	printf("덧셈의 결과는 %d 입니다 \n", result);

	result = num1 * num2;
	printf("곱셈의 결과는 %d 입니다 \n", result);

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, num3, total, avg;
	
	printf("세 개의 숫자를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	total = num1 + num2 + num3;
	avg = total / 3;
	
	printf("평균은 %d 입니다. ", avg);
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

	printf("사과의 개수는? ");
	scanf("%d", &apple_count);

	if (apple_count > 30) {
		printf("한 박스에 담을 수 없습니다.\n");
	}
	else {
		printf("한 박스에 담을 수 있습니다.\n");
	}
}
*/

/*
int main(void)
{
	int age;											// 나이
	int gender;											// 성별 (1: 남성, 2: 여성)

	printf("당신의 나이는? ");
	scanf("%d", &age);
	
	if (age <= 0)
	{
		printf("나이를 잘못 입력하였습니다.\n");
		exit(1);										// 프로그램 종료
	}

	printf("당신의 성별은? (1:남성, 2:여성) ");
	scanf("%d", &gender);

	if (gender == 1)									// 성별이 남자인 경우
		printf("당신의 %d세의 남자입니다.\n", age);
	else if (gender == 2)								// 성별이 여자인 경우
		printf("당신의 %d세의 여자입니다.\n", age);
	else
	{
		printf("성별을 잘못 입력하였습니다.\n");		// 잘못 입력된 경우
		exit(1);
	}
	return 0;
}
*/

//한개의 수를 입력받아 양수인지 음수인지 판단하는 프로그램을 만들어보자!
/*
int main(void)
{
	int number;

	printf("값을 입력하세요 : ");
	scanf("%d", &number);

	if (number > 0)
	{
		printf("양수입니다.\n");
	}
	else if (number < 0)
	{
		printf("음수입니다.\n");
	}
	else
	{
		printf("0입니다.\n");
	}
	return 0;
}
*/

/*
int main(void)
{
	int age;
	
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	if (age >= 65)
	{
		printf("노인\n");
	}

	else if (age >= 20)
		printf("성인입니다\n");
	else if (age >= 13)
		printf("청소년입니다\n");
	else if (age >= 0)
		printf("어린이입니다\n");
	else
		printf("나이를 잘못 입력하였습니다.\n");

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, num3;
	int min, max;

	printf("세 개의 숫자를 입력하세요 : ");
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

	printf("최소값은 %d, 최대값은 %d 입니다.\n", min, max);

	return 0;
}
*/

// ## 0902 이항 연산자, 비트 연산자, 조건문, 반복문
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

	printf("%d\n", num1 & num2);	// 0000 0001: 01과 11을 비트 AND하면 01이 됨
	printf("%d\n", num1 | num2);	// 0000 0001: 01과 11을 비트 OR하면 11이 됨
	printf("%d\n", num1 ^ num2);	// 0000 0001: 01과 11을 비트 XOR하면 10이 됨

	return 0;

}
*/

/*
int main(void)
{
	int num1;

	scanf("%d", &num1);			// 값을 입력받음


	switch (num1)
	{
	case 1:
		printf("1입니다.\n");
		break;
	case 2:
		printf("2입니다.\n");
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

	scanf("%d", &num1);			// 값을 입력받음

	switch (num1)
	{
	case 1:
		int num2 = num1;
		printf("%d입니다.\n", num2);
		break;
	case 2:
		printf("2입니다.\n");
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
int main(void)		// 무한 루프
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

	printf("프로그램 종료\n");

	return 0;
}
*/

// 문제
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
		printf("누적 합계 : %d\n", result);

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
	for (int i = 0; i < 5; i++) // 세로
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
	for (int i = 0; i < 5; i++) // 세로
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
	for (int i = 0; i < 5; i++) // 세로
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

	for (int i = 0; i < max_i; i++) // 세로
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

// 0903 배열

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
 int result = 0; // 초기화
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
	printf("숫자 10 count: %d\n", count);	
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
		for (j = 0; j < i; j++)			// 조건 1
		{
			if (arr[i] == arr[j])		// 조건 3
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)					// 조건 2
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
		for (j = 0; j < sizeof(arr_idx); j++)			// 조건 1
		{
			if (arr[i] == arr_idx[j])		// 조건 3
			{
				flag = 1;
			}
		}

		if (flag == 0)					// 조건 2
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

// 2진수 -> 10진수 변환

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
 포인터
 기본형태
 자료형 *포인터이름;
 포인터 = &변수;
 int* numPtr = 자료형에 포인터변수 선언
 int *numPtr = 포인터 변수 선언
 포인터 변수는 항상 4byte
 // double* = char* = int* = 4byte
int main()
{
	int* numPtr;					// 포인터 변수 선언
	int num1 = 10;					// int형 변수를 선언하고 10 저장

	numPtr = &num1;					// num1의 메모리 주소를 포인터 변수에 저장

	printf("%p\n", numPtr);			// 0055FC24: 포인터 변수 numPtr의 값 출력
									// 컴퓨터마다, 실행할 때마다 달라짐
	printf("%p\n", &numPtr);		// 0055FC24: 변수 num1의 메모리 주소 출력
									// 컴퓨터마다, 실행할 때마다 달라짐
	printf("%d\n", num1);
	printf("%d\n", *numPtr);
	
	return 0;
}
*/

/*
 역참조 연산자 사용하기
int main()
{
	int* numPtr;					// 포인터 변수 선언 (헷갈림 방지를 위한 스타표시)
	int num1 = 10;					// 정수형 변수를 선언하고 10 저장

	numPtr = &num1;					// num1의 메모리 주소를 포인터 변수에 저장
	
	*numPtr = 20;					// 역참조 연산자로 메모리 주소에 접근하여 20을 저장

	printf("%d\n", *numPtr);		// 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
	printf("%d\n", num1);			// 20: 실제 num1의 값도 바뀜

	return 0;
}
*/

// 0910 포인터 (=값)

/*
int main()
{
	int* numPtr;					// 포인터 변수 선언 (헷갈림 방지를 위한 스타표시)
	int num1 = 10;					// 정수형 변수를 선언하고 10 저장

	numPtr = &num1;					// num1의 메모리 주소를 포인터 변수에 저장
	
	*numPtr = 20;					// 역참조 연산자로 메모리 주소에 접근하여 20을 저장

	printf("%d\n", *numPtr);		// 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
	printf("%d\n", num1);			// 20: 실제 num1의 값도 바뀜

	return 0;
}
*/

// 변수 = 메모리 주소를 몰라도 값을 가져오거나 저장할 수 있다
// & = 주소연산자는 변수의 메모리 주소를 구한다
// * = 역참조 연산자는 메모리에 저장된 값에 접근하여 값을 가져오고 저장한다
// ~Ptr = 변수의 메모리 주소를 나타낸다

// 연습문제
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
		printf("짝수입니다.");
	else
		printf("홀수입니다.");
	return 0;
	}
*/

// 다른 풀이
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
	printf("숫자 2개를 입력하세요 : ");
	scanf("%d %d", num1, num2);
	add(num1, num2);
	printf("덧셈의 결과는 %d 입니다 \n", add());
	sub(num1, num2);
	printf("뺄셈의 결과는 %d 입니다 \n", sub());
	mul(num1, num2);
	printf("곱셈의 결과는 %d 입니다 \n", mul());
	div(num1, num2);
	printf("나눗셈의 결과는 %d 입니다 \n", div());

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
숫자(정수)를 입력받아 그 숫자의 팩토리얼을 계산하는 함수를 작성해보자
함수 반환형 void, int 둘다 구현
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
		printf("%d은(는) 소수가 아닙니다.\n", num);
	else
		printf("%d은(는) 소수 입니다.\n", num);
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
		printf("%d × %d = ? \n", x, y);
		scanf("%d", num);

		if (num == &result)
			printf("정답입니다.\n");
		else
			printf("오답입니다.\n");
		printf("정답은 %d 입니다.\n", result);
	}	
}
rand() % 8 -->0~8 난수
rand() % 8 + 1 -->1~9 난수
*/

// 포인터 설명

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

// 리턴값 유무에 따라 main 함수의 형태
/*
int main(void)
{
	return 0;
}
void main(void)
{
}

 리턴값 유무에 따라 main 함수의 형태
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
//주소에 있는 값으로 변경
void swap1(int* n1, int* n2)
{
	int tmp;
	tmp = *n1; // tmp = *n1 = num1 = 10
	*n1 = *n2; // *n1 = *n2 = num2 = 20
	*n2 = tmp; // *n2 = tmp = *n1 = num1 = 10
}
//주소를 변경하여 값도 변경됨 (정확히는 변경된것처럼 보이는것)
void swap2(int* n1, int* n2)
{
	int* tmp;
	tmp = n1; // tmp = n1(0x0000)
	n1 = n2;  // n1 = n2(0x0004)
	n2 = tmp; // n2 = tmp(=n1(0x0000)
}
*/

////배열도 포인터다
/*
int main(void)
{
	int arr[10];

	printf("%p \n", arr);
	printf("%p \n", &arr[0]);
	return 0;
}
*/

//// 배열의 이름은 그 배열의 첫번째 주소값을 나타낸다.

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

// 숫자, 배열크기를 입력해서 최대값 찾기 (ing)
/*
int findMax(int* arr, int size)
int input1, input2, arr;

int main(void)
{

	printf("숫자를 입력하세요 \n");
	scanf("%d ", &input1);
	printf("배열의 크기: \n");
	scanf("%d ", &input2);
	findMax(input1, input2);
	printf("최대값: %d\n", findMax(arr, input2));
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

// 문자 - 'c';, 'a';, 'b';
// 문자열 - "abc";
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

	printf("%s", str1);	// NULL 발생!
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
		printf("%c", str2[i]);	// NULL 방지!
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
		printf("%d\n", str3[i]);	// NULL 방지!
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

//Palindrome(회문) -> 앞으로 읽으나, 뒤로 읽으나 같은 문자열 ex) aka, abba, abcba
//사용자로부터 문자열을 입력받아 회문인지 아닌지 검사하는 프로그램을 만들어보자

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

// 배열에서 특정 문자 개수 세기
/*
int countChar(char* str, char ch);

int main(void)
{
	char str[100];
	char ch;
	
	printf("input string : ");
	scanf("%s", str);							// fflush(stdout) = 여러번 input을 쓸때는 버퍼를 비워서 사용한다;
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
 문자열의 길이 알아보기
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
	str2[5] = '\0';  // NULL값이 포함되지 않은 경우 강제로 NULL값을 넣어주어야 문자열로 출력이 됨
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

	printf("당신의 이름을 입력하세요 > ");
	fgets(str, (int)(sizeof(str) * sizeof(char)), stdin);	// 띄어쓰기, 개행 모두 입력을 받는다
	str[strlen(str) - 1] = '\0';
	printf("입력하신 이름은 %s입니다.\n", str);
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
 입력받은 문자열 역순 출력
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
	itoa(a, arr, 10);				// itoa : 정수형을 문자열로 변환
	printf("%s\n", arr);

	printf("%d\n", atoi(num));		// atio : 문자열을 정수형으로 변환
}
*/

#include <math.h>
/*
int main(void)
{
	// 근의 공식
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
		printf("%d의 제곱근은 %.3f입니다.\n", i, sqrt((double)i));
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
		printf("%d번째 숫자를 입력하시오 >", i + 1);
		scanf("%f", &number[i]);
	}
	max_index = 0;		// 우선 첫번째 숫자를 가장 큰수로 정한다.
	for (i = 1; i < 10; i++)
	{		// 두번째 숫자부터 열번째 숫자까지 반복
		if (fabs(number[i]) > fabs(number[max_index]))
			max_index = i;
	}
	printf("10개의 숫자 중에서 절댓값이 가장 큰 수를 %.1f입니다.", number[max_index]);
	return 0;
}
*/

// 구조체 (Struct)
/*
struct StudentInformation
{
	char name[100];
	int studentNumber;
	int major;
	char address[100];
};

struct StudentInformation setinfo(struct StudentInformation strinfo);	// 자료형(-- 자료형이름) -- 함수명 ( 자료형(--자료형이름) -- 변수명)
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
	strcpy(stdinfo.name, "홍길동");
	strcpy(stdinfo.address, "서울 강남구....");
	
	return stdinfo;
}
*/