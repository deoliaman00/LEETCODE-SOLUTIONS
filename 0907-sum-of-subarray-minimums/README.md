<h2><a href="https://leetcode.com/problems/sum-of-subarray-minimums/">907. Sum of Subarray Minimums</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers arr, find the sum of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">min(b)</code>, where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">b</code> ranges over every (contiguous) subarray of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">arr</code>. Since the answer may be large, return the answer <strong>modulo</strong> <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> arr = [3,1,2,4]
<strong>Output:</strong> 17
<strong>Explanation:</strong> 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> arr = [11,81,94,43,3]
<strong>Output:</strong> 444
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= arr.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= arr[i] &lt;= 3 * 10<sup>4</sup></code></li>
</ul>
</div>