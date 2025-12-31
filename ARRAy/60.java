class Solution {
    public String getPermutation(int n, int k) {
        int[] factorial = new int[n + 1];
        factorial[0] = 1;
        for (int i = 1; i <= n; i++) {
            factorial[i] = factorial[i - 1] * i;
        }
        List<Integer> numbers = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            numbers.add(i);
        }

        
        k--;

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < n; i++) {
            int idx = k / factorial[n - 1 - i];
            result.append(numbers.get(idx));
            numbers.remove(idx);

            
            k %= factorial[n - 1 - i];
        }

        return result.toString();
    }
}