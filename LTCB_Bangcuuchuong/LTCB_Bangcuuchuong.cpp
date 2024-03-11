#include <iostream>
using namespace std;
int main() {
	cout << "Bang cuu chuong\n";
	int cuuchuong[8] = { 2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 8; i++) {
		cout << cuuchuong[i] << "\n";
	}
	int so;
	cout << "Nhap so: "; cin >> so;
	for (int j = 1; j <= 10; j++) {
		cout << so << " x " << j << " = " << so * j << endl;
	}

		return 0;
}