#ifndef PINE_H_INCLUDED
#define PINE_H_INCLUDED

class Pine {
    private:
        int age;
        double height;

    public:
        Pine();
        Pine(int, double);
        int getAge() const; // const functions - do not need to change values
        double getHeight() const;
        void setAge(int);
        void setHeight(double);
        void toPrint();
        static void produceCone(); // static - applies to all objects

};

#endif // PINE_H_INCLUDED
