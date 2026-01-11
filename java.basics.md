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
