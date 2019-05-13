#include <cstdio>
int N, S, a[21];
int f(int n, int k,int c) {
	if (n == N && k == S && !c)return 1;
	if (n == N)return 0;
	return f(n+1, k + a[n],0)+f(n+1, k,c?1:0);
}
int main() {
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d", f(0,0,1));
	return 0;
}
