// ims-cpp-code-challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string start =  "TAFT";
    //string end;

    vector<pair<string, string>> pairs;
    short loop = 0;
    string input;
    string delimiter = " -> ";
    string token;
    ifstream myFile("input.txt");
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
            //cout << token << endl;
            //cout << input << endl;
            loop++;
        }
        // Close the file
        myFile.close();

        //ToDo: move to it's own function
        //Todo: put letter in the middle of the two letters 
        //Todo: create a function that gets the highest and lowest amounts
        //ToDo: loop the function for as many times as the user wants
    }
}

