#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int a[51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	printf("%d", a[0] * a[n - 1]);
	return 0;
}
