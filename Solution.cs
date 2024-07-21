
using System;

public class Solution
{
    private static readonly int ALPHABET_SIZE = 26;
    public int MinimumLength(string input)
    {
        int[] frequency = new int[ALPHABET_SIZE];
        foreach (char letter in input)
        {
            ++frequency[letter - 'a'];
        }

        int minLengthAfterOperations = 0;
        for (int i = 0; i < ALPHABET_SIZE; ++i)
        {
            if (frequency[i] == 0)
            {
                continue;
            }
            minLengthAfterOperations += 2 >> (frequency[i] % 2);
        }

        return minLengthAfterOperations;
    }
}
