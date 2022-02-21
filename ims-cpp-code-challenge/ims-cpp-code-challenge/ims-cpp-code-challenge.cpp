// ims-cpp-code-challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



vector<pair<string, string>> pairs;
string start;


void getStringAndFillPairs(string fileName)
{
    short loop = 0;
    string input;
    string delimiter = " -> ";
    string token;

    ifstream myFile(fileName);
    size_t pos = 0;

    // Read from the text file
    getline(myFile, start);
    if (myFile.is_open()) {
        // read lines
        while (!myFile.eof()) {
            getline(myFile, input);

            // Split the line by delimiter
            while ((pos = input.find(delimiter)) != string::npos) {
                token = input.substr(0, pos);
                input.erase(0, pos + delimiter.length());
            }

            pairs.push_back({ token, input });
            loop++;
        }
        // Close the file
        myFile.close();

        cout << "String and pairs imported!\n";
    }
}

string getIteration(string word)
{
    string newWord;
    string insert = "a";

    for (size_t i = 0; i < word.length() - 1; i++)
    {
        newWord.append(word[i] + insert);
    }

    string last = word.substr(word.length() - 1);
    return newWord.append(last).append("\n");
}

int main()
{
    getStringAndFillPairs("input.txt"); 
    cout << getIteration(start);
     
    //ToDo: insert letter based on pair
    //ToDo: create a function that gets the highest and lowest amounts
    //ToDo: loop the function for as many times as the user wants
    
}

