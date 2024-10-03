#include <vector>
#include <print>
#include <algorithm>

int main() {
	std::vector vec{ 1, 2, 3, 4, 5, 6, 7, 8 };
	std::ranges::for_each(vec, [](int& x) { x *= 2;  });
	int sum = std::ranges::fold_left(vec, 0, std::plus<int>());
	std::println("{}", vec);
	std::println("{}", sum);
}
