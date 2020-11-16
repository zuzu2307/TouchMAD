/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/gameover_screen/gameoverViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

gameoverViewBase::gameoverViewBase() :
    buttonCallback(this, &gameoverViewBase::buttonCallbackHandler)
{

    bg.setPosition(0, 0, 480, 272);
    bg.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    buttonWithLabel1.setXY(0, 0);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID21));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setAction(buttonCallback);

    gameover_text.setXY(179, 124);
    gameover_text.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 0, 0));
    gameover_text.setLinespacing(0);
    gameover_text.setTypedText(touchgfx::TypedText(T_SINGLEUSEID33));

    score.setXY(166, 149);
    score.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 173, 173));
    score.setLinespacing(0);
    Unicode::snprintf(scoreBuffer, SCORE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID35).getText());
    score.setWildcard(scoreBuffer);
    score.resizeToCurrentText();
    score.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));

    button1.setXY(569, -60);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));

    add(bg);
    add(buttonWithLabel1);
    add(gameover_text);
    add(score);
    add(button1);
}

void gameoverViewBase::setupScreen()
{

}

void gameoverViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction1
        //When buttonWithLabel1 clicked change screen to Pong
        //Go to Pong with no screen transition
        application().gotoPongScreenNoTransition();
    }
}
