<h1 class="gap">0x0E. C - Function pointers</h1>


<h4 class="task">
    0. What's my name
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a name.</p><ul>
<li>Prototype: <code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>


<h4 class="task">
    1. If you spend too much time thinking about a thing, you'll never get it done
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that executes a function given as a parameter on each element of an array.</p><ul>
<li>Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
<li>where <code>size</code> is the size of the array</li>
<li>and <code>action</code> is a pointer to the function you need to use</li>
</ul>


<h4 class="task">
    2. To hell with circumstances; I create opportunities
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that searches for an integer.</p><ul>
<li>Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
<li>where <code>size</code> is the number of elements in the array <code>array</code></li>
<li><code>cmp</code> is a pointer to the function to be used to compare values</li>
<li><code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code></li>
<li>If no element matches, return <code>-1</code></li>
<li>If size &lt;= <code>0</code>, return <code>-1</code></li>
</ul>


<h4 class="task">
    3. A goal is not always meant to be reached, it often serves simply as something to aim at
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that performs simple operations.</p><ul>
<li>You are allowed to use the standard library</li>
<li>Usage: <code>calc num1 operator num2</code></li>
<li>The program prints the result of the operation, followed by a new line</li>
<li><code>num1</code>, <code>num2</code> are integers. Use the <code>atoi</code> function to convert them to <code>int</code></li>
<li><code>operator</code> is one of the following:

<ul>
<li><code>+</code>: addition</li>
<li><code>-</code>: subtraction</li>
<li><code>*</code>: multiplication</li>
<li><code>/</code>: division</li>
<li><code>%</code>: modulo</li>
</ul></li>
<li>You can assume that the result of all operations can be stored in an <code>int</code></li>
<li>if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code></li>
<li>if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code></li>
<li>if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code></li>
</ul><p>This task requires that you create four different files.</p><p><strong>3-calc.h</strong></p><p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure:</p>


<h4 class="task">
    4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that prints the <a href="/rltoken/QpVps-4Tyq8Cb_69hR0SZQ" target="_blank" title="opcodes">opcodes</a> of its own main function.</p><ul>
<li>Usage: <code>./main number_of_bytes</code></li>
<li>Output format:

<ul>
<li>the opcodes should be printed in hexadecimal, lowercase</li>
<li>each opcode is two char long</li>
<li>listing ends with a new line</li>
<li>see example</li>
</ul></li>
<li>You are allowed to use <code>printf</code> and <code>atoi</code></li>
<li>You have to use <code>atoi</code> to convert the argument to an <code>int</code></li>
<li>If the number of argument is not the correct one, print <code>Error</code>, followed by a new line, and exit with the status <code>1</code></li>
<li>If the number of bytes is negative, print <code>Error</code>, followed by a new line, and exit with the status <code>2</code></li>
<li>You do not have to compile with any flags</li>
</ul><p>Note: if you want to translate your opcodes to assembly instructions, you can use, for instance <a href="/rltoken/DSC2K4VYYC7tANplwlPHvw" target="_blank" title="udcli">udcli</a>.</p>

