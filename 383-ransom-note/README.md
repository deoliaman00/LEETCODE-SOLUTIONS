<h2><a href="https://leetcode.com/problems/ransom-note/">383. Ransom Note</a></h2><h3>Easy</h3><hr><div><p>Given two strings <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">ransomNote</code> and <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">magazine</code>, return <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">true</code><em style="color: rgb(234, 238, 241) !important;"> if </em><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">ransomNote</code><em style="color: rgb(234, 238, 241) !important;"> can be constructed by using the letters from </em><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">magazine</code><em style="color: rgb(234, 238, 241) !important;"> and </em><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">false</code><em style="color: rgb(234, 238, 241) !important;"> otherwise</em>.</p>

<p>Each letter in <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">magazine</code> can only be used once in <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">ransomNote</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> ransomNote = "a", magazine = "b"
<strong>Output:</strong> false
</pre><p><strong>Example 2:</strong></p>
<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> ransomNote = "aa", magazine = "ab"
<strong>Output:</strong> false
</pre><p><strong>Example 3:</strong></p>
<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> ransomNote = "aa", magazine = "aab"
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1 &lt;= ransomNote.length, magazine.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">ransomNote</code> and <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">magazine</code> consist of lowercase English letters.</li>
</ul>
</div>