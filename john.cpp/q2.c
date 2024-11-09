#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

void enqueue(Queue* queue, int element) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->rear++;
        queue->items[queue->rear] = element;
    }
}

void dequeue(Queue* queue) {
    if (queue->front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued: %d\n", queue->items[queue->front]);
        if (queue->front == queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        } else {
            queue->front++;
        }
    }
}

int peek(Queue* queue) {
    if (queue->front != -1) {
        return queue->items[queue->front];
    } else {
        printf("Queue is empty\n");
        return -1;
    }
}

int isEmpty(Queue* queue) {
    return queue->front == -1;
}

int main() {
    Queue* queue = createQueue();

    enqueue(queue, 5);
    enqueue(queue, 10);
    enqueue(queue, 15);

    printf("Front element: %d\n", peek(queue));

    dequeue(queue);
    printf("Front element after dequeue: %d\n", peek(queue));

    free(queue);

    return 0;
}
