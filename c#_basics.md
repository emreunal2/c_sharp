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

- `int`
- `double`
- `char`
- `string`
- `bool`

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

## User Input

Now we will use `Console.ReadLine()` to get user input.
**Example:**

```c#
// Type your username and press enter
Console.WriteLine("Enter username:");

// Create a string variable and get user input from the keyboard and store it in the variable
string userName = Console.ReadLine();

// Print the value of the variable (userName), which will display the input value
Console.WriteLine("Username is: " + userName);
```

**The `Console.ReadLine()` method returns a string. Therefore, you cannot get information from another data type, such as `int`. The following program will cause an error:**

```c#
Console.WriteLine("Enter your age:");
int age = Console.ReadLine();
Console.WriteLine("Your age is: " + age);
```

The error message will be something like this:

> Cannot implicitly convert type 'string' to 'int'

Luckily, that you can convert any type explicitly, by using one of the `Convert.To` methods:  
**Example:**

```C#
Console.WriteLine("Enter your age:");
int age = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Your age is: " + age)
```

## Aritmetic Operators

If you forget any operators check this [**link**](https://www.w3schools.com/cs/cs_operators.php)

## C# Math

The C# Math class has many methods that allows you to perform mathematical tasks on numbers.  
**Math.Max(x,y) and Math.Min(x,y:)**  
The `Math.Max(x,y)` method can be used to find the highest value of x and y:

```c#
Math.Max(5, 10);
Math.Min(5, 10);
```

**Math.Sqrt(x)**  
The `Math.Sqrt(x)` method returns the square root of x:

```c#
Math.Sqrt(64);
```

There is lots of methods like this at Math Lib, methods links are here:  
[**C Sharp Math Class**](https://www.geeksforgeeks.org/c-sharp-math-class/)
