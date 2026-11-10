#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string Reverse(string str) {
    string reversedStr = "";
    for(int i = str.length() - 1;i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

int main() {
    string fileData;
    ifstream inputFile("data.txt");
    if (inputFile.is_open()) {
        getline(inputFile, fileData);
        inputFile.close();
    }else{
        cout << "error opening file. make sure data.text exists." << endl;
        return 1;
    }
    cout << "original text:" << fileData << "\n" << endl;
    int vowelCount = 0;
    for (char c : fileData) {
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            vowelCount++;
        }
    }
    cout << "number of vowels : " << vowelCount << endl;

    int wordCount = 1;
    if (fileData.empty()) wordCount = 0;
    for (char c : fileData){
        if (c == ' ') {
            wordCount++;
        }
    }
    cout << "number of words: " << wordCount << endl;
    cout << "reversed statement: " << Reverse(fileData) << endl;

    string capitalized = fileData;
    for (int i = 0; i < capitalized.length(); i++) {
        if (i == 0 && capitalized.length() > 1) {
            capitalized[1] = toupper(capitalized[1]);
        }
        else if (capitalized[i - 1] == ' ' && i + 1 < capitalized.length()){
            capitalized[i + 1] = toupper(capitalized[i + 1]);
        }
    }
    cout << "second letter capitalized: " << capitalized << endl;

    return 0;
}