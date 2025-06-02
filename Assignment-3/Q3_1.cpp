#include <iostream>
#include <cstring>

using namespace std;

class String
{               // Defines a user-defined class named 'String'
    char *str;  // Private member: pointer to a dynamically allocated character array to store the string
    int length; // Private member: integer to store the length of the string

public:
    // Default constructor: creates an uninitialized string (length 0)
    String()
    {
        length = 0;        // Initialize the length to 0
        str = new char[1]; // Allocate a character array of size 1 (for the null terminator)
        str[0] = '\0';     // Set the first element to the null terminator, making it an empty string
    }

    // Parameterized constructor: initializes a String object with a C-style string constant
    String(const char *s)
    {
        length = strlen(s);         // Calculate the length of the input C-style string
        str = new char[length + 1]; // Allocate a character array of size length + 1 (for characters + null terminator)
        strcpy(str, s);             // Copy the content of the input string 's' to the dynamically allocated 'str'
    }

    // Copy constructor: creates a new String object as a copy of an existing String object
    String(const String &s)
    {
        length = s.length;          // Copy the length from the source String object
        str = new char[length + 1]; // Allocate new memory for the string content
        strcpy(str, s.str);         // Copy the string content from the source String object
    }

    // Assignment operator: allows assigning one String object to another
    String &operator=(const String &s)
    {
        // Check for self-assignment (e.g., s2 = s2;) to avoid unnecessary operations
        if (this != &s)
        {
            delete[] str;               // Deallocate the memory of the current string to avoid memory leaks
            length = s.length;          // Copy the length from the source String object
            str = new char[length + 1]; // Allocate new memory for the string content
            strcpy(str, s.str);         // Copy the string content from the source String object
        }
        return *this; // Return a reference to the current String object to allow for chained assignments (e.g., s1 = s2 = s3;)
    }

    // Concatenation function: adds two String objects to create a new String object
    String add(const String &s)
    {
        String result;                            // Create a new String object to store the result
        result.length = length + s.length;        // Calculate the length of the concatenated string
        delete[] result.str;                      // Deallocate the initially allocated memory in 'result' (from the default constructor)
        result.str = new char[result.length + 1]; // Allocate memory for the concatenated string
        strcpy(result.str, str);                  // Copy the content of the first string to 'result'
        strcat(result.str, s.str);                // Append the content of the second string 's' to 'result'
        return result;                            // Return the new String object containing the concatenated string
    }

    // Display function: prints the string content to the console
    void display()
    {
        cout << str << endl; // Print the string followed by a newline character
    }

    // Destructor: deallocates the dynamically allocated memory when a String object is destroyed
    ~String()
    {
        delete[] str; // Release the memory pointed to by 'str' to prevent memory leaks
    }
};

int main()
{
    String s1;                 // Creates an uninitialized String object using the default constructor
    String s2("Well done!");   // Creates a String object initialized with the string constant "Well done!"
    String s3(" Keep it up!"); // Creates another String object initialized with " Keep it up!"
    String s4 = s2.add(s3);    // Concatenates s2 and s3 using the 'add' function and assigns the result to s4

    cout << "s1: ";
    s1.display(); // Displays the content of s1 (which should be an empty string)
    cout << "s2: ";
    s2.display(); // Displays the content of s2 ("Well done!")
    cout << "s3: ";
    s3.display(); // Displays the content of s3 (" Keep it up!")
    cout << "s4 (s2 + s3): ";
    s4.display(); // Displays the content of s4 (the concatenation of s2 and s3)

    return 0; // Indicates successful program execution
}