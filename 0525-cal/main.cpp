#include <iostream>

using namespace std;

int main() {
	int a, b;
	char cal;

	cout << "계산할 두 정수 입력 : ";
	cin >> a, b;
	cout << "부호 입력 : ";
	cin >> cal;
	
	switch(cal){
	case '+':
		cout << a << "+" << b << "=" << a + b << endl; break;
	}
}