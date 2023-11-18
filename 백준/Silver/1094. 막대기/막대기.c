void stick()
{
    int st = 64;
    int n;
    int cnt = 0;
    scanf("%d", &n);
    while (n>0)
    {
        if (st > n)
            st /= 2;
        else
        {
            cnt++;
            n =n - st;
        }
    }
    printf("%d", cnt);
}
int main()
{
    stick();
}