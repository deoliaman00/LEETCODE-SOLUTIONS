<h2><a href="https://leetcode.com/problems/pascals-triangle-ii/">119. Pascal's Triangle II</a></h2><h3>Easy</h3><hr><div><p>Given an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">rowIndex</code>, return the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">rowIndex<sup>th</sup></code> (<strong>0-indexed</strong>) row of the <strong>Pascal's triangle</strong>.</p>

<p>In <strong>Pascal's triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height: 240px; width: 260px; filter: saturate(0.9) brightness(0.8);">
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> rowIndex = 3
<strong>Output:</strong> [1,3,3,1]
</pre><p><strong>Example 2:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> rowIndex = 0
<strong>Output:</strong> [1]
</pre><p><strong>Example 3:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> rowIndex = 1
<strong>Output:</strong> [1,1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">0 &lt;= rowIndex &lt;= 33</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you optimize your algorithm to use only <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">O(rowIndex)</code> extra space?</p>
</div>