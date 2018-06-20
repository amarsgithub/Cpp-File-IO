// #include "BinaryFileStuff.h"
#include "TextFileIO.h"
#include "People.h"

#include <fstream>
#include <cstring>

void WriteToBinaryFile(People somePerson)
{
    fstream file("person.bin", ios_base::binary | ios_base::out);

    if (file.is_open())
    {
        file.write((char*)&somePerson.name), sizeof(People));

    }

    file.close();
}

People ReadFromFile()
{
    People anotherPerson;
    fstream file("person.bin", ios_base::binary | ios_base::in);

    if (file.is_open())
    {
        file.read((char*)&anotherPerson, sizeof(People));
    }
    file.close();
}


int main(void)
{
    // vector<People> people;
    // GetPeopleFromFile(people);
    //
    // int arr[5];
    //
    // for (int i = 0; i < 5; i++)
    //     arr[i] = 5 * i;

    // PutMyArrayToAFile(arr);

    People Amar;
    Amar.name = "Amar";
    Amar.age = 20;
    Amar.school = "UF";

    WriteToBinaryFile(Amar);

    People somePerson = ReadFromFile();

    return 0;
}
