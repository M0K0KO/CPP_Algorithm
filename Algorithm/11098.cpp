#include <iostream>

int main() {
	int n, p, c;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> p;
		int a;
		std::string b;

		int maxnum = 0;
		std::string ans;
		for (int j = 0; j < p; j++) {
			std::cin >> a >> b;
			if (a > maxnum) {
				maxnum = a;
				ans = b;
			}
		}
		std::cout << ans << std::endl;
	}
}