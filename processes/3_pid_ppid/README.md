# Process PID and PPID

>  [Youtube video for this topic](https://www.youtube.com/watch?v=JlpQX1_bofA&t=1095s) 

PID: A unique number representing a process.

PPID: The parent process PID.


### C API

```c
#include <unistd.h>

/* Get the process ID of the calling process's parent.  */
pid_t  getpid(void);


/* Get the process ID of the calling process's parent.  */
pid_t  getppid (void);

```
 ### The *init* process

* Is the first process to run after the Linux Kernel loads.
* It has a fixed PID = 1 and PPID = 0.


### Processes IDs range

```sh
 > cat /proc/sys/kernel/pid_max
```
### The  process's status file
```sh
 > cat /proc/<PID>/status
```

### Nice commands

```sh
> pstree

> pstree -p

> pstree -p | less

> top
```





