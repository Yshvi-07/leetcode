int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 1, t = 0;
    for (int i = 0; i < n; i++)
    {
        int e = a[i];
        t = 0;
        for (int j = i; j < n; j++)
        {
            if (e != 0 && e == a[j])
            {
                t++;
                e *= 3;
            }
        }
        res = max(res, t);
    }
    cout << res << endl;
