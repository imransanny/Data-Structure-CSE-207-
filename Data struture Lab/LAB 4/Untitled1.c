#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
//Stack Structure

struct Stack {
int top;
unsigned capacity;
int* array;
};
//Create a stack of given capacity. It initializes size ofstack as 0
struct Stack* createStack(int capacity){
struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
stack->capacity = capacity;
stack->top = -1;
stack->array = (int*)malloc(stack->capacity * sizeof(int));
return stack;
};
//Stack is full when top is equal to the last index
int Full(struct Stack* stack){
return stack->top == stack->capacity - 1;
}
// Stack is empty when top is equal to -1
int Empty(struct Stack* stack){
return stack->top == -1;
}
// Function to add an item to stack. It increases top by 1
void push(struct Stack* stack, int item){
if (Full(stack))
return;
stack->array[++stack->top] = item;
}
// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack){
if (Empty(stack))
return INT_MIN;
return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack* stack){
if (Empty(stack))
return INT_MIN;
return stack->array[stack->top];
}
void enQueue(int x, struct Stack* s1, struct Stack* s2){
// Move all elements from s1 to s2
}
// Push item into s1
push(s1, x);
// Push everything back to s1


// Dequeue an item from the queue
int deQueue(struct Stack* s1, struct Stack* s2){
// if first stack is empty
if (isEmpty(s1)) {
printf("Queue is Empty");
exit(0);
}
// Return top of s1
int x = peek(s1);
pop(s1);
return x;
}

//main function
int main(){
//create two stack s1 and s2
struct Stack *s1 = createStack(100);
struct Stack* s2 = createStack(100);
//push elements 1 2 3 4 5 (1 Pushed first and 5 pushed Last)
enQueue(1, s1, s2);
enQueue(2, s1, s2);
enQueue(3, s1, s2);
enQueue(4, s1, s2);
enQueue(5, s1, s2);
//dequeue all elements one by one , Order -> FIFO -> (1, 2, 3, 4, 5)
printf("%d ", deQueue(s1, s2));
printf("%d ", deQueue(s1, s2));
printf("%d ", deQueue(s1, s2));
printf("%d ", deQueue(s1, s2));
printf("%d ", deQueue(s1, s2));
return 0;
}
