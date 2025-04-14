#include<iostream>

using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total = 0;

void enter() {

    int choice;
    cout<<"How many students do you want to enter: ";
    cin>>choice;
    total = total + choice;

    for (int i = 0; i<choice; i++) {
        cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter rollno: ";
        cin>>arr2[i];
        cout<<"Enter course: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
    }
}

void show() {

    for (int i = 0; i<total; i++) {
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i];
        cout<<"Rollno: "<<arr2[i];
        cout<<"Course: "<<arr3[i];
        cout<<"Class: "<<arr4[i];
        cout<<"Contact: "<<arr5[i];
    }
}

void search()
{}

void update()
{}

void deleterecord()
{}

main() {
    int value;
    while (true) {
        cout<<"Press 1 to enter Data"<<endl;
        cout<<"Press 2 to show data"<<endl;
        cout<<"Press 3 to search data"<<endl;
        cout<<"Press 4 to update data"<<endl;
        cout<<"Press 5 to delete data"<<endl;
        cout<<"Press 6 to exit"<<endl;

        cin>>value;

        switch(value) {
            case 1:
                enter();
                break;

            case 2:
                show();
                break;

            case 3:
                search();
                break;

            case 4:
                update();
                break;

            case 5:
                deleterecord();
                break;

            case 6:
                exit(0);
                break;

            default:
                cout<<"Invalid Input"<<endl;
            break;
        }
    }
}