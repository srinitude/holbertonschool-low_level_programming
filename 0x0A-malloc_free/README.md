<h1 class="gap">0x0A. C - malloc, free</h1>


<h4 class="task">
    0. Float like a butterfly, sting like a bee
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that creates an array of chars, and initializes it with a specific char.</p><ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>


<h4 class="task">
    1. The woman who has no imagination has no wings
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p><ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available</li>
</ul><p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>


<h4 class="task">
    2. He who is not courageous enough to take risks will accomplish nothing in life
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that concatenates two strings.</p><ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>


<h4 class="task">
    3. If you even dream of beating me you'd better wake up and apologize
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns a pointer to a 2 dimensional array of integers.</p><ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>


<h4 class="task">
    4. It's not bragging if you can back it up
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p><ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Your program should not crash if the grid is invalid (<code>NULL</code> or size = 0)</li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>


<h4 class="task">
    5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that concatenates all the arguments of your program.</p><ul>
<li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
<li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code></li>
<li>Returns a pointer to a new string, or <code>NULL</code> if it fails</li>
<li>Each argument should be followed by a <code>\n</code> in the new string</li>
</ul>


<h4 class="task">
    6. I will show you how great I am
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that splits a string into words.</p><ul>
<li>Prototype: <code>char **strtow(char *str);</code></li>
<li>The function returns a pointer to an array of strings (words)</li>
<li>Each element of this array should contain a single word, null-terminated</li>
<li>The last element of the returned array should be <code>NULL</code></li>
<li>Words are separated by spaces</li>
<li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == ""</code></li>
<li>If your function fails, it should return <code>NULL</code></li>
</ul>

