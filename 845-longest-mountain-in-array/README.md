<h2><a href="https://leetcode.com/problems/longest-mountain-in-array/">845. Longest Mountain in Array</a></h2><h3>Medium</h3><hr><div><p>You may recall that an array <code style="">arr</code> is a <strong style="">mountain array</strong> if and only if:</p>

<ul style="">
	<li><code style="">arr.length &gt;= 3</code></li>
	<li>There exists some index <code style="">i</code> (<strong>0-indexed</strong>) with <code style="">0 &lt; i &lt; arr.length - 1</code> such that:
	<ul>
		<li><code style="">arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i]</code></li>
		<li><code style="">arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p>Given an integer array <code style="">arr</code>, return <em style="">the length of the longest subarray, which is a mountain</em>. Return <code style="">0</code> if there is no mountain subarray.</p>

<p>&nbsp;</p>
<p><strong style="">Example 1:</strong></p>

<pre style=""><strong>Input:</strong> arr = [2,1,4,7,3,2,5]
<strong>Output:</strong> 5
<strong>Explanation:</strong> The largest mountain is [1,4,7,3,2] which has length 5.
</pre>

<p><strong style="">Example 2:</strong></p>

<pre style=""><strong>Input:</strong> arr = [2,2,2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no mountain.
</pre>

<p>&nbsp;</p>
<p><strong style="">Constraints:</strong></p>

<ul style="">
	<li><code style="">1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="">0 &lt;= arr[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong style="">Follow up:</strong></p>

<ul style="">
	<li>Can you solve it using only one pass?</li>
	<li>Can you solve it in <code style="">O(1)</code> space?</li>
</ul>
</div>