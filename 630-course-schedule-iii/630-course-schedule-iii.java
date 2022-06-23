class Solution {
    public int scheduleCourse(int[][] courses) {
        Arrays.sort(courses, (i,j)->i[1]-j[1]);
        PriorityQueue<Integer> q = new PriorityQueue<>((i,j)->j-i); //max heap
        int time =0;
        for(int i =0;i<courses.length;i++){
            int[] cur = courses[i];
            time+=cur[0];
            q.add(cur[0]);
            if(time>cur[1]) time-=q.poll();
        }
        return q.size();
        
    }
}