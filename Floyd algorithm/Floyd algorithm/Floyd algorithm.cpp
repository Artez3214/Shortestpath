#include <iostream>
#include <iomanip>
using namespace std;

void FloydStep(int Array[100][100],int n,int m)
{
    int a = 0;
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != a || j != a)
            {
                sum = Array[a][j] + Array[i][a];
                if (sum < Array[i][j])
                {
                    Array[i][j] = sum;
                }
             
           }
        }
    }
        a++;
    }
    
}
int main()
{
    int n, m;
    int Array[100][100];
    cout << "enter array size of columns and rows" << endl;
    cin >> n>>m;
    cout << "elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Array[i][j];
        }
    }
    cout << "your given array is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "floyd array is " << endl;
    FloydStep(Array, n, m);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }


}

