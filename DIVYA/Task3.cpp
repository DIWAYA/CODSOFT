#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Task{
    string description;
    bool completed;
};

class Todolist{
    private:
    vector<Task> tasks;
    public:
    
    void addTask(const string & description)
    {
    Task newTask;
    newTask.description=description;
    newTask.completed=false;
    tasks.push_back(newTask);
    cout<<"Task added successfully\n";
    }
    void viewTasks(){
        if(tasks.empty()){
            cout<<"No tasks available\n";
        }
        else{
            cout<<"Tasks\n";
            for(size_t i=0;i<tasks.size();++i)
            {
                cout<<"{"<<i+1<<"}"<<(tasks[i].completed ?"[X]":"[]")<<tasks[i].description<<"\n";
            }
        }
    }
    void markTaskCompleted(size_t index){
        if(index>=1 && index <=tasks.size()){
            tasks[index - 1].completed = true;
            cout<<"Task marked as completed\n";
        }else{
            cout<<"Invalid task index\n";
        }
    }
    
    void removeTask(size_t index){
        if(index>=1 && index <=tasks.size()){
            tasks.erase(tasks.begin() + index-1);
            cout<<"Task removed successfully\n";
        }else{
            cout<<"Invalid task index\n";
            
        }
    }
};

int main()
{
    Todolist list;
    char choice;
    do{
        cout<<"\nTo do List Manager\n";
        cout<<"1.Add Task\n";
        cout<<"2.View Task\n";
        cout<<"3.Mark Task as completed\n";
        cout<<"4.Remove Task\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice";
        cin>>choice;
        
        switch(choice){
            case 1:
            {
                string taskDescription;
                cout<<"Enter task Description";
                cin.ignore();
                getline(cin,taskDescription);
                list.addTask(taskDescription);
                break;
            }
            case 2:
            list.viewTasks();
            break;
            case 3:
            {
                size_t index;
                cout<<"Enter the task index to mark as completed";
                cin>>index;
                list.markTaskCompleted(index);
                break;
            }
            case 4:
            {
                size_t index;
                cout<<"Enter the task index to remove";
                cin>>index;
                list.removeTask(index);
                break;
            }
            case 5:
            {
            cout<<"Exiting the program\n";
            break;
            default:
            cout<<"Invalid choice,try again";
            break;
            }
        
        }
    }while(choice!=5);
    return 0;
}