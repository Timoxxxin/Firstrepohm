#include <iostream>
using namespace std;

void fib(int n)
{
	int first = 0;
	int second = 1;
	cout << "First" << n << ("Fib n") << endl;
	for (int i = 0; i < n; i++){
	 if (i <= 1)
		 cout << i << endl;
	else {
	int  next = first + second;
	cout << next << endl;
	 first = second;
	 second = next;
	}
  }
}
	int main(){
	int n;
	cout << "Hello world"; << endl;
	cout << "N = ";
	cin >> n;
	fib(n);
	return 0;
	}
