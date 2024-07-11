int helper(int n, int ans) {
  if (n <= 0) {
    return ans;
  }
  return helper(n - 1, ans * n);
}

int tailRecurse(int n) { return helper(n, 1); }
