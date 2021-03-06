// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google People API (people/v1)
// Description:
//   Provides access to information about profiles and contacts.
// Documentation:
//   https://developers.google.com/people/

#import "GTLRPeopleServiceQuery.h"

#import "GTLRPeopleServiceObjects.h"

// ----------------------------------------------------------------------------
// Constants

// sortOrder
NSString * const kGTLRPeopleServiceSortOrderFirstNameAscending = @"FIRST_NAME_ASCENDING";
NSString * const kGTLRPeopleServiceSortOrderLastModifiedAscending = @"LAST_MODIFIED_ASCENDING";
NSString * const kGTLRPeopleServiceSortOrderLastNameAscending  = @"LAST_NAME_ASCENDING";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRPeopleServiceQuery

@dynamic fields;

@end

@implementation GTLRPeopleServiceQuery_PeopleConnectionsList

@dynamic pageSize, pageToken, personFields, requestMaskIncludeField,
         requestSyncToken, resourceName, sortOrder, syncToken;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"requestMaskIncludeField" : @"requestMask.includeField" };
}

+ (instancetype)queryWithResourceName:(NSString *)resourceName {
  NSArray *pathParams = @[ @"resourceName" ];
  NSString *pathURITemplate = @"v1/{+resourceName}/connections";
  GTLRPeopleServiceQuery_PeopleConnectionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resourceName = resourceName;
  query.expectedObjectClass = [GTLRPeopleService_ListConnectionsResponse class];
  query.loggingName = @"people.people.connections.list";
  return query;
}

@end

@implementation GTLRPeopleServiceQuery_PeopleGet

@dynamic personFields, requestMaskIncludeField, resourceName;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"requestMaskIncludeField" : @"requestMask.includeField" };
}

+ (instancetype)queryWithResourceName:(NSString *)resourceName {
  NSArray *pathParams = @[ @"resourceName" ];
  NSString *pathURITemplate = @"v1/{+resourceName}";
  GTLRPeopleServiceQuery_PeopleGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resourceName = resourceName;
  query.expectedObjectClass = [GTLRPeopleService_Person class];
  query.loggingName = @"people.people.get";
  return query;
}

@end

@implementation GTLRPeopleServiceQuery_PeopleGetBatchGet

@dynamic personFields, requestMaskIncludeField, resourceNames;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"requestMaskIncludeField" : @"requestMask.includeField" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resourceNames" : [NSString class]
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/people:batchGet";
  GTLRPeopleServiceQuery_PeopleGetBatchGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRPeopleService_GetPeopleResponse class];
  query.loggingName = @"people.people.getBatchGet";
  return query;
}

@end
