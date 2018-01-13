<h1 class="gap">0x05. C - More pointers, arrays and strings</h1>


<h4 class="task">
    0. strcat
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that concatenates two strings.</p><ul>
<li>Prototype: <code>char *_strcat(char *dest, char *src);</code></li>
<li>This function appends the <code>src</code> string to the <code>dest</code> string, overwriting the terminating null byte (<code>\0</code>) at the end of <code>dest</code>, and then adds a terminating null byte</li>
<li>Returns a pointer to the resulting string <code>dest</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strcat</code>. Run <code>man strcat</code> to learn more.</p>


<h4 class="task">
    1. strncat
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that concatenates two strings.</p><ul>
<li>Prototype: <code>char *_strncat(char *dest, char *src, int n);</code> </li>
<li>The <code>_strncat</code> function is similar to the <code>_strcat</code> function, except that

<ul>
<li>it will use at most <code>n</code> bytes from <code>src</code>; and</li>
<li><code>src</code> does not need to be null-terminated if it contains <code>n</code> or more bytes</li>
</ul></li>
<li>Return a pointer to the resulting string <code>dest</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strncat</code>. Run <code>man strncat</code> to learn more.</p>


<h4 class="task">
    2. strncpy
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that copies a string.</p><ul>
<li>Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code><br/></li>
<li>Your function should work exactly like <code>strncpy</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strncpy</code>. Run <code>man strncpy</code> to learn more.</p>


<h4 class="task">
    3. strcmp
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that compares two strings.</p><ul>
<li>Prototype: <code>int _strcmp(char *s1, char *s2);</code></li>
<li>Your function should work exactly like <code>strcmp</code></li>
</ul><p>FYI: The standard library provides a similar function: <code>strcmp</code>. Run <code>man strcmp</code> to learn more.</p>


<h4 class="task">
    4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that reverses the content of an array of integers.</p><ul>
<li>Prototype: <code>void reverse_array(int *a, int n);</code></li>
<li>Where <code>n</code> is the number of elements of the array</li>
</ul>


<h4 class="task">
    5. Always look up
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that changes all lowercase letters of a string to uppercase.</p><ul>
<li>Prototype: <code>char *string_toupper(char *);</code></li>
</ul>


<h4 class="task">
    6. Expect the best. Prepare for the worst. Capitalize on what comes
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that capitalizes all words of a string.</p><ul>
<li>Prototype: <code>char *cap_string(char *);</code></li>
<li>Separators of words: space, tabulation, new line, <code>,</code>, <code>;</code>, <code>.</code>, <code>!</code>, <code>?</code>, <code>"</code>, <code>(</code>, <code>)</code>, <code>{</code>, and <code>}</code></li>
</ul>


<h4 class="task">
    7. Mozart composed his music not for the elite, but for everybody
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that encodes a string into <a href="/rltoken/HDZQ5imXboSDnMXO9P0-Tg" target="_blank" title="1337">1337</a>.</p><ul>
<li>Letters <code>a</code> and <code>A</code> should be replaced by <code>4</code><br/></li>
<li>Letters <code>e</code> and <code>E</code> should be replaced by <code>3</code><br/></li>
<li>Letters <code>o</code> and <code>O</code> should be replaced by <code>0</code><br/></li>
<li>Letters <code>t</code> and <code>T</code> should be replaced by <code>7</code><br/></li>
<li>Letters <code>l</code> and <code>L</code> should be replaced by <code>1</code><br/></li>
<li>Prototype: <code>char *leet(char *);</code></li>
<li>You can only use one <code>if</code> in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>


<h4 class="task">
    8. rot13
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that encodes a string using <a href="/rltoken/IFaBd0QrK-h50gV7IoW9iQ" target="_blank" title="rot13">rot13</a>.</p><ul>
<li>Prototype: <code>char *rot13(char *);</code><br/></li>
<li>You can only use <code>if</code> statement once in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>


<h4 class="task">
    9. Numbers have life; they're not just symbols on paper
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


<h4 class="task">
    10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p><img src="https://intranet.hbtn.io/images/contents/low_level_programming/projects/magic.gif">
<br/><br/>
Add one line to <a href="https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c" target="_blank" title="this code">this code</a>, so that the program prints <code>a[2] = 98</code>, followed by a new line.</img></p><ul>
<li>You are not allowed to use the variable <code>a</code> in your new line of code</li>
<li>You are not allowed to modify the variable <code>p</code></li>
<li>You can only write one statement</li>
<li>You are not allowed to use <code>,</code></li>
<li>You are not allowed to code anything else than the line of expected line of code at the expected line</li>
<li>Your code should be written at line 19, before the <code>;</code></li>
<li>Do not remove anything from the initial code (not even the comments)</li>
<li>and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)</li>
<li>You are allowed to use the standard library</li>
</ul>


<h4 class="task">
    11. It is the addition of strangeness to beauty that constitutes the romantic character in art
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that adds two numbers.</p><ul>
<li>Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code><br/></li>
<li>Where <code>n1</code> and <code>n2</code> are the two numbers</li>
<li><code>r</code> is the buffer that the function will use to store the result</li>
<li><code>size_r</code> is the buffer size</li>
<li>The function returns a pointer to the result</li>
<li>You can assume that you will always get positive numbers, or <code>0</code></li>
<li>You can assume that there will be only digits in the strings <code>n1</code> and <code>n2</code></li>
<li><code>n1</code> and <code>n2</code> will never be empty</li>
<li>If the result can not be stored in <code>r</code> the function must return <code>0</code></li>
</ul>


<h4 class="task">
    12. Noise is a buffer, more effective than cubicles or booth walls
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that prints a buffer.</p><ul>
<li>Prototype: <code>void print_buffer(char *b, int size);</code><br/></li>
<li>The function must print the content of <code>size</code> bytes of the buffer pointed by <code>b</code><br/></li>
<li>The output should print 10 bytes per line</li>
<li>Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with <code>0</code></li>
<li>Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space</li>
<li>Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print <code>.</code></li>
<li>Each line ends with a new line <code>\n</code></li>
<li>If <code>size</code> is 0 or less, the output should be a new line only <code>\n</code></li>
<li>You are allowed to use the standard library</li>
<li>The output should look like the following example, and formatted exactly the same way:</li>
</ul>

