#include <iostream>
using namespace std;

int fib(int n)
{
	if (n<=1)
		return n;
	else {
	int first = 0;
	int second = 1;
	int next = 1;
	for int (i = 2; i < n; i++){
		next = first + second;
		first = second;
		second = next;
	}
	return next;
  }
}
	int main(){
	cout << "Hello world"; << endl;
	cout << "N = ";
	cin >> n;
	cout << "fib(n) = " << fib(n) << endl;
	return 0;
	}
