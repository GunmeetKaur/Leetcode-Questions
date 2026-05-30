long long fairSequence(vector<int>& a)
{
    long long sum = 0;

    int curr = a[0];

    for(int i = 1; i < a.size(); i++)
    {
        if((a[i] > 0 && curr > 0) ||
           (a[i] < 0 && curr < 0))
        {
            curr = max(curr, a[i]);
        }
        else
        {
            sum += curr;
            curr = a[i];
        }
    }

    sum += curr;

    return sum;
}
