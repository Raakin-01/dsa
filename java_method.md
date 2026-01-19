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

->java does not actually has pass by reference. cause java has no pointers.
->java has only pass by value.
java programme for swapping of 2 numbers does not work cause there is no refence being passed like pointers in c.
psvm(){
int a=10;
int b=20;
swap(a,b);
}
static int swap(int num1,int num2){
int temp=num1;
num1=num2;
num2=temp;
return a,b;
}

->this program actually does not work as this is taking in pass by reference .
  
	a=10;
    num1=10;

      b=20;
      num2=20;
  but
  a!=num1.
  ->only the value is same.
  ->in this an entire new object is created and shown.
but when an ==array== is being used :
->the array is pointing to a object.
->if an array called change is used in a function/method then the objects value also changes as this new array in the function is also pointing to the same object .

==**scoping in java functions/methods:**==
`import java.util.*;`  
`public class Block {`  
    `public static void main(String[] args){`  
        `int a =10;`  
        `int b=20;`  
        `{`  
            `int a=100;`  
        `}`  
    `}`  
`}`
->this is wrong as :
1)the block already has a initialized the variable a.
2)the variables initialized inside the block cannot be accessed outside the block.
3)the variables initialized outside the bock can be accessed inside the block.

`import java.util.*;`  
`public class Block {`  
    `public static void main(String[] args){`  
        `int a =10;`  
        `int b=20;`  
        `{`  
            `int c=100;`  
            `System.out.println(c);`  
        `}`  
        `int c =99;`  
        `System.out.println(c);`  
    `}`  
`}`

->this is correct as:
->this prints output of both the values of c inside the block and outside the block of code inside the psvm.
->but the output will be different because the scope of the c inside the block of code is different from the var 'c' initialized outside of the block.
->anything initialized inside the for loop..... the scope of the variables is only inside the for loop . i.e. any var that is initialized inside the loop's scope is in the loop. outside the loop to use the variable it must be initialized again.

==**shadowing:**==
 `public class Shadowing {`  
    `static int x=10;`  
    `public static void main(String[] args){`  
        `System.out.println(x);`  
        `fun();`  
    `}`  
    `static void fun(){`  
        `System.out.println(x);`  
    `}`  
`}`

**Variable shadowing** in Java occurs when a variable declared in an inner scope (like a method or block) shares the same name as a variable in an outer scope (like a class field), causing the inner variable to hide or "shadow" the outer one
The inner scope's variable takes precedence within its scope, so references to that name resolve to the local version instead of the outer one, such as an instance variable. To access the shadowed outer variable, use `this` for instance fields or qualify it explicitly.

`public class Shadowing {`  
    `static int x=10;`  
    `public static void main(String[] args) {`  
        `System.out.println(x);`  
        `int x = 20;`  
        `System.out.println(x);`  
    `}`  
`}`
-> in this example int x=10 is getting shadowed by the int x=20 inside the program .

==**variable arguments:**==
they can take as many inputs as they want
e.g.:
`import java.util.Arrays;`  
`public class VarArgs {`  
    `public static void main(String[] args){`  
        `fun(10,20,30,40,50,60,70,80,90,100);`  
    `}`  
    `static void fun(int ...v){`  
        `System.out.println(Arrays.toString(v));`  
    `}`  
`}`

e.g.2:
`import java.util.Arrays;`  
`public class VarArgs {`  
    `public static void main(String[] args){`  
        `fun(10,20,"raakin","ron","mike","dustin");`  
    `}`  
    `static void fun(int a,int b,String ...v){`  
        `System.out.println(Arrays.toString(v));`  
    `}`  
`}`
in this the variable argument is kept in the end because if it is not kept in end it will be hard to distinguish between the normal arguments and the variable arguments
==->variable arguments always at the end.==

==**Function overloading/Method overloading:**==
->in this 2 or more functions can exist with the same name if their parameters are different.
e.g.1:
`import java.util.*;`  
`public class Overloading {`  
    `public static void main(String[] args){`  
        `fun("raakin");`  
    `}`  
    `static void fun(int a){`  
        `System.out.println(a);`  
    `}`  
    `static void fun(String name){`  
        `System.out.println(name);`  
    `}`  
`}`
e.g.2:
`import java.util.*;`  
`public class Overloading {`  
    `public static void main(String[] args){`  
        `int x=sum(5,5,23);`  
        `System.out.println(x);`  
    `}`  
    `static int sum(int a,int b){`  
        `return a+b;`  
    `}`  
    `static int sum(int a,int b,int c){`  
        `return a+b+c;`  
    `}`  
`}`

