#ifndef TARGET_H
#define TARGET_H


class target
{
private:
    float distance;
    float azimuth;
    float x;
    float y;
    float course;
    float velocity;
public:
    target();
    float getDistance(){return this->distance;}
    void setDistance(float value){this->distance = value;}

    float getAzimuth(){return this->azimuth;}
    void setAzimuth(float value){this->azimuth = value;}

    float getX(){return this->x;}
    void setX(float value){this->x = value;}

    float getY(){return this->y;}
    void setY(float value){this->y = value;}

    float getCourse(){return this->course;}
    void setCourse(float value){this->course = value;}

    float getVelocity(){return this->velocity;}
    void setVelocity(float value){this->velocity = value;}

    void initTarget();
};

#endif // TARGET_H
