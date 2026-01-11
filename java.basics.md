==**basic java syntax:**==
`import java.util.*;`  
`public class Main {`  
    `public static void main(String[] args){`  
        `System.out.println("hi");`  
    `}`  
`}`

==**basic java program for sum of 2 number:**==
`import java.util.*;`  
`public class Main {`  
    `public static void main(String[] args){`  
        `Scanner in= new Scanner(System.in);`  
        `System.out.println("enter the number:");`  
        `int num1=in.nextInt();`  
        `System.out.println("enter the 2nd number:");`  
        `int num2=in.nextInt();`  
        `int sum=num1+num2;`  
        `System.out.println("the sum of two numbers is :"+sum);`  
    `}`  
`}`

**==java program with functions/methods:==**
this is the java code for sum using functions /methods

`import java.util.*;`  
`public class Sum {`  
    `public static void main(String[] args){`  
        `sum();`  
        `sum();`  
    `}`  
    `static void sum(){`  
        `Scanner in=new Scanner(System.in);`  
        `System.out.println("enter a number:");`  
        `int num1=in.nextInt();`  
        `System.out.println("enter another number:");`  
        `int num2=in.nextInt();`  
        `int sum=num1+num2;`  
        `System.out.println("the sum of 2 numbers is:"+sum);`  
    `}`  
`}`

**==java program with functions/ methods with return type:==**
return statement means that the function is over.
Anything written after return statement means it will be ignored .

`import java.util.*;`  
`public class Sum {`  
    `public static void main(String[] args){`  
        `sum();`  
        `int ans= sum2();`  
        `System.out.println("the sum of 2 numbers is="+ans);`  
    `}`  
    `static int sum2(){`  
        `Scanner in=new Scanner(System.in);`  
        `System.out.println("enter a number:");`  
        `int num1=in.nextInt();`  
        `System.out.println("enter another number:");`  
        `int num2=in.nextInt();`  
        `int sum=num1+num2;`  
        `return sum;`  
    `}`
    `}`

==**Returning a string:**==
the java code to return string data types

`public class Greeting {`  
    `public static void main(String[] args){`  
        `String  message= greet();`  
        `System.out.println(message);`  
    `}`  
    `static String greet(){`  
       `String greet="hi";`  
       `return greet;`  
    `}`  
`}`

==**parameter passing into functions:**==

==**1)integers:**==

`import java.util.;`  
`public class Sum {`  
    `public static void main(String args){`  
        `int ans= sum3(10,20);`  
        `System.out.println("the sum of 2 numbers is="+ans);`  
    `}`  
    `static int sum3(int a ,int b){`  
        `int sum3=a+b;`  
        `return sum3;`  
    `}`
    
==**2)strings:**==

`import java.util.Scanner;`  
  
`public class Greeting {`  
    `public static void main(String[] args){`  
        `//String  message= greet();`  
        `//System.out.println(message);        Scanner in= new Scanner(System.in);`  
        `System.out.print("enter you're name: ");`  
        `String name=in.nextLine();`  
        `String person=mygreet(name);`  
        `System.out.println(person);`  
    `}`  
  
    `static String mygreet(String name) {`  
        `String greet ="hi "+name;`  
        `return greet;`  
    `}`

==**java program for  swapping of 2 numbers:**==

`import java.util.*;`  
`public class swap {`  
    `public static void main(String[] args) {`  
        `int a, b;`  
        `Scanner in = new Scanner(System.in);`  
        `System.out.println("enter the value of a:");`  
        `a = in.nextInt();`  
        `System.out.println("enter the value of b:");`  
        `b = in.nextInt();`  
        `System.out.println("before swap:");`  
        `System.out.println("a:" + a);`  
        `System.out.println("b:" + b);`  
        `int temp = a;`  
        `a = b;`  
        `b = temp;`  
        `System.out.println("after swap:");`  
        `System.out.println("a:" + a);`  
        `System.out.println("b:" + b);`  
    `}`  
`}`
