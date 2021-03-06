//
//  INEnergyResolutionResult.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(13.0), watchos(6.0))
API_UNAVAILABLE(macosx)
@interface INEnergyResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given energy. The resolvedEnergy can be different than the original energy. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedEnergy:(NSMeasurement<NSUnitEnergy *> *)resolvedEnergy NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided energy.
+ (instancetype)disambiguationWithEnergyToDisambiguate:(NSArray<NSMeasurement<NSUnitEnergy *> *> *)energyToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the energy with which the user wants to continue.
+ (instancetype)confirmationRequiredWithEnergyToConfirm:(nullable NSMeasurement<NSUnitEnergy *> *)energyToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END
