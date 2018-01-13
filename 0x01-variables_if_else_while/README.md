<h1 class="gap">0x01. C - variables, if, else, while</h1>


<h4 class="task">
    0. Positive anything is better than negative nothing
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.</p><ul>
<li>You can find the source code <a href="https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c">here</a></li>
<li>The variable <code>n</code> will store a different value every time you will run this program</li>
<li>You don't have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The number, followed by

<ul>
<li>if the number is greater than 0: <code>is positive</code></li>
<li>if the number is 0: <code>is zero</code></li>
<li>if the number is less than 0: <code>is negative</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>


<h4 class="task">
    1. The last digit
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.</p><ul>
<li>You can find the source code <a href="https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c">here</a></li>
<li>The variable <code>n</code> will store a different value every time you run this program</li>
<li>You don't have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The string <code>Last digit of</code>, followed by</li>
<li><code>n</code>, followed by</li>
<li>the string <code>is</code>, followed by

<ul>
<li>if <code>n</code> is greater than 5: the string <code>and is greater than 5</code></li>
<li>if <code>n</code> is 0: the string <code>and is 0</code></li>
<li>if <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>


<h4 class="task">
    2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the alphabet in lowercase, followed by a new line.</p><ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    3. When I was having that alphabet soup, I never thought that it would pay off
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the alphabet in lowercase, followed by a new line.</p><ul>
<li>Print all the letters except <code>q</code> and <code>e</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    4. alphABET
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p><ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>


<h4 class="task">
    5. Numbers
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p><ul>
<li>All your code should be in the <code>main</code> function</li>
</ul>


<h4 class="task">
    6. Numberz
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p><ul>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>You can only use <code>putchar</code> twice in your code</li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


<h4 class="task">
    7. Smile in the mirror
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p><ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    8. Hexadecimal
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p><ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>


<h4 class="task">
    9. Patience, persistence and perspiration make an unbeatable combination for success
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints all possible combinations of single-digit numbers.</p><ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>Numbers should be printed in ascending order</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> four times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
</ul>


<h4 class="task">
    10. 00...99
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints the numbers from <code>00</code> to <code>99</code>.</p><ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>Numbers should be printed in ascending order, with two digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>You can only use <code>putchar</code> five times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


<h4 class="task">
    11. Inventing is a combination of brains and materials. The more brains you use, the less material you need
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints all possible different combinations of two digits.</p><ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The two digits must be different</li>
<li><code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code></li>
<li>Print only the smallest combination of two digits</li>
<li>Numbers should be printed in ascending order, with two digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>You can only use <code>putchar</code> five times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


<h4 class="task">
    12. The success combination in business is: Do what you do better... and: do more of what you do...
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints all possible different combinations of three digits.</p><ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The three digits must be different</li>
<li><code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code></li>
<li>Print only the smallest combination of three digits</li>
<li>Numbers should be printed in ascending order, with three digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>You can only use <code>putchar</code> six times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>


<h4 class="task">
    13. Software is eating the World
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints all possible combinations of two two-digit numbers.</p><ul>
<li>The numbers should range from <code>0</code> to <code>99</code></li>
<li>The two numbers should be separated by a space</li>
<li>All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code></li>
<li>The combination of numbers must be separated by coma, followed by a space</li>
<li>The combinations of numbers should be printed in ascending order</li>
<li><code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc...) is forbidden)</li>
<li>You can only use <code>putchar</code> eight times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

