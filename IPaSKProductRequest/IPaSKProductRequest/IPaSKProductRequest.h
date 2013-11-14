//
//  IPaSKProductRequest.h
//  IPaStoreKitManager
//
//  Created by IPa Chen on 2013/11/14.
//  Copyright (c) 2013年 AMagicStudio. All rights reserved.
//

@import StoreKit;

@interface IPaSKProductRequest : SKProductsRequest
+(id)StartRequestProductID:(NSString*)productID callback:(void (^)(SKProductsRequest*,SKProductsResponse*))callback;
@end
