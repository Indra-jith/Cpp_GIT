#include <iostream>

using namespace std;

class Student {
    int mark1, mark2, mark3, mark4, mark5;
    static int count;

public:
    static int getCount() {
        return count;
    }

    void setMarks(int m1, int m2, int m3, int m4, int m5) {
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
        mark4 = m4;
        mark5 = m5;
        count++;
    }

    void getMarks() {
        cout << mark1 << " " << mark2 << " " << mark3 << " " << mark4 << " " << mark5 << endl;
    }
};

int Student::count = 0;

int main() {
    int n;
    cin >> n;
    cout << "Total number of students: " << n << endl;

    for (int i = 0; i < n; i++) {
        Student s;
        int m1, m2, m3, m4, m5;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
        s.setMarks(m1, m2, m3, m4, m5);
        cout << "Marks of student " << s.getCount() << ": ";
        s.getMarks(); 
    }

    return 0;
}