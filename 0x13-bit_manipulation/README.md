<h1 class="gap">0x13. C - Bit manipulation</h1>


<h4 class="task">
    0. 0
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that converts a binary number to an <code>unsigned int</code>.</p><ul>
<li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
<li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
<li>Return: the converted number, or 0 if

<ul>
<li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
<li><code>b</code> is <code>NULL</code></li>
</ul></li>
</ul>


<h4 class="task">
    1. 1
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints the binary representation of a number.</p><ul>
<li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use <code>malloc</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>


<h4 class="task">
    2. 10
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the value of a bit at a given index.</p><ul>
<li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
<li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
</ul>


<h4 class="task">
    3. 11
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p><ul>
<li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>


<h4 class="task">
    4. 100
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p><ul>
<li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>


<h4 class="task">
    5. 101
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p><ul>
<li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>


<h4 class="task">
    6. Endianness
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that checks the endianness.</p><ul>
<li>Prototype: <code>int get_endianness(void);</code></li>
<li>Returns: <code>0</code> if big endian, <code>1</code> if little endian</li>
</ul>


<h4 class="task">
    7. Crackme3
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Find the password for <a href="https://github.com/holbertonschool/0x13.c" target="_blank" title="this program">this program</a>.</p><ul>
<li>Save the password in the file <code>101-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
</ul>


<h4 class="task">
    8. Two's complement and negative numbers
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a blog post on how integers are stored in memory using two’s complement.</p><ul>
<li>Have at least one picture, at the top of the blog post</li>
<li>Have a few examples covering positive and negative numbers</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</li>
</ul><p>When done, please add all urls below (blog post, tweet, etc.)</p><div class="blog_post_div">
<h4> Add URLs here:</h4>
<div class="form-group row">
<div class="col-sm-11">
<input class="form-control" id="input_1024" type="text" value=""/>
</div>
<div class="col-sm-1">
<button class="add_task_url" data-task-id="1024" data-task-requesting="0" data-user-id="214" type="button">
<span aria-hidden="true" class="glyphicon glyphicon-plus"></span>
</button>
</div>
</div>
<ul class="list_1024">
</ul>
</div><div class="student_correction_requests">
<!-- Button test code -->
<button class="task_ask_new_correction btn btn-default " data-correction-id="11381" data-task-id="1024">
        Ask a new correction <span class="in_progress_info">: in progress...</span><span class="error_occured_info">: An error occured</span>
</button>
<!-- Button containers -->
</div>