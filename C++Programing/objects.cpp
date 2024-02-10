#include <iostream>

// Object
class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
    
    void eat(){
        std::cout << "This person is eating\n";
    }
    void drink(){
        std::cout << "This person is drinking\n";
    }
    void sleep(){
        std::cout << "This person is sleeping\n";
    }
};

// Object with constructor
class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;

    }
};

// Getter and setter
class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){
        if(temperature < 0){
            temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }    
    }
};

// Inheritance
class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating '\n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "Dog go woof \n";
    }
};
class Cat : public Animal{
    public:

    void meow(){
        std::cout << "Cat go meow \n";
    }
};

int main(){

    // Base object
    Human human1;
    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    // Constructor
    Student student1("Spongebob", 25, 3.2);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    // Getters and setters
    Stove stove;

    stove.setTemperature(10000);
    std::cout << "The temperature setting is: " << stove.getTemperature() << '\n';
    
    // Inheritance
    Dog dog;
    Cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    cat.meow();

    return 0;
}