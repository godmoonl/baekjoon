#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int N, a[302], d[302][5];
int f(int n, int m) {
	if (m >= 3)return -100001;
	if (n == N)return a[n];
	if (n > N)return -100001;
	if (d[n][m] != -1)return d[n][m];
	d[n][m] = f(n + 1, m + 1) + a[n];
	d[n][m] = max(f(n + 2, 1) + a[n], d[n][m]);
	return d[n][m];

}
int main() {
	scanf("%d", &N);
	memset(d, -1, sizeof(d));
	for (int i = 1; i <= N; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d", f(0,0));
	return 0;
}
