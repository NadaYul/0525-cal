#include <iostream>

using namespace std;

int main() {
	int a, b;
	char cal;

	cout << "����� �� ���� �Է� : ";
	cin >> a, b;
	cout << "��ȣ �Է� : ";
	cin >> cal;
	
	switch(cal){
	case '+':
		cout << a << "+" << b << "=" << a + b << endl; break;
	}
}