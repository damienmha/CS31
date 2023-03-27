// Damien Ha
// UID: 905539967

#include <iostream>
using namespace std;

int locateMaximum(const string array[], int n)
{
    string max = ""; // This max variable will identify which string in the array is the max
    int sizeIndex = 0; // This variable will be the index of the string above
    
    // If n<= 0 we return -1
    if(n <= 0)
    {
        return -1;
    }
    // Otherwise we find the index of thr max string
    else
    {
        for(int i = 0; i < n; i++) // iterate over array for n times
        {
            for(int j = 0; j < n; j++) // loop iterates until it finds word > max and breaks when it does
            {
                if(array[j] > max)
                {
                    max = array[j];
                    sizeIndex = j;
                    break;
                }
            }
        }
        return sizeIndex; // return index of max element
    }
}

int countFloatingPointValues(const string array[], int n)
{
    int count = 0; // this will count total folating point values
    
    // If n <= 0 we return -1
    if(n <= 0)
    {
        return -1;
    }
    // otherwise we will count floating point values
    for(int i = 0; i < n; i++) // iterate over array for n times
    {
        int numbers = 0;
        int decimals = 0;
        for(int j = 0; j < array[i].size(); j++) // iterate over the characters in the string
        {
            if ((array[i][j] >= 48 && array[i][j] <= 57)) // add a count to numbers if a number is found
            {
                numbers++;
            }
            if (array[i][j] == 46) // add a count to decimals if a decimal is found
            {
                decimals++;
            }
        }
        // add a count if sum of numbers and decimals is equal to total characters in string
        // if the sum isn't equal, then there's at least one non-numeric/non-decimal value in the string
        if ((decimals + numbers == array[i].size()) && (decimals == 0 || decimals == 1))
        {
            count++;
        }
    }
    return count;
}

bool hasNoCapitals(const string array[], int n)
{
    // if n <= 0 we return true
    if(n <= 0)
    {
        return true;
    }
    // otherwise we must evaluate each string
    for(int i = 0; i < n; i++) // iterate over the array for n times
    {
        for(int j = 0; j < array[i].size(); j++) // iterate over the characters in the string
        {
            if(array[i][j] >= 'A' && array[i][j] <= 'Z')
            {
                return false; // if any capital letters are detected, we return false
            }
        }
    }
    return true; // otherwise, we return true
}

int shiftLeft(string array[], int n, int amount, string placeholder)
{
    // if n <= 0 or amount < 0 we return -1
    if(n <= 0 || amount < 0)
    {
        return -1;
    }
    // otherwise we will evaluate the shift left of the array
    // evaluates this way if the amount of words replaced is smaller than the array
    if(amount < n)
    {
        for(int i = 0; i < n; i++) // iterate for n times
        {
            if(i < n - amount) // replace the first words encountered that aren't placeholders
            {
                array[i] = array[i + amount];
                continue;
            }
            else // otherwise, replace the words that should be placeholders
            {
                array[i] = placeholder;
            }
        }
        return amount; // return the number of words replaced
    }
    // otherwise, when the amount the user inputs is >= n, every word in the array is a placeholder
    else
    {
        for(int i = 0; i < n; i++) // iterate n times
        {
            array[i] = placeholder; // every word is a placeholder
        }
        return n; // return the size of the array
    }
}

int main()
{
    string folks[9] = { "samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon", "z"};
    string folks2[8] = {"samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon"};
    string stuff[4] = {"zebra", "5", "Bruce huang", "8.2"};
    string data[5] = { "Hello", "World!", "2048,", "3.14", "python is better"};
    string a[6] = {"123", "456", "789", "gamma", "beta", "delta" };
    string b[6] = {"0123", "456", "10.5L", "alpha", "beta", "omega" };
    assert(locateMaximum(folks, 9) == 8);
    assert(locateMaximum(folks2, 8) == 4);
    assert(locateMaximum(stuff, 4) == 0);
    assert(locateMaximum(folks, 0) == -1);
    assert(hasNoCapitals(a, 0) == true);
    assert(hasNoCapitals(data, 3) == false);
    assert(hasNoCapitals(a, 6) == true);
    assert(hasNoCapitals(folks, 6) == true);
    assert(hasNoCapitals(stuff, 4) == false);
    assert(countFloatingPointValues(data, 5) == 1);
    assert(countFloatingPointValues(a, 3) == 3);
    assert(countFloatingPointValues(b, 5) == 2);
    assert(countFloatingPointValues(stuff, 4) == 2);
    assert(countFloatingPointValues(folks, 9) == 0);
    assert(shiftLeft(folks, 9, 5, "foo") == 5);
    assert(shiftLeft(data, 5, 2, "hello world") == 2);
    assert(shiftLeft(folks, 9, 6, "damien") == 6);
    assert(shiftLeft(data, 0, -1, ".") == -1);
    cerr << "All tests succeeded" << endl;
    
    return 0;
}
