//No.1 
#include <iostream>
using namespace std;

class gradeSheet{
    public:
    string name;
    string id;
    double math;
    double science;
    double english;
    double filipino;
    double hekasi;
    double average;
    
    double averageAdd(){
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
    
    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "Filipino: " << filipino << endl;
        cout << "Hekasi: " << hekasi << endl;
        cout << "Average: " << average<< endl;
    }
};

int main() {
    gradeSheet student1, student2, student3, student4, student5;
    student1.setData("Laraquel", "20221130923", 79, 81, 85, 95, 76);
    student2.setData("Rance", "20241113019", 76, 82, 86, 97, 91);
    student3.setData("Gaspi", "20241120810", 77, 80, 87, 92, 82);
    student4.setData("Untalan", "20241100947", 78, 89, 89, 81, 75);
    student5.setData("Aldeguer", "20241100023475", 79, 84, 90, 88, 80);
    
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();
    student4.displayInfo();
    student5.displayInfo();

    return 0;
}
