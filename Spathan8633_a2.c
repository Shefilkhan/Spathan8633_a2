/*
   FILE          : Spathan8633_a2.c
   PROJECT       : SENG1050 - Assignment 2 (Stacks and Queues)
   PROGRAMMER    : Shefilkhan Pathan
   FIRST VERSION : 2025-06-14
   DESCRIPTION   : This program implements a Task Scheduler using Queue (FIFO) and Stack (LIFO) data structures.
   It allows a user to add tasks with priority, process tasks, undo the last completed task,
   and view pending and completed tasks. Memory cleanup is performed before exit.
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX_NAME_LENGTH 100

// Represents a task with name and priorty level. used in both Queue and Stack.
typedef struct Task {
	char Name[MAX_NAME_LENGTH];
	int PriorityLevel;
	struct Task* next;
} Task;

//Queue for pending tasks
typedef struct {
	Task* Front;
	Task* Back;
} Queue;

//Stack for completed tasks
typedef struct {
	Task* Top;
} Stack;