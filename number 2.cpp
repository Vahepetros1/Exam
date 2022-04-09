#include <iostream>

using namespace std;

int main()
{

    int height = 0;

    cout << "Enter the height of triangle:  "<<endl;

    cin >> height;

    for(int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            cout<<' ';
        }

        for (int j = height - 2 * i; j <= height; j++)
        {
            cout<<'^';
        }

        cout<<endl;

    }
    system("pause");
    return 0;
}
