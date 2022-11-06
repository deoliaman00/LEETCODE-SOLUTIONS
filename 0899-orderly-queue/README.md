<h2><a href="https://leetcode.com/problems/orderly-queue/">899. Orderly Queue</a></h2><h3>Hard</h3><hr><div><p>You are given a string <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">s</code> and an integer <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">k</code>. You can choose one of the first <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">k</code> letters of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">s</code> and append it at the end of the string..</p>

<p>Return <em style="color: rgb(255, 255, 255) !important;">the lexicographically smallest string you could have after applying the mentioned step any number of moves</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> s = "cba", k = 1
<strong>Output:</strong> "acb"
<strong>Explanation:</strong> 
In the first move, we move the 1<sup>st</sup> character 'c' to the end, obtaining the string "bac".
In the second move, we move the 1<sup>st</sup> character 'b' to the end, obtaining the final result "acb".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> s = "baaca", k = 3
<strong>Output:</strong> "aaabc"
<strong>Explanation:</strong> 
In the first move, we move the 1<sup>st</sup> character 'b' to the end, obtaining the string "aacab".
In the second move, we move the 3<sup>rd</sup> character 'c' to the end, obtaining the final result "aaabc".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= k &lt;= s.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">s</code> consist of lowercase English letters.</li>
</ul>
</div>