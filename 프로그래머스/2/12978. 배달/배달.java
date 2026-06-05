import java.util.*;

class Solution {
    public int solution(int N, int[][] road, int K) {
        
        // graph[마을번호] 안에는 [연결된 마을, 걸리는 시간] 배열이 저장
        ArrayList<int[]>[] graph = new ArrayList[N + 1];
        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }

        //도로 정보 채우기
        for (int[] r : road)
        {
            int start = r[0];  // 출발 마을
            int end = r[1];    // 도착 마을
            int time = r[2];   // 걸리는 시간

            // 서로 연결되어 있으므로 양쪽에 넣음
            graph[start].add(new int[]{end, time});
            graph[end].add(new int[]{start, time});
        }

        // 1번 마을에서 각 마을까지 걸리는 최단 시간을 기록할 배열
        int[] dist = new int[N + 1];
        
        // 아직 거리를 모르므로 최대한 큰값으로 채움
        Arrays.fill(dist, Integer.MAX_VALUE);

        // 큐에는 [현재 마을 번호, 현재까지 걸린 시간]
        //걸린 시간이 짧은 순서대로 정렬
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[1] - b[1]);

        // 시작점 설정
        pq.offer(new int[]{1, 0});
        dist[1] = 0; // 1번 마을 자기 자신까지의 거리는 0

        // 다익스트라 알고리즘 탐색 시작
        while (!pq.isEmpty()) {
            int[] cur = pq.poll();
            int curVertex = cur[0]; // 현재 마을 번호
            int curCost = cur[1];   // 현재 마을까지 오는데 걸린 시간

            // 꺼낸 시간이 이미 기록된 최단 시간보다 크다면, 계산할 필요X
            if (curCost > dist[curVertex]) {
                continue;
            }

            // 현재 마을과 연결된 이웃 마을들을 하나씩 검사
            for (int[] next : graph[curVertex]) {
                int nextVertex = next[0]; // 이웃 마을 번호
                int nextCost = next[1];   // 이웃 마을까지 가는데 걸리는 다리 시간

                // 새로운 총 걸리는 시간 = (현재 마을까지 온 시간) + (이웃 마을로 가는 시간)
                int newCost = dist[curVertex] + nextCost;

                // 새로 계산한 시간이 기존에 기록된 시간보다 더 짧으면 최단 거리 갱신
                if (newCost < dist[nextVertex]) {
                    dist[nextVertex] = newCost; // 최단 시간 정보를 업데이트
                    pq.offer(new int[]{nextVertex, newCost}); // 다음 탐색을 위해 큐에 삽입
                }
            }
        }

        // 배달 가능한 마을 개수 세기
        int ans = 0;
        for (int i = 1; i <= N; i++) {
            // 1번 마을에서 i번 마을까지의 최단 시간이 K 이하인 경우만 카운트
            if (dist[i] <= K) {
                ans++;
            }
        }

        return ans;
    }
}