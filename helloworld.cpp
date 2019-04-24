#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    double mynum = 1.234321456789;
    bool mydec = true;
    cout << mynum << endl;
    cout << mydec << endl;

    string s[6] = {"One", "Two", "Three", "Four", "Five", "6"};
    // Introduce segmentation fault
    cout << s[20] << endl;
    cout << mynum << endl;
}