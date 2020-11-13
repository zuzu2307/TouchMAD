/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/music_screen/MusicViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

MusicViewBase::MusicViewBase() :
    buttonCallback(this, &MusicViewBase::buttonCallbackHandler)
{

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    textArea1.setXY(116, 0);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    Play_Button.setXY(116, 212);
    Play_Button.setVisible(false);
    Play_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_PLAY_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_PLAY_32_ID));
    Play_Button.setIconXY(19, 14);
    Play_Button.setAction(buttonCallback);

    textArea2.setPosition(0, 105, 480, 31);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    Pause_Button.setXY(116, 212);
    Pause_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_PAUSE_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_PAUSE_32_ID));
    Pause_Button.setIconXY(17, 14);
    Pause_Button.setAction(buttonCallback);

    Stop_Button.setXY(180, 212);
    Stop_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_STOP_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_STOP_32_ID));
    Stop_Button.setIconXY(15, 15);

    Prev_Button.setXY(244, 212);
    Prev_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_GO_BACK_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_GO_BACK_32_ID));
    Prev_Button.setIconXY(14, 15);

    Next_Button.setXY(308, 212);
    Next_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_GO_NEXT_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_GO_NEXT_32_ID));
    Next_Button.setIconXY(14, 15);

    VolUp_Button.setXY(420, 212);
    VolUp_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    VolUp_Button.setLabelText(touchgfx::TypedText(T_SINGLEUSEID31));
    VolUp_Button.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    VolUp_Button.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    VolDown_Button.setXY(0, 212);
    VolDown_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID));
    VolDown_Button.setLabelText(touchgfx::TypedText(T_SINGLEUSEID32));
    VolDown_Button.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    VolDown_Button.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    Back_Button.setXY(0, 0);
    Back_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_32_ID));
    Back_Button.setIconXY(19, 15);
    Back_Button.setAction(buttonCallback);

    add(box1);
    add(textArea1);
    add(Play_Button);
    add(textArea2);
    add(Pause_Button);
    add(Stop_Button);
    add(Prev_Button);
    add(Next_Button);
    add(VolUp_Button);
    add(VolDown_Button);
    add(Back_Button);
}

void MusicViewBase::setupScreen()
{

}

void MusicViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Play_Button)
    {
        //Hide_Play
        //When Play_Button clicked hide Play_Button
        //Hide Play_Button
        Play_Button.setVisible(false);
        Play_Button.invalidate();

        //Show_Pause
        //When Play_Button clicked show Pause_Button
        //Show Pause_Button
        Pause_Button.setVisible(true);
        Pause_Button.invalidate();
    }
    else if (&src == &Pause_Button)
    {
        //Hide_Pause
        //When Pause_Button clicked hide Pause_Button
        //Hide Pause_Button
        Pause_Button.setVisible(false);
        Pause_Button.invalidate();

        //Show_Play
        //When Pause_Button clicked show Play_Button
        //Show Play_Button
        Play_Button.setVisible(true);
        Play_Button.invalidate();
    }
    else if (&src == &Back_Button)
    {
        //Interaction1
        //When Back_Button clicked change screen to screen
        //Go to screen with no screen transition
        application().gotoscreenScreenNoTransition();
    }
}
