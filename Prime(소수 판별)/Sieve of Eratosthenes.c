#include<stdio.h>
// �����佺�׳׽��� ü 

int* Sieve_of_Eratosthenes(int* arr,int MaxNumber) {

    for (int i = 2; i * i <= MaxNumber; i++){
        if (arr[i] != -1) 
            for (int k = i; i * k <= MaxNumber; k++)
                arr[i * k] = -1;     
    }
    return arr;

}