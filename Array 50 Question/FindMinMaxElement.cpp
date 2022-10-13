pair<long long, long long> getMinMax(long long a[], int n) {
    
    pair<long long,long long> res;
    int min=a[0], max=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    res.first=min;
    res.second=max;
    return res;
    
}
