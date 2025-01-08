int palim[2001][2001];
  

    // Function to check if a substring s[i...j] is a palindrome
    bool check(int i, int j, const std::string& s) {
        // Base pruning
        if (i > j) return true;  // Empty string is a palindrome
        if (i == j) return true; // Single character is a palindrome

        // DP check
        if (palim[i][j] != -1) return palim[i][j];

        // Transition: check if the first and last characters match
        bool ans = (s[i] == s[j] && check(i + 1, j - 1, s));

        // Save and store
        return palim[i][j] = ans;
    }
