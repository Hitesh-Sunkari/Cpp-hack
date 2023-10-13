// Write a program to add or subtract two matrices

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    cout << "Enter the elements of the first matrix: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << endl;
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            cin >> b[k][l];
        }
    }
    cout << "Enter 1 to add the matrices or 2 to subtract the matrices: " << endl;
    cin >> m;
    if (m == 1)
    {
        for (n = 0; n < 3; n++)
        {
            for (o = 0; o < 3; o++)
            {
                c[n][o] = a[n][o] + b[n][o];
            }
        }
        cout << "The sum of the matrices is: " << endl;
        for (p = 0; p < 3; p++)
        {
            for (q = 0; q < 3; q++)
            {
                cout << c[p][q] << " ";
            }
            cout << endl;
        }
    }
    else if (m == 2)
    {
        for (r = 0; r < 3; r++)
        {
            for (s = 0; s < 3; s++)
            {
                c[r][s] = a[r][s] - b[r][s];
            }
        }
        cout << "The difference of the matrices is: " << endl;
        for (t = 0; t < 3; t++)
        {
            for (u = 0; u < 3; u++)
            {
                cout << c[t][u] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}
