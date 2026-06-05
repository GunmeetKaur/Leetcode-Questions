vector<int> firstNegative(vector<int>& arr, int k)
{
    queue<int> q;
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++)
    {
        // add current negative index
        if(arr[i] < 0)
            q.push(i);

        // window not formed yet
        if(i < k - 1)
            continue;

        // remove out-of-window indices
        while(!q.empty() && q.front() <= i - k)
            q.pop();

        // answer for current window
        if(q.empty())
            ans.push_back(0);
        else
            ans.push_back(arr[q.front()]);
    }

    return ans;
}
