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