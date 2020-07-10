//첫 번째 알고리즘 수도코드

//Algorithm BinaryFib(k):
// Input: 음수가 아닌 정수 k
// Output: k번째 피보나치 숫자 Fk
// if k=1
// return k;
// else
// return BinaryFib(k-1)+BinaryFib(k-2)

//계속 호출해야하고 귀찮음

//Algorithm LinearFibonacci(k):
// Input: 음수가 아닌 정수 k
// Output: 피보나치 수 (F_k, F_k-1) 쌍
// if k=1
// return (k,0)
//else
// (i,j) <- LinearFibonacci(k-1)
// return (i+j,i)

#include <iostream>
using namespace std;

int fibo(int i)
{
	if (i == 0)
		return 0;
	if (i == 1)
		return 1;

	int f_2 = 0;
	int f_1 = 1;

	int cur;

	for (int j = 2; j <= i; j++)
	{
		cur = f_1 + f_2;
		f_2 = f_1;
		f_1 = cur;
	}
	return cur;
} //fibo iteration (반복)