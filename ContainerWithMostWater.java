public class ContainerWithMostWater {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length - 1;
        int max = 0;
        while(l < r){
            int w = r - l;
            int h = Math.min(height[l], height[r]);
            int area = h * w;
            max = Math.max(max, area);
            if(height[l] < height[r]) l++;
            else if(height[l] > height[r]) r--;
            else {
                l++;
                r--;
            }
        }
        return max;
    }
}
