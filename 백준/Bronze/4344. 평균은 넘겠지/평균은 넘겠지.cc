#include <iostream>
using namespace std;
int main() {
	int temp, score, sum=0, average, high = 0,stu;
	double result;
	cin >> temp;
	for (int i = 0; i < temp; i++) {
		cin >> stu;
		int arr[1000];
		for (int j = 0; j < stu; j++) {
			cin >> score;
			sum += score;
			arr[j] = score;
		}
		average = sum / stu;
		for (int k = 0; k < stu; k++) {
			if (arr[k] > average) high++;
		}
		cout << fixed; cout.precision(3);
		double result = (double)high / stu * 100;
		cout << result << '%'<< endl;
		sum = 0; high = 0;
	}
}