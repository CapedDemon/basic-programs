import java.util.Scanner;

class bubblesort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Input the number of elements in the array");
        int length = sc.nextInt();

        int[] array = new int[length];

        // Taking the user input
        for (int i = 0; i < length; i++) {
            System.out.println("Input the next element (integer) of the array.");
            array[i] = sc.nextInt();
        }

        // Sorting the array
        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                // Ascending order
                // repalace > to < for descending order
                if (array[i] > array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        // Priniting the sorted array
        System.out.println("Sorted Array : ");
        for (int i = 0; i < length; i++)
            System.out.println(array[i]);
    }
}