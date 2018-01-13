<h1 class="gap">0x12. C - More singly linked lists</h1>


<h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints all the elements of a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>size_t print_listint(const listint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>You are allowed to use <code>printf</code></li>
</ul>


<h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the number of elements in a linked <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>size_t listint_len(const listint_t *h);</code></li>
</ul>


<h4 class="task">
    2. Add node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that adds a new node at the beginning of a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>listint_t *add_nodeint(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>


<h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that adds a new node at the end of a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>listint_t *add_nodeint_end(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>


<h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that free a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>void free_listint(listint_t *head);</code></li>
</ul>


<h4 class="task">
    5. Free
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that free a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>void free_listint2(listint_t **head);</code></li>
<li>The function sets the <code>head</code> to <code>NULL</code></li>
</ul>


<h4 class="task">
    6. Pop
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node’s data (n).</p><ul>
<li>Prototype: <code>int pop_listint(listint_t **head);</code></li>
<li>if the linked list is empty return <code>0</code></li>
</ul>


<h4 class="task">
    7. Get node at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p><ul>
<li>Prototype: <code>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)</code></li>
<li>where <code>index</code> is the index of the node, starting at <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>


<h4 class="task">
    8. Sum list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p><ul>
<li>Prototype: <code>int sum_listint(listint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>


<h4 class="task">
    9. Insert
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that inserts a new node at a given position.</p><ul>
<li>Prototype: <code>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>


<h4 class="task">
    10. Delete at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p><ul>
<li>Prototype: <code>int delete_nodeint_at_index(listint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>


<h4 class="task">
    11. Reverse list
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that reverses a <code>listint_t</code> linked list.</p><ul>
<li>Prototype: <code>listint_t *reverse_listint(listint_t **head);</code></li>
<li>Returns: a pointer to the first node of the reversed list</li>
<li>You are not allowed to use more than <code>1</code> loop.</li>
<li>You are not allowed to use <code>malloc</code>, <code>free</code> or arrays</li>
<li>You can only declare a maximum of two variables in your function</li>
</ul>


<h4 class="task">
    12. Print (safe version)
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that prints a <code>listint_t</code> linked list.</p><ul>
<li>Prototype: <code>size_t print_listint_safe(const listint_t *head);</code></li>
<li>Returns: the number of nodes in the list</li>
<li>This function can print lists with a loop</li>
<li>You should go through the list only once</li>
<li>If the function fails, exit the program with status <code>98</code></li>
<li>Output format: see example</li>
</ul>


<h4 class="task">
    13. Free (safe version)
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that free a <code>listint_t</code> list.</p><ul>
<li>Prototype: <code>size_t free_listint_safe(listint_t **h);</code></li>
<li>This function can free lists with a loop</li>
<li>You should go though the list only once</li>
<li>Returns: the size of the list that was free’d</li>
<li>The function sets the <code>head</code> to <code>NULL</code></li>
</ul>


<h4 class="task">
    14. Find the loop
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that finds the loop in a linked list.</p><ul>
<li>Prototype: <code>listint_t *find_listint_loop(listint_t *head);</code></li>
<li>Returns: The address of the node where the loop starts, or <code>NULL</code> if there is no loop</li>
<li>You are not allowed to use <code>malloc</code>, <code>free</code> or arrays</li>
<li>You can only declare a maximum of two variables in your function</li>
</ul>

