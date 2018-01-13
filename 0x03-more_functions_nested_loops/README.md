<h1 class="gap">0x03. C - More functions, more nested loops</h1>


<h4 class="task">
    0. isupper
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks for uppercase character.</p><ul>
<li>Prototype: <code>int _isupper(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul><p>FYI: The standard library provides a similar function: <code>isupper</code>. Run <code>man isupper</code> to learn more.</p>


<h4 class="task">
    1. isdigit
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks for a digit (<code>0</code> through <code>9</code>).</p><ul>
<li>Prototype: <code>int _isdigit(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a digit</li>
<li>Returns <code>0</code> otherwise</li>
</ul><p>FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.</p>


<h4 class="task">
    2. Collaboration is multiplication
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that multiplies two integers.</p><ul>
<li>Prototype: <code>int mul(int a, int b);</code></li>
</ul>


<h4 class="task">
    3. The numbers speak for themselves
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p><ul>
<li>Prototype: void print_numbers(void);</li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    4. I believe in numbers and signs
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p><ul>
<li>Prototype: <code>void print_most_numbers(void);</code></li>
<li>Do not print <code>2</code> and <code>4</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>


<h4 class="task">
    5. Numbers constitute the only universal language
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.</p><ul>
<li>Prototype: <code>void more_numbers(void);</code></li>
<li>You can only use <code>_putchar</code> three times in your code</li>
</ul>


<h4 class="task">
    6. The shortest distance between two points is a straight line
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that draws a straight line in the terminal.</p><ul>
<li>Prototype: <code>void print_line(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>_</code> should be printed</li>
<li>The line should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print <code>\n</code></li>
</ul>


<h4 class="task">
    7. I feel like I am diagonally parked in a parallel universe
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that draws a diagonal line on the terminal.</p><ul>
<li>Prototype: <code>void print_diagonal(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>\</code> should be printed</li>
<li>The diagonal should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print a <code>\n</code></li>
</ul>


<h4 class="task">
    8. You are so much sunshine in every square inch
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a square, followed by a new line.</p><ul>
<li>Prototype: <code>void print_square(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the square</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the square</li>
</ul>


<h4 class="task">
    9. Fizz-Buzz
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.</p><p>Write a program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.</p><ul>
<li>Each number or word should be separated by a space</li>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    10. Triangles
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a triangle, followed by a new line.</p><ul>
<li>Prototype: <code>void print_triangle(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the triangle</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the triangle</li>
</ul>


<h4 class="task">
    11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>. </p><p>Write a program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.</p><ul>
<li>You are allowed to use the standard library</li>
<li>Your program will be compiled with this command: <code>gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm</code></li>
</ul>


<h4 class="task">
    12. Numbers have life; they're not just symbols on paper
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that prints an integer.</p><ul>
<li>Prototype: <code>void print_number(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to use arrays or pointers</li>
<li>You are not allowed to hard-code special values</li>
</ul>

