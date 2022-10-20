/// <summary>
/// A class which helps the user check if an input string is a Palindrome or not.
/// </summary>
public class Palindrome
{
    /// <summary>
    /// A function which takes a string input and reverses it to check if it's a Palindrome.
    /// </summary>
    /// <param name="input">The value to check.</param>
    /// <returns>A boolean which represents whether or not the input is a Palindrome.</returns>
    public static bool IsPalindrome(string input)
    {
        string inputReversed = new string(input.Reverse().ToArray());
        if (String.Equals(input, inputReversed, StringComparison.CurrentCultureIgnoreCase))
            return true;

        return false;
    }
}