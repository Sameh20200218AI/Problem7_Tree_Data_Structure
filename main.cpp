
 /*
                                             problem 7
                                            ------------

   Members                                          ID
  Mostafa Mohamed Nabil                          20200548
  Ahmed Waleed Shawky                             20200060
  Omar Ayman Saied                               20200343
  Sameh Raouf Helmy                              20200218

 */
#include <iostream>
#include<queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode * left ;
    TreeNode * right;
    TreeNode()
    {
        val = 0;
        left = right = 0;
    }
     TreeNode(int x)
    {
        val = x;
        left = right = 0;
    }
     TreeNode(int x,TreeNode*left,TreeNode*right)
    {
        val = x;
        left =  left ;
        right =right ;
    }
};
TreeNode * newnode(int data)
 {
     TreeNode * temp_node = new TreeNode;
     temp_node->left = 0;
     temp_node->right = 0;
     temp_node->val = data;
     return temp_node;
 }
 class Solution
 {


 public:
      TreeNode * root =0 ;
    void flipping( TreeNode * n ) // function mirror that takes any node in the tree and find its mirror
    {
        if(n==0)
            return ;
        else
        {
            queue< TreeNode *> q;
            q.push(n);
            while(q.empty()==0)
            {
                TreeNode * current = q.front();
                q.pop();
                TreeNode * temp;
                temp = current->left;
                current->left = current->right;
                current->right = temp;

                if(current->left !=0)
                {
                    q.push(current->left);
                }
                 if(current->right !=0 )
                {
                    q.push(current->right);
                }

            }
        }
    }
     void flipping( ) //  overload the function mirror that not takes any node in the tree but by default it return the mirror of tree in the root not and node in it
    {
        TreeNode * n = root;
        if(n==0)
            return ;
        else
        {
            queue< TreeNode *> q;
            q.push(n);
            while(q.empty()==0)
            {
                TreeNode * current = q.front();
                q.pop();
                TreeNode * temp;
                temp = current->left;
                current->left = current->right;
                current->right = temp;
                if(current->left  !=0)
                {
                    q.push(current->left);
                }
                 if(current->right !=0)
                {
                    q.push(current->right );
                }

            }
        }
    }
    void display ( TreeNode * r)
    {
        if(r==0)
        {
            return;
        }
        cout << r->val << "  "; //  display The mirror of tree  by preorder traversal :  root left right
        display(r->left);

        display(r->right);
    }
 };
int main()
{
     cout <<"                                      First Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p1 = newnode(1);
    p1->left = newnode(2);
    p1->right = newnode(3);
    p1->left->left = newnode(4);
    p1->left->right = newnode(5);

    Solution s1;
    s1.root = p1;
     cout <<" The data in nodes in the  tree  by preorder traversal is :  " ;

     s1.display(p1);
     cout << endl;
      cout <<"  The mirror of tree  by preorder traversal is :    " ;
     s1.flipping(p1->left);
     s1.display(p1);

     cout << endl;
          cout << "----------------------------------------------------------------------------------------------";
    cout << endl;

    cout << endl;
     cout <<"                                      Second Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p2 = newnode(1);
    p2->left = newnode(2);
    p2->right = newnode(3);

    Solution s2;
    s2.root = p2;
     cout <<" The data in nodes in the  tree  by preorder traversal is :  " ;

     s2.display(p2);
     cout << endl;
      cout <<"  The mirror of tree  by preorder traversal is :    " ;
     s2.flipping();
     s2.display(p2);

     cout << endl;
         cout << "----------------------------------------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Third Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p3 = newnode(1);
    p3->left = newnode(2);
    p3->right = newnode(3);
    p3->left->left = newnode(4);
    p3->left->right = newnode(5);

    Solution s3;
    s3.root = p3;
     cout <<" The data in nodes in the  tree  by preorder traversal is :  " ;

     s3.display(p3);
     cout << endl;
      cout <<"  The mirror of tree  by preorder traversal is :    " ;
     s3.flipping(p3->left);
     s3.display(p3);

     cout << endl;
         cout << "----------------------------------------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Fourth Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p4 = newnode(1);
    p4->left = newnode(2);
    p4->right = newnode(3);
    p4->left->left = newnode(4);
    p4->left->left->left = newnode(5);

    Solution s4;
    s4.root = p4;
     cout <<" The data in nodes in the  tree  by preorder traversal is :  " ;

     s4.display(p4);
     cout << endl;
      cout <<" The mirror of tree  by preorder traversal is :     " ;
     s4.flipping();
     s4.display(p4);

     cout << endl;
          cout << "----------------------------------------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Fifth Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p5 = newnode(1);
    p5->left = newnode(2);
    p5->right = newnode(3);
    p5->left->left = newnode(4);
    p5->left->right = newnode(5);
    p5->left->left->left = newnode(6);
    p5->left->left->left ->left= newnode(7);
    p5->left->left->left ->right= newnode(8);
    p5->left->left->left->left->left = newnode(9);
    p5->left->left->left->right->right = newnode(10);
    Solution s5;
    s5.root = p5;
     cout <<" The data in nodes in the  tree  by preorder traversal is :  " ;

     s5.display(p5);
     cout << endl;
      cout <<"  The mirror of tree  by preorder traversal is :    " ;
     s5.flipping(p5->left);
     s5.display(p5);

     cout << endl;
         cout << "----------------------------------------------------------------------------------------------";
    cout << endl;
    return 0;
}
