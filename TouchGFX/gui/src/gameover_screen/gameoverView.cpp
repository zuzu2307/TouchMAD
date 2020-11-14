#include <gui/gameover_screen/gameoverView.hpp>

gameoverView::gameoverView()
{

}

void gameoverView::setupScreen()
{
    gameoverViewBase::setupScreen();
	Unicode::snprintf(scoreBuffer, SCORE_SIZE, "%d", 10*pong_score);
	score.invalidate();
}

void gameoverView::tearDownScreen()
{
    gameoverViewBase::tearDownScreen();
}
