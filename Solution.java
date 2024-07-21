
public class Solution {

    private static final int ALPHABET_SIZE = 26;

    public int minimumLength(String input) {
        int[] frequency = new int[ALPHABET_SIZE];
        for (char letter : input.toCharArray()) {
            ++frequency[letter - 'a'];
        }

        int minLengthAfterOperations = 0;
        for (int i = 0; i < ALPHABET_SIZE; ++i) {
            if (frequency[i] == 0) {
                continue;
            }
            minLengthAfterOperations += 2 >> (frequency[i] % 2);
        }

        return minLengthAfterOperations;
    }
}
