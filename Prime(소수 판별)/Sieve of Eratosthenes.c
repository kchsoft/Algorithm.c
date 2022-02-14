#include<stdio.h>
// 에라토스테네스의 체 

int* Sieve_of_Eratosthenes(int* arr,int MaxNumber) {

    for (int i = 2; i * i <= MaxNumber; i++){
        if (arr[i] != -1) 
            for (int k = i; i * k <= MaxNumber; k++)
                arr[i * k] = -1;     
    }
    return arr;

}