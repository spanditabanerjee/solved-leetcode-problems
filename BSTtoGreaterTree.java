public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

   public class Solution {
   
       int s = 0;
       
       public TreeNode convertBST(TreeNode root) {
           convert(root);
           return root;
       }
       
       public void convert(TreeNode cur) {
           if (cur == null) return;
           convert(cur.right);
           cur.val += s;
           s = cur.val;
           convert(cur.left);
       }
       
   }