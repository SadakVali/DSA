#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

bool is_it_safe(vector<vector<int>> &maze, int x, int y) {
    return (
        ((y >= 0) && (y < maze.size())) && 
        ((x >= 0) && (x < maze[y].size())) && 
        (maze[y][x] == 1)
    );
}

void solve_maze(
    vector<vector <int>> &maze, vector<string> &paths, 
    string output, int x, int y) {
    // base case
    if ((y == (maze.size()-1)) && (x == (maze[y].size()-1))) {
        paths.push_back(output);
        return;
    }
    // Down
    if (is_it_safe(maze, x, y+1)) {
        maze[y+1][x] = -1;
        solve_maze(maze, paths, output+'D', x, y+1);
        maze[y+1][x] = 1;
    }
    // Left
    if (is_it_safe(maze, x-1, y)) {
        maze[y][x-1] = -1;
        solve_maze(maze, paths, output+'L', x-1, y);
        maze[y][x-1] = 1;
    }
    // Right
    if (is_it_safe(maze, x+1, y)) {
        maze[y][x+1] = -1;
        solve_maze(maze, paths, output+'R', x+1, y);
        maze[y][x+1] = 1;
    }
    // Up
    if (is_it_safe(maze, x, y-1)) {
        maze[y-1][x] = -1;
        solve_maze(maze, paths, output+'U', x, y-1);
        maze[y-1][x] = 1;
    }
}


int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<vector <int>> maze = {
        {1,0,0,0}, 
        {1,1,0,1}, 
        {1,1,0,0}, 
        {0,1,1,1}
    };
    // PROCESSING
    if (maze[0][0] == 0) cout << "No path exists..." << endl;
    maze[0][0] = -1;
    vector<string> paths;
    solve_maze(maze, paths, "", 0, 0);
    // OUTPUT
    cout << "Printing the results..." << endl;
    for (auto path : paths) cout << path << " ";
    if (paths.size() == 0) cout << "No path exists..." << endl;
    else cout << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
