/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _dbQueue;
    struct sqlite3_stmt { } * _deleteStatement;
    int  _externallyChangedBroadcasts;
    struct sqlite3_stmt { } * _insertDiffStatement;
    struct sqlite3_stmt { } * _insertStatement;
    BOOL  _isInTransaction;
    NSArray * _libraryHashes;
    NSMutableDictionary * _manifest;
    BOOL  _needsMoreLocalNotifyDatabaseChanged;
    BOOL  _passDBIsAvailable;
    NSMutableArray * _passDescriptions;
    struct sqlite3_stmt { } * _selectDeletePendingStatement;
    struct sqlite3_stmt { } * _selectPassDataStatement;
    struct sqlite3_stmt { } * _selectPassDiffStatement;
    struct sqlite3_stmt { } * _selectPreferredAIDStatement;
    BOOL  _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } * _updateDeletePendingStatment;
    struct sqlite3_stmt { } * _updatePreferredAIDStatement;
}

@property (readonly) struct sqlite3 { }*database;
@property (readonly) struct sqlite3_stmt { }*deleteStatement;
@property (readonly) struct sqlite3_stmt { }*insertDiffStatement;
@property (readonly) struct sqlite3_stmt { }*insertStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (nonatomic, readonly) unsigned int numberOfPasses;
@property (nonatomic) BOOL passDBIsAvailable;
@property (readonly) NSArray *passDescriptions;
@property (readonly) struct sqlite3_stmt { }*selectPassDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDiffStatement;
@property (readonly) struct sqlite3_stmt { }*selectPreferredAIDStatement;
@property (readonly) struct sqlite3_stmt { }*updateDeletePendingStatement;
@property (readonly) struct sqlite3_stmt { }*updatePreferredAIDStatement;

+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (unsigned int)latestWatchOSMajorVersion;
+ (int)maxDatabaseVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_attemptDatabaseOpen;
- (int)_databaseVersionExists:(BOOL*)arg1 valid:(BOOL*)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_decodeObjectOfClasses:(id)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (void)_enumerateAllPassesForMigration:(id /* block */)arg1;
- (BOOL)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id /* block */)arg2;
- (BOOL)_getDeletePendingForUniqueID:(id)arg1;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id*)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_handleHasMigrationDataSource;
- (void)_insertDatabaseVersionRow:(int)arg1;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned int)arg1;
- (void)_loadInitialManifestLocked;
- (BOOL)_migrateDatabase:(id /* block */)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1 firstUnlock:(BOOL)arg2;
- (void)_notifyForFirstUnlock;
- (BOOL)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id /* block */)arg1;
- (BOOL)_preconditionsMetForDatabaseOpen;
- (BOOL)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1 wasUpdate:(BOOL*)arg2;
- (BOOL)_updateCompleteHashesDuringMigration:(id)arg1;
- (void)_updateDatabaseVersionRow:(int)arg1;
- (BOOL)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (BOOL)_updateDevicePaymentApplicationsDuringMigration:(id)arg1;
- (BOOL)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (BOOL)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (BOOL)_updateHasStoredValueDuringMigration:(id)arg1;
- (BOOL)_updateHasUserSelectablePaymentApplications:(id)arg1;
- (BOOL)_updateIngestedDatesDuringMigration:(id)arg1;
- (BOOL)_updateNFCPayloadDuringMigration:(id)arg1;
- (BOOL)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (BOOL)_updateSettingsDuringMigration:(id)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(id /* block */)arg1;
- (void)enumerateAllPassesWithBlock:(id /* block */)arg1;
- (id)filteredPassesUsingPassDescriptionPredicate:(id)arg1;
- (BOOL)hasPassesMatchingPassDescriptionPredicate:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (id)libraryHash;
- (id)libraryHashForWatchOSMajorVersion:(unsigned int)arg1;
- (id)manifestHashes;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned int)arg1;
- (unsigned int)numberOfPasses;
- (BOOL)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (struct sqlite3_stmt { }*)selectDeletePendingStatement;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (struct sqlite3_stmt { }*)selectPreferredAIDStatement;
- (void)setDeletePending:(BOOL)arg1 forUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(BOOL)arg1;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;
- (struct sqlite3_stmt { }*)updatePreferredAIDStatement;

@end
