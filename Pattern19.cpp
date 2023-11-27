#include <iostream>
using namespace std;

int main()
{

    system("clear");

    int n, row, col;

    cout << " Enter The Number ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {

        // Space print
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        

        // 1 to Row
        for (col = 1; col <= row; col++)
            cout << col << " ";
        
        // row-1 to 1
        for (col = row - 1; col >= 1; col--)

            cout << col << " ";
        
            cout << endl;
    }
    return 0;
}