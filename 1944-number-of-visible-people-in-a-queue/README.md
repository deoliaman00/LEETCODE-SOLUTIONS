<h2><a href="https://leetcode.com/problems/number-of-visible-people-in-a-queue/">1944. Number of Visible People in a Queue</a></h2><h3>Hard</h3><hr><div><p>There are <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">n</code> people standing in a queue, and they numbered from <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">0</code> to <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">n - 1</code> in <strong>left to right</strong> order. You are given an array <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">heights</code> of <strong>distinct</strong> integers where <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">heights[i]</code> represents the height of the <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">i<sup>th</sup></code> person.</p>

<p>A person can <strong>see</strong> another person to their right in the queue if everybody in between is <strong>shorter</strong> than both of them. More formally, the <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">i<sup>th</sup></code> person can see the <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">j<sup>th</sup></code> person if <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">i &lt; j</code> and <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">min(heights[i], heights[j]) &gt; max(heights[i+1], heights[i+2], ..., heights[j-1])</code>.</p>

<p>Return <em style="color: rgb(255, 255, 255) !important;">an array </em><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">answer</code><em style="color: rgb(255, 255, 255) !important;"> of length </em><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">n</code><em style="color: rgb(255, 255, 255) !important;"> where </em><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">answer[i]</code><em style="color: rgb(255, 255, 255) !important;"> is the <strong>number of people</strong> the </em><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">i<sup>th</sup></code><em style="color: rgb(255, 255, 255) !important;"> person can <strong>see</strong> to their right in the queue</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/05/29/queue-plane.jpg" style="width: 600px; height: 247px; filter: brightness(0.75);"></p>

<pre style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;"><strong>Input:</strong> heights = [10,6,8,5,11,9]
<strong>Output:</strong> [3,1,2,1,1,0]
<strong>Explanation:</strong>
Person 0 can see person 1, 2, and 4.
Person 1 can see person 2.
Person 2 can see person 3 and 4.
Person 3 can see person 4.
Person 4 can see person 5.
Person 5 can see no one since nobody is to the right of them.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;"><strong>Input:</strong> heights = [5,1,2,3,10]
<strong>Output:</strong> [4,1,1,1,0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">n == heights.length</code></li>
	<li><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= heights[i] &lt;= 10<sup>5</sup></code></li>
	<li>All the values of <code style="background-color: rgb(14, 20, 22) !important; color: rgb(201, 212, 218) !important;">heights</code> are <strong>unique</strong>.</li>
</ul>
</div>