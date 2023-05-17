//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


vector <int> bottomView(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root)
    {
        // STEP1 : MAKING A VECTOR FOR STORING ANS
        vector<int>ans;
        // STEP2: RETURING THE VECTOR IF ALREADY EMPTY
        if(root==NULL)return ans;
        
        
        // STEP3: MAP WHICH WILL ARRANGE THE NODES IN SORTED ORDER
        map<int,int>mp;
        
        // STEP4: QUEUE IS USED TO STORE THE NODE AND TRAVERSE IT AND FIND THE NODES
        queue<pair<Node*,int>>qt;
        // STEP5: NODE INSERTED IN THE QUEUE
        qt.push({root,0});
        
        
        // STEP 6: TILL THE QUEUE IS NOT EMPTY KEEP RUNNING
        while(!qt.empty())
        {
                auto temp=qt.front();
                // STEP7: THE NODE IS TAKEN AND STORED EG:- {2,-2}
                
                qt.pop();
                // STEP 8: FOR CHECKING THAT THE NODE HAS A LEFT OR A RIGHT
                Node *val=temp.first;
                int tval=val->data;
                // STEP 9: TVAL WILL HAVE THE VALUE OF THE NODE
                // STEP 10: LVL WILL HAVE THE LEVELOF THE NODE
                
                int level=temp.second;
                mp[level]=tval;
                if(val->left!=NULL)
                {
                    qt.push({val->left,level-1});
                }
                if(val->right!=NULL)
                {
                    qt.push({val->right,level+1});
                }
                
        }
        
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.bottomView(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}



// } Driver Code Ends