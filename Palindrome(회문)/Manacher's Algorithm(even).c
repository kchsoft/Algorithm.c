#define _CRT_SECURE_NO_WARNINGS
#define min(a,b) a < b ? a : b
#include<stdio.h>
#include<string.h>

int Manacher(char s[], int len)
{
	char str[256] = { 0 };
	int add = 0;
	len = len * 2 + 1;
	for (int h = 0; h < len; h += 2) {
		str[h] = '#';
		str[h + 1] = s[add];
		add++;
	}

	int result = 0;
	int count[256] = { 0 };
	int Middle = 0;
	int Boundary = 0;

	for (int i = 0; i < len; i++) {
		if (i <= Boundary)
			count[i] = min(count[2 * Middle - i], Boundary - i);
		else// #define min(a,b) a < b ? a : b
			count[i] = 0;

		while (i - count[i] - 1 >= 0 &&
			i + count[i] + 1 < len &&
			str[i + count[i] + 1] == str[i - count[i] - 1]) {
			count[i]++;
		}

		if (i + count[i] > Boundary) {
			Boundary = i + count[i];
			Middle = i;
		}
		count[i] /= 2;
	}
	for (int k = 0; k < len; k++)
		result += count[k];
	return result;
}