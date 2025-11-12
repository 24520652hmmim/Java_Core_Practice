import java.util.HashMap;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character, Integer> count_magazine = new HashMap<>();
        for (char c : magazine.toCharArray()) {
            count_magazine.put(c, count_magazine.getOrDefault(c, 0) + 1);
        }

        HashMap<Character, Integer> count_ransomNote = new HashMap<>();
        for (char c : ransomNote.toCharArray()) {
            count_ransomNote.put(c, count_ransomNote.getOrDefault(c, 0) + 1);
        }

        
        for (char c : count_ransomNote.keySet()) {
            if (count_magazine.getOrDefault(c, 0) < count_ransomNote.get(c)) {
                return false;
            }
        }

        return true;
    }
}
