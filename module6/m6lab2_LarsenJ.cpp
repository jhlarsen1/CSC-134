#include <iostream>
#include <string>
using namespace std;

// Define constants for directions
enum Direction 
{
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = 
{
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room 
{
    Field = 0,
    Castle = 1,
    Dungeon = 2,
    Dragon_Mountain = 3,
    Haunted_Forest = 4,
    NUM_ROOMS = 5
};

int main() 
{
    // Room names
    string roomNames[NUM_ROOMS] = 
    {
        "Field",
        "Castle",
        "Dungeon",
        "Dragon Mountain",
        "Haunted Forest"
    };
    
    // Room descriptions
    string roomDescriptions[NUM_ROOMS] = 
    {
        "A wide open field with tall grass waving in the wind.",
        "A grand castle with high stone walls and fluttering banners.",
        "A dark and damp dungeon with rusty chains on the walls.",
        "A towering mountain with smoke rising from its peak—home of the dragon.",
        "A forest filled with twisted trees and ghostly whispers."
    };
    
    // Adjacency list
    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) 
    {
        for (int j = 0; j < NUM_DIRECTIONS; j++) 
        {
            connections[i][j] = -1;
        }
    }

    // Define connections between rooms
    connections[Field][NORTH] = Castle;
    connections[Field][EAST] = Dungeon;
    connections[Field][WEST] = Haunted_Forest;
    connections[Field][SOUTH] = Dragon_Mountain;

    connections[Castle][SOUTH] = Field;

    connections[Dungeon][WEST] = Field;

    connections[Haunted_Forest][EAST] = Field;

    connections[Dragon_Mountain][NORTH] = Field;

    // Game state
    int currentRoom = Field;
    bool gameRunning = true;

    // Game loop
    while (gameRunning) 
    {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;

        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) 
        {
            if (connections[currentRoom][dir] != -1) 
            {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) 
        {
            cout << "none";
        }
        cout << endl;

        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;

        // Process movement commands
        if (command == "north" || command == "n") 
        {
            if (connections[currentRoom][NORTH] != -1) 
            {
                currentRoom = connections[currentRoom][NORTH];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "east" || command == "e") 
        {
            if (connections[currentRoom][EAST] != -1) 
            {
                currentRoom = connections[currentRoom][EAST];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "south" || command == "s") 
        {
            if (connections[currentRoom][SOUTH] != -1) 
            {
                currentRoom = connections[currentRoom][SOUTH];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "west" || command == "w") 
        {
            if (connections[currentRoom][WEST] != -1) 
            {
                currentRoom = connections[currentRoom][WEST];
            } 
            else 
            {
                cout << "You can't go that way." << endl;
            }
        } 
        else if (command == "quit" || command == "q") 
        {
            gameRunning = false;
        } 
        else 
        {
            cout << "I don't understand that command." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
