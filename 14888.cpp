#include <cstdio>
#include <limits.h>
int N, arr[101], add,sub,mul,div, mx = INT_MIN, mn = INT_MAX;
void f(int n, int k,int a,int s, int m,int d) {
	if (N == n && k > mx)mx = k;
	if (N == n && k < mn)mn = k;
	if (N == n)return;
	if (a>0)f(n + 1, k + arr[n], a - 1, s, m, d);
	if (s>0)f(n + 1, k - arr[n], a, s - 1, m, d);
	if (m>0)f(n + 1, k * arr[n], a, s, m - 1, d);
	if (d>0)f(n + 1, k / arr[n], a, s, m, d - 1);
}
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d %d %d %d", &add, &sub, &mul, &div);
	f(1, arr[0], add, sub, mul, div);
	printf("%d\n%d", mx, mn);
	return 0;
}
