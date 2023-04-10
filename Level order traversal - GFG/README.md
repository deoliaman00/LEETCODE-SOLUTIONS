# Level order traversal
## Easy
<div class="problems_problem_content__Xm_eO"><p>Given a binary tree, find its level order traversal.<br>
Level order traversal of a tree is <a href="http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/" style="--link-color:rgb(140, 156, 242) !important; --link-color-hover:rgb(172, 183, 246) !important; --link-color-active:rgb(140, 156, 242) !important; --visited-color:rgb(227, 140, 242) !important; --visited-color-hover:rgb(235, 172, 246) !important; --visited-color-active:rgb(227, 140, 242) !important;">breadth-first traversal f</a>or the tree.</p>

<p><br>
<strong>Example 1:</strong></p>

<pre style="background-color: rgb(18, 18, 18) !important; color: rgba(237, 237, 237, 0.87) !important; border-color: rgb(160, 160, 160) !important;"><strong>Input:
</strong>&nbsp;&nbsp;  1
 &nbsp;/&nbsp;&nbsp;&nbsp;\ 
&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp; 2
<strong>Output:</strong>1 3 2
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(18, 18, 18) !important; color: rgba(237, 237, 237, 0.87) !important; border-color: rgb(160, 160, 160) !important;"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; 10
 &nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \
 &nbsp;  20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 30
&nbsp; /&nbsp;&nbsp; \
 40&nbsp;&nbsp; 60
<strong>Output:</strong>10 20 30 40 60
</pre>

<p><br>
<strong>Your Task:</strong><br>
You don't have to take any input. Complete the function <strong>levelOrder()</strong> that takes the root node&nbsp;as input parameter and returns a list of integers&nbsp;containing the level order traversal of the given Binary Tree.</p>

<p><br>
<strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</p>

<p><br>
<strong>Constraints:</strong><br>
1 ≤&nbsp;Number of nodes ≤&nbsp;105<br>
1 ≤&nbsp;Data of a node ≤&nbsp;105</p>
</div>