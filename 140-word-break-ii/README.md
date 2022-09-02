<h2><a href="https://leetcode.com/problems/word-break-ii/">140. Word Break II</a></h2><h3>Hard</h3><hr><div><p>Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">s</code> and a dictionary of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">wordDict</code>, add spaces in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">s</code> to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in <strong>any order</strong>.</p>

<p><strong>Note</strong> that the same word in the dictionary may be reused multiple times in the segmentation.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
<strong>Output:</strong> ["cats and dog","cat sand dog"]
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]
<strong>Output:</strong> ["pine apple pen apple","pineapple pen apple","pine applepen apple"]
<strong>Explanation:</strong> Note that you are allowed to reuse a dictionary word.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">1 &lt;= s.length &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">1 &lt;= wordDict.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">1 &lt;= wordDict[i].length &lt;= 10</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">s</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">wordDict[i]</code> consist of only lowercase English letters.</li>
	<li>All the strings of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">wordDict</code> are <strong>unique</strong>.</li>
</ul>
</div>