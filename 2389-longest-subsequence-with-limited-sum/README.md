<h2><a href="https://leetcode.com/problems/longest-subsequence-with-limited-sum/">2389. Longest Subsequence With Limited Sum</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code style="">nums</code> of length <code style="">n</code>, and an integer array <code style="">queries</code> of length <code style="">m</code>.</p>

<p>Return <em style="">an array </em><code style="">answer</code><em style=""> of length </em><code style="">m</code><em style=""> where </em><code style="">answer[i]</code><em style=""> is the <strong>maximum</strong> size of a <strong>subsequence</strong> that you can take from </em><code style="">nums</code><em style=""> such that the <strong>sum</strong> of its elements is less than or equal to </em><code style="">queries[i]</code>.</p>

<p>A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style=""><strong>Input:</strong> nums = [4,5,2,1], queries = [3,10,21]
<strong>Output:</strong> [2,3,4]
<strong>Explanation:</strong> We answer the queries as follows:
- The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
- The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
- The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre style=""><strong>Input:</strong> nums = [2,3,4,5], queries = [1]
<strong>Output:</strong> [0]
<strong>Explanation:</strong> The empty subsequence is the only subsequence that has a sum less than or equal to 1, so answer[0] = 0.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="">n == nums.length</code></li>
	<li><code style="">m == queries.length</code></li>
	<li><code style="">1 &lt;= n, m &lt;= 1000</code></li>
	<li><code style="">1 &lt;= nums[i], queries[i] &lt;= 10<sup>6</sup></code></li>
</ul>
</div>