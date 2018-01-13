<h1 class="gap">0x11. C - Singly linked lists</h1>


<h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints all the elements of a <code>list_t</code> list.</p><ul>
<li>Prototype: <code>size_t print_list(const list_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code></li>
<li>You are allowed to use <code>printf</code></li>
</ul>


<h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p><ul>
<li>Prototype: <code>size_t list_len(const list_t *h);</code></li>
</ul>


<h4 class="task">
    2. Add node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p><ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>


<h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that adds a new node at the end of a <code>list_t</code> list.</p><ul>
<li>Prototype: <code>list_t *add_node_end(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>


<h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that free a <code>list_t</code> list.</p><ul>
<li>Prototype: <code>void free_list(list_t *head);</code></li>
</ul>


<h4 class="task">
    5. The Hare and the Tortoise
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/28075.jpg"/></p><p>Write a function that prints <code>You're beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p><ul>
<li>You are allowed to use the <code>printf</code> function</li>
</ul>


<h4 class="task">
    6. Real programmers can write assembly code in any language
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p><ul>
<li>You are only allowed to use the <code>printf</code> function</li>
<li>You are not allowed to use interrupts</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code>:</li>
</ul>

