public class BestTimeToBuyAndSellStock {
    public int maxProfit(int[] prices) {
        int min = (int) Math.pow(10, 5);
        int maxProfit = 0;

        for (int x : prices) {
            if (x < min) {
                min = x;
            }

            if (maxProfit < (x - min)) {
                maxProfit = x - min;
            }
        }

        return maxProfit;
    }
}
