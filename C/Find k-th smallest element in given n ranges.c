// C# implementation to solve k queries
// for given n ranges
using System;
using System.Collections;
using System.Collections.Generic;

class GFG{

// Structure to store the
// start and end point
public class Interval
{
	public int s;
	public int e;
	
	public Interval(int a, int b)
	{
		s = a;
		e = b;
	}
};

class sortHelper : IComparer
{
	int IComparer.Compare(object a, object b)
	{
		Interval first = (Interval)a;
		Interval second = (Interval)b;
		return first.s - second.s;
	}
}

// Function to find Kth smallest number in
// a Vector of merged intervals
static int kthSmallestNum(ArrayList merged, int k)
{
	int n = merged.Count;
	
	// Traverse merged.get( )o find
	// Kth smallest element using Linear search.
	for(int j = 0; j < n; j++)
	{
		if (k <= Math.Abs(((Interval)merged[j]).e -
						((Interval)merged[j]).s + 1))
			return (((Interval)merged[j]).s + k - 1);

		k = k - Math.Abs(((Interval)merged[j]).e -
						((Interval)merged[j]).s + 1);
	}

	if (k != 0)
		return -1;
		
	return 0;
}

// To combined both type of ranges,
// overlapping as well as non-overlapping.
static ArrayList mergeIntervals(ArrayList merged,
								Interval []arr, int n)
{
	
	// Sorting intervals according to start
	// time
	Array.Sort(arr, new sortHelper());
	
	// Merging all intervals into merged
	merged.Add((Interval)arr[0]);
	
	for(int i = 1; i < n; i++)
	{
		
		// To check if starting point of next
		// range is lying between the previous
		// range and ending point of next range
		// is greater than the Ending point
		// of previous range then update ending
		// point of previous range by ending
		// point of next range.
		Interval prev = (Interval)merged[merged.Count - 1];
		Interval curr = arr[i];
		
		if ((curr.s >= prev.s && curr.s <= prev.e) &&
			(curr.e > prev.e))
		{
			((Interval)merged[merged.Count - 1]).e = ((Interval)curr).e;
		}
		else
		{
			
			// If starting point of next range
			// is greater than the ending point
			// of previous range then store next range
			// in merged.get(.) if (curr.s > prev.e)
			merged.Add(curr);
		}
	}
	return merged;
}

// Driver code
public static void Main(string []args)
{
	Interval []arr = { new Interval(2, 6),
					new Interval(4, 7) };
	int n = arr.Length;
	int []query = { 5, 8 };
	int q = query.Length;
	
	// Merge all intervals into merged.get())
	ArrayList merged = new ArrayList();
	
	merged = mergeIntervals(merged, arr, n);
	
	// Processing all queries on merged
	// intervals
	for(int i = 0; i < q; i++)
		Console.WriteLine(kthSmallestNum(
			merged, query[i]));
}
}

// This code is contributed by pratham76
