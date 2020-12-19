import java.util.Scanner;

class BinarySearch { 
    int binarySearch(int arr[], int x) { 
        int l = 0, r = arr.length - 1; 
        while (l <= r) { 
            int m = l + (r - l) / 2; 
            if (arr[m] == x) 
                return m; 
            if (arr[m] < x) 
                l = m + 1; 
            else
                r = m - 1; 
        } 
        return -1; 
    } 
  
    public static void main(String args[]) { 
        BinarySearch ob = new BinarySearch(); 
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int a[] = new int[size];
        for(int i = 0; i < size; i++){
            a[i] = s.nextInt();
        }
        int x = s.nextInt(); //number we need to find
        int result = ob.binarySearch(a, x); 
        System.out.println(result);
    } 
}