<h1 class="gap">0x14. C - File I/O</h1>


<h4 class="task">
    0. Tread lightly, she is near
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that reads a text file and prints it to the <code>POSIX</code> standard output.</p><ul>
<li>Prototype: <code>ssize_t read_textfile(const char *filename, size_t letters);</code></li>
<li>where letters is the number of letters it should read and print</li>
<li>returns the actual number of letters it could read and print</li>
<li>if the file can not be opened or read, return <code>0</code></li>
<li>if <code>filename</code> is <code>NULL</code> return <code>0</code></li>
<li>if <code>write</code> fails or does not write the expected amount of bytes, return <code>0</code></li>
</ul>


<h4 class="task">
    1. Under the snow
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Create a function that creates a file.</p><ul>
<li>Prototype: <code>int create_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file to create and <code>text_content</code> is a <code>NULL</code> terminated string to write to the file</li>
<li>Returns: <code>1</code> on success, <code>-1</code> on failure (file can not be created, file can not be written, <code>write</code> “fails”, etc…)</li>
<li>The created file must have those permissions: <code>rw-------</code>. If the file already exists, do not change the permissions.</li>
<li>if the file already exists, truncate it</li>
<li>if <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>if <code>text_content</code> is <code>NULL</code> create an empty file</li>
</ul>


<h4 class="task">
    2. Speak gently, she can hear
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that appends a text at the end of a file.</p><ul>
<li>Prototype: <code>int append_text_to_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file and <code>text_content</code> is the <code>NULL</code> terminated string to add at the end of the file</li>
<li>Return: <code>1</code> on success and <code>-1</code> on failure</li>
<li>Do not create the file if it does not exist</li>
<li>If <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>If <code>text_content</code> is <code>NULL</code>, do not add anything to the file. Return <code>1</code> if the file exists and <code>-1</code> if the file does not exist or if you do not have the required permissions to write the file</li>
</ul>


<h4 class="task">
    3. cp
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a program that copies the content of a file to another file.</p><ul>
<li>Usage: <code>cp file_from file_to</code></li>
<li>if the number of argument is not the correct one, exit with code <code>97</code> and print <code>Usage: cp file_from file_to</code>, followed by a new line, on the <code>POSIX</code> standard error</li>
<li>if <code>file_to</code> already exists, truncate it</li>
<li>if <code>file_from</code> does not exist, or if you can not read it, exit with code <code>98</code> and print <code>Error: Can't read from file NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>NAME_OF_THE_FILE</code> is the first argument passed to your program</li>
</ul></li>
<li>if you can not create or if <code>write</code> to <code>file_to</code> failes, exit with code <code>99</code> and print <code>Error: Can't write to NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>NAME_OF_THE_FILE</code> is the second argument passed to your program</li>
</ul></li>
<li>if you can not close a file descriptoy , exit with code <code>100</code> and print <code>Error: Can't close fd FD_VALUE</code>, followed by a new line, on the <code>POSIX</code> standard error

<ul>
<li>where <code>FD_VALUE</code> is the value of the file descriptor</li>
</ul></li>
<li>Permissions of the created file: <code>rw-rw-r--</code>. If the file already exists, do not change the permissions</li>
<li>You must read <code>1,024</code> bytes at a time from the <code>file_from</code> to make less system calls. Use a buffer</li>
<li>You are allowed to use <code>dprintf</code></li>
</ul>


<h4 class="task">
    4. elf
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a program that displays the information contained in the <code>ELF</code> header at the start of an <code>ELF</code> file.</p><ul>
<li>Usage: <code>elf_header elf_filename</code></li>
<li>displayed information: (not less, not more)

<ul>
<li>Magic</li>
<li>Class</li>
<li>Data</li>
<li>Version</li>
<li>OS/ABI</li>
<li>ABI Version</li>
<li>Type</li>
<li>Entry point address</li>
</ul></li>
<li>format: the same as <code>readelf -h</code> (<em>version <code>2.26.1</code></em>)</li>
<li>if the file is not an <code>ELF</code> file, or on error, exit with status code <code>98</code> and display a comprehensive error message to <code>stderr</code></li>
<li>You are allowed to use <code>lseek</code> once</li>
<li>You are allowed to use <code>read</code> a maximum of 2 times at runtime</li>
<li>You are allowed to have as many functions as you want in your source file</li>
<li>You are allowed to use <code>printf</code></li>
</ul><p>man <code>elf</code>, <code>readelf</code></p>

