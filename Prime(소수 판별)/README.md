# 소수 판별  

## isPrime

1. 이 함수는 해당 숫자(Number)가 소수(Prime)인지 아닌지 판별해 주는 함수이다.  

2. 해당 숫자(Number)의 제곱근 -> sqrt(Number)을 2부터 sqrt(Number)까지 모듈러 연산(%)을 했을 때,  
    결과가 0 이라면, 즉 알맞게 나눠지는 숫자가 하나라도 있다면, Number는 소수가 아니다.  

3. 반면에 모두 0이 아닌 결과가 나온다면, Number는 소수이다.  

4. 위의 함수에서는 가독성을 위해 제곱근 대신, 나누는 수의 제곱으로 수정하였다.  
i < sqrt(Number) ---> i*i < Number  

5. 제곱근 까지 구하는 이유는 다음과 같다.  
100의 경우 sqrt(100) == 10 이다.  
100의 약수 : 1 2 4 10 25 50 100  
이때 100의 제곱근 10은 약수 중 가장 가운데에 위치한다.  
따라서 약수의 중심을 대상으로 왼쪽에 있는 값들로 Number를 모듈러 연산(%)을 했을 때 모두 0이 나오면 소수 이다.  
---
## Sieve of Eratosthenes  

=======
1. 이 함수를 통해 배열의 인덱스가 소수인지 판별할 수 있다.

2. 자신을 제외한 2의 배수(2 제외), 3의 배수(3 제외), 4의 배수(4 제외)... -> 목표 숫자만큼 배수를 구하며, 이 숫자들은 모두 배열의 인덱스로 사용 된다. 

3. 배열의 인덱스가 2의 배수,3의 배수...와 같이 배수인 값에 -1을 할당하여 소수가 아님을 밝힌다. 

4. 즉, 2를 제외한 2 * 2 = 4 , 2 * 3 = 6 , 2 * 4  = 8 , 2 * 5 = 10... / 3을 제외한 3 * 3 = 9 , 3 * 4 = 12 , 3 * 5 = 15...는 모두 소수가 아니다.  

5. 중복 계산을 막기위해, 더욱 효율적인 알고리즘을 위해, 계산하려는 배열 인덱스의 값이 -1이라면 이에 대한 배수는 이전에 계산되어 졌기 때문에 계산을 넘어간다.

---  
