#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream input;
    string line;
    input.open("main.cpp");
    while(!input.eof())
    {
        std::getline(input, line);
        cout << line << endl;
    }

    return 0;
}
