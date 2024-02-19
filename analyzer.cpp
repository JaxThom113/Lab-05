// Lab 05: Software Engineering
// COP3504C
// 2/16/24
// Jaxon Kundrat

#include "StringData.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int linearSearch(vector<string> container, string element)
{
    for(int i = 0; i < size(container); ++i)
    {
        if(container.at(i) == element)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(vector<string> container, string element)
{
    int min = 0;
    int max = size(container) - 1;

    while(min <= max)
    {
        int mid = (max + min) / 2;

        if(element > container.at(mid))
        {
            min = mid + 1;
        }
        else if(element < container.at(mid))
        {
            max = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main() 
{
    vector<string> dataset = getStringData();

    int startTime = 0;
    int timeElapsed = 0;
    int location = 0;

    // Linear searches
    cout << "Linear Searches" << endl;
    cout << "---------------" << endl;

    cout << "Searching \"not_here\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " << linearSearch(dataset, "not_here") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";

    cout << "Searching \"mzzzz\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " << linearSearch(dataset, "mzzzz") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";

    cout << "Searching \"aaaaa\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " <<  linearSearch(dataset, "aaaaa") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";


    // Binary Searches
    cout << "Binary Searches" << endl;
    cout << "---------------" << endl;

    cout << "Searching \"not_here\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " << binarySearch(dataset, "not_here") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";

    cout << "Searching \"mzzzz\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " << binarySearch(dataset, "mzzzz") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";

    cout << "Searching \"aaaaa\"..." << endl;
    startTime = systemTimeNanoseconds();
    cout << "Location: " << binarySearch(dataset, "aaaaa") << endl;
    timeElapsed = systemTimeNanoseconds() - startTime;
    cout << "Time: " << timeElapsed << "\n\n";

    return 1;
}

