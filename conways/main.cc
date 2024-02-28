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

    baduk.replace((32+1)*7+15,1,"1");
    baduk.replace((32+1)*8+14,3,"111");
    baduk.replace((32+1)*9+15,1,"1");

    cout << baduk << endl;

    return 0;
}