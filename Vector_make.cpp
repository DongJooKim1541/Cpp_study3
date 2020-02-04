#include <iostream>
using namespace std;

int main() {
	
	int size, i;
	cout << "당신이 원하는 배열 크기 : ";
	cin >> size;
	int* a = new int[size];
	int* b = a;
	for (i = 0; i < size; i++) {
		cout << "배열 " << i << "번째 원소 : ";
		cin >> a[i];
	}
	while (true) {
		cout << "1. 추가로 입력  2. 종료" << endl;
		int choice;
		scanf_s("%d", &choice);
		if (choice == 1) {
			i++;
			if (i > size) {
				int* c = new int[size + 1];
				for (int i = 0; i < size; i++) {
					c[i] = b[i];
				}
				delete[] b; b = NULL;
				size++;
				cout << "배열 " << size - 1 << "번째 원소 : ";
				cin >> c[size - 1];
				b = new int[size];
				for (int i = 0; i < size; i++) {
					b[i] = c[i];
				}
				delete[] c; c = NULL;
			}
		}
		else {
			for (int i = 0; i < size; i++) {
				cout << "배열 " << i << "번째 원소 : " << b[i] << endl;
			}
			break;
		}
	}
	return 0;
}