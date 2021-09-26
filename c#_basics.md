# C# Tutorial

(Part #1)  
C# Basics until methods at w3schools Tutorial

## Hello world:

```c#
using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Hello World!");
    }
  }
}
```

**Note:**`namespace` is a used to organize your code, and it is a container for classes and other namespaces.

**Note:** `class` is a container for data and methods, which brings functionality to your program. Every line of code that runs in C# must be inside a class. In our example, we named the class Program.

**Note:** Unlike Java, the name of the C# file does not have to match the class name, but they often do (for better organization).  

## Variables
* `int` 
* `double` 
* `char`
* `string`
* `bool`  
Syntax:
```c#
type variableName = value;
```

**Type Conversion Methods**

```c#
int myInt = 10;
double myDouble = 5.25;
bool myBool = true;

Console.WriteLine(Convert.ToString(myInt));    // convert int to string
Console.WriteLine(Convert.ToDouble(myInt));    // convert int to double
Console.WriteLine(Convert.ToInt32(myDouble));  // convert double to int
Console.WriteLine(Convert.ToString(myBool));   // convert bool to string
```

