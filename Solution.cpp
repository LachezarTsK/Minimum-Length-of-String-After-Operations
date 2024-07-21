
#include <array>
#include <string>
using namespace std;

class Solution {

    static const int ALPHABET_SIZE = 26;

public:
    int minimumLength(const string& input) const {
        array<int, ALPHABET_SIZE> frequency{};
        for (const auto& letter : input) {
            ++frequency[letter - 'a'];
        }

        int minLengthAfterOperations = 0;
        for (size_t i = 0; i < ALPHABET_SIZE; ++i) {
            if (frequency[i] == 0) {
                continue;
            }
            minLengthAfterOperations += 2 >> (frequency[i] % 2);
        }

        return minLengthAfterOperations;
    }
};
