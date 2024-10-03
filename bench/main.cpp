#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
	auto vec = std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8};
	std::transform(vec.begin(), vec.end(), vec.begin(),
					[](auto x) { return x * 2; });
	
	auto sum = std::accumulate(vec.begin(), vec.end(), 0);

	for (const auto& i : vec) {
		std::cout << i << std::end(" ");
	}	
	std::cout << std::endl << sum << std::endl;
}
