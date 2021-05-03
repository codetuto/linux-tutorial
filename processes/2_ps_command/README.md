# `ps` command

>  [Youtube video for this topic](https://www.youtube.com/watch?v=JlpQX1_bofA&t=1095s) 

`ps` displays information about a selection of the active processes.

```
    > ps

        PID TTY          TIME   CMD
    587498 pts/4    00:00:00   bash
    594253 pts/4    00:00:00   ps
```

By default, ps selects all processes with the same effective **user ID**  and associated with the same **terminal** as the invoker. 

   * **PID**  : process ID (pid=PID)
   * **TTY**  : terminal associated with the process
   * **TIME** : the cumulated CPU time
   * **CMD**  : executable command

To list all processes running type  `ps aux`  command below:

```
    > ps aux

    USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
    root           1  0.0  0.0 168936 12612 ?        Ss   May01   0:28 /sbin/init splash
    root           2  0.0  0.0      0     0 ?        S    May01   0:00 [kthreadd]
    root           3  0.0  0.0      0     0 ?        I<   May01   0:00 [rcu_gp]
    root           4  0.0  0.0      0     0 ?        I<   May01   0:00 [rcu_par_gp]
    root           6  0.0  0.0      0     0 ?        I<   May01   0:00 [kworker/0:0H-kblockd]
    root           9  0.0  0.0      0     0 ?        I<   May01   0:00 [mm_percpu_wq]
    .            .    .   .       .       . .        .      .       .        .
    .            .    .   .       .       . .        .      .       .        .
    .            .    .   .       .       . .        .      .       .        .
    root      595136  0.0  0.0      0     0 ?        I    21:30   0:00 [kworker/1:1-cgroup_destroy]
    root      595173  0.0  0.0      0     0 ?        I<   21:30   0:00 [kworker/u17:2]
    root      595253  0.0  0.0      0     0 ?        I    21:31   0:00 [kworker/4:2-mm_percpu_wq]
    root      595346  0.0  0.0      0     0 ?        I    21:32   0:00 [kworker/6:2-mm_percpu_wq]
    jose      595347  0.0  0.0  11512  3244 pts/4    R+   21:33   0:00 ps aux
```

* **USER**  : effective user name
* **PID**  : process ID (pid=PID)
* **%CPU**  : cpu utilization of the process in "##.#" format. (cputime/realtime ratio)
* **%MEN**  : ratio of the process's resident set size  to the physical memory on the machine
* **VSZ**  : virtual memory size of the process in KiB (1024-byte units)
* **RSS**  : resident set size, the non-swapped physical memory that a task has used (in kilobytes)
* **TTY**  : terminal associated with the process
* **STAT**  : terminal associated with the process
* **START**  : terminal associated with the process
* **TIME** : the cumulated CPU time
* **COMMAND**  : command name (only the executable name)



#### To see every process running under a user:

```
    > ps -u <username>
```

Other command options:

```
    > ps -pid <pid-number>

    > ps -pid <pid-number> -o comm=
```
 From where `ps` gets all this information ?
* By reading the virtual files in /proc.

Quick look in processes state code: 

    PROCESS STATE CODES

               D    uninterruptible sleep (usually IO)
               I    Idle kernel thread
               R    running or runnable (on run queue)
               S    interruptible sleep (waiting for an event to complete)
               T    stopped by job control signal
               t    stopped by debugger during the tracing
               W    paging (not valid since the 2.6.xx kernel)
               X    dead (should never be seen)
               Z    defunct ("zombie") process, terminated but not reaped by its parent

       For BSD formats and when the stat keyword is used, additional characters may be displayed:

               <    high-priority (not nice to other users)
               N    low-priority (nice to other users)
               L    has pages locked into memory (for real-time and custom IO)
               s    is a session leader
               l    is multi-threaded (using CLONE_THREAD, like NPTL pthreads do)
               +    is in the foreground process group


How to find what the definition of words:
```
> man ps | grep <search-string>
> man ps | grep %CPU
```

[Youtube video](https://www.youtube.com/watch?v=JlpQX1_bofA&t=1095s)

