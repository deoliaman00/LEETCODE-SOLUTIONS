/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean PairPresent=false;
    public ArrayList<Integer>  temp=new ArrayList<>();
    public boolean findTarget(TreeNode root, int k) {
        dfs(root,k);
        return PairPresent;
        
        
    }
    public void dfs(TreeNode root, int k)
    {
        if(root==null)return;
        if(temp.contains(k-(root.val)))
        {
            PairPresent=true;
            return;
        }
        else{
            temp.add(root.val);
        }
        dfs(root.left,k);
        dfs(root.right,k);
    }
}