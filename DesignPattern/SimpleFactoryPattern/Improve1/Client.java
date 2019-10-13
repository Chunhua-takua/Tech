class Client {
    public static void main(String[] args) {
        // Chart chart = ChartFactory.getChart("histogram");
        // chart.display();
        // System.out.println("fuck");

        String chartType = XMLUtil.getChartType();
        Chart chart = ChartFactory.getChart(chartType);
        chart.display();
        
    }
}