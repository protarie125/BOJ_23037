#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto lut = vector<int>{
		0,
		1,
		2 * 2 * 2 * 2 * 2,
		3 * 3 * 3 * 3 * 3,
		4 * 4 * 4 * 4 * 4,
		5 * 5 * 5 * 5 * 5,
		6 * 6 * 6 * 6 * 6,
		7 * 7 * 7 * 7 * 7,
		8 * 8 * 8 * 8 * 8,
		9 * 9 * 9 * 9 * 9
	};

	int x;
	cin >> x;

	auto ans = int{ 0 };
	while (0 < x) {
		const auto y = x % 10;
		ans += lut[y];

		x /= 10;
	}

	cout << ans;

	return 0;
}