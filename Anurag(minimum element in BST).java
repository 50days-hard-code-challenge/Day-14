public class Solution
{
    public static int minValue(Node root) {
        // Write your code here.
        if(root==null)
        {
            return -1;
        }
        if(root.left==null)
        {
            return root.data;
        }
         return minValue(root.left);
        
    }
}
