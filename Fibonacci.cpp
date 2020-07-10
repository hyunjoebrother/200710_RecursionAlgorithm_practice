//ù ��° �˰��� �����ڵ�

//Algorithm BinaryFib(k):
// Input: ������ �ƴ� ���� k
// Output: k��° �Ǻ���ġ ���� Fk
// if k=1
// return k;
// else
// return BinaryFib(k-1)+BinaryFib(k-2)

//��� ȣ���ؾ��ϰ� ������

//Algorithm LinearFibonacci(k):
// Input: ������ �ƴ� ���� k
// Output: �Ǻ���ġ �� (F_k, F_k-1) ��
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
} //fibo iteration (�ݺ�)