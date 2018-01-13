<h1 class="gap">0x09. C - argc, argv</h1>


<h4 class="task">
    0. It ain't what they call you, it's what you answer to
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints its name, followed by a new line.</p><ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>


<h4 class="task">
    1. Silence is argument carried out by other means
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the number of arguments passed into it.</p><ul>
<li>Your program should print a number, followed by a new line</li>
</ul>


<h4 class="task">
    2. The best argument against democracy is a five-minute conversation with the average voter
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints all arguments it receives.</p><ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>


<h4 class="task">
    3. Neither irony or sarcasm is argument
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that multiplies two numbers.</p><ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code></li>
</ul>


<h4 class="task">
    4. To infinity and beyond
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that adds positive numbers.</p><ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print <code>0</code>, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code></li>
</ul>


<h4 class="task">
    5. Minimal Number of Coins for Change
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints the minimum number of coins to make change for an amount of money.</p><ul>
<li>Usage: <code>./change cents</code></li>
<li>where <code>cents</code> is the amount of cents you need to give back</li>
<li>if the number of arguments passed to your program is not exactly <code>1</code>, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>you should use <code>atoi</code> to parse the parameter passed to your program</li>
<li>If the number passed as the argument is negative, print <code>0</code>, followed by a new line</li>
<li>You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent</li>
</ul>

