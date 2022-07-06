#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Member {
	int age;
	int seq;
	string name;
};

bool compare(Member a, Member b) {
	if (a.age < b.age) {
		return true;
	}
	else if (a.age == b.age) {
		if (a.seq < b.seq) {
			return true;
		}
	}
	return false;
}

int main() {
	int k = 1, n, age;
	string name;
	vector<Member> vec;
	Member m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		m = { age, k ,name};
		vec.push_back(m);
		k++;
	}
	sort(vec.begin(), vec.end(), compare);
	
	for (int i = 0; i < n; i++) {
		cout << vec[i].age << " " << vec[i].name << "\n";
	}

}