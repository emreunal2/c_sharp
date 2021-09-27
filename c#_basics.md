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

## C# Strings

A string in C# is actually an object, which contain properties and methods that can perform certain operations on strings.  
**Example Methods:**  
The length of a string can be found with the `Length` property:

```c#
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Console.WriteLine("The length of the txt string is: " + txt.Length);
```

There are many string methods available, for example `ToUpper()` and `ToLower()`, which returns a copy of the string converted to uppercase or lowercase:

```c#
string txt = "Hello World";
Console.WriteLine(txt.ToUpper());   // Outputs "HELLO WORLD"
Console.WriteLine(txt.ToLower());   // Outputs "hello world"
```

**String Interpolation:**

```c#
string firstName = "John";
string lastName = "Doe";
string name = $"My full name is: {firstName} {lastName}";
Console.WriteLine(name);
```

**Access Strings:**

```c#
string myString = "Hello";
Console.WriteLine(myString[1]);  // Outputs "e"
```

Another useful method is `Substring()`, which extracts the characters from a string, starting from the specified character position/index, and returns a new string. This method is often used together with `IndexOf()` to get the specific character position:

```c#
// Full name
string name = "John Doe";

// Location of the letter D
int charPos = name.IndexOf("D");

// Get last name
string lastName = name.Substring(charPos);

// Print the result
Console.WriteLine(lastName);
```

Other useful escape characters in C# are:

| Code | Result    |
| ---- | --------- |
| \n   | New Line  |
| \t   | Tab       |
| \b   | Backspace |

## C# If ...Else

- `if`
- `else`
- `else if`
- `switch`

**Short Hand If...Else:**  
`variable = (condition) ? expressionTrue : expressionFalse;`

## C# Switch:

Use the switch statement to select one of many code blocks to be executed.
switch(expression)

```c#
{
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
    break;
}
```

## Loops

**While Loops:**

```c#
int i = 0;
while (i < 5)
{
  Console.WriteLine(i);
  i++;
}
```

**For Loops:**

```c#
for (int i = 0; i < 5; i++)
{
  Console.WriteLine(i);
}
```

**Foreach:**  
There is also a `foreach` loop, which is used exclusively to loop through elements in an **array**:

```c#
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
foreach (string i in cars)
{
  Console.WriteLine(i);
}
```

## Continue/Break

**Break:**  
The `break` statement can also be used to jump out of a loop.  
This example jumps out of the loop when i is equal to `4`:

```c#
for (int i = 0; i < 10; i++)
{
  if (i == 4)
  {
    break;
  }
  Console.WriteLine(i);
}
```

**Continue**
The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of `4`:

```c#
for (int i = 0; i < 10; i++)
{
  if (i == 4)
  {
    continue;
  }
  Console.WriteLine(i);
}
```

## Arrays

To declare an array, define the variable type with square brackets:

```c#
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
int[] myNum = {10, 20, 30, 40};
```

**Access**

```c#
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
Console.WriteLine(cars[0]);
// Outputs Volvo
```

**Array Length**

```c#
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
Console.WriteLine(cars.Length);
// Outputs 4
```

**Sort Arrays**  
There are many array methods available, for example Sort(), which sorts an array alphabetically or in an ascending order:

```c#
// Sort an int
int[] myNumbers = {5, 1, 8, 9};
Array.Sort(myNumbers);
foreach (int i in myNumbers)
{
  Console.WriteLine(i);
}
```

**System.Linq Namespace**
Other useful array methods, such as `Min`, `Max`, and `Sum`, can be found in the `System.Linq` namespace:  

```c#
using System;
using System.Linq;

namespace MyApplication
{
  class Program
  {
    static void Main(string[] args)
    {
      int[] myNumbers = {5, 1, 8, 9};
      Console.WriteLine(myNumbers.Max());  // returns the largest value
      Console.WriteLine(myNumbers.Min());  // returns the smallest value
      Console.WriteLine(myNumbers.Sum());  // returns the sum of elements
    }
  }
}
```

**Other Ways to Create an Array**  
```c#
// Create an array of four elements, and add values later
string[] cars = new string[4];

// Create an array of four elements and add values right away 
string[] cars = new string[4] {"Volvo", "BMW", "Ford", "Mazda"};

// Create an array of four elements without specifying the size 
string[] cars = new string[] {"Volvo", "BMW", "Ford", "Mazda"};

// Create an array of four elements, omitting the new keyword, and without specifying the size
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```
It is up to you which option you choose. In our tutorial, we will often use the last option, as it is faster and easier to read.

However, you should note that if you declare an array and initialize it later, you have to use the new keyword:



