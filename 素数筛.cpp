#include<iostream>
#include<math.h>
using namespace std;

const int maxn = 101;
int prime[maxn], cnt = 0;
bool p[maxn] = { 0 };

void Find() {
	for (int i = 2; i < maxn; i++) {
		if (p[i] == false) {
			prime[cnt++] = i;
			for (int j = i + i; j < maxn; j += i) {
				p[j] = true;
			}
		}
	}
	return;
}

int main() {
	Find();
	for (int i = 0; i < cnt; i++) {
		cout << prime[i] << endl;
	}

	system("pause");
	return 0;
}