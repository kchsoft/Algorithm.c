#include<stdio.h>
// �����佺�׳׽��� ü -> �Ҽ� �Ǻ� �˰���

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