//этап-1; лаба по тех прог
#include<iostream>
#include<vector>
using namespace std;

struct faculty 
        {   
            string name;
            double students;
            int teachers;
            faculty* next;
        };
            
int main()
            {
                cout << " To add the data, enter 0;\n to add to the top of the list, enter 1;\n to add to the end of the list, enter 2;\n to delete an item, enter 3;\n to display a list of data, enter 4:\n to add befor or after an item, enter 4;"; 
                vector <faculty> f;
                faculty F;
                int i;
             while (i >= 0 and i <= 4)
             {
                cin >> i;
                switch (i)
                {
                    case 0: 
                    {
                        cout << "name: ";
                        cin >> F.name;
                        cout << "number of students: ";
                        cin >> F.students;
                        cout << "number of teachers: ";
                        cin >> F.teachers;
                        break;
                    }

                    case 1: 
                    {
                        f.insert(f.begin(), F);
                        break;
                    }

                    case 2:
                    {
                        f.push_back(F);
                        break;
                    }

                   /* case 3: 
                    {
                        дальше я бессильна........ 
                    }*/
                }
             }
            }   
         
