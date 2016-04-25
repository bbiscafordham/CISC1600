#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentAge[], int index)
{
    cout << " Student #" << index << ": Name-" << studentNames[index] << " Age-" << studentAge[index] << endl;
}

void outputAll(string studentNames[], int studentAge[], int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        outputOne(studentNames, studentAge, i);
    }
}

int getAverage(int studentAge[], int arraySize)
{
    int sum = 0;
    for(int i=0; i<arraySize; i++)  
    {
        // i iterates from 0 to arraysize-1, which is exactly the range of index
        sum = sum + studentAge[i];
    }
    
    int avg = sum / arraySize;
    return avg;
} 

int main()
{
    string names[7] = {"Austin","Ben","Cathie","Denny","Elly","Fred","Greg"};
    int Age[7] = {23,22,19,24,21,20,25};
    int operation, index;   // to store user input
    bool running = true;
    
    do{
        cout << "==Menu==" << endl;
        cout << "1 - Output single student's name and Age" << endl;
        cout << "2 - Output all students' name and Age" << endl;
        cout << "3 - Output average Age" << endl;
        cout << "Anything else - exit program" << endl;
        cout << "Please input menu item: ";
        cin >> operation;
        switch(operation)
        {
            case 1:
                cout << "Please input student #: ";
                cin >> index;
                if(index >= 0 && index < 7)
                {
                    outputOne(names, Age, index);
                }
                else
                {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 2:
                outputAll(names, Age, 7);
                break;
            case 3:
                cout << "Average score = " << getAverage(Age, 7) << endl;
                break;
            default:
                running = false;
                break;
        }
    }while(running);
    
    return 0;
}
