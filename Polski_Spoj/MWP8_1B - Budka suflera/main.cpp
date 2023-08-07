#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

vector <string> loadWordsToVector(string textToLoad) {
    vector <string> textVector;

    istringstream iss(textToLoad);
    string singleWord;
    while (iss >> singleWord) {
            textVector.push_back(singleWord);
    }
    return textVector;
}

void showVectorData(vector <string> someVector) {
    for( int i = 0; i < someVector.size(); i++ ) {
        cout << someVector[ i ] << endl;
    }
}

vector<string> putMissedWordsInVector(vector<string> originalSongText, vector<string> writtenSongText) {
    vector<string> missedWordsVector;

    for (int i = 0, j = 0; i < originalSongText.size(); i++) {
        if (j < writtenSongText.size() && writtenSongText[j] == originalSongText[i]) {
            j++;  // Move to the next word in writtenSongText
        } else {
            missedWordsVector.push_back(originalSongText[i]);
        }
    }

    return missedWordsVector;
}

void showMissedWords(vector <string> missedWordsVector) {

    cout << missedWordsVector.size() << endl;

    if(missedWordsVector.size()>0) {
        sort(missedWordsVector.begin(), missedWordsVector.end());
        showVectorData(missedWordsVector);
    }
}

int main() {
    string originalText;
    string writtenText;
    getline(cin,originalText);
    getline(cin,writtenText);
    vector <string> originalSongText = loadWordsToVector(originalText);
    vector <string> writtenSongText = loadWordsToVector(writtenText);
    showMissedWords(putMissedWordsInVector(originalSongText,writtenSongText));
    return 0;
}
