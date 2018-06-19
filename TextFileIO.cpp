#include "TextFileIO.h"

void GetPeopleFromFile(vector<string> people)
{
    ifstream file("myTextFile.txt");
    string line;
    People person;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << "The line is: " << endl << line << endl;
        }
    }

    file.close();
}
