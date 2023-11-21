#ifndef PACKAGE_H
#define PACKAGE_H

template<typename T>
struct Package {
private:
    T data;

public:
    float height;
    float width;
    float length;
    float weight;
    float cost;

    Package(T data, float height, float width, float length, float weight, float cost);
    Package(T data);

    T getData() const;
};

#endif 
