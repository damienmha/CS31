// Damien Ha
// 905-539-967

#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;

bool isValidQC(string results)
{
    // the empty string returns false
    if (results == "")
    {
        return false;
    }
    
    // i, j are the index at start and end of string respectively
    int i = 0;
    int j = 0;
    
    // iterate over each batch of QC tests
    while(j < results.length() && results[j] == 'Q')
    {
        // these integers represent the total number of tests and the number of passes or failures
        int totalTests, firstTest, secondTest;
        
        // these represent the first and second characters after 'Q'
        char firstChar, secondChar;
        
        i = j + 1; // this is the beginning of the string after the 'Q'
        j = i; // this is the end of the string
        
        // check if the character is a digit
        while(j < results.length() && isdigit(results[j]))
        {
            j++;
        }
        
        // valid QC tests cannot have leading 0s, returns false if there are any
        if(results[i] == '0' && j - i > 1)
        {
            return false;
        }
        
        // valid QC tests must have digits after each letter, if there aren't any we return false
        if(j - i == 0)
        {
            return false;
        }
        
        // total number of tests is the number after Q
        totalTests = stoi(results.substr(i, j - 1)); // (convert to integer type)
        
        firstChar = results[j];
        i = j + 1;
        j = i;
        
        // continue getting digits after the letter
        while(j < results.length() && isdigit(results[j]))
        {
            j++;
        }

        if(results[i] == '0' && j - i > 1)
        {
            return false;
        }

        if(j - i == 0)
        {
            return false;
        }
        
        // get the number following either p or d, whichever letter comes first
        firstTest = stoi(results.substr(i, j - 1));

        secondChar = results[j];
        i = j + 1;
        j = i;
        
        // repeat for the second letter
        while(j < results.length() && isdigit(results[j]))
        {
            j++;
        }

        if(results[i] == '0' && j - i > 1) {
            return false;
        }

        if(j - i == 0)
        {
            return false;
        }
        
        // get digits after second letter
        secondTest = stoi(results.substr(i, j - 1));
        
        // total should be the sum of passes and defects
        if(totalTests != firstTest + secondTest)
        {
            return false;
        }
        // we cannot have 0 batches, if we do we return false
        else if(totalTests == 0)
        {
            return false;
        }
        // there must be a reported pass and reported defect for each batch, otherwise returns false
        else if(!((firstChar == 'p' && secondChar == 'd') || (firstChar == 'd' && secondChar == 'p')))
        {
            return false;
        }
    }

    return(j == results.length()); // check if string meets conditions and returns bool based on evaluation
}

int passQC(string results)
{
    int passes = 0;
    int number = 0;
    string intStr = "";
    if(isValidQC(results)) // string must be a valid QC to be evaluated
    {
        for(int i = 0; i < results.size(); i++)
        {
            number = 0;
            intStr = "0";
            
            // iterate through string, check if the character is p, then add the following character to inStr if it is
            for(int j = i + 1; j < results.size(); j++)
            {
                if(results[i] == 'p')
                {
                    if(results[j] == 'p' || results[j] == 'd' || results[j] == 'Q')
                    {
                        break;
                    }
                    intStr += results[j];
                }
            }
            number = stoi(intStr); //convert the string representation to integer
            passes += number; // add each batch to total number of passes
        }
        return passes; //return the total number of passes
    }
    else
    {
        return -1; // return -1 if QC is invalid
    }
}

int defectQC(string results)
{
    int defects = 0;
    int number = 0;
    string intStr = "";
    if(isValidQC(results)) // string must be a valid QC to be evaluated
    {
        for(int i = 0; i < results.size(); i++)
        {
            number = 0;
            intStr = "0";
            // interate through string, check if the character is d, then add the following character to inStr if it is
            for(int j = i + 1; j < results.size(); j++)
            {
                if(results[i] == 'd')
                {
                    if(results[j] == 'p' || results[j] == 'd' || results[j] == 'Q')
                    {
                        break;
                    }
                    intStr += results[j];
                }
            }
            number = stoi(intStr); // convert the string representation to integer
            defects += number; // add each batch to total number of defects
        }
        return defects; //return the total number of defects
    }
    else
    {
        return -1; // return -1 if QC is invalic
    }
}

int totalQC(string results)
{
    // Invalid QCs return -1
    if(isValidQC(results) == false)
    {
        return -1;
    }
    // Valid QCs should have a total of passes+defects
    else
    {
        int total = passQC(results) + defectQC(results);
        return total;
    }
}

int batches(string results)
{
    int count = 0;
    
    // For loop checks for the number of 'Q's in the string, should equal number of batches
    for(int i = 0; i < results.size(); i++)
    {
        if(results[i] == 'Q')
        count++;
    }
    
    // Invalid QCs will return -1
    if(isValidQC(results) == false)
    {
        return -1;
    }
    // Valid QCs return number of batches
    else
    {
        return count;
    }
}

int main()
{
    string s;
    cout << "input a string";
    cin >> s;
    if(isValidQC(s))
    {
        cout << "true" << endl;
        cout << "number of passes " << passQC(s) << endl;
        cout << "number of defects " << defectQC(s) << endl;
        cout << "number of test " << totalQC(s) << endl;
        cout << "number of batches " << batches(s) << endl;
    }
    else
    {
        cout << "invalid QC" << endl;
    }
    return 0;
}
