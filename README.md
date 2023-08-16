# DijkstraPathSolver
This GitHub repository contains a C++ program that implements Dijkstra's algorithm to find the shortest path between two nodes in a graph. The program reads graph data from an input file and outputs the shortest path, if it exists.

## Features:
- Dijkstra's Algorithm Implementation: The program implements Dijkstra's algorithm, a graph search algorithm that calculates the shortest path between two nodes in a weighted graph. This algorithm ensures that the shortest path is efficiently computed.
- Modular Design: The program is divided into multiple header and source files, which enhances code modularity and maintainability. The main.cpp file serves as the main entry point, while other files handle distinct aspects of the program, such as node representation, input reading, and the algorithm itself.
- Input Handling: The program reads input from an external file that describes the graph's structure. It processes nodes' names and their connections, which are represented by edges with associated weights. This approach facilitates the separation of input data from the algorithmic logic.
- Node Representation: The program utilizes a Node class to represent nodes within the graph. This class encapsulates the node's letter identifier and any relevant attributes. Nodes are manipulated and stored in data structures to enable efficient traversal during the algorithm's execution.
- Error Handling: The program incorporates error handling mechanisms to ensure robustness. It checks for command-line argument validity, file reading success, and proper node definition before executing the algorithm. This approach enhances the user experience by providing clear feedback in case of issues.
- Memory Management: The program employs proper memory management practices, including the creation and deletion of Node objects, to prevent memory leaks and maintain program efficiency.

## Input file format:
    Nodes:
    A
    B
    C
    D
    Edges:
    A B 5
    A C 9
    A D 3
    B C 4

<img src="https://github.com/milckywayy/DijkstraPathSolver/assets/120181288/d54b4538-7b56-48b1-b5a3-bd8991aa4f45" alt="Untitled" width="250">

In this example, the input file defines nodes A, B, C, and D. Edges with corresponding weights are specified between nodes A and B (weight 5), A and C (weight 9), A and D (weight 3), and B and C (weight 4).

## Usage:
    ./main.exe file.txt A D
Where main.exe is the compiled executable and file.txt is the input file. The start node is A, and the end node is D.  
The program reads the input file, calculates the shortest path using Dijkstra's algorithm, and displays the result if a valid path exists.
