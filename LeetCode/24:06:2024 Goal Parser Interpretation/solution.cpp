#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        
        string res = "";

        for (int i = 0; i < command.length(); i++){

            if (command[i] == 'G'){
                res+= "G";
            }
            else if (i<command.length()-1 && command[i] == 'a' && command[i+1] == 'l'){
                res+= "al";
                i++;
            }
            else if (i<command.length()-1 && command[i] == '(' && command[i+1] == ')'){
                res+= "o";
                i++;
            }
        
        }

        return res;
    }
};