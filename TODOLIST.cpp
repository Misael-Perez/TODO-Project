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


int main(){
    string LIST[10] = {""};
    //Variable for amount of task
    int COUNT = 0;

    int CHOSE = -1;
    while (CHOSE != 0){
        //Menu for this
        cout<<"----------Welcome----------"<<endl;
        cout<<"---------To Do List-------"<<endl;
        cout<<"1       - To Add Tasks"<<endl;
        cout<<"2       - To View Tasks"<<endl;
        cout<<"3       - Delete tasks"<<endl;
        cout<<"4       - Move Task    "<<endl;
        cout<<"5       - Reorganize List"<<endl;
        cout<<"0       - Terminate Program"<<endl;

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




            }

            case 4:



            case 5:





        }





    }








    return 0;
}