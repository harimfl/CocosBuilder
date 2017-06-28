/*
 * CocosBuilder: http://www.cocosbuilder.com
 *
 * Copyright (c) 2012 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import "cocos2d.h"

typedef enum LocaleStates {
    ENGLISH,
    HINDI,
    GUJARATI,
    MARATHI,
    TELUGU,
    TAMIL,
    URDU,
    BANGLA,
    LOCALE_COUNT
} Locale;

@interface CCBPLabelTTF : CCLabelTTF
{
    CGFloat outlineWidth;
    CGPoint shadowOffsetInPoints;
    ccColor3B shadowColor;
    ccColor3B outlineColor;
    Locale currentLocale;
    NSString* localeString;
    NSMutableDictionary* stringMap;
}
// Add property to maintain backwards compatibility
@property (nonatomic,assign) int alignment;

@property (nonatomic,assign) NSString* localeString;

@property (nonatomic,assign) Locale* currentLocale;

/// -----------------------------------------------------------------------
/// @name Drawing a Shadow
/// -----------------------------------------------------------------------

/** The color of the text shadow. If the color is fully transparent, no shadow will be used. */
@property (nonatomic,assign) ccColor3B shadowColor;

/** The offset of the shadow in points */
@property(nonatomic,readonly) CGPoint shadowOffsetInPoints;

/** The blur radius of the shadow. */
@property (nonatomic,assign) CGFloat shadowBlurRadius;


/// -----------------------------------------------------------------------
/// @name Drawing an Outline
/// -----------------------------------------------------------------------

/** The color of the text's outline.
 @see CCColor */
@property (nonatomic,assign) ccColor3B outlineColor;

/** The width of the text's outline. */
@property (nonatomic,assign) CGFloat outlineWidth;

- (void)changeLocale;
- (void) setString:(NSString*)str;
- (id)init;
@end
