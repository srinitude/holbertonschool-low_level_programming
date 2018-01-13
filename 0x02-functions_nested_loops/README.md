<h1 class="gap">0x02. C - Functions, nested loops</h1>


<h4 class="task">
    0. _putchar
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that prints <code>Holberton</code>, followed by a new line.</p><ul>
<li>The program should return <code>0</code></li>
</ul>


<h4 class="task">
    1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p><ul>
<li>Prototype: <code>void print_alphabet(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    2. 10 x alphabet
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p><ul>
<li>Prototype: <code>void print_alphabet_x10(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    3. islower
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks for lowercase character. </p><ul>
<li>Prototype: <code>int _islower(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is lowercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul><p>FYI: The standard library provides a similar function: <code>islower</code>. Run <code>man islower</code> to learn more.</p>


<h4 class="task">
    4. isalpha
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks for alphabetic character. </p><ul>
<li>Prototype: <code>int _isalpha(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a letter, lowercase or uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul><p>FYI: The standard library provides a similar function: <code>isalpha</code>. Run <code>man isalpha</code> to learn more.</p>


<h4 class="task">
    5. Sign
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the sign of a number.</p><ul>
<li>Prototype: <code>int print_sign(int n);</code></li>
<li>Returns <code>1</code> and prints <code>+</code> if <code>n</code> is greater than zero</li>
<li>Returns <code>0</code> and prints <code>0</code> if <code>n</code> is zero</li>
<li>Returns <code>-1</code> and prints <code>-</code> if <code>n</code> is less than zero</li>
</ul>


<h4 class="task">
    6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that computes the absolute value of an integer.</p><ul>
<li>Prototype: <code>int _abs(int);</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>abs</code>. Run <code>man abs</code> to learn more.</p>


<h4 class="task">
    7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the last digit of a number.</p><ul>
<li>Prototype: <code>int print_last_digit(int);</code></li>
<li>Returns the value of the last digit</li>
</ul>


<h4 class="task">
    8. I'm federal agent Jack Bauer, and today is the longest day of my life
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p><ul>
<li>Prototype: <code>void jack_bauer(void);</code></li>
<li>You can listen to <a href="/rltoken/CF-MAQgUTibmVPRfQF3VkQ" target="_blank" title="this soundtrack">this soundtrack</a> while coding :)</li>
</ul>


<h4 class="task">
    9. Learn your times table
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the 9 times table, starting with 0.</p><ul>
<li>Prototype: <code>void times_table(void)</code></li>
<li>Format: see example</li>
</ul>


<h4 class="task">
    10. a + b
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that adds two integers and returns the result.</p><ul>
<li>Prototype: <code>int add(int, int);</code></li>
</ul>


<h4 class="task">
    11. Holberton School, 98 Battery Street, San Francisco CA 94111
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints all natural numbers from <code>n</code> to <code>98</code>, followed by a new line.</p><ul>
<li>Prototype: <code>void print_to_98(int n);</code></li>
<li>Numbers must be separated by a comma, followed by a space</li>
<li>Numbers should be printed in order</li>
<li>The first printed number should be the number passed to your function</li>
<li>The last printed number should be <code>98</code></li>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that prints the <code>n</code> times table, starting with 0.</p><ul>
<li>Prototype: <code>void print_times_table(int n)</code></li>
<li>If <code>n</code> is greater than <code>15</code> or less than <code>0</code> the function should not print anything</li>
<li>Format: see example</li>
</ul>


<h4 class="task">
    13. Nature made the natural numbers; All else is the work of women
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>If we list all the natural numbers below <code>10</code> that are multiples of <code>3</code> or <code>5</code>, we get <code>3</code>, <code>5</code>, <code>6</code> and <code>9</code>. The sum of these multiples is <code>23</code>. Write a program that computes and prints the sum of all the multiples of <code>3</code> or <code>5</code> below <code>1024</code> (excluded), followed by a new line.</p><ul>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints the first 50 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p><ul>
<li>The numbers must be separated by comma, followed by a space <code>, </code></li>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    15. Even Liber Abbaci
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with <code>1</code> and <code>2</code>, the first 10 terms will be: <code>1, 2, 3, 5, 8, 13, 21, 34, 55, 89</code>. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</p><ul>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that finds and prints the first 98 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p><ul>
<li>The numbers should be separated by comma, followed by a space  <code>,</code></li>
<li>You are allowed to use the standard library</li>
<li>You are not allowed to use any other library (You can’t use <code>GMP</code> etc…)</li>
<li>You are not allowed to use <code>long long</code>, <code>malloc</code>, pointers, arrays/tables, or structures</li>
<li>You are not allowed to hard code any Fibonacci number (except for <code>1</code> and <code>2</code>)</li>
</ul>

