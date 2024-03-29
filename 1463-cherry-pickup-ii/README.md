<h2><a href="https://leetcode.com/problems/cherry-pickup-ii/">1463. Cherry Pickup II</a></h2><h3>Hard</h3><hr><div><p>You are given a <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">rows x cols</code> matrix <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">grid</code> representing a field of cherries where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">grid[i][j]</code> represents the number of cherries that you can collect from the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i, j)</code> cell.</p>

<p>You have two robots that can collect cherries for you:</p>

<ul>
	<li><strong>Robot #1</strong> is located at the <strong>top-left corner</strong> <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(0, 0)</code>, and</li>
	<li><strong>Robot #2</strong> is located at the <strong>top-right corner</strong> <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(0, cols - 1)</code>.</li>
</ul>

<p>Return <em style="color: rgb(255, 255, 255) !important;">the maximum number of cherries collection using both robots by following the rules below</em>:</p>

<ul>
	<li>From a cell <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i, j)</code>, robots can move to cell <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i + 1, j - 1)</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i + 1, j)</code>, or <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i + 1, j + 1)</code>.</li>
	<li>When any robot passes through a cell, It picks up all cherries, and the cell becomes an empty cell.</li>
	<li>When both robots stay in the same cell, only one takes the cherries.</li>
	<li>Both robots cannot move outside of the grid at any moment.</li>
	<li>Both robots should reach the bottom row in <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">grid</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/29/sample_1_1802.png" style="width: 374px; height: 501px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> grid = [[3,1,1],[2,5,1],[1,5,5],[2,1,1]]
<strong>Output:</strong> 24
<strong>Explanation:</strong> Path of robot #1 and #2 are described in color green and blue respectively.
Cherries taken by Robot #1, (3 + 2 + 5 + 2) = 12.
Cherries taken by Robot #2, (1 + 5 + 5 + 1) = 12.
Total of cherries: 12 + 12 = 24.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/sample_2_1802.png" style="width: 500px; height: 452px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> grid = [[1,0,0,0,0,0,1],[2,0,0,0,0,3,0],[2,0,9,0,0,0,0],[0,3,0,5,4,0,0],[1,0,2,3,0,0,6]]
<strong>Output:</strong> 28
<strong>Explanation:</strong> Path of robot #1 and #2 are described in color green and blue respectively.
Cherries taken by Robot #1, (1 + 9 + 5 + 2) = 17.
Cherries taken by Robot #2, (1 + 3 + 4 + 3) = 11.
Total of cherries: 17 + 11 = 28.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">rows == grid.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">cols == grid[i].length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">2 &lt;= rows, cols &lt;= 70</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">0 &lt;= grid[i][j] &lt;= 100</code></li>
</ul>
</div>