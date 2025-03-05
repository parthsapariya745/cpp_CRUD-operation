#include <iostream>
using namespace std;

int main()
{
    int user, size = 0, indexNo, Value;

    int box[100];
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
            if(size == 0){
                cout << "box[0] = ";
                cin >> box[0];
                size = 1;
            }

            cout << "enter your indexno: ";
            cin >> indexNo;

            if (indexNo >= 0 && indexNo <= size)
            {
                cout << "enter the add value: ";
                cin >> Value;
                size++;
                for (int i = size - 1; i > indexNo; i--)
                {
                    box[i] = box[i - 1];
                }
                box[indexNo] = Value;
            }
            else{
                cout << "invalid index number of array";
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
                cout << "please press 1 create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

            case 3:
            if (size > 0)
            {   
                cout << "enter your indexno: ";
                cin >> indexNo; 
                if (indexNo >= 0 && indexNo < size)
                {
                    cout << "enter the new value: ";
                    cin >> Value;
                    for (int i = 0; i < size; i++)
                    {
                        box[indexNo] = Value; 
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
                cout << "enter your indexno: ";
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
            cout << "exit!";
            break;

        default:
            cout << "Invalid number" << endl << endl;
            cout << "--------------------------------------------------" << endl;
            break;
        }
    } while (user != 0);
}