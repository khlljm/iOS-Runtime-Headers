/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetColor : TSSSpecColor {
    TSUColor * _color;
    BOOL  _unset;
}

+ (id)newFromArchive:(const struct SpecSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; bool x6; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; bool x6; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initSpecSetColorWithArchive:(const struct SpecSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; bool x6; }*)arg1 unarchiver:(id)arg2;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUnsetSpec;
- (id)operationPropertyName;
- (void)saveSpecSetColorToArchive:(struct SpecSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; bool x6; }*)arg1 archiver:(id)arg2;

@end