#include <iostream>
using namespace std;

int main()
{
    int user, size = 0, indexNo, Value;

    int box[100];
    do
    {
        cout << "press 1 create" << endl << "press 2 read" << endl << "press 3 update" << endl << "press 4 delete" << endl << "press 0 Exit" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Enter the number : ";
        cin >> user;

        switch (user) {
        case 1:
            if (size == 0) {
                cout << "box[0] = ";
                cin >> box[0];
                size++;
            }

            else {
                size++;
                cout << "enter your indexno: ";
                cin >> indexNo;

                if (indexNo < size) {
                    cout << "enter the add value: ";
                    cin >> Value;
                    
                    for (int i = size - 1; i > indexNo; i--) {
                        box[i] = box[i - 1];
                    }
                    box[indexNo] = Value;
                }
                else {
                    cout << "invalid index number of array" << endl;
                }
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 2:
            if (size > 0) {
                for (int i = 0; i < size; i++) {
                    cout << "box[" << i << "] = " << box[i] << endl;
                }
            }
            else {
                cout << "please press 1 create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 3:
            if (size > 0) {
                cout << "enter your indexno: ";
                cin >> indexNo;
                if (indexNo < size) {
                    cout << "enter the new value: ";
                    cin >> Value;
                    box[indexNo] = Value;
                }
                else {
                    cout << "invalid index number of array" << endl;
                }
            }
            else {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 4:
            if (size > 0) {
                cout << "enter your indexno: ";
                cin >> indexNo;
                if (indexNo < size) {
                    for (int i = indexNo; i < size; i++) {
                        box[i] = box[i + 1];
                    }
                    size--;
                }
                else {
                    cout << "invalid index number of array" << endl;
                }
            }
            else {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

        case 0:
            cout << "exit!";
            break;

        default:
            cout << "Invalid number" << endl << endl << "--------------------------------------------------" << endl;
            break;
        }
    } while (user != 0);
}