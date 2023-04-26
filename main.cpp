#include <iostream>
#include <vector>

int main() {
    std::string text = " practice   makes   perfect";

    int space_counter = 0;
    std::string word;
    std::vector<std::string> words;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != 32) {
            word.push_back(text[i]);
            if(i+1 != text.size()) {
                if (text[i + 1] == 32) {
                    words.push_back(word);
                    word = "";
                }
            }else {
                words.push_back(word);
            }
        }else {
            space_counter++;
        }
    }

    int spaces = space_counter / (words.size() - 1);
    std::string result;

    for(std::string word : words){
        for(char ch : word){
            result.push_back(ch);
        }
        for(int i = 0; i < spaces; i++){
            result.push_back(32);
        }
    }

    std::cout << result;


return 0;
}
