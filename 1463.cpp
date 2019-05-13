#include <iostream>
#include <algorithm>
using namespace std;
int n, a[1000001];
int main() {
	scanf("%d", &n);
	a[2] = a[3] = 1;
	for (int i = 4; i <= n; i++) {
		a[i] = a[i - 1] + 1;
		if (i % 2 == 0)a[i] = min(a[i], a[i / 2] + 1);
		if (i % 3 == 0)a[i] = min(a[i], a[i / 3] + 1);
	}
	printf("%d", a[n]);
	return 0;
}
