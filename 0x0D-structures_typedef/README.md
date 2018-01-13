<h1 class="gap">0x0D. C - Structures, typedef</h1>


<h4 class="task">
    0. Django
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/225/slack_for_ios_upload.jpg"/></p><p>Define a new type <code>struct dog</code> with the following elements:</p><ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>


<h4 class="task">
    1. A dog is the only thing on earth that loves you more than you love yourself
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that initialize a variable of type <code>struct dog</code></p><ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>


<h4 class="task">
    2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that prints a <code>struct dog</code></p><ul>
<li>Prototype: <code>void print_dog(struct dog *d);</code></li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
<li>If <code>d</code> is <code>NULL</code> print nothing.</li>
</ul>


<h4 class="task">
    3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.</p>


<h4 class="task">
    4. A door is what a dog is perpetually on the wrong side of
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that creates a new dog.</p><ul>
<li>Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
<li>You have to store a copy of <code>name</code> and <code>owner</code></li>
<li>Return <code>NULL</code> if the function fails</li>
</ul>


<h4 class="task">
    5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that frees dogs.</p><ul>
<li>Prototype: <code>void free_dog(dog_t *d);</code></li>
</ul>

