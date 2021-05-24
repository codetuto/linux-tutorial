# Process vs Program

<!-- > [Youtube video for this topic](https://www.youtube.com/watch?v=JlpQX1_bofA&t=1095s) -->

- Process: is an instance of an executing program.

- Program: is a file containing a range of information that describes how to
construct a process in runtime. This information includes the following:
    
    * Binary format identification: Is the format for the executable file.
        * ELF: Executable and Link Format
        * COFF: Common Object File Format
    * Machine-language instructions
    * Program entry-point address
    * Data
    * Symbol and relocation tables
    * Shared-library and dynamic link information
    * A bunch of other information

- Kernel's perspective: a process consists of a user-space memory program code
and data as well as data structures to maintain information about the status of
a process.

> A program can originate multiple processes

> Processes may be running the same program

