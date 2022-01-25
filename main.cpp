#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream input;
    string line;
    try
    {
        input.open("main.cpp");
    }
    catch(exception e)
    {
        cout << "error\n";
    }
    while(input.is_open() && !input.eof())
    {
        std::getline(input, line);
        cout << line << endl;
    }

    return 0;
}
