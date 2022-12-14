/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COMeshElectionRequest : COMeshBaseBallotRequest {
    unsigned short  _listeningPort;
}

@property (nonatomic, readonly) unsigned short listeningPort;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2 listeningPort:(unsigned short)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned short)listeningPort;

@end
