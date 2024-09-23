#include <iostream>
#include <vector>

int main() {
	std::vector<int> A;

	A.push_back(1);
	A.insert(A.begin(), 7);

	for (int i : A) {
		std::cout << i << " ";
	}
}