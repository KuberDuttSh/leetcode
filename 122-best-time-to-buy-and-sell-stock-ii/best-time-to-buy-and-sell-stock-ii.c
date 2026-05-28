int maxProfit(int prices[], int size) {
    int profit = 0;
    for (int i = 1; i < size; i++) {
        int diff = prices[i] - prices[i - 1];
        if (diff > 0) {
            profit += diff;
        }
    }
    return profit;
}