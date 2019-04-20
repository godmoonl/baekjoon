#include <cstdio>
int n, m, k, d[20][20][20][20];
int f(int y1, int x1, int y2, int x2) {
	if (d[y1][x1][y2][x2])return d[y1][x1][y2][x2];
	if (y1 == y2 && x1 == x2)return 1;
	if (y1 > y2 || x1 > x2)return 0;
	return d[y1][x1][y2][x2] = f(y1 + 1, x1, y2, x2) + f(y1, x1 + 1, y2, x2);
}
int main() {
	scanf("%d %d %d", &n, &m, &k);
	//k를 중심으로 2개로 나눠서 푼다
	if (k == 0) {
		printf("%d", f(0, 0, n-1,m-1));
		return 0;
	}
	int tmp1 = f(0, 0, (k-1) / m, (k-1)%m);
	int tmp2 = f((k-1)/m, (k-1)%m, n - 1, m - 1);
	printf("%d", tmp1*tmp2);
	return 0;
}
