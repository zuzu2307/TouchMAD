#ifndef PONGVIEW_HPP
#define PONGVIEW_HPP

#include <main.h>
#include <gui_generated/pong_screen/PongViewBase.hpp>
#include <gui/pong_screen/PongPresenter.hpp>
#include <touchgfx/Color.hpp>

extern int pong_score;

class PongView : public PongViewBase
{
public:
    PongView();
    virtual ~PongView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void move_left();
    virtual void move_right();
    virtual void handleTickEvent();
protected:
    void move_ball();
    int check_collision(); // 1 collide with paddle 1 , 2 collide with paddle 2
    int check_moving(); // Left(1), Right(2), Mid(0)
    int check_gameover();
    void updateTxt(int);
private:
    int ball_vertical_direction = 1; // 0 down 1 up
    int ball_horizontal_direction = 1; // 0 mid 1 left 2 right
    int ball_speed = 4;
    int margin = 40;
    int tick = 0;
    int pos;
    int sc = 0;
    int collide_count = 0;

};

#endif // PONGVIEW_HPP
