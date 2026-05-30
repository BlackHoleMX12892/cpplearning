#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int number {0};
        for(int i = 0; i < s.size(); i++) {
            switch(s[i]) {
                case 'I':
                if (s[i + 1] != 'V' && s[i + 1] != 'X') {
                    number = number + 1;
                }
                break;
                case 'V':
                if (i != 0) {
                    if(s[i - 1] == 'I') {
                        number = number + 4;
                    } else {
                        number = number + 5;
                    }
                } else {
                    number = number + 5;
                }
                break;
                case 'X':
                if (s[i + 1] != 'L' && s[i + 1] != 'C') {
                    if (i != 0) {
                        if(s[i - 1] == 'I') {
                            number = number + 9;
                        } else {
                            number = number + 10;
                        }
                    } else {
                        number = number + 10;
                    }
                }
                break;
                case 'L':
                if (i != 0) {
                    if(s[i - 1] == 'X') {
                        number = number + 40;
                    } else {
                        number = number + 50;
                    }
                } else {
                    number = number + 50;
                }
                break;
                case 'C':
                if (s[i + 1] != 'D' && s[i + 1] != 'M') {
                    if(i != 0) {
                        if(s[i - 1] == 'X') {
                            number = number + 90;
                        } else {
                            number = number + 100;
                        }
                    } else {
                        number = number + 100;
                    }
                }
                break;
                case 'D':
                if (i != 0) {
                    if(s[i - 1] == 'C') {
                        number = number + 400;
                    } else {
                        number = number + 500;
                    }
                } else {
                    number = number + 500;
                }
                break;
                case 'M':
                if(i != 0) {
                    if(s[i - 1] == 'C') {
                        number = number + 900;
                    } else {
                        number = number + 1000;
                    }
                } else {
                    number = number + 1000;
                }
                break;
                default:
                break;
            }
        }
        return number;
    }
};

int main() {
	string input {};
	cin >> input;
	Solution sol;
	cout << sol.romanToInt(input);
}
