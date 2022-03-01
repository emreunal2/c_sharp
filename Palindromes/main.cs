using System;

class Program
{
  //brute force
  public static bool BFPalindrome(string a){
  a=a.ToLower();
  Console.WriteLine(a);
  char[]Splited=a.ToCharArray();
  int n=Splited.Length;
  char[]Reversed=new char[n];
  int j=0;
  for(int i=n-1;i>=0;i--){
    Reversed[j]=Splited[i];
    j++;
    }
  for(int i=0;i<n;i++){
    if(Reversed[i]!=Splited[i]){
      return false;
      }
    }
  return true;
  }

  //Divide and Conquer
  public static bool DaCPalindrome(string a){
    a=a.ToLower();
    Console.WriteLine(a);
    char[]Splited=a.ToCharArray();
    for(int i=0;i<Splited.Length/2;i++){
      if(Splited[i]!=Splited[Splited.Length-i-1]){
        return false;
      }
    }
  return true;
  }


  public static void Main(string[] args)
  {
    string line = "lorem ipsum dolor sit amet";
    Console.WriteLine(DaCPalindrome(line));
  }
}