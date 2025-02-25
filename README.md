# xv6 
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.

## About
Enhanced version of xv6-risc that supports priority scheduling for processes & a ps command.
Priority values -> 1-20 (lowest the value, highest the priority)
Default priority for a new process is 10. 
setpriority() function is used to change the priority of the current process.

This implementation was a project for my OS programming course.
