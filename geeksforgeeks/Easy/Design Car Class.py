class Car {
    String brand;
    String model;
    int year;

    public Car(String b, String m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    public void displayDetails() {
        System.out.println("Car Details:");
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
    }
}

class Solution {
    public void fun(String brand, String model, int year) {
        Car car = new Car(brand, model, year);
        car.displayDetails();
    }
}