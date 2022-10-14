for (auto i : vec)
    {
        if (i%n == 1)
        {
            continue;
        }
        else if (i%n == 0)
        {
            continue;
        }
        else
        {
            cout << "NO" << el;
            return 0;
        }
    }
    cout << "YES" << el;