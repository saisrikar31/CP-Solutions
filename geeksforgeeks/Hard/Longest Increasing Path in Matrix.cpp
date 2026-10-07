class Solution {
    // Direction vectors for moving up, down, left, right
    private static final int[][] DIRECTIONS = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    public int longIncPath(int[][] matrix, int n, int m) {
        if (matrix == null || n == 0 || m == 0) return 0;
        
        int[][] memo = new int[n][m];
        int maxPath = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                maxPath = Math.max(maxPath, dfs(matrix, i, j, n, m, memo));
            }
        }

        return maxPath;
    }

    private int dfs(int[][] matrix, int r, int c, int n, int m, int[][] memo) {
        // If already computed, return the memoized value
        if (memo[r][c] != 0) {
            return memo[r][c];
        }

        int currentMaxLength = 1;

        for (int[] dir : DIRECTIONS) {
            int nextR = r + dir[0];
            int nextC = c + dir[1];

            // Check boundaries and strict increasing condition
            if (nextR >= 0 && nextR < n && nextC >= 0 && nextC < m && matrix[nextR][nextC] > matrix[r][c]) {
                currentMaxLength = Math.max(currentMaxLength, 1 + dfs(matrix, nextR, nextC, n, m, memo));
            }
        }

        memo[r][c] = currentMaxLength;
        return currentMaxLength;
    }
}