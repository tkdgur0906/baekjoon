#include <iostream>
using namespace std;

int n,temp;
int a[10001];

int main() {
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		scanf("%d",&temp);
		a[temp]++; 
	}
	for (int i = 1; i < 10001;i++) {
		while (a[i] != 0) {
			printf("%d\n",i);
			a[i]--;
		}
	}
	

}