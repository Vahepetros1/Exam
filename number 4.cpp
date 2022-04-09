#include <iostream>

using namespace std;

void ShowAndFillArray(int arrayForFilling[], int size);

int main()
{
    const int Size1 = 10;
    const int Size2 = 15;
    int arrayForFilling1[Size1] = {};
    int arrayForFilling2[Size2] = {};

    ShowAndFillArray(arrayForFilling1, Size1);
    ShowAndFillArray(arrayForFilling2, Size2);

    return 0;
}

void ShowAndFillArray(int arrayForFilling[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arrayForFilling[i] = i++;
        cout << arrayForFilling [i]<<"  ";
    }
    cout<<endl;
}

