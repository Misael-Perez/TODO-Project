# include <iostream>
#include <windows.h>
using namespace std;


void print(string TASK[],int TASK_count){
    cout<<"Task To do: "<<endl;
    cout<<"-------------------------"<<endl;
    for(int i = 0;i<TASK_count;i++){
        cout<<"Task # "<<i<<":"<<TASK[i]<<endl;

    }
    cout<<"----------------------------"<<endl;
}

void SWITCH(string LIST[], int one , int two){
    string Place;
    Place= LIST[one];
    LIST[one]=LIST[two];
    LIST[two]=Place;


}

int Look(string LIST[], int index, string item, int TASK_count){
    for(int i=0;i<TASK_count;i++){
        if(LIST[i]==item){
            index= i;
            break;
        }
    }
    return index;

}


int main(){
    string LIST[10] = {""};
    //Variable for amount of task
    int COUNT = 0;
    cout<<"----------Welcome----------"<<endl;
    cout<<"---------To Do List-------"<<endl;
    cout<<"1       - To Add Tasks"<<endl;
    cout<<"2       - To View Tasks"<<endl;
    cout<<"3       - Delete tasks"<<endl;
    cout<<"4       - Move Task    "<<endl;
    cout<<"5       - Reorganize List"<<endl;
    cout<<"6       - Edit Task"<<endl;
    cout<<"0       - Terminate Program"<<endl;

    int CHOSE = -1;
    while (CHOSE != 0){
        //Menu for this
        cout<<"Enter Command: "<<endl;

        cin>>CHOSE;

        switch(CHOSE){
            case 1:
            {
                if(COUNT > 9)
                {
                    cout<<"      Task List Full      "<<endl;
                }
                else{
                    cout<<"Enter a task:  "<<endl;
                    cin.ignore();
                    getline(cin, LIST[COUNT]);
                    COUNT++;
                }
                break;
            }
            case 2:
            {
            print(LIST, COUNT);
            break;
            }
        

            case 3:
            {
                cout<<"Which task do you want to delete?"<<endl;
                int index;
                cin>>index;
                cout<<"Alright preparing to delete!!!"<<endl;
                LIST[index]={""};

                break;


            }

            case 4:
            {
                int one;
                int second;
                cout<<"Select Which Tasks to Move"<<endl;
                cin>>one;
                cout<<"Select Where to Place it"<<endl;
                cin>>second;
                SWITCH(LIST, one, second);
                break;
                

            }
            case 5:
            {
                int index;
                string item= {""};
                index= Look(LIST,index,item,COUNT);
                for(int i= index;i<COUNT;i++){

                    if(i==COUNT){
                        LIST[i]={""};
                    }
                    LIST[i]=LIST[i+1];
                    
                }
                COUNT=COUNT-1;
                break;
            }
            case 6:
            {
                int index;
                cout<<"Which Task Do You Want To Edit"<<endl;
                cin>>index;
                cout<<"Alright Editing!!!"<<endl;
                cout<<"Enter task"<<endl;
                cin.ignore();
                getline(cin,LIST[index]);

            }

        }





    }








    return 0;
}