/*
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    void set_age(int newAge)
    {
        age = newAge;
    }
    void set_standard(int newStandard)
    {
        standard = newStandard;
    }
    void set_first_name(string newFirst_name)
    {
        first_name = newFirst_name;
    }
    void set_last_name(string newLast_name)
    {
        last_name = newLast_name;
    }
    int get_age() {return age;}
    int get_standard() {return standard;}
    string get_first_name() {return first_name;}
    string get_last_name() {return last_name;}
    
    
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.get_age()<<","<<st.get_first_name()<<","<<st.get_last_name()<<","<<st.get_standard();     
    
    return 0;
}
