// shapes.h
#ifndef SHAPES_H
#define SHAPES_H

class Shape {
public:
    virtual double area() const = 0;
    virtual void display() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double area() const override;
    void display() const override;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w);
    double area() const override;
    void display() const override;
};

#endif
