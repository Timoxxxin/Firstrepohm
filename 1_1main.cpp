#include <iostream>
using namespace std;

int fib(int n)
{
	if (n<=1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
	int main(){
	cout << "Hello world"; << endl;
	cour << fib(10) << endl;
	return 0;
	}
