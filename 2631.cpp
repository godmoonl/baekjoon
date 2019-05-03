#include <cstdio>
#include <vector>
using namespace std;
int n,ans;

int main(){
	scanf("%d",&n);
	vector<int>v(n);
	
	for(int i = 0; i<n; i++){
		int x;scanf("%d",&x);
		if(v.back()<x){v.push_back(x);ans++;}
		else{
			auto it = lower_bound(v.begin(),v.end(),x);
			*it = x;
		}
	}
	printf("%d",n-ans);
	return 0;
}
