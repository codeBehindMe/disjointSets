#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Rank {
    int parent;
    int rank;
};

class Set {
public:
    explicit Set(int size);

    int Find(int i);

    void Union(int i, int j);

    void PrintSet();

private:
    vector<Rank> _elements;

    int _find(int i);

    void _union(int i, int j);

    void _makeSet(int i);

};

Set::Set(int size) {
    this->_elements = vector<Rank>(size);

    for (unsigned i = 0; i < _elements.size(); i++) {
        _makeSet(i);
    }
}

void Set::_makeSet(int i) {
    // Makeset.
    this->_elements[i].parent = i;
    this->_elements[i].rank = 0; // Set default rank to 0
}

int Set::_find(int i) {
    // Find the root of an element.
    while (this->_elements[i].parent != i) {
        i = this->_elements[i].parent;
    }
    return i;
}

void Set::_union(int i, int j) {
    // Find the roots of i & j
    int root_i = _find(i);
    int root_j = _find(j);

    // Check if they are already joined.
    if (root_i == root_j) return;

    // Check the rank before assigning
    if (_elements[root_i].rank > _elements[root_j].rank) {
        _elements[root_j].parent = root_i;
    } else if (_elements[root_i].rank < _elements[root_j].rank) {
        _elements[root_i].parent = root_j;
    } else {
        // If the ranks are equal, we need to increment the rank.
        _elements[root_i].parent = root_j;
        _elements[root_j].rank++;
    }
}

int Set::Find(int i) {
    // Public method takes indexing from 1.
    int i_z = i - 1;
    int r_z = _find(i_z);
    return r_z + 1;
}

void Set::Union(int i, int j) {
    // Public method takes indexing from 1.
    int i_z = i - 1;
    int j_z = j - 1;
    _union(i_z, j_z);
}

void Set::PrintSet() {
    cout << setw(12) << setfill(' ') << "ELEMENT :";
    for (int i = 0; i < this->_elements.size(); i++) {
        cout << setw(2) << setfill(' ') << i + 1 << '|';
    }
    cout << endl;
    cout << setw(12) << setfill(' ') << "PARENT :";
    for (int i = 0; i < this->_elements.size(); i++) {
        cout << setw(2) << setfill(' ') << _elements[i].parent + 1 << '|';
    }
    cout << endl;
    cout << setw(12) << setfill(' ') << "TREE DEPTH :";
    for (int i = 0; i < this->_elements.size(); i++) {
        cout << setw(2) << setfill(' ') << _elements[i].rank << '|';
    }
    cout << endl;
}


int main() {

    Set mySet = Set(12);
    mySet.Union(2, 10);
    mySet.Union(7, 5);
    mySet.Union(6, 1);
    mySet.Union(3, 4);
    mySet.Union(5, 11);
    mySet.Union(7, 8);
    mySet.Union(7, 3);
    mySet.Union(12, 2);
    mySet.Union(9, 6);

    cout << mySet.Find(6) << endl;
    cout << mySet.Find(3) << endl;
    cout << mySet.Find(11) << endl;
    cout << mySet.Find(9) << endl;

    mySet.PrintSet();

    Set aSet = Set(20);
    for(int i =1; i < 20; i++){
        aSet.Union(i,i+1);
    }

    aSet.PrintSet();

    Set bigSet = Set(60);

    for (int i = 1; i <= 30; i++) {
        bigSet.Union(i, 2 * i);
    }
    for (int i = 1; i <= 20; i++) {
        bigSet.Union(i, 3 * i);
    }
    for (int i = 1; i <= 12; i++) {
        bigSet.Union(i, 5 * i);
    }

    bigSet.PrintSet();

    char p;
    cin >> p;
    return 0;
}