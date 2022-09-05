/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root)
    {
        
        if(root == NULL) return {};
		map<int,vector<int>> mp;
		queue<pair<Node*,int>> q;
		q.push({root,0});
		while(!q.empty()){
			pair<Node*,int> front = q.front();
			q.pop();
			Node* node = front.first;
			int level = front.second;
			mp[level].push_back(node->val);
			for(auto it : node->children) q.push({it,level+1});
		}
	vector<vector<int>> ans;
	for(auto it : mp) if(it.second.size()) ans.push_back(it.second);
	return ans;
    }
};