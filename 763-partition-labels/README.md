<h2><a href="https://leetcode.com/problems/partition-labels/">763. Partition Labels</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">s</code>. We want to partition the string into as many parts as possible so that each letter appears in at most one part.</p>

<p>Note that the partition is done so that after concatenating all the parts in order, the resultant string should be <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">s</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">a list of integers representing the size of these parts</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> s = "ababcbacadefegdehijhklij"
<strong>Output:</strong> [9,7,8]
<strong>Explanation:</strong>
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> s = "eccbbbbdec"
<strong>Output:</strong> [10]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1 &lt;= s.length &lt;= 500</code></li>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">s</code> consists of lowercase English letters.</li>
</ul>
</div>