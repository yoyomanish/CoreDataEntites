//
//  Patient+CoreDataProperties.h
//  CoreDataEntites
//
//  Created by Student on 07/03/16.
//  Copyright © 2016 Student. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Patient.h"

NS_ASSUME_NONNULL_BEGIN

@interface Patient (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *patientFirstName;
@property (nullable, nonatomic, retain) NSString *patientLastName;
@property (nullable, nonatomic, retain) NSSet<Prescription *> *prescriptions;

@end

@interface Patient (CoreDataGeneratedAccessors)

- (void)addPrescriptionsObject:(Prescription *)value;
- (void)removePrescriptionsObject:(Prescription *)value;
- (void)addPrescriptions:(NSSet<Prescription *> *)values;
- (void)removePrescriptions:(NSSet<Prescription *> *)values;

@end

NS_ASSUME_NONNULL_END
