/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2ChildSA : NSObject {
    unsigned int  _childID;
    NEIKEv2ChildSAProposal * _chosenProposal;
    NEIKEv2ChildSAConfiguration * _configuration;
    struct OpaqueSecDHContext { } * _dhContext;
    union { 
        union { 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey256[9]; 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey384[13]; 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey521[19]; 
        } dhECPKey; 
        union { 
            unsigned char dhCurveKey25519[32]; 
        } dhCurveKey; 
    }  _dhECKey;
    NSMutableData * _dhPublicKey;
    unsigned long long  _dhPublicKeySize;
    NSData * _dhRemotePublicKey;
    NSError * _error;
    NEIKEv2IKESA * _ikeSA;
    unsigned short  _incomingDatabaseReqID;
    NSMutableData * _incomingEncryptionKey;
    NSMutableData * _incomingIntegrityKey;
    NEIKEv2ChildSAProposal * _initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal * _initiatorRekeyProposal;
    bool  _isFirstChild;
    bool  _isInitiator;
    NSData * _localNonce;
    NSArray * _localTrafficSelectors;
    unsigned short  _outgoingDatabaseReqID;
    NSMutableData * _outgoingEncryptionKey;
    NSMutableData * _outgoingIntegrityKey;
    NEIKEv2ESPSPI * _rekeyedRemoteSPI;
    NEIKEv2ESPSPI * _rekeyedSPI;
    NSData * _remoteNonce;
    NSArray * _remoteTrafficSelectors;
    NEIKEv2ChildSAProposal * _responderRekeyProposal;
    bool  _sequencePerTrafficClassSupported;
    bool  _shouldSendStateUpdate;
    unsigned long long  _state;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
