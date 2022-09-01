#include<iostream>

using namespace std;

int temp[15];

int main() {
	int a, b, max = 0, min = 0, cnt;
	memset(temp, 0, sizeof(temp));
	scanf("%d", &a);
	bool flag = true;
	
	while (flag) {
		while (a > 0) {
			b = a % 10;
			temp[b] += 1;
			a = a / 10;
		}
		cnt = 0;
		min = 0;
		max = 0;
		for (int i = 0; i < 10; i++) {
			while (temp[i] != 0 && cnt < 4) {
				min += i * (pow(10, 3 - cnt));
				max += i * (pow(10, cnt));
				temp[i] -= 1;
				cnt += 1;
			}
		}
		if ((max - min) == 6174 || (max - min) == 0) {
			cout << max << "-" << min << "=" << max - min;
			flag = false;
		}
		else {
			cout << max << "-" << min << "=" << max - min << endl;
			memset(temp, 0, sizeof(temp));
			a = max - min;
		}
	}

	system("pause");
	return 0;
}