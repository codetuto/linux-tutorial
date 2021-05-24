# Memory Layout

>  [Youtube video for this topic](https://www.youtube.com/watch?v=JlpQX1_bofA&t=1095s) 

### Memory segments

* `data/ initialized data`: global and static variable that are initialized.
* `bss/uninitialized data`: global and static variable that are initialized.
* `text`: instructions from the program.
* `heap`: dynamically allocated memory at runtime.
* `stack`: dynamically allocated memory for function calls.


### Virtual Memory Layout

![alt text][virtual_memory_layout]

[virtual_memory_layout]: ./virtual_memory_layout.png "Virtual Memory Layout"

For more information about `etex` `edata` amd ` end` see their man page:

```sh
> man etext
```



