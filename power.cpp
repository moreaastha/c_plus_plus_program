int n,p;
    cout<<"Enter Number ";
    cin>>n;

    cout<<"Enter Power ";
    cin>>p;

    int ans = 1;

    for(int i=1;i<=p;i++){

        ans = ans*n;

    }

    cout<<ans;
