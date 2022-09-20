<h2><a href="https://leetcode.com/problems/stone-game-iii/">1406. Stone Game III</a></h2><h3>Hard</h3><hr><div><p>Alice and Bob continue their games with piles of stones. There are several stones <strong>arranged in a row</strong>, and each stone has an associated value which is an integer given in the array <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">stoneValue</code>.</p>

<p>Alice and Bob take turns, with Alice starting first. On each player's turn, that player can take <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">2</code>, or <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">3</code> stones from the <strong>first</strong> remaining stones in the row.</p>

<p>The score of each player is the sum of the values of the stones taken. The score of each player is <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">0</code> initially.</p>

<p>The objective of the game is to end with the highest score, and the winner is the player with the highest score and there could be a tie. The game continues until all the stones have been taken.</p>

<p>Assume Alice and Bob <strong>play optimally</strong>.</p>

<p>Return <code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">"Alice"</code><em style="color: rgb(255, 255, 255) !important;"> if Alice will win, </em><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">"Bob"</code><em style="color: rgb(255, 255, 255) !important;"> if Bob will win, or </em><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">"Tie"</code><em style="color: rgb(255, 255, 255) !important;"> if they will end the game with the same score</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> values = [1,2,3,7]
<strong>Output:</strong> "Bob"
<strong>Explanation:</strong> Alice will always lose. Her best move will be to take three piles and the score become 6. Now the score of Bob is 7 and Bob wins.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> values = [1,2,3,-9]
<strong>Output:</strong> "Alice"
<strong>Explanation:</strong> Alice must choose all the three piles at the first move to win and leave Bob with negative score.
If Alice chooses one pile her score will be 1 and the next move Bob's score becomes 5. In the next move, Alice will take the pile with value = -9 and lose.
If Alice chooses two piles her score will be 3 and the next move Bob's score becomes 3. In the next move, Alice will take the pile with value = -9 and also lose.
Remember that both play optimally so here Alice will choose the scenario that makes her win.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> values = [1,2,3,6]
<strong>Output:</strong> "Tie"
<strong>Explanation:</strong> Alice cannot win this game. She can end the game in a draw if she decided to choose all the first three piles, otherwise she will lose.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">1 &lt;= stoneValue.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(201, 212, 218) !important;">-1000 &lt;= stoneValue[i] &lt;= 1000</code></li>
</ul>
</div>