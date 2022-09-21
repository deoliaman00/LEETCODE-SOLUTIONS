<h2><a href="https://leetcode.com/problems/range-sum-query-immutable/">303. Range Sum Query - Immutable</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">nums</code>, handle multiple queries of the following type:</p>

<ol style="color: rgb(209, 219, 224) !important;">
	<li>Calculate the <strong>sum</strong> of the elements of <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">nums</code> between indices <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">left</code> and <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">right</code> <strong>inclusive</strong> where <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">left &lt;= right</code>.</li>
</ol>

<p>Implement the <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">NumArray</code> class:</p>

<ul style="color: rgb(209, 219, 224) !important;">
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">NumArray(int[] nums)</code> Initializes the object with the integer array <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">nums</code>.</li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">int sumRange(int left, int right)</code> Returns the <strong>sum</strong> of the elements of <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">nums</code> between indices <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">left</code> and <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">right</code> <strong>inclusive</strong> (i.e. <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">nums[left] + nums[left + 1] + ... + nums[right]</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong style="color: rgb(209, 219, 224) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;"><strong>Input</strong>
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
<strong>Output</strong>
[null, 1, -1, -3]

<strong>Explanation</strong>
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
</pre>

<p>&nbsp;</p>
<p><strong style="color: rgb(209, 219, 224) !important;">Constraints:</strong></p>

<ul style="color: rgb(209, 219, 224) !important;">
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">0 &lt;= left &lt;= right &lt; nums.length</code></li>
	<li>At most <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">10<sup>4</sup></code> calls will be made to <code style="background-color: rgb(15, 20, 23) !important; color: rgb(202, 213, 219) !important;">sumRange</code>.</li>
</ul>
</div>