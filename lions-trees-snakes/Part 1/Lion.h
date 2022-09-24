#ifndef LION_H_INCLUDED
#define LION_H_INCLUDED

class Lion {
    private:
        double weight;
        double height;

    public:
        Lion();
        Lion(double, double);
        double getWeight() const; // const functions - the values do NOT need to be altered!
        double getHeight() const;
        void setWeight(double);
        void setHeight(double);
        void toPrint();
        static void eat(); // static - applies to all objects
};

#endif // LION_H_INCLUDED
