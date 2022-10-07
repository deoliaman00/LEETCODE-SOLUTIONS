<h2><a href="https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/">1155. Number of Dice Rolls With Target Sum</a></h2><h3>Medium</h3><hr><div><p>You have <code style="">n</code> dice, and each die has <code style="">k</code> faces numbered from <code style="">1</code> to <code style="">k</code>.</p>

<p>Given three integers <code style="">n</code>, <code style="">k</code>, and <code style="">target</code>, return <em style="">the number of possible ways (out of the </em><code style="">k<sup>n</sup></code><em style=""> total ways) </em><em style="">to roll the dice, so the sum of the face-up numbers equals </em><code style="">target</code>. Since the answer may be too large, return it <strong>modulo</strong> <code style="">10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style=""><strong>Input:</strong> n = 1, k = 6, target = 3
<strong>Output:</strong> 1
<strong>Explanation:</strong> You throw one die with 6 faces.
There is only one way to get a sum of 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre style=""><strong>Input:</strong> n = 2, k = 6, target = 7
<strong>Output:</strong> 6
<strong>Explanation:</strong> You throw two dice, each with 6 faces.
There are 6 ways to get a sum of 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1.
</pre>

<p><strong>Example 3:</strong></p>

<pre style=""><strong>Input:</strong> n = 30, k = 30, target = 500
<strong>Output:</strong> 222616187
<strong>Explanation:</strong> The answer must be returned modulo 10<sup>9</sup> + 7.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="">1 &lt;= n, k &lt;= 30</code></li>
	<li><code style="">1 &lt;= target &lt;= 1000</code></li>
</ul>
</div>