<h2><a href="https://leetcode.com/problems/stone-game-ix/">2029. Stone Game IX</a></h2><h3>Medium</h3><hr><div><p>Alice and Bob continue their games with stones. There is a row of n stones, and each stone has an associated value. You are given an integer array <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">stones</code>, where <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">stones[i]</code> is the <strong>value</strong> of the <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">i<sup>th</sup></code> stone.</p>

<p>Alice and Bob take turns, with <strong>Alice</strong> starting first. On each turn, the player may remove any stone from <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">stones</code>. The player who removes a stone <strong>loses</strong> if the <strong>sum</strong> of the values of <strong>all removed stones</strong> is divisible by <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">3</code>. Bob will win automatically if there are no remaining stones (even if it is Alice's turn).</p>

<p>Assuming both players play <strong>optimally</strong>, return <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">true</code> <em style="color: rgb(255, 255, 255) !important;">if Alice wins and</em> <code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">false</code> <em style="color: rgb(255, 255, 255) !important;">if Bob wins</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> stones = [2,1]
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;The game will be played as follows:
- Turn 1: Alice can remove either stone.
- Turn 2: Bob removes the remaining stone. 
The sum of the removed stones is 1 + 2 = 3 and is divisible by 3. Therefore, Bob loses and Alice wins the game.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> stones = [2]
<strong>Output:</strong> false
<strong>Explanation:</strong>&nbsp;Alice will remove the only stone, and the sum of the values on the removed stones is 2. 
Since all the stones are removed and the sum of values is not divisible by 3, Bob wins the game.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> stones = [5,1,2,4,3]
<strong>Output:</strong> false
<strong>Explanation:</strong> Bob will always win. One possible way for Bob to win is shown below:
- Turn 1: Alice can remove the second stone with value 1. Sum of removed stones = 1.
- Turn 2: Bob removes the fifth stone with value 3. Sum of removed stones = 1 + 3 = 4.
- Turn 3: Alices removes the fourth stone with value 4. Sum of removed stones = 1 + 3 + 4 = 8.
- Turn 4: Bob removes the third stone with value 2. Sum of removed stones = 1 + 3 + 4 + 2 = 10.
- Turn 5: Alice removes the first stone with value 5. Sum of removed stones = 1 + 3 + 4 + 2 + 5 = 15.
Alice loses the game because the sum of the removed stones (15) is divisible by 3. Bob wins the game.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">1 &lt;= stones.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(13, 19, 22) !important; color: rgb(200, 212, 217) !important;">1 &lt;= stones[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>