<h2><a href="https://leetcode.com/problems/number-of-enclaves/">1020. Number of Enclaves</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="">m x n</code> binary matrix <code style="">grid</code>, where <code style="">0</code> represents a sea cell and <code style="">1</code> represents a land cell.</p>

<p>A <strong style="">move</strong> consists of walking from one land cell to another adjacent (<strong style="">4-directionally</strong>) land cell or walking off the boundary of the <code style="">grid</code>.</p>

<p>Return <em style="">the number of land cells in</em> <code style="">grid</code> <em style="">for which we cannot walk off the boundary of the grid in any number of <strong>moves</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example" style="">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/enclaves1.jpg" style="width: 333px; height: 333px;">
<pre style=""><strong>Input:</strong> grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three 1s that are enclosed by 0s, and one 1 that is not enclosed because its on the boundary.
</pre>

<p><strong class="example" style="">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/enclaves2.jpg" style="width: 333px; height: 333px;">
<pre style=""><strong>Input:</strong> grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> All 1s are either on the boundary or can reach the boundary.
</pre>

<p>&nbsp;</p>
<p><strong style="">Constraints:</strong></p>

<ul style="">
	<li><code style="">m == grid.length</code></li>
	<li><code style="">n == grid[i].length</code></li>
	<li><code style="">1 &lt;= m, n &lt;= 500</code></li>
	<li><code style="">grid[i][j]</code> is either <code style="">0</code> or <code style="">1</code>.</li>
</ul>
</div>