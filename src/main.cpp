#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using vd = vector<double>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& va = vd{ 9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193 };
	const auto& vb = vd{ 26.7, 75, 1.5, 42.5, 210, 3.8, 254 };
	const auto& vc = vd{ 1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88 };
	const auto& vt = vector<bool>{ true, false, false, true, false, false, true };

	int t;
	cin >> t;
	while (0 < (t--)) {
		auto ans = int{ 0 };
		for (auto i = 0; i < 7; ++i) {
			double p;
			cin >> p;

			if (vt[i]) {
				ans += static_cast<int>(va[i] * pow(vb[i] - p, vc[i]));
			}
			else {
				ans += static_cast<int>(va[i] * pow(p - vb[i], vc[i]));
			}
		}

		cout << ans << '\n';
	}

	return 0;
}