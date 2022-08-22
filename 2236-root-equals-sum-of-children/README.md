<h2><a href="https://leetcode.com/problems/root-equals-sum-of-children/">2236. Root Equals Sum of Children</a></h2><h3>Easy</h3><hr><div><p>You are given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">root</code> of a <strong>binary tree</strong> that consists of exactly <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">3</code> nodes: the root, its left child, and its right child.</p>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">true</code> <em style="color: rgb(234, 238, 241) !important;">if the value of the root is equal to the <strong>sum</strong> of the values of its two children, or </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">false</code><em style="color: rgb(234, 238, 241) !important;"> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/08/graph3drawio.png" style="width: 281px; height: 199px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root = [10,4,6]
<strong>Output:</strong> true
<strong>Explanation:</strong> The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
10 is equal to 4 + 6, so we return true.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/08/graph3drawio-1.png" style="width: 281px; height: 199px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root = [5,3,1]
<strong>Output:</strong> false
<strong>Explanation:</strong> The values of the root, its left child, and its right child are 5, 3, and 1, respectively.
5 is not equal to 3 + 1, so we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The tree consists only of the root, its left child, and its right child.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>