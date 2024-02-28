#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baduk;

    for(int i=0;i<16; i++)
    {
        for (int j=0;j<32;j++)
        {
            baduk.append("0");
        }
        baduk.append("\n");
    }

    cout << baduk << endl;

    return 0;
}