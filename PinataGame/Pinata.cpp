#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int dp(int left, int right, const std::vector<int>& pinatas, std::vector<std::vector<int>>& memo) {
    if (left > right) return 0;

    if (memo[left][right] != -1) return memo[left][right];

    int maxCandies = 0;
    for (int i = left; i <= right; ++i) {
        int leftVal = (left == 0) ? 1 : pinatas[left - 1];
        int rightVal = (right == (int)pinatas.size() - 1) ? 1 : pinatas[right + 1];
        int candies = leftVal * pinatas[i] * rightVal;
        candies += dp(left, i - 1, pinatas, memo) + dp(i + 1, right, pinatas, memo);
        maxCandies = std::max(maxCandies, candies);
    }
    memo[left][right] = maxCandies;
    return maxCandies;
}

int getCandies(const std::vector<int>& pinatas) {
    int n = pinatas.size();
    std::vector<std::vector<int>> memo(n, std::vector<int>(n, -1));
    return dp(0, n - 1, pinatas, memo);
}

int main() {
    std::cout << "Welcome to the Pinata Candy Calculator!\n";
    std::cout << "Enter the number of pinatas: ";

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::cout << "Enter pinatas values separated by spaces: ";
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> pinatas;
    int val;
    while (ss >> val) {
        pinatas.push_back(val);
    }

    if ((int)pinatas.size() != n) {
        std::cerr << "Error: Number of pinatas does not match the input.\n";
        return 1;
    }

    int maxCandies = getCandies(pinatas);
    std::cout << "Max candies you can get: " << maxCandies << "\n";

    return 0;
}
