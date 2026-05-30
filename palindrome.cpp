#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string number = std::to_string(x);
        std::string reversednumber = number;
        for (int i = 0; i <= number.size() - 1; i++) {
	    reversednumber[number.size() - 1 - i] = number[i];
        }
        if (number == reversednumber) {
	    return true;
        } else {
            return false;
        }
    }
};
