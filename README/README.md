Algorithm Complexity Analysis

383 - Ransom Note
for (char c : magazine.toCharArray()) -> O(n)
for (char c : ransomNote.toCharArray()) -> O(m) 
for (char c : count_ransomNote.keySet()) -> O(k) (k <=m>) -> O(m)

=> O(n) + O(m) + O(m) = O(n+m)

169 - Majority Element
for (int num : nums) {
    count.put(num, count.getOrDefault(num, 0) + 1);
}   -> O(n)

for (int num : nums) {
    if (count.get(num) > n/2) return num;
} ->O(n)

=> O(n) + O(n) = O(n)






