#import <UIKit/UIKit.h>

@class IBPCollectionViewLayoutBuilderResult;
@class IBPNSCollectionLayoutGroup;
@class IBPNSCollectionLayoutItem;

NS_ASSUME_NONNULL_BEGIN

@interface IBPCollectionViewLayoutBuilderState : NSObject

@property (nonatomic) UICollectionViewScrollDirection scrollDirection;
@property (nonatomic) CGRect rootGroupFrame;
@property (nonatomic) CGRect currentItemFrame;
@property (nonatomic) NSMutableArray<IBPCollectionViewLayoutBuilderResult *> *itemResults;

@end

NS_ASSUME_NONNULL_END
