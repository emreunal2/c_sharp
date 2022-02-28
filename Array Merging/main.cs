using System;
using System.Collections;

class Program
{

public static int[] Merging(int[] firstArr, int[] secondArr)
  {
  int count1=firstArr.Length;
  int count2=secondArr.Length;
  int[]mergedArr= new int[count1+count2];
  int firstCounter=0, secondCounter=0, mainCounter=0;

  
  if(count1==0){
    return secondArr;
  }
  if(count2==0){
    return firstArr;
  }


  while(firstCounter<count1 && secondCounter<count2){
    if (firstArr[firstCounter]<secondArr[secondCounter]){
      mergedArr[mainCounter]=firstArr[firstCounter];
      mainCounter++;
      firstCounter++;
    }
    if (firstArr[firstCounter]>=secondArr[secondCounter]){
      mergedArr[mainCounter]=secondArr[secondCounter];
      mainCounter++;
      secondCounter++;
    }  
  }

  if(firstCounter<count1){
    for(int j=firstCounter;j<count1;j++){
      mergedArr[mainCounter]=firstArr[j];
      mainCounter++;
    }
  }

  else{
    for(int j=secondCounter;j<count2;j++){
      mergedArr[mainCounter]=secondArr[j];
      mainCounter++;
    }  
  }
  return mergedArr;
  }


  public static void Main(string[] args)
  {
  int[] bir = {0,5,10};
  int[] iki = {1, 3, 4, 6};
    foreach(int c in Merging(bir, iki)){
      Console.WriteLine(c);
    }
  }
}