#include <iostream>

using namespace std;

int main() {
	int a, b;
	char cal;

	cout << "����� �� ���� �Է� : ";
	cin >> a >> b;
	cout << "��ȣ �Է� : ";
	cin >> cal;
	
	switch (cal) {
	case '+':
		cout << a << " + " << b << " = " << a + b << endl; break;

	case '-':
		cout << a << " + " << b << " = " << a - b << endl; break;
	
	case '*':
		cout << a << " * " << b << " = " << a * b << endl; break;

	case '/':
		if (a == 0 || b == 0) {
			cout << "�����⿡�� 0�� �� �� �����ϴ�.";
			break;
		}
		cout << a << " / " << b << " = " << a / b << endl; break;
	}
}