/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/gallery_screen/galleryViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

galleryViewBase::galleryViewBase() :
    buttonCallback(this, &galleryViewBase::buttonCallbackHandler)
{

    bg.setPosition(0, 0, 480, 272);
    bg.setColor(touchgfx::Color::getColorFrom24BitRGB(74, 94, 92));

    Back_Button.setXY(0, 0);
    Back_Button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_32_ID));
    Back_Button.setIconXY(19, 15);
    Back_Button.setAction(buttonCallback);

    image1.setXY(90, 52);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_COOLTEAM_ID));

    textArea1.setXY(188, 18);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(14, 255, 120));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));

    add(bg);
    add(Back_Button);
    add(image1);
    add(textArea1);
}

void galleryViewBase::setupScreen()
{

}

void galleryViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Back_Button)
    {
        //back
        //When Back_Button clicked change screen to screen
        //Go to screen with screen transition towards East
        application().gotoscreenScreenCoverTransitionEast();
    }
}
