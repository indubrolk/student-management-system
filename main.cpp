#include<iostream>

using namespace std;

void enter()
{}

void show()
{}

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