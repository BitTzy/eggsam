//No.2
#include <iostream>
using namespace std;

class gradeSheet {
public:
    string name;
    string id;
    double math;
    double science;
    double english;
    double filipino;
    double hekasi;
    double average;

    double averageAdd() {
        average = (math + science + english + filipino + hekasi) / 5;
        return average;
    }

    void setData(string n, string i, double m, double s, double e, double f, double h) {
        name = n;
        id = i;
        math = m;
        science = s;
        english = e;
        filipino = f;
        hekasi = h;
        averageAdd();
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "Filipino: " << filipino << endl;
        cout << "Hekasi: " << hekasi << endl;
        cout << "Average: " << average << endl;
    }
};

void insertionSort(gradeSheet arr[], int n) {
    for (int i = 1; i < n; i++) {
        gradeSheet key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].average < key.average) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    gradeSheet students[5];
    students[0].setData("Laraquel", "20221130923", 79, 81, 85, 95, 76);
    students[1].setData("Rance", "20241113019", 76, 82, 86, 97, 91);
    students[2].setData("Gaspi", "20241120810", 77, 80, 87, 92, 82);
    students[3].setData("Untalan", "20241100947", 78, 89, 89, 81, 75);
    students[4].setData("Aldeguer", "20241100023475", 79, 84, 90, 88, 80);

    int n = 5;
    insertionSort(students, n);

    for (int i = 0; i < n; i++) {
        students[i].displayInfo();
        cout << endl;
    }

    return 0;
}
