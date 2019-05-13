#include <iostream>
using namespace std;
int a[15];
int main(){
	int t;
	scanf("%d",& t);
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	for (int i = 0; i < t; i++){
		int n;
		scanf("%d", &n);
		for (int i = 4; i <= n; i++){
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];

		}
		printf("%d\n", a[n]);
	}
	return 0;
}
