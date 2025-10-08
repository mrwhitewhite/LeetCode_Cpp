#include <vector>
#include <iostream>
using namespace std;

// class here
class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        vector<string> word_vector;
        string tmp_string;
        string out;
        int len = s.length();
        bool first_char = false; // set to true if ptr passed through the leading space, to the first char
        bool isrecording = false; // set to true if recording a word

        // get word into vector
        for(int i=0 ; i<len ; i++){
            char _current_char = s.at(i);
            // cout << _current_char << ", ";
            
            // skip leading space
            if(_current_char == ' ' and !first_char){
                continue;
            };
            
            // stop recording
            if(_current_char == ' ' and first_char and isrecording){
                word_vector.push_back(tmp_string);
                tmp_string.clear();
                isrecording = false;
                continue;
            };

            // record word
            if(_current_char != ' '){
                first_char = true;
                isrecording = true;
                tmp_string += _current_char;
                continue;
            }
            
        }

        // turn vector into string of text
        vector<string>::reverse_iterator it;
        for(it = word_vector.rbegin() ; it != word_vector.rend() ; it++){
            out += *it;
            out += " ";
        }

        // remove last space
        out.pop_back();

        return out;
    }
};