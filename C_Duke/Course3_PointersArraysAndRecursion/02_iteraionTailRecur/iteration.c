
int iteration(int n) {
  int ans = 1;
  if (n == 1) {
    return 1;
  }
  while (n > 1) {
    ans = ans * n;
    n--;
  }
  return ans;
}
