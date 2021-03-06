// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Source Repositories API (sourcerepo/v1)
// Description:
//   Access source code repositories hosted by Google.
// Documentation:
//   https://cloud.google.com/source-repositories/docs/apis

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudSourceRepositories_Repo;
@class GTLRCloudSourceRepositories_SetIamPolicyRequest;
@class GTLRCloudSourceRepositories_TestIamPermissionsRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Source Repositories query classes.
 */
@interface GTLRCloudSourceRepositoriesQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a repo in the given project with the given name.
 *  If the named repository already exists, `CreateRepo` returns
 *  `ALREADY_EXISTS`.
 *
 *  Method: sourcerepo.projects.repos.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposCreate : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposCreateWithObject:parent:]

/**
 *  The project in which to create the repo. Values are of the form
 *  `projects/<project>`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_Repo.
 *
 *  Creates a repo in the given project with the given name.
 *  If the named repository already exists, `CreateRepo` returns
 *  `ALREADY_EXISTS`.
 *
 *  @param object The @c GTLRCloudSourceRepositories_Repo to include in the
 *    query.
 *  @param parent The project in which to create the repo. Values are of the
 *    form
 *    `projects/<project>`.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudSourceRepositories_Repo *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a repo.
 *
 *  Method: sourcerepo.projects.repos.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposDelete : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposDeleteWithname:]

/**
 *  The name of the repo to delete. Values are of the form
 *  `projects/<project>/repos/<repo>`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_Empty.
 *
 *  Deletes a repo.
 *
 *  @param name The name of the repo to delete. Values are of the form
 *    `projects/<project>/repos/<repo>`.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns information about a repo.
 *
 *  Method: sourcerepo.projects.repos.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposGet : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposGetWithname:]

/**
 *  The name of the requested repository. Values are of the form
 *  `projects/<project>/repos/<repo>`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_Repo.
 *
 *  Returns information about a repo.
 *
 *  @param name The name of the requested repository. Values are of the form
 *    `projects/<project>/repos/<repo>`.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: sourcerepo.projects.repos.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposGetIamPolicy : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposGetIamPolicyWithresource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Returns all repos belonging to a project. The sizes of the repos are
 *  not set by ListRepos. To get the size of a repo, use GetRepo.
 *
 *  Method: sourcerepo.projects.repos.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposList : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposListWithname:]

/**
 *  The project ID whose repos should be listed. Values are of the form
 *  `projects/<project>`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Maximum number of repositories to return; between 1 and 500.
 *  If not set or zero, defaults to 100 at the server.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Resume listing repositories where a prior ListReposResponse
 *  left off. This is an opaque token that must be obtained from
 *  a recent, prior ListReposResponse's next_page_token field.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_ListReposResponse.
 *
 *  Returns all repos belonging to a project. The sizes of the repos are
 *  not set by ListRepos. To get the size of a repo, use GetRepo.
 *
 *  @param name The project ID whose repos should be listed. Values are of the
 *    form
 *    `projects/<project>`.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: sourcerepo.projects.repos.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposSetIamPolicy : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudSourceRepositories_SetIamPolicyRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudSourceRepositories_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *
 *  Method: sourcerepo.projects.repos.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly
 *    @c kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite
 */
@interface GTLRCloudSourceRepositoriesQuery_ProjectsReposTestIamPermissions : GTLRCloudSourceRepositoriesQuery
// Previous library name was
//   +[GTLQueryCloudSourceRepositories queryForProjectsReposTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudSourceRepositories_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *
 *  @param object The @c GTLRCloudSourceRepositories_TestIamPermissionsRequest
 *    to include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudSourceRepositoriesQuery_ProjectsReposTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudSourceRepositories_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END
