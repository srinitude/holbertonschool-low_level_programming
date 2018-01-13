<h1 class="gap">0x04. C - Pointers, arrays and strings</h1>


<h4 class="task">
    0. 98 Battery st.
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.</p><ul>
<li>Prototype: <code>void reset_to_98(int *n);</code> </li>
</ul>


<h4 class="task">
    1. Don't swap horses in crossing a stream
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that swaps the values of two integers.</p><ul>
<li>Prototype: <code>void swap_int(int *a, int *b);</code><br/></li>
</ul>


<h4 class="task">
    2. This report, by its very length, defends itself against the risk of being read
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the length of a string.</p><ul>
<li>Prototype: <code>int _strlen(char *s);</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>


<h4 class="task">
    3. I do not fear computers. I fear the lack of them
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a string, followed by a new line, to <code>stdout</code>.</p><ul>
<li>Prototype: <code>void _puts(char *str);</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>


<h4 class="task">
    4. I can only go one way. I've not got a reverse gear
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a string, in reverse, followed by a new line.</p><ul>
<li>Prototype: <code>void print_rev(char *s);</code></li>
</ul>


<h4 class="task">
    5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that reverses a string.  </p><ul>
<li>Prototype: <code>void rev_string(char *s);</code><br/></li>
</ul>


<h4 class="task">
    6. Half the lies they tell about me aren't true
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints one char out of 2 of a string, followed by a new line.</p><ul>
<li>Prototype: <code>void puts2(char *str);</code></li>
<li>The function should print only one character out of two, starting with the first one</li>
</ul>


<h4 class="task">
    7. Winning is only half of it. Having fun is the other half
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints half of a string, followed by a new line.</p><ul>
<li>Prototype: <code>void puts_half(char *str);</code></li>
<li>The function should print the second half of the string</li>
<li>If the number of characters is odd, the function should print the <code>(length_of_the_string - 1) / 2</code> last characters of the string</li>
</ul>


<h4 class="task">
    8. Arrays are not pointers
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints <code>n</code> elements of an array of integers, followed by a new line.</p><ul>
<li>Prototype: <code>void print_array(int *a, int n);</code><br/></li>
<li>where <code>n</code> is the number of elements of the array to be printed</li>
<li>Numbers must be separated by comma, followed by a space</li>
<li>The numbers should be displayed in the same order as they are stored in the array</li>
<li>You are allowed to use <code>printf</code></li>
</ul>


<h4 class="task">
    9. strcpy
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><ul>
<li>Prototype: <code>char *_strcpy(char *dest, char *src);</code> </li>
</ul><p>Write a function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.</p><ul>
<li>Return value: the pointer to <code>dest</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strcpy</code>. Run <code>man strcpy</code> to learn more.</p>


<h4 class="task">
    10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that convert a string to an integer.</p><ul>
<li>Prototype: <code>int _atoi(char *s);</code></li>
<li>The number in the string can be preceded by an infinite number of characters</li>
<li>You need to take into account all the <code>-</code> and <code>+</code> signs before the number</li>
<li>If there are no numbers in the string, the function must return <code>0</code></li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to declare new variables of “type” array</li>
<li>You are not allowed to hard-code special values</li>
<li>Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS</li>
<li>We will use the <code>-fsanitize=signed-integer-overflow</code> gcc flag to compile your code. If this flag is not available in you version of gcc, you can <a href="/rltoken/7HbZkxGCZg12bI32XhqB6w" target="_blank" title="install the last version">install the last version</a> on your VM</li>
<li>We will use gcc version 5 or above to compile</li>
</ul><p>FYI: The standard library provides a similar function: <code>atoi</code>. Run <code>man atoi</code> to learn more.</p>


<h4 class="task">
    11. Don't hate the hacker, hate the code
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Create a program that generates random valid passwords for the program <a href="https://github.com/holbertonschool/0x04.c" target="_blank" title="101-crackme">101-crackme</a>.</p><ul>
<li>You are allowed to use the standard library</li>
<li>You don’t have to pass the <code>betty-style</code> tests (you still need to pass the <code>betty-doc</code> tests)</li>
<li>man <code>srand</code>, <code>rand</code>, <code>time</code></li>
<li><code>gdb</code> and <code>objdump</code> can help</li>
</ul>

