import java.util.*;

class Solution {
    public int solution(int[][] map) {
        int n = map.length;
        int m = map[0].length;

        // 상, 하, 좌, 우 이동을 위한 방향 배열
        int[] dx = {-1, 1, 0, 0};
        int[] dy = {0, 0, -1, 1};

        // 큐에는 [x좌표, y좌표]가 순서대로 들어감
        Queue<int[]> queue = new LinkedList<>();
        
        // 시작점 (0, 0) 삽입
        queue.offer(new int[]{0, 0});

        while (!queue.isEmpty())
        {
            // 현재 위치를 꺼냄.. now[0]은 x, now[1]은 y로
            int[] now = queue.poll();
            int x = now[0];
            int y = now[1];

            // 4방향 탐색
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                //맵을 벗어났거나, 벽(0)이거나, 이미 방문한 길(>1)이면 패스
                if (nx < 0 || ny < 0 || nx >= n || ny >= m || map[nx][ny] != 1)
                    continue;
                // 다음 칸에 (현재 칸의 거리 + 1)을 저장하여 움직인 거리를 누적
                map[nx][ny] = map[x][y] + 1;

                // 다음 칸의 좌표를 큐에 넣음
                queue.offer(new int[]{nx, ny});
            }
        }

        // 목적지(우측 하단)의 값이 처음 그대로 1이라면, 아무도 도달하지 못했다는 뜻이므로 -1 리턴
        if (map[n - 1][m - 1] == 1)
            return -1;
        // 최종 도달 거리를 리턴
        return map[n - 1][m - 1];
    }
}