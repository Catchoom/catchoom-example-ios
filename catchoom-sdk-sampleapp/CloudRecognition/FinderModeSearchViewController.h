//
// © Catchoom Technologies S.L.
// Licensed under the MIT license.
// http://github.com/Catchoom/catchoom-example-ios/blob/master/LICENSE
//  All warranties and liabilities are disclaimed.
//


#import <UIKit/UIKit.h>

@interface FinderModeSearchViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *_preview;
@property (weak, nonatomic) IBOutlet UIView *_initialOverlay;
@property (weak, nonatomic) IBOutlet UIView *_scanOverlay;

@property (weak, nonatomic) IBOutlet UIView *_resultOverlay;
@property (weak, nonatomic) IBOutlet UIImageView *_itemThumbnailView;
@property (weak, nonatomic) IBOutlet UILabel *_itemNameLabel;
@property (weak, nonatomic) IBOutlet UIView *_contentBox;

- (IBAction)startScanPressed:(id)sender;
- (IBAction)stopScanPressed:(id)sender;

- (IBAction)donePressed:(id)sender;
- (IBAction)contentPressed:(id)sender;
- (IBAction)contentReleasedInside:(id)sender;
- (IBAction)contentReleasedOutside:(id)sender;

@end
