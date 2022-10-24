string calc; cin >> calc;
    vector<int> ans;
    for (auto ch : calc)
    {
        if (isdigit(ch))
        {
            ans.push_back(ch-'0');
        }
    }
    int sz = ans.size();
    for (int i = 0; i < sz-1; i++)
    {
        cout << ans[i] << '+';
    }
    cout << ans[sz-1] << el;