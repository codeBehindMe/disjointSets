#include <iostream>
#include <vector>

using namespace std;


class Maze {
private:
    vector<vector<int>> _cells;

    void preProcess() {
        // Go through the maze and assign a cell its own set.
        unsigned _cellCount = 0;
        for (int i = 0; i < this->_cells.size(); i++) {
            for (int j = 0; j < this->_cells[i].size(); j++) {
                this->_cells[i][j] = _cellCount;
                _cellCount++;
            }
        }
    }

public:
    Maze(unsigned rows, unsigned columns) {
        this->_cells = vector<vector<int>>(rows);

        for (int i = 0; i < rows; i++) {
            this->_cells[i].resize(columns);
        }
        // Call to preprocess the maze.
        preProcess();
    }

    void printMaze() {
        for (int i = 0; i < this->_cells.size(); i++) {
            for (int j = 0; j < this->_cells[i].size(); j++) {
                cout << this->_cells[i][j] << ' ';
            }
            cout << endl;
        }
    }

};

class DisjointSet {

public:
    void makeSet(int x) {
        // Makes a singleton set.
    };

    int Find(int x) {
        // Returns the id of the set containing x.
        // Satisfies property :
        // If x & y lie in the same set, then Find(x) == Find(y)
    };

    void Union(int x, int y) {
        // Merges two sets containing x and y.
    }
};


// Using arrays with smallest element
class SmallestSet {
private:
    vector<unsigned> _set;
public:
    explicit SmallestSet(unsigned size) {
        // Creates a universe of size S objects with each with their own set

        // Create the empty vector
        _set = vector<unsigned>(size);

        // Assign the smallest to their own i;
        for (unsigned i = 0; i < this->_set.size(); i++) {
            makeSet(i);
        }

    }

    void makeSet(unsigned i) {
        // Makes a set
        this->_set[i] = i;
    }

    unsigned setFind(unsigned i) {
        return this->_set[i];
    }

    void unionItems(unsigned i, unsigned j) {

        // Get the smallest set number of i and j.
        unsigned i_id = setFind(i);
        unsigned j_id = setFind(j);

        // If they are equal, there is no more to union, so just return.
        if (i_id == j_id) {
            return;
        }

        // if not, get the smaller of the two ids.
        unsigned _min = min(i_id, j_id);

        // Scan the array from 1:n and then assign the smallest of the id (_min) to all items that belonged to i_id or j_id set.
        for (unsigned int &k : this->_set) {
            if (k == i_id || k == j_id) {
                k = _min;
            }
        }
    }

    void printSet() {
        for (auto &k : this->_set) {
            cout << k << ' ';
        }
        cout << endl;
    }

};

// Using trees
class TreeSet {

private:
    vector<unsigned> _parent;
public:
    explicit TreeSet(unsigned size) {
        // Generate the universe.
        _parent = vector<unsigned>(size);

        // Make each item in its own set (set parent to itself)
        for (unsigned i = 0; i < size; i++) {
            makeSet(i);
        }
    }

    inline void makeSet(unsigned i) {
        // Make the item its own parent.
        this->_parent[i] = i;
    }

    unsigned findSet(unsigned i){
        // Find by looking for the root.
        while(i != _parent[i]){
            i = _parent[i];
        }
        return i;
    }

};

int main() {

//    Maze myMaze = Maze(10, 10);
//
//    myMaze.printMaze();

    SmallestSet smallestSet(10);

    smallestSet.unionItems(3, 5);

    smallestSet.unionItems(5, 7);

    smallestSet.printSet();
    char p;

    cin >> p;
    return 0;
}