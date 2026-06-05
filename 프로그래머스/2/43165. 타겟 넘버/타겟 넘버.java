public class Solution{
    public int solution(int[] number, int target)     
    {
        int ans=0;
        ans = DFS(number, target, 0, 0, ans);
        return ans;
    }

    public int DFS(int[] number, int target, int dp, int sum, int ans)
    {

        if(dp == number.length)
        {
            if(sum == target)
                ans++;
            return ans++;
        }

        ans = DFS(number, target, dp + 1, sum + number[dp], ans);
        return DFS(number, target, dp + 1, sum - number[dp], ans);
    }
}
