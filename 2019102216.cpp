#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i < 9; i++) {
		for (int j = 1; i < 9; i++) {
			cout << i << "*" << j << " = " << i * j << endl; // 수정했습니다.
		}
	}
	return 0;
}