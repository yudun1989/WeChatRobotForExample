//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMapView.h"

@interface QMapView (Private)
- (void)annotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)annotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)didDeselectAnnotationView:(id)arg1;
- (void)didSelectAnnotationView:(id)arg1;
- (CDStruct_90e2a262)QMapRectFromCGRect:(struct CGRect)arg1;
- (struct CGRect)CGRectFromQMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_c3b9c2ee)QMapPointFromCGPoint:(struct CGPoint)arg1;
- (struct CGPoint)CGPointFromQMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_90e2a262)regionFromRect:(struct CGRect)arg1;
- (struct CGRect)rectFromRegion:(CDStruct_90e2a262)arg1;
- (struct CGRect)rectFromMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)mapRectFromRect:(struct CGRect)arg1;
- (struct CGPoint)pointFromCoordinate:(CDStruct_c3b9c2ee)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (CDStruct_c3b9c2ee)coordinateFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromCoordinate:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)pointFromMapPoint:(CDStruct_c3b9c2ee)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (CDStruct_c3b9c2ee)mapPointFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromMapPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGAffineTransform)level20Transform;
- (double)ratioCurrentTo20Double;
- (double)ratio20ToCurrent;
- (double)animationDurationOfContainerBoundsProperty;
- (id)container;
@end

