#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std; // Use 'std' namespace globally

int main() {
    string fileData;
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    getline(inputFile, fileData);
    inputFile.close();

    cout << "Contents of input.txt:\n" << fileData << endl;

    int vowelsCount = count_if(fileData.begin(), fileData.end(), [](char c) {
        return string("aeiouAEIOU").find(c) != string::npos;
    });

    int wordsCount = 1 + count_if(fileData.begin(), fileData.end(), isspace);

    cout << "Number of vowels in the text: " << vowelsCount << endl;
    cout << "Number of words in the text: " << wordsCount << endl;

    string reversedText(fileData.rbegin(), fileData.rend());
    cout << "Reversed text:\n" << reversedText << endl;

    transform(fileData.begin(), fileData.end(), fileData.begin(), [](char c) {
        static bool capitalize = true;
        if (isspace(c)) {
            capitalize = true;
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        }
        return c;
    });

    cout << "Text with second letter capitalized:\n" << fileData << endl;

    return 0;
}