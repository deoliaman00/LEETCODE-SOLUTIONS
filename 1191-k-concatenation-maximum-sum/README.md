<h2><a href="https://leetcode.com/problems/k-concatenation-maximum-sum/">1191. K-Concatenation Maximum Sum</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>, modify the array by repeating it <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code> times.</p>

<p>For example, if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr = [1, 2]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k = 3 </code>then the modified array will be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 2, 1, 2, 1, 2]</code>.</p>

<p>Return the maximum sub-array sum in the modified array. Note that the length of the sub-array can be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> and its sum in that case is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</p>

<p>As the answer can be very large, return the answer <strong>modulo</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [1,2], k = 3
<strong>Output:</strong> 9
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [1,-2,1], k = 5
<strong>Output:</strong> 2
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [-1,-2], k = 7
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= k &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>4</sup> &lt;= arr[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>