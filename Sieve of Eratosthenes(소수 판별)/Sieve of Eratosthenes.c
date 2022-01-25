#include<stdio.h>
// 에라토스테네스의 체 -> 소수 판별 알고리즘

int* Sieve_of_Eratosthenes(int* arr,int MaxNumber) {

    for (int i = 2; i * i <= MaxNumber; i++)
    {
        for (int k = i; i * k <= MaxNumber; k++)
        {
            arr[i * k] = 0;
        }
    }
    return arr;

}