//
//  ArqVerifyCommand.h
//  arq_restore
//
//  Created by Stefan Reitshamer on 6/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class S3Service;

@interface ArqVerifyCommand : NSObject {
    NSString *accessKey;
    NSString *secretKey;
    NSString *encryptionPassword;
    S3Service *s3;
}
- (id)initWithAccessKey:(NSString *)theAccessKey secretKey:(NSString *)theSecretKey encryptionPassword:(NSString *)theEncryptionPassword;
- (BOOL)verifyAll:(NSError **)error;
- (BOOL)verifyS3BucketName:(NSString *)s3BucketName error:(NSError **)error;
- (BOOL)verifyS3BucketName:(NSString *)s3BucketName computerUUID:(NSString *)computerUUID error:(NSError **)error;
- (BOOL)verifyS3BucketName:(NSString *)s3BucketName computerUUID:(NSString *)computerUUID bucketUUID:(NSString *)bucketUUID error:(NSError **)error;
@end
