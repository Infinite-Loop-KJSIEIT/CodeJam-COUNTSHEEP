import java.util.Scanner;
/**
 *
 * @author Amey
 */
public class PANCAKES
{
    private static char[] A;
    private static int x;
    public static void main(String[] args)
    {
        Scanner jin = new Scanner(System.in);
        int T = jin.nextInt();
        for(int i = 1; i <= T; i++)
        {
            String t = jin.next();
            if(t.contains("-"))
            {
                A = t.toCharArray();
                x = 0;
                for(int j = 0; j < A.length; j++)
                {
                    if(A[0] != A[j])
                        flip(j);
                }
                if(A[0] == '-')
                    flip(A.length);
                System.out.println("Case #" + i + ": " + x);
            
            }
            else
            {
                System.out.println("Case #" + i + ": 0");
            }
        }
    }
    private static void flip(int L)
    {
        char C;
        if(A[0] == '-')
            C = '+';
        else
            C = '-';
        for(int i = 0; i < L; i++)
            A[i] = C;
        x++;
    }
}
