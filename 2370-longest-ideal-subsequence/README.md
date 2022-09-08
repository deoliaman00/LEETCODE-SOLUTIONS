<h2><a href="https://leetcode.com/problems/longest-ideal-subsequence/">2370. Longest Ideal Subsequence</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code style="">s</code> consisting of lowercase letters and an integer <code style="">k</code>. We call a string <code style="">t</code> <strong>ideal</strong> if the following conditions are satisfied:</p>

<ul>
	<li><code style="">t</code> is a <strong>subsequence</strong> of the string <code style="">s</code>.</li>
	<li>The absolute difference in the alphabet order of every two <strong>adjacent</strong> letters in <code style="">t</code> is less than or equal to <code style="">k</code>.</li>
</ul>

<p>Return <em style="">the length of the <strong>longest</strong> ideal string</em>.</p>

<p>A <strong>subsequence</strong> is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.</p>

<p><strong>Note</strong> that the alphabet order is not cyclic. For example, the absolute difference in the alphabet order of <code style="">'a'</code> and <code style="">'z'</code> is <code style="">25</code>, not <code style="">1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style=""><strong>Input:</strong> s = "acfgbd", k = 2
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest ideal string is "acbd". The length of this string is 4, so 4 is returned.
Note that "acfgbd" is not ideal because 'c' and 'f' have a difference of 3 in alphabet order.</pre>

<p><strong>Example 2:</strong></p>

<pre style=""><strong>Input:</strong> s = "abcd", k = 3
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest ideal string is "abcd". The length of this string is 4, so 4 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="">1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="">0 &lt;= k &lt;= 25</code></li>
	<li><code style="">s</code> consists of lowercase English letters.</li>
</ul>
</div>