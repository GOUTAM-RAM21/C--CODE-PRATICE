
#include <string>
#include <vector> 

class Solution {
public:
    bool isFrequencySame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(std::string s1, std::string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        int s1_frequency = {0};
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            s1_frequency[index]++;
        }

        int windowSize = s1.length();

        for (int i = 0; i <= s2.length() - windowSize; i++) {
            int window_frequency = {0};

            int current_window_element_idx = 0;
            int s2_actual_char_idx = i;

            while (current_window_element_idx < windowSize) {
                int charIndex = s2[s2_actual_char_idx] - 'a';
                window_frequency[charIndex]++;

                current_window_element_idx++;
                s2_actual_char_idx++;
            }

            if (isFrequencySame(s1_frequency, window_frequency)) {
                return true;
            }
        }

        return false;
    }
};
```