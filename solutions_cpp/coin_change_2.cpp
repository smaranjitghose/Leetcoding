class Solution
{
public:
    int change(int amount, std::vector<int> &coins)
    {
        std::sort(coins.begin(), coins.end());
        std::vector<int> T(amount + 1, 0);
        T[0] = 1;
        for (int c = 0; c < coins.size(); ++c)
        {
            int coin = coins[c];
            if (coin > amount)
                break;
            for (int i = 1; i <= amount; ++i)
            {
                // additonal way to reach i is i-coin + coin:
                if (i >= coin)
                    T[i] += T[i - coin];
            }
        }
        return T[amount];
    }
};