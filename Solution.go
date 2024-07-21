
package main

import "fmt"

const ALPHABET_SIZE = 26

func minimumLength(input string) int {
    frequency := make([]int, ALPHABET_SIZE)
    for _, letter := range input {
        frequency[letter-'a']++
    }

    minLengthAfterOperations := 0
    for i := 0; i < ALPHABET_SIZE; i++ {
        if frequency[i] == 0 {
            continue
        }
        minLengthAfterOperations += 2 >> (frequency[i] % 2)
    }

    return minLengthAfterOperations
}
