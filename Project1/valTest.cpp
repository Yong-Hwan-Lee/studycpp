#include <stdio.h>

int main()
{
	/*
	int num = 10;			//초기화
	int num1;				// 변수 선언
	num1 = 20;				// 대입
	num = 30;
	printf("int 크기: %d\n", sizeof(int));

	char ch;				// 문자타입
	printf("char크기: %d\n", sizeof(char));

	double d = 3.14;		// 실수타입
	printf("double 크기: %d\n", sizeof(double));
	*/

	char ch = 0x7f;			// 16진법(0x): 0~9,A(10),B(11),C(12),D(13),E(14),F(15)
							// 0b 이진법 0111 1111(8bit)
	unsigned char ch1 = 0x7f;

	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch: %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;				// 양수만 0b 1001 1111
	printf("ch2: %x \t ch: %d\n", ch2, ch2);
	printf("uch2: %x \t ch: %d\n", uch2, uch2);
									// 0b 1001 1111 << 1 : 0b 1 0011 1110
	uch2 = uch2 << 1;				//비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x \t ch2 << 1: %x\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >> 1: %x\n", uch2, ch2);

	return 0;
}