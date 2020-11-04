#include <gui/pong_screen/PongView.hpp>

#include <touchgfx/lcd/LCD.hpp>

PongView::PongView()
{

}

void PongView::setupScreen()
{
    PongViewBase::setupScreen();
}

void PongView::tearDownScreen()
{
    PongViewBase::tearDownScreen();
}

void PongView::move_ball(){

	ball.setY(4);
}

void PongView::move_left(){

	paddle1.setColor( touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	paddle1.invalidate();
	paddle1.setX(paddle1.getX()-20);
	paddle1.setColor( touchgfx::Color::getColorFrom24BitRGB(6, 128, 255));
	paddle1.invalidate();
}

void PongView::move_right(){

	paddle1.setColor( touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	paddle1.invalidate();
	paddle1.setX(paddle1.getX()+20);
	paddle1.setColor( touchgfx::Color::getColorFrom24BitRGB(6, 128, 255));
	paddle1.invalidate();
}
