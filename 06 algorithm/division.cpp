/*
����
������ �ڿ����� �׺��� ���� �ڿ������� ������ ǥ���� �� �ִ�. ���� ��� 4�� ���,

4 = 3+1
= 2+2
= 2+1+1
= 1+1+1+1
���� ���� ������� ǥ�� �� �� �ִ�. �� �� , ������ ������ �����鼭 �� �������� �ٸ� ���� ���� ���� �����ϴµ�, ���� ��� ���� �� ���� ���� ��� ���� ����̴�.

2 + 1 + 1, 1 + 2 + 1 , 1 + 1 + 2
�ڿ��� n�� �Է� �޾� �̸� n���� ���� �ڿ������� ������ ��Ÿ���� ����� ��� ����ϴ� ���α׷��� ��� ȣ���� ����Ͽ� �ۼ��Ͻÿ�.



�Է�
ù �ٿ� 2 �̻� 20 ������ �ڿ��� n�� �־�����.



���
ù° �ٺ��� ��� ����� �� �ٿ� �ϳ��� ����Ѵ�. �ϳ��� �� �ȿ��� ū ���ڰ� ������ ������ �� ��, ��ü�����δ� ���� ���ڰ� ū ���� ���� ��µǵ��� �Ѵ�. ���ڿ� ���ϱ� ���̿��� ������ ����. �׸��� ������ �ٿ��� �������� �ڿ����� ������ ����Ѵ�.



���� �Է�
5
���� ���
4+1
3+2
3+1+1
2+2+1
2+1+1+1
1+1+1+1+1
6
*/
#include <stdio.h>
#include <iostream>

using namespace std;

int division(int n, int m, int arr[], int sz) {
	int cnt = 0;
	if (n<m) {
		m = n;
	}
	if (m == 0) {
		for (int i = 0; i<sz; i++) {
			cout << arr[i];
			if (i != sz - 1) {
				cout << '+';
			}
		}
		cout << endl;
		return 1;
	}
	for (int i = m; i>0; i--) {
		arr[sz] = i;
		cnt += division(n - i, i, arr, sz + 1);
	}

	return cnt;
}
int main() {

	int n;
	cin >> n;
	int arr[50] = { 0, };
	cout << division(n, n - 1, arr, 0);

	return 0;
}