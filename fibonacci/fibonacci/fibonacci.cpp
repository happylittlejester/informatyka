﻿#include <iostream>

using namespace std;

int main()
{
    int n;
    int f;
    int f0 = 0;
    int f1 = 1;

    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i > 1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else
        {
            f = i;
        }

        cout << f << endl;
    }
}