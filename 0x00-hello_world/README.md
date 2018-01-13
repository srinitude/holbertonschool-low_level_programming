<h1 class="gap">0x00. C - Hello, World</h1>


<h4 class="task">
    0. Preprocessor
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a script that runs a C file through the preprocessor and save the result into another file.</p><ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output should be saved in the file <code>c</code></li>
</ul>


<h4 class="task">
    1. Compiler
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a script that compiles a C file but does not link.</p><ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
</ul></li>
</ul>


<h4 class="task">
    2. Assembler
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a script that generates the assembly code of a C code and save it in an output file.</p><ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>


<h4 class="task">
    3. Hello, puts
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a C program that prints exactly <code>"Programming is like building a multilingual puzzle</code>, followed by a new line.</p><ul>
<li>Use the function <code>puts</code></li>
<li>You are not allowed to use <code>printf</code></li>
<li>Your program should end with the value <code>0</code></li>
</ul>


<h4 class="task">
    4. Name
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a script that compiles a C file and creates an executable named <code>cisfun</code>.</p><ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
</ul>


<h4 class="task">
    5. Hello, printf
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.</p><ul>
<li>Use the function <code>printf</code></li>
<li>You are not allowed to use the function <code>puts</code></li>
<li>Your program should return <code>0</code></li>
<li>Your program should compile without warning when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>


<h4 class="task">
    6. Size is not grandeur, and territory does not make a nation
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a C program that prints the size of various types on the computer it is compiled and run on.</p><ul>
<li>You should produce the exact same output as in the example</li>
<li>Warnings are allowed</li>
<li>Your program should return <code>0</code></li>
<li>You might have to install the package  <code>libc6-dev-i386</code> on your Linux (Vagrant) to test the <code>-m32</code> <code>gcc</code> option</li>
</ul>


<h4 class="task">
    7. What happens when you type gcc main.c
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.</p><ul>
<li>Use <code>gcc</code> as the compiler</li>
<li>Have at least one picture, at the top of the blog post</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</li>
</ul><p>When done, please add all urls below (blog post, tweet, etc.)</p><div class="blog_post_div">
<h4> Add URLs here:</h4>
<div class="form-group row">
<div class="col-sm-11">
<input class="form-control" id="input_829" type="text" value=""/>
</div>
<div class="col-sm-1">
<button class="add_task_url" data-task-id="829" data-task-requesting="0" data-user-id="214" type="button">
<span aria-hidden="true" class="glyphicon glyphicon-plus"></span>
</button>
</div>
</div>
<ul class="list_829">
</ul>
</div><div class="student_correction_requests">
<!-- Button test code -->
<button class="task_ask_new_correction btn btn-default " data-correction-id="10206" data-task-id="829">
        Ask a new correction <span class="in_progress_info">: in progress...</span><span class="error_occured_info">: An error occured</span>
</button>
<!-- Button containers -->
</div>
<h4 class="task">
    8. Intel
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p><ul>
<li>The C file name will be saved in the variable <code>$CFILE</code>.</li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>


<h4 class="task">
    9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a C program that prints exactly <code>and that piece of art is useful" - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.</p><ul>
<li>You are not allowed to use any functions listed in the NAME section of the man (3) <code>printf</code> or man (3) <code>puts</code></li>
<li>Your program should return 1</li>
<li>Your program should compile without any warnings when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>

