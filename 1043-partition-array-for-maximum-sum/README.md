<h2><a href="https://leetcode.com/problems/partition-array-for-maximum-sum/">1043. Partition Array for Maximum Sum</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code style="background-color: rgb(21, 29, 34) !important; color: rgb(185, 200, 207) !important;">arr</code>, partition the array into (contiguous) subarrays of length <strong style="color: rgb(194, 207, 214) !important;">at most</strong> <code style="background-color: rgb(21, 29, 34) !important; color: rgb(185, 200, 207) !important;">k</code>. After partitioning, each subarray has their values changed to become the maximum value of that subarray.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the largest sum of the given array after partitioning. Test cases are generated so that the answer fits in a <strong>32-bit</strong> integer.</em></p>

<p>&nbsp;</p>
<p><strong style="color: rgb(194, 207, 214) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(21, 29, 34) !important; color: rgb(184, 199, 207) !important;"><strong>Input:</strong> arr = [1,15,7,9,2,5,10], k = 3
<strong>Output:</strong> 84
<strong>Explanation:</strong> arr becomes [15,15,15,9,10,10,10]
</pre>

<p><strong style="color: rgb(194, 207, 214) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(21, 29, 34) !important; color: rgb(184, 199, 207) !important;"><strong>Input:</strong> arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
<strong>Output:</strong> 83
</pre>

<p><strong style="color: rgb(194, 207, 214) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(21, 29, 34) !important; color: rgb(184, 199, 207) !important;"><strong>Input:</strong> arr = [1], k = 1
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong style="color: rgb(194, 207, 214) !important;">Constraints:</strong></p>

<ul style="color: rgb(194, 207, 214) !important;">
	<li><code style="background-color: rgb(21, 29, 34) !important; color: rgb(185, 200, 207) !important;">1 &lt;= arr.length &lt;= 500</code></li>
	<li><code style="background-color: rgb(21, 29, 34) !important; color: rgb(185, 200, 207) !important;">0 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
	<li><code style="background-color: rgb(21, 29, 34) !important; color: rgb(185, 200, 207) !important;">1 &lt;= k &lt;= arr.length</code></li>
</ul>
</div>