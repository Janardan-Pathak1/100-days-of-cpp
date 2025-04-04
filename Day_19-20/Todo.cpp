#include <cstdlib>

#include <iostream>
#define MAX 10
using namespace std;
int rear = -1, front = -1;

string tasks[MAX];
void addTasks(string s) {
  if (rear == -1 && front == -1) {
    rear = front = 0;
    tasks[rear] = s;
    cout << "\nTasks added\n" << endl;
  } else if ((rear + 1) % MAX == front) {
    cout << "\nComplete the previous tasks First\n" << endl;
  } else {
    rear = (rear + 1) % MAX;
    tasks[rear] = s;
    cout << "\nTasks added\n" << endl;
  }
}

void viewTasks() {
  int i = front;
  if (rear == -1 && front == -1) {
    printf("\n task is empty\n");
  } else {
    int i = front;
    while (i != rear) {
      cout << i << " " << tasks[i] << endl;
      i = (i + 1) % MAX;
    }
    cout << i << " " << tasks[rear] << endl;
  }
}

void deleteTasks(int pos) {
  // Check if the queue is empty
  if (front == -1 && rear == -1) {
    cout << "\nList is empty" << endl;
    return;
  }

  // Calculate the number of tasks currently in the queue
  int count = 0;
  if (rear >= front)
    count = rear - front + 1;
  else
    count = (MAX - front) + rear + 1;

  // Validate the task position (1-indexed)
  if (pos < 1 || pos > count) {
    cout << "\nInvalid task number" << endl;
    return;
  }

  // Calculate the array index of the task to delete
  int deleteIndex = (front + pos - 1) % MAX;

  // If only one task is present, empty the queue
  if (front == rear) {
    front = rear = -1;
    cout << "\nTask deleted" << endl;
    return;
  }

  // If deleting the front element, simply move front forward
  if (deleteIndex == front) {
    front = (front + 1) % MAX;
    cout << "\nTask deleted" << endl;
    return;
  }

  // If deleting the rear element, just move rear back
  if (deleteIndex == rear) {
    rear = (rear - 1 + MAX) % MAX;
    cout << "\nTask deleted" << endl;
    return;
  }

  // Otherwise, shift elements from the deleteIndex to the rear pointer
  int i = deleteIndex;
  while (i != rear) {
    int nextIndex = (i + 1) % MAX;
    tasks[i] = tasks[nextIndex];
    i = nextIndex;
  }
  // Adjust the rear pointer after shifting
  rear = (rear - 1 + MAX) % MAX;
  cout << "\nTask deleted" << endl;
}

int main() {
  int value;
  string task;
  int taskNum;
  while (true) {
    cout << "======This is Your TODO Manager=======" << endl;
    cout << "Press 1 to add task\nPress 2 to list all tasks\nPress 3 to delete "
            "a task\nPress 4 to exit"
         << endl;
    cin >> value;
    if (cin.fail()) {          // Check if input is invalid
      cin.clear();             // Clear error flag
      cin.ignore(10000, '\n'); // Discard invalid input
      cout << "Invalid input. Please enter a sber between 1 and 4.\n";
      continue;
    }
    switch (value) {
    case 1:
      // Function to add a task
      cout << "\nEnter you task\n";
      cin >> task;
      addTasks(task);
      break;
    case 2:
      // Function to list the task
      cout << "\nAll the tasks are below\n";
      viewTasks();
      break;
    case 3:
      // Function to delete a task
      cout << "Enter the Id of the task that you wanna delete" << endl;
      cin >> taskNum;
      deleteTasks(taskNum);
      cout << "Task deleted\n";
      break;
    case 4:
      // Function to exit
      exit(0);
      break;
    default:
      cout << "Invalid input. Please enter a sber between 1 and 4.\n";
      break;
    }
  }
  return 0;
}
