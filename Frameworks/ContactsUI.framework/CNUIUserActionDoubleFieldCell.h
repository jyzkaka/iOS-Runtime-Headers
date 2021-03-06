/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIUserActionDoubleFieldCell : UITableViewCell {
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleToTitleLabelYConstraint;
    NSLayoutConstraint * _subtitleYToBottomConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelYConstraint;
}

@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *subtitleToTitleLabelYConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleYToBottomConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelYConstraint;

+ (id)subtitleTextColor;

- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleToTitleLabelYConstraint:(id)arg1;
- (void)setSubtitleYToBottomConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelYConstraint:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleToTitleLabelYConstraint;
- (id)subtitleYToBottomConstraint;
- (id)titleLabel;
- (id)titleLabelYConstraint;
- (void)updateFonts;
- (void)viewWillMoveToSuperview:(id)arg1;

@end
