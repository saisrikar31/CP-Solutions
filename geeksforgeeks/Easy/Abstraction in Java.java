//  Implement both the classes here
abstract class Shape {
    String color;

    Shape(String c) {
        color = c;
    }

    String getColor() {
        return color;
    }

    abstract double getArea();
}

class Square extends Shape {
    double side;

    Square(String c, double side) {
        super(c);
        this.side = side;
    }

    @Override
    double getArea() {
        return side * side;
    }
}