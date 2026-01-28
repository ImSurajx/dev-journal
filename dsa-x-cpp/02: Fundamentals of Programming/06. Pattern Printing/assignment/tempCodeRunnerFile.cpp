 for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout<<endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        nsp += 2;
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nst--;
        cout << endl;
    }