#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int total = 0;

        // Replace Roman numeral combinations with their equivalent representations
        s = replaceAll(s, "IV", "IIII");
        s = replaceAll(s, "IX", "VIIII");
        s = replaceAll(s, "XL", "XXXX");
        s = replaceAll(s, "XC", "LXXXX");
        s = replaceAll(s, "CD", "CCCC");
        s = replaceAll(s, "CM", "DCCCC");

        // Calculate the integer value of the Roman numeral
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'I') {
                total += 1;
            } else if (ch == 'V') {
                total += 5;
            } else if (ch == 'X') {
                total += 10;
            } else if (ch == 'L') {
                total += 50;
            } else if (ch == 'C') {
                total += 100;
            } else if (ch == 'D') {
                total += 500;
            } else if (ch == 'M') {
                total += 1000;
            }
        }

        return total;
    }

private:
    std::string replaceAll(std::string str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length();
        }
        return str;
    }
};