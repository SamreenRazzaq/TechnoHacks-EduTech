//TO_DO_LIST:

#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Task {
    string detail;
    bool completed;
};
class ToDoList {
private:
    vector<Task> tasks;
public:
	
//Add Tasks:
    void addTask(const string& detail) {
        tasks.push_back({detail, false});
        cout << "Task added: " << detail << endl; 
    }
    
//View Tasks:
	void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks found in the list." << endl;
    } else {
        cout << "To-Do List:" << endl;
        int count = 1;
        for (size_t i = 0; i < tasks.size(); i++) {
            const Task& task = tasks[i];
            cout << count << ". " << task.detail << " - " << (task.completed ? "Completed" : "Pending") << endl;
            count++;
        }
    }
}

//Mark Task as completed:
	void markTaskAsCompleted(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed: " << tasks[index - 1].detail << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
    
//Remove Task 
	void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            cout << "Task removed: " << tasks[index - 1].detail << endl;
            tasks.erase(tasks.begin() + (index - 1));
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};
int main() {
    ToDoList todo;
	cout << "TO DO LIST APPLICATION!" << endl;
	while (true) {
        cout << "\nChoice:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        
//Task Input:
        int choice;
        cout << "Enter your choice (1/2/3/4/5): ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string detail;
                cout << "Enter task: ";
                cin.ignore(); 
                getline(cin, detail);
                todo.addTask(detail);
                break;
            }
            case 2:
                todo.viewTasks();
                break;
            case 3: {
                int index;
                cout << "Enter the task index to mark as completed: ";
                cin >> index;
                todo.markTaskAsCompleted(index);
                break;
            }           
            case 4: {
                int index;
                cout << "Enter the task index to remove: ";
                cin >> index;
                todo.removeTask(index);
                break;
            }
            case 5:
                cout << "Thank you!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
	return 0;
}

