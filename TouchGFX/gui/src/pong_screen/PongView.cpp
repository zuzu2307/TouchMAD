#include <gui/pong_screen/PongView.hpp>

#include <touchgfx/lcd/LCD.hpp>

PongView::PongView()
{

}

void PongView::setupScreen()
{
    PongViewBase::setupScreen();
    color[0] = 6;
    color[1] = 255;
    color[2] = 141;
}

void PongView::tearDownScreen()
{
    PongViewBase::tearDownScreen();
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

void PongView::handleTickEvent(){
	tick ++;
	move_ball();

}

void PongView::move_ball(){\

	// move ball
	ballPainter.setColor( touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	ball.invalidate();
	ball.setY(ball.getY() +  ball_vertical_direction*ball_speed);
	ball.setX(ball.getX() +  ball_horizontal_direction*ball_speed);
	ballPainter.setColor( touchgfx::Color::getColorFrom24BitRGB(color[0], color[1], color[2]));
	ball.invalidate();


	if(check_collision()==1){
		ball_vertical_direction = -1;

		if(collide_count % 20 == 0){
			ball_speed = ball_speed  + 1;
			sc = sc+1;
			Unicode::snprintf(scoreBuffer, SCORE_SIZE, "%d", sc);
			score.invalidate();

		    color[0] =  ( std::rand() % ( 255 + 1 ) );
		    color[1] =  ( std::rand() % ( 255 + 1 ) );
		    color[2] =  ( std::rand() % ( 255 + 1 ) );
		}
		collide_count ++;

		if(ball_horizontal_direction==1){
			ball_horizontal_direction = 2;
		}
		else if (ball_horizontal_direction==2){
			ball_horizontal_direction = 1;
		}

	}
	else if(check_collision()==2){
		ball_vertical_direction = 1;
	}
	else if(check_collision()==3){
		ball_horizontal_direction = 1;
	}
	else if(check_collision()==4){
		ball_horizontal_direction = -1;
	}
	else if(check_collision()==5){
		pong_score = sc;
		application().gotogameoverScreenNoTransition();
	}

}

int PongView::check_collision(){
	// collide with paddle
	if( ball.getY()+ball.getHeight()-margin<=paddle1.getY()+paddle1.getHeight() && ball.getY()+ball.getHeight()-margin>=paddle1.getY()-paddle1.getHeight() && ball.getX() + margin - 110 >= paddle1.getX() - paddle1.getWidth() && ball.getX() + margin <= paddle1.getX() + paddle1.getWidth()){
		return 1;
	}

	// collide with wall
	if(ball.getY()+ball.getHeight()-margin-20<=0){
		return 2;
	}

	// collide with left wall
	if(ball.getX()+ball.getWidth()-margin-20<=0){
		return 3;
	}

	// collide with right wall
	if(ball.getX()+ball.getWidth() >= 480){
		return 4;
	}

	// collide with bottom
	if(ball.getY() >= 250){
		return 5;
	}

	return 0;
}

int PongView::check_moving(){

	if(tick>5){
		if(paddle1.getX() - pos > 0){
			return 1;
		}
		else if(paddle1.getX() - pos < 0){
			return 2;
		}
		tick = 0;
	}
	else{
		pos = paddle1.getX();
	}

	return 0;

}

