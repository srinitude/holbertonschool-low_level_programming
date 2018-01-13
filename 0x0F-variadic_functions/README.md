<h1 class="gap">0x0F. C - Variadic functions</h1>


<h4 class="task">
    0. Beauty is variable, ugliness is constant
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the sum of all its parameters.</p><ul>
<li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
<li>If <code>n == 0</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    1. To be is to be the value of a variable
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints numbers, followed by a new line.</p><ul>
<li>Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between numbers</li>
<li>and <code>n</code> is the number of integers passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If <code>separator</code> is <code>NULL</code>, don’t print it</li>
<li>Print a new line at the end of your function</li>
</ul>


<h4 class="task">
    2. One woman's constant is another woman's variable
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints strings, followed by a new line.</p><ul>
<li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between the strings</li>
<li>and <code>n</code> is the number of strings passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If separator is NULL, don’t print it</li>
<li>If one of the string is NULL, print <code>(nil)</code> instead</li>
<li>Print a new line at the end of your function</li>
</ul>


<h4 class="task">
    3. To be is a to be the value of a variable
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints anything.</p><ul>
<li>Prototype: <code>void print_all(const char * const format, ...);</code></li>
<li>where <code>format</code> is a list of types of arguments passed to the function

<ul>
<li><code>c</code>: <code>char</code></li>
<li><code>i</code>: <code>integer</code></li>
<li><code>f</code>: <code>float</code></li>
<li><code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead</li>
<li>any other char should be ignored</li>
<li>see example</li>
</ul></li>
<li>You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code></li>
<li>You can use a maximum of

<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul></li>
<li>You can declare a maximum of <code>9</code> variables</li>
<li>You are allowed to use <code>printf</code></li>
<li>Print a new line at the end of your function</li>
</ul>


<h4 class="task">
    4. Real programmers can write assembly code in any language
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p><ul>
<li>You are only allowed to use the system call <code>write</code> (use <code>int</code> or <code>syscall</code>, not a call)</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code> (as follows)</li>
</ul>

