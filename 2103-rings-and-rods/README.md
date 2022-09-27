<h2><a href="https://leetcode.com/problems/rings-and-rods/">2103. Rings and Rods</a></h2><h3>Easy</h3><hr><div><p>There are <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">n</code> rings and each ring is either red, green, or blue. The rings are distributed <strong>across ten rods</strong> labeled from <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">0</code> to <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">9</code>.</p>

<p>You are given a string <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">rings</code> of length <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">2n</code> that describes the <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">n</code> rings that are placed onto the rods. Every two characters in <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">rings</code> forms a <strong>color-position pair</strong> that is used to describe each ring where:</p>

<ul>
	<li>The <strong>first</strong> character of the <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> pair denotes the <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> ring's <strong>color</strong> (<code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'R'</code>, <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'G'</code>, <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'B'</code>).</li>
	<li>The <strong>second</strong> character of the <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> pair denotes the <strong>rod</strong> that the <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> ring is placed on (<code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'0'</code> to <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'9'</code>).</li>
</ul>

<p>For example, <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">"R3G2B1"</code> describes <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">n == 3</code> rings: a red ring placed onto the rod labeled 3, a green ring placed onto the rod labeled 2, and a blue ring placed onto the rod labeled 1.</p>

<p>Return <em style="color: rgb(255, 206, 70) !important;">the number of rods that have <strong>all three colors</strong> of rings on them.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/23/ex1final.png" style="width: 258px; height: 130px; filter: saturate(0.9) var(--ml-blue-filter) brightness(0.8); color: rgb(255, 192, 61) !important;">
<pre style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> rings = "B0B6G0R6R0R6G9"
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
- The rod labeled 0 holds 3 rings with all colors: red, green, and blue.
- The rod labeled 6 holds 3 rings, but it only has red and blue.
- The rod labeled 9 holds only a green ring.
Thus, the number of rods with all three colors is 1.
</pre>

<p style="color: rgb(255, 192, 61) !important;"><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/23/ex2final.png" style="width: 266px; height: 130px; filter: saturate(0.9) var(--ml-blue-filter) brightness(0.8); color: rgb(255, 192, 61) !important;">
<pre style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> rings = "B0R0G0R9R0B0G0"
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
- The rod labeled 0 holds 6 rings with all colors: red, green, and blue.
- The rod labeled 9 holds only a red ring.
Thus, the number of rods with all three colors is 1.
</pre>

<p style="color: rgb(255, 192, 61) !important;"><strong>Example 3:</strong></p>

<pre style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> rings = "G4"
<strong>Output:</strong> 0
<strong>Explanation:</strong> 
Only one ring is given. Thus, no rods have all three colors.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">rings.length == 2 * n</code></li>
	<li><code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">rings[i]</code> where <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i</code> is <strong>even</strong> is either <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'R'</code>, <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'G'</code>, or <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'B'</code> (<strong>0-indexed</strong>).</li>
	<li><code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">rings[i]</code> where <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">i</code> is <strong>odd</strong> is a digit from <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'0'</code> to <code style="background-color: rgb(21, 10, 5) !important; color: rgb(255, 189, 59) !important;">'9'</code> (<strong>0-indexed</strong>).</li>
</ul>
</div>