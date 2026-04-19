==**Array declaration:**==

```
public class Main {  
    public static void main(String[] args){  
        int []roll1=new int[5];  
        int []roll2={10,20,30,40,50};  
    }  
}

```
this is the way to declare arrays in java.
-> datatype []Variable name= new data type[size]
arrays are collection of datatypes.
->all the type of data in the array must be the same

`int []ros; //array is getting declared`
`ros= new int[5];//intialisation: actually here object is getting created in heap meomery.`

==**working of java:**==
->the memory for the array is allocated during the runtime .
->array objects are in heap.
->heap objects are not continuous.
->heap is the runtime data area from which the memory for all the objects is allocated.
->array objects in java may not be continuous.

==**Java array input:**==
->the code for java array input is :
->also in place of entering a value for size of array use arr.length.
```
import java.util.*;
public class Input {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[5];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;

        //System.out.println(arr[0]);
        // System.out.println(arr[1]);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
```

**==printing of array:**==
->to print the values of array as a string use the Array.toString(arr) to print the code in the form of a string.

```
import java.util.*;

public class Input {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[5];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;
        System.out.println(Arrays.toString(arr));
    }
}
```

**==Array of objects:==**

```
import java.util.*;

public class Output {

    public static void main(String[] args) {
        System.out.println("hi");
        String[] str = new String[5];
        Scanner in = new Scanner(System.in);
        for (int i = 0; i < str.length; i++) {
            str[i] = in.next();
        }
        for (int i = 0; i < str.length; i++) {
            System.out.println(str[i]);
        }
        // System.out.println(Arrays.toString(str));
    }
}

```
->so array string here is having references in heap memory pointing to these objects.

**==passing of arrays in functions:**==

```
import java.util.*;

public class Pass {

    public static void main(String[] args) {
        int[] str = { 1, 2, 3, 4, 5 };
        change(str);
        System.out.println(Arrays.toString(str));
    }

    static void change(int[] arr) {
        arr[1] = 99;
    }
}

```

==**2D -Array:**==
-> Called  as array of arrays .

```
import java.util.*;

public class Arr2 {

    public static void main(String[] args) {
        int[][] arr = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arr[i][j]);
            }
        }
    }
}
```

->to take input and print an array:

```
import java.util.*;

public class Arr2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] arr = new int[3][2];
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                arr[row][col] = in.nextInt();
            }
        }
        for (int row = 0; i < arr.length; i++) {
            for (int col = 0; j < arr[row].length; j++) {
                System.out.print(arr[row][col]);
            }
        }
    }
}
```

in `arr[i][j]`:
j=column
i=row
to access column :
`for(int i=0;i<arr.length;i++)`
to access row:
`for(int j=0;j<arr[i].length;i++)`

->`System.out.println(arr.length)` actually gives the number of rows.

**==Array output:==**
```
import java.util.*;

public class Arr2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] arr = new int[3][2];
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                arr[row][col] = in.nextInt();
            }
        }
//        for (int row = 0; row < arr.length; row++) {
  //          for (int col = 0; col < arr[row].length; col++) {
    //            System.out.print(arr[row][col]+" ");
      //      }
	//    System.out.println("");
        //}
	for(int row=0;row<arr.length;row++){
		System.out.println(Arrays.toString(arr[row]));
	}
    }
}
```

**==Array List:==**
->similar to vectors in c++
this is the method to intialise the ArrayList:

```
import java.util.*;
public class arrayL{
    public static void main(String[] args){
        ArrayList<integer> list = new ArrayList<>();
    }
}
```

working example:

```
import java.util.*;
public class arrayL{
    public static void main(String[] args){
        ArrayList<Integer> list = new ArrayList<>(10);
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        System.out.println(list);
    }
}

```

