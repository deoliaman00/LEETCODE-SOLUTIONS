<h2><a href="https://leetcode.com/problems/ugly-number/">263. Ugly Number</a></h2><h3>Easy</h3><hr><div><p>An <strong>ugly number</strong> is a positive integer whose prime factors are limited to <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">2</code>, <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">3</code>, and <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">5</code>.</p>

<p style="color: rgb(209, 219, 224) !important;">Given an integer <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">n</code>, return <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">true</code> <em style="color: rgb(255, 255, 255) !important;">if</em> <code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">n</code> <em style="color: rgb(255, 255, 255) !important;">is an <strong>ugly number</strong></em>.</p>

<p style="color: rgb(209, 219, 224) !important;">&nbsp;</p>
<p style="color: rgb(209, 219, 224) !important;"><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;"><strong>Input:</strong> n = 6
<strong>Output:</strong> true
<strong>Explanation:</strong> 6 = 2 × 3
</pre>

<p style="color: rgb(209, 219, 224) !important;"><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;"><strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation:</strong> 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
</pre>

<p style="color: rgb(209, 219, 224) !important;"><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;"><strong>Input:</strong> n = 14
<strong>Output:</strong> false
<strong>Explanation:</strong> 14 is not ugly since it includes the prime factor 7.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(201, 213, 218) !important;">-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>