class Solution {
public:
    
    typedef tuple<int, int, int> path_t;
    unordered_map<string, vector<path_t>> dict;
    vector<string> dir;
        
    int extract_file(string & path, int pos, pair<string, path_t> * file)
    {
        if (pos == path.size())
        {
            return -1;
        }

        int content = path.find('(', pos);
        if (content == -1)
        {
            return -1;
        }
        std::get<1>(file->second) = pos;
        std::get<2>(file->second) = content - pos;
        int content_end = path.find(')', content + 1);
        file->first = path.substr(content + 1, content_end - content - 1);
        return content_end + 2;
    }
    
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        int n = paths.size();
        dir.resize(n);
        for (int i = 0; i < n; i++)
        {
            string & p = paths[i];
            int pos = p.find(' ', 0);
            dir[i] = p.substr(0, pos);
            pos ++;
            while (pos != -1)
            {
                pair<string, path_t> file;
                std::get<0>(file.second) = i;
                pos = extract_file(p, pos, &file);
                if (pos != -1)
                    dict[file.first].push_back(file.second);
            }
        }
        
        vector<vector<string>> res;
        for (auto &[s, arr] : dict)
        {
            if (arr.size() <= 1)
            {
                continue;
            }
            
            vector<string> files;
            for (auto & [p, f_start, f_len] : arr)
            {
                files.push_back(dir[p] + '/' + paths[p].substr(f_start, f_len));
            }
            res.push_back(std::move(files));
        }
        
        return res;
    }
};