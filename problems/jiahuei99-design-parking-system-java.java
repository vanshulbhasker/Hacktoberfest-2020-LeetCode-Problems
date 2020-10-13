/**
 * Solution to Design Parking System at LeetCode in Java
 *
 * author: Jiahuei99
 * ref: https://leetcode.com/problems/design-parking-system/
 */

class ParkingSystem {
    
    int[] park = new int [3];

    public ParkingSystem(int big, int medium, int small) {
        park[0] = big;
        park[1] = medium;
        park[2] = small;
        
    }
    
    public boolean addCar(int carType) {
        return --park[--carType]>=0;
        
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */