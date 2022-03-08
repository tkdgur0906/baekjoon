#include <iostream>
using namespace std;


int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; N-i>0; i++) {
		printf("%d\n", N-i);
	}
	return 0;
}