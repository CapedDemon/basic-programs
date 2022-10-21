namespace DefaultNamespace;

public class BinarySearch
{
    // Returns index of x if it is present in arr[l..r], else return -1
    private static int binarySearch(int[] arr, int l, int r, int x)
    {
        if (r >= l)
        {
            var mid = l + (r - l) / 2;
            // If the element is in the middle.
            if (arr[mid] == x)
                return mid;
            // If element is lower than the mid point, then it can only be present in left subarray.
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);
            // Else the element can only be present in right subarray
            return binarySearch(arr, mid + 1, r, x);
        }
        // Return -1 if the index was not present within the array.
        return -1;
    }
    // Method to test the function above
    public static void Main()
    {
        int[] arr = { 3, 4, 45, 11, 41 };
        var n = arr.Length;
        var x = 11;
        var result = binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            Console.WriteLine("Element not present");
        else
            Console.WriteLine($"Element found at index {result}");
    }
}