//
// Prescription+CoreDataProperties.h
// CoreDataEntites
//
//  Created by Student on 07/03/16.
//  Copyright © 2016 Student. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Prescription.h"

NS_ASSUME_NONNULL_BEGIN

@interface Prescription (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *prescriptionName;
@property (nullable, nonatomic, retain) NSString *prescriptionInstruction;
@property (nullable, nonatomic, retain) Patient *patient;

@end

NS_ASSUME_NONNULL_END
