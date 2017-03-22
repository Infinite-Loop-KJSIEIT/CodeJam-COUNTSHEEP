import java.util.Scanner;
/**
 *
 * @author Amey
 */
public class COUNTSHEEP
{
    private static int A[];
    public static void main(String[] args)
    {
        Scanner jin = new Scanner(System.in);
        int T = jin.nextInt();
        for(int i = 1; i <= T; i++)
        {
            int n = jin.nextInt();
            if(n == 0)
            {
                System.out.println("Case #" + i + ": INSOMNIA");
            }
            else
            {
                A = new int[10];
                int x = 0;
                do
                {
                    x += n;
                    int t = x;
                    while(t!= 0)
                    {
                        A[t%10] = 1;
                        t /= 10;
                    }
                }while(sum()!= 10);
                System.out.println("Case #" + i + ": " + x);
            }
        }
    }
    private static int sum()
    {
        return(A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9]);
    }
}
