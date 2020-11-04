#ifndef PONGVIEW_HPP
#define PONGVIEW_HPP

#include <gui_generated/pong_screen/PongViewBase.hpp>
#include <gui/pong_screen/PongPresenter.hpp>
#include <touchgfx/Color.hpp>
class PongView : public PongViewBase
{
public:
    PongView();
    virtual ~PongView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void move_ball();
    virtual void move_left();
    virtual void move_right();
protected:
};

#endif // PONGVIEW_HPP
