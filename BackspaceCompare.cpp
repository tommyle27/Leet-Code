class Solution {

public:
    bool backspaceCompare(string s, string t) {
        // given:
        // given a string s and t
        // Constraints:
            // 1 <= s.size(), t.size() <= 200
            // s and t only contain lowercase letters and '#'

        // goal:
        // imagine each string being typed into a text editor
        // determine if the two strings are equal
        // '#' signifies a backspace

        // return:
        // boolean result

        // logic:   
        // two pointers

        int lastCharS = 0;
        int lastCharT = 0;

        for (int character = 0; character < s.size(); character++) {
            if (s[character] == '#') {

                if (lastCharS >= 1) {
                    //std::cout << "Current Last Character: " << s[lastCharS] << " New Last Character: " <<  s[lastCharS - 1] << std::endl;
                    lastCharS--;
                }

            }
            else {
                s[lastCharS] = s[character];
                //std::cout << "Last Character: " << s[lastCharS] << " Replaced with: " << s[character] << std::endl;
                lastCharS++;
            }
        }

        //std::cout << " " << std::endl;
        // EDIT STRING t ---------------------------------------------------------------------------------------------------------

        for (int character = 0; character < t.size(); character++) {
            if (t[character] == '#') {

                if (lastCharT >= 1) {
                    //std::cout << "Current Last Character: " << t[lastCharT] << " New Last Character: " <<  t[lastCharT - 1] << std::endl;
                    lastCharT--;
                }

            }
            else {
                t[lastCharT] = t[character];
                //std::cout << "Last Character: " << t[lastCharT] << " Replaced with: " << t[character] << std::endl;
                lastCharT++;
            }
        }

        //std::cout << " " << std::endl;
        //std::cout << "Last S: " << lastCharS << " Last T: " << lastCharT << std::endl;
        if (lastCharS != lastCharT) return false;


        //std::cout << " " << std::endl;
        for (int i = 0; i < lastCharT; i++) {
            //std::cout << "S character: " << s[i] << " T character: " << t[i] << std::endl;
            if (s[i] != t[i]) return false;
        }

        return true;
    }
};