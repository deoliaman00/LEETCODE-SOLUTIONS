class UndergroundSystem {
  Map<Integer, Pair<String, Integer>> checkedIn = new HashMap<>(); // id to startStation, checkInTime
  Map<String, double[]> tripData = new HashMap<>(); // trip to total trip time, num of arrivals

  public void checkIn(int id, String stationName, int t) {
    checkedIn.put(id, new Pair<>(stationName, t));
  }

  public void checkOut(int id, String endStation, int checkOutTime) {
    Pair<String, Integer> checkInData = checkedIn.remove(id);
    String tripKey = checkInData.getKey() + "_" + endStation;
    int checkInTime = checkInData.getValue();
    tripData.putIfAbsent(tripKey, new double[] {0, 0});
    tripData.get(tripKey)[0] += checkOutTime - checkInTime; // Add trip time
    tripData.get(tripKey)[1]++; // Increment num of arrivals
  }

  public double getAverageTime(String startStation, String endStation) {
    double[] stationTime = tripData.get(startStation + "_" + endStation);
    return stationTime[0] / stationTime[1]; // Total time / num arrivals
  }
}