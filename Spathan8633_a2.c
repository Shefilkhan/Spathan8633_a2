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

/*
  FUNCTION		: InitializeQueue
  DESCRIPTION	: Allocates and initializes a new Queue.
  RETURNS		: Queue* - pointer to the newly created queue
*/
Queue* InitializeQueue() {
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->Front = NULL;
	q->Back = NULL;
	return q;
}

/*
  FUNCTION		: InitilizeStack
  DESCRIPTION	: allocates and initializes a new stack.
  RETURNS		: Stack* - pointer to the newly created stack
*/
Stack* InitializeStack() {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->Top = NULL;
	return s;
}

Task* CreateNewTask(char* name, int Priority) {
	Task* newTask = (Task*)malloc(sizeof(Task));
	if (!newTask) {
		printf("Memory Allocation Failed\n");
		exit(EXIT_FAILURE);
	}

	int i = 0;
	while (name[i] != '\0' && i < MAX_NAME_LENGTH - 1)
	{
		newTask->Name[i] = name[i];
		i++;
	}
	newTask->Name[i] = '\0';

	newTask->PriorityLevel = Priority;
	newTask->next = NULL;
	return newTask;
}
int main(void) {
	int Choice;

	do {
		printf("\nTask Scheduler Menu:\n");
		printf("1. Add a Task\n");
		printf("2. Process a Task\n");
		printf("3. Undo Last Completed Task\n");
		printf("4. View Pending Tasks\n");
		printf("5. View Completed Tasks\n");
		printf("6. Exit\n");
		printf("Please Enter you choice:");
		scanf_s("%d", &Choice);

		switch (Choice) {
		case 1:
			printf("Add a Task (not yet implement)\n");
			break;
		case 2:
			printf("Process a Task (not yet implement)\n");
			break;
		case 3:
			printf("Undo Last completed Task (not yet implement)\n");
			break;
		case 4:
			printf("View Pending Tasks (not yet implement)\n");
			break;
		case 5:
			printf("View Completed Tasks (not yet implement)\n");
			break;
		case 6:
			printf("Exiting Task Scheduler...\n");
			break;
		default:
			printf("Invalid choice.\n");
		}

	} while (Choice != 6);

	return 0;
}