<h2><a href="https://leetcode.com/problems/push-dominoes/">838. Push Dominoes</a></h2><h3>Medium</h3><hr><div><p>There are <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">n</code> dominoes in a line, and we place each domino vertically upright. In the beginning, we simultaneously push some of the dominoes either to the left or to the right.</p>

<p>After each second, each domino that is falling to the left pushes the adjacent domino on the left. Similarly, the dominoes falling to the right push their adjacent dominoes standing on the right.</p>

<p>When a vertical domino has dominoes falling on it from both sides, it stays still due to the balance of the forces.</p>

<p>For the purposes of this question, we will consider that a falling domino expends no additional force to a falling or already fallen domino.</p>

<p>You are given a string <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">dominoes</code> representing the initial state where:</p>

<ul>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">dominoes[i] = 'L'</code>, if the <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> domino has been pushed to the left,</li>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">dominoes[i] = 'R'</code>, if the <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> domino has been pushed to the right, and</li>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">dominoes[i] = '.'</code>, if the <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">i<sup>th</sup></code> domino has not been pushed.</li>
</ul>

<p>Return <em style="color: rgb(255, 206, 70) !important;">a string representing the final state</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> dominoes = "RR.L"
<strong>Output:</strong> "RR.L"
<strong>Explanation:</strong> The first domino expends no additional force on the second domino.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/05/18/domino.png" style="height: 196px; width: 512px; filter: saturate(0.9) var(--ml-blue-filter) brightness(0.8);">
<pre style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 190, 59) !important;"><strong>Input:</strong> dominoes = ".L.R...LR..L.."
<strong>Output:</strong> "LL.RR.LLRRLL.."
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">n == dominoes.length</code></li>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">dominoes[i]</code> is either <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">'L'</code>, <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">'R'</code>, or <code style="background-color: rgb(22, 11, 5) !important; color: rgb(255, 189, 59) !important;">'.'</code>.</li>
</ul>
</div>