/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <texts/TypedTextDatabase.hpp>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) //Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    0x50, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x3a, 0x20, 0x4d, 0x65, 0x64, 0x69, 0x61, 0x20, 0x42, 0x6f, 0x78, 0xa, 0xa, 0x4d, 0x65, 0x6d, 0x62, 0x65, 0x72, 0x73, 0x3a, 0x20, 0xa, 0x36, 0x31, 0x30, 0x31, 0x30, 0x30, 0x32, 0x33, 0x20, 0x4b, 0x6f, 0x72, 0x6e, 0x74, 0x61, 0x77, 0x61, 0x74, 0xa, 0x36, 0x31, 0x30, 0x31, 0x30, 0x30, 0x39, 0x32, 0x20, 0x4b, 0x69, 0x74, 0x74, 0x69, 0x73, 0x61, 0x6b, 0xa, 0x36, 0x31, 0x30, 0x31, 0x30, 0x34, 0x30, 0x32, 0x20, 0x54, 0x61, 0x6e, 0x74, 0x61, 0x74, 0x6f, 0x72, 0x6e, 0x0, // @0 "Project: Media Box??Members: ?61010023 Korntawat?61010092 Kittisak?61010402 Tantatorn"
    0x4d, 0x65, 0x64, 0x69, 0x61, 0x20, 0x42, 0x6f, 0x78, 0x20, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x20, 0x56, 0x31, 0x2e, 0x30, 0x0, // @86 "Media Box project V1.0"
    0x59, 0x6f, 0x75, 0x72, 0x20, 0x73, 0x63, 0x6f, 0x72, 0x65, 0x20, 0x69, 0x73, 0x20, 0x2, 0x0, // @109 "Your score is <>"
    0x50, 0x6c, 0x61, 0x79, 0x20, 0x3a, 0x20, 0x2, 0x0, // @125 "Play : <>"
    0x53, 0x74, 0x61, 0x67, 0x65, 0x20, 0x2, 0x0, // @134 "Stage <>"
    0x4d, 0x75, 0x73, 0x69, 0x63, 0x20, 0x50, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x0, // @142 "Music Player"
    0x54, 0x68, 0x61, 0x6e, 0x6b, 0x20, 0x59, 0x6f, 0x75, 0x0, // @155 "Thank You"
    0x47, 0x41, 0x4d, 0x45, 0x20, 0x4f, 0x56, 0x45, 0x52, 0x0, // @165 "GAME OVER"
    0x4e, 0x65, 0x77, 0x20, 0x54, 0x65, 0x78, 0x74, 0x0, // @175 "New Text"
    0x4e, 0x6f, 0x20, 0x6d, 0x75, 0x73, 0x69, 0x63, 0x0, // @184 "No music"
    0x47, 0x61, 0x6c, 0x6c, 0x65, 0x72, 0x79, 0x0, // @193 "Gallery"
    0x4d, 0x75, 0x73, 0x69, 0x63, 0x0, // @201 "Music"
    0x56, 0x6f, 0x6c, 0x2b, 0x0, // @207 "Vol+"
    0x56, 0x6f, 0x6c, 0x2d, 0x0, // @212 "Vol-"
    0x20, 0x20, 0x20, 0x3c, 0x0, // @217 "   <"
    0x47, 0x61, 0x6d, 0x65, 0x0, // @222 "Game"
    0x30, 0x30, 0x30, 0x0, // @227 "000"
    0x3e, 0x0 // @231 ">"
};
TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] =
{
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            //dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            //compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}

