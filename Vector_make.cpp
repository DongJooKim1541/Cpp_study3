#include <iostream>
using namespace std;

int main() {
	
	int size, i;
	cout << "����� ���ϴ� �迭 ũ�� : ";
	cin >> size;
	int* a = new int[size];
	int* b = a;
	for (i = 0; i < size; i++) {
		cout << "�迭 " << i << "��° ���� : ";
		cin >> a[i];
	}
	while (true) {
		cout << "1. �߰��� �Է�  2. ����" << endl;
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
				cout << "�迭 " << size - 1 << "��° ���� : ";
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
				cout << "�迭 " << i << "��° ���� : " << b[i] << endl;
			}
			break;
		}
	}
	return 0;
}