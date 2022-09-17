<h2><a href="https://leetcode.com/problems/palindrome-pairs/">336. Palindrome Pairs</a></h2><h3>Hard</h3><hr><div><p>Given a list of <b>unique</b> words, return all the pairs of the&nbsp;<b><i>distinct</i></b> indices <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">(i, j)</code> in the given list, so that the concatenation of the two words&nbsp;<code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">words[i] + words[j]</code> is a palindrome.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> words = ["abcd","dcba","lls","s","sssll"]
<strong>Output:</strong> [[0,1],[1,0],[3,2],[2,4]]
<strong>Explanation:</strong> The palindromes are ["dcbaabcd","abcddcba","slls","llssssll"]
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> words = ["bat","tab","cat"]
<strong>Output:</strong> [[0,1],[1,0]]
<strong>Explanation:</strong> The palindromes are ["battab","tabbat"]
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> words = ["a",""]
<strong>Output:</strong> [[0,1],[1,0]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= words.length &lt;= 5000</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">0 &lt;= words[i].length &lt;= 300</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">words[i]</code> consists of lower-case English letters.</li>
</ul>
</div>