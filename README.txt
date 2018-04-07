# p1

Round Robin Schduling algorithm c program

DESCRIPTION

CPU schedules N processes which arrive at different time intervals and each process is
allocated the CPU for a specific user input time unit, processes are scheduled using a
preemptive round robin scheduling algorithm. Each process can be assigned a numerical
priority, with a higher number indicating a higher relative priority. In addition to the
processes one task has priority 0. 

The length of a time quantum is T units, where T is the custom time considered as time 
quantum for processing or taken from the user.

If a process is preempted by a higher priority process, the preempted process is 
placed at the end of the queue. 

also the average turn around time and average waiting time is calculated.
