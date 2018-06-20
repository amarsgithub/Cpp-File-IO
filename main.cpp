#include "TextFileIO.h"
#include "People.h"

int main(void)
{
    vector<People> people;
    GetPeopleFromFile(people);

    int arr[5];

    for (int i = 0; i < 5; i++)
        arr[i] = 5 * i;

    PutMyArrayToAFile(arr);

    return 0;
}
