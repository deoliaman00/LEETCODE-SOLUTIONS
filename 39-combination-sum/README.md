<h2><a href="https://leetcode.com/problems/combination-sum/">39. Combination Sum</a></h2><h3>Medium</h3><hr><div><p>Given an array of <strong style="color: rgb(209, 219, 224) !important;">distinct</strong> integers <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">candidates</code> and a target integer <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">target</code>, return <em style="color: rgb(255, 255, 255) !important;">a list of all <strong>unique combinations</strong> of </em><code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">candidates</code><em style="color: rgb(255, 255, 255) !important;"> where the chosen numbers sum to </em><code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">target</code><em style="color: rgb(255, 255, 255) !important;">.</em> You may return the combinations in <strong style="color: rgb(209, 219, 224) !important;">any order</strong>.</p>

<p>The <strong style="color: rgb(209, 219, 224) !important;">same</strong> number may be chosen from <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">candidates</code> an <strong style="color: rgb(209, 219, 224) !important;">unlimited number of times</strong>. Two combinations are unique if the frequency of at least one of the chosen numbers is different.</p>

<p>It is <strong style="color: rgb(209, 219, 224) !important;">guaranteed</strong> that the number of unique combinations that sum up to <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">target</code> is less than <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">150</code> combinations for the given input.</p>

<p>&nbsp;</p>
<p><strong style="color: rgb(209, 219, 224) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;"><strong>Input:</strong> candidates = [2,3,6,7], target = 7
<strong>Output:</strong> [[2,2,3],[7]]
<strong>Explanation:</strong>
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
</pre>

<p><strong style="color: rgb(209, 219, 224) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;"><strong>Input:</strong> candidates = [2,3,5], target = 8
<strong>Output:</strong> [[2,2,2,2],[2,3,3],[3,5]]
</pre>

<p><strong style="color: rgb(209, 219, 224) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;"><strong>Input:</strong> candidates = [2], target = 1
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong style="color: rgb(209, 219, 224) !important;">Constraints:</strong></p>

<ul style="color: rgb(209, 219, 224) !important;">
	<li><code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">1 &lt;= candidates.length &lt;= 30</code></li>
	<li><code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">1 &lt;= candidates[i] &lt;= 200</code></li>
	<li>All elements of <code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">candidates</code> are <strong>distinct</strong>.</li>
	<li><code style="background-color: rgb(15, 21, 24) !important; color: rgb(202, 213, 219) !important;">1 &lt;= target &lt;= 500</code></li>
</ul>
</div>