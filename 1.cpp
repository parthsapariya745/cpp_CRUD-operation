#include <iostream>
using namespace std;

int main()
{
    int user, size = 0,indexNo,newValue;

    int box[size];
    do
    {
        cout << "press 1 create" << endl;
        cout << "press 2 read" << endl;
        cout << "press 3 update" << endl;
        cout << "press 4 delete" << endl; 
        cout << "press 0 Exit" << endl;

        cout << "--------------------------------------------------" << endl;

        cout << "Enter the number : ";
        cin >> user;

        switch (user)
        {
        case 1:
            size++;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the element = ";
                cin >> box[i];
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 2:
            if (size > 0)
            {
                for (int i = 0; i < size; i++)
                { 
                    cout << "box[" << i << "] = " << box[i] << endl;
                }
            }
            else 
            {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;
        
        case 3:
            if (size > 0)
            {   
                cout << "enter your index number of update array value: ";
                cin >> indexNo; 
                if (indexNo >= 0 && indexNo < size)
                {
                    cout << "enter the new value of select index number: ";
                    cin >> newValue;
                    for (int i = 0; i < size; i++)
                    {
                        box[indexNo] = newValue; 
                    }
                }
                else{
                    cout << "invalid index number of array";
                }
            }
            else 
            {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 4:
            if (size > 0)
            {   
                cout << "enter your index number of delete array value: ";
                cin >> indexNo;
                if (indexNo >= 0 && indexNo < size)
                {   
                    for (int i = indexNo; i < size; i++)
                    {
                        box[i] = box[i + 1];
                    }
                    size--;
                }
                else{
                    cout << "invalid index number of array";
                }
            }
            else 
            {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;
        
        case 0:
            cout << "Exit!";
            break;

        default:
            cout << "Invalid number" << endl << endl;
            break;
        }
    } while (user != 0);
}