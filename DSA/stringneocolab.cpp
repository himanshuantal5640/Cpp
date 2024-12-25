#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::min

int minEditDistance(const std::string& str1, const std::string& str2) {
int m = str1.length();
int n = str2.length();

// Create a 2D table to store results of subproblems
std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));

// Initialize the table
for (int i = 0; i <= m; ++i) {
for (int j = 0; j <= n; ++j) {
if (i == 0) {
dp[i][j] = j; // If str1 is empty, insert all characters of str2
} else if (j == 0) {
dp[i][j] = i; // If str2 is empty, remove all characters of str1
} else if (str1[i - 1] == str2[j - 1]) {
dp[i][j] = dp[i - 1][j - 1]; // Characters are the same, no extra cost
} else {
dp[i][j] = 1 + std::min({dp[i][j - 1], // Insert
dp[i - 1][j], // Remove
dp[i - 1][j - 1] // Replace
});
}
}
}

return dp[m][n];
}

int main() {
std::string str1, str2;

std::cout << "Enter the first string: ";
std::cin >> str1;

std::cout << "Enter the second string: ";
std::cin >> str2;

int result = minEditDistance(str1, str2);
std::cout << "The minimum number of steps required to convert \""
<< str1 << "\" to \"" << str2 << "\" is " << result << std::endl;

return 0;
}