class TimeMap
{
public:
    map<string, vector<pair<int, string>>> storage;
    TimeMap()
    {
        storage.clear();
    }
    void set(string key, string value, int timestamp)
    {
        storage[key].push_back({timestamp, value});
        // Storage is a hasmap storing timestamp and value as vector of pairs
        // against a timestamp
    }
    string get(string key, int timestamp)
    {
        if (storage[key].size() == 0)
            return "";
        // If for that key no such pair is available then we cannot get
        // any value
        int arr_len = storage[key].size();
        // If there is vector of pairs then there will be size also
        int l = 0;
        int h = arr_len - 1;
        int mid = -1;
        // We are using binary search to find the value pair <= timestamp
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (storage[key][mid].first <= timestamp)
                l = mid + 1;
            else
                h = mid - 1;
        }
        if (l == 0)
            return "";
        return storage[key][l - 1].second;
    }
};