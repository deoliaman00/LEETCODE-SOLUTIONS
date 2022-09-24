<h2><a href="https://leetcode.com/problems/reorder-list/">143. Reorder List</a></h2><h3>Medium</h3><hr><div><p>You are given the head of a singly linked-list. The list can be represented as:</p>

<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;">L<sub>0</sub> → L<sub>1</sub> → … → L<sub>n - 1</sub> → L<sub>n</sub>
</pre>

<p><em style="color: rgb(255, 206, 70) !important;">Reorder the list to be on the following form:</em></p>

<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;">L<sub>0</sub> → L<sub>n</sub> → L<sub>1</sub> → L<sub>n - 1</sub> → L<sub>2</sub> → L<sub>n - 2</sub> → …
</pre>

<p>You may not modify the values in the list's nodes. Only nodes themselves may be changed.</p>

<p>&nbsp;</p>
<p><strong style="color: rgb(255, 192, 61) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/04/reorder1linked-list.jpg" style="width: 422px; height: 222px; filter: saturate(0.9) var(--ml-blue-filter) brightness(0.8); color: rgb(255, 192, 61) !important;">
<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> head = [1,2,3,4]
<strong>Output:</strong> [1,4,2,3]
</pre>

<p><strong style="color: rgb(255, 192, 61) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/09/reorder2-linked-list.jpg" style="width: 542px; height: 222px; filter: saturate(0.9) var(--ml-blue-filter) brightness(0.8); color: rgb(255, 192, 61) !important;">
<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> head = [1,2,3,4,5]
<strong>Output:</strong> [1,5,2,4,3]
</pre>

<p>&nbsp;</p>
<p><strong style="color: rgb(255, 192, 61) !important;">Constraints:</strong></p>

<ul style="color: rgb(255, 192, 61) !important;">
	<li>The number of nodes in the list is in the range <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">[1, 5 * 10<sup>4</sup>]</code>.</li>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">1 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>