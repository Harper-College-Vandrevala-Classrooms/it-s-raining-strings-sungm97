#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> businessNames;
    string names;
    string input;
    cout << "Welcome to the Business Sorting Program!" << endl;
    cout << "Please enter the name of the business: ";
    getline(cin, names);
    businessNames.push_back(names);
    sort(businessNames.begin(), businessNames.end());
    cout << "Your business is: " << endl;
    for (const string& i : businessNames)
    {
        cout << i << endl;
    }
    cout << "Another business? ";
    getline(cin, input);
    while(input == "y" || input == "Y" || input == "yes" || input == "Yes")
    {
        cout << "Please enter the name of the business: ";
        getline(cin, names);
        businessNames.push_back(names);
        sort(businessNames.begin(), businessNames.end());
        cout << "Your business is: " << endl;
        for (const string& i : businessNames)
        {
            cout << i << endl;
        }
        cout << "Another business? ";
        getline(cin, input);
    }
    return 0;
}