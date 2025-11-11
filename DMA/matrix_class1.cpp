#include <iostream>
using namespace std;

class matrix {
    int row, col;
    int **ptr;

public:
    matrix(int x, int y) {
        row = x;
        col = y;
        ptr = new int*[row];
        for (int i = 0; i < row; i++)
            ptr[i] = new int[col];
    }

    // Accept 2D array using template
    void set_void(int arr[][3]) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                ptr[i][j] = arr[i][j];
    }

    void display() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
                cout << ptr[i][j] << " ";
            cout << endl;
        }
    }
    matrix* mul(const matrix &obj1)
        {
	if(col==obj1.row)
           {cout<<"possible"<<endl;}
        else{
	     cout<<"not possible"<<endl;}
        return NULL;
        }

    ~matrix() {
        for (int i = 0; i < row; i++)
            delete[] ptr[i];
        delete[] ptr;
    }
};

int main() {
    matrix m1(3, 3);
    matrix m2(3, 3);
    int arr[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    int arr2[3][3] = {{3,2,1},{5,4,3},{7,6,5}};
    m1.set_void(arr);
    m1.display();
    m2.set_void(arr2);
    matrix *m3;
    m3= m2.mul(m1);
}
