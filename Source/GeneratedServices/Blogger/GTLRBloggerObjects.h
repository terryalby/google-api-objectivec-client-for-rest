// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Blogger API (blogger/v3)
// Description:
//   API for access to the data within Blogger.
// Documentation:
//   https://developers.google.com/blogger/docs/3.0/getting_started

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRBlogger_Blog;
@class GTLRBlogger_Blog_Locale;
@class GTLRBlogger_Blog_Pages;
@class GTLRBlogger_Blog_Posts;
@class GTLRBlogger_BlogPerUserInfo;
@class GTLRBlogger_BlogUserInfo;
@class GTLRBlogger_Comment;
@class GTLRBlogger_Comment_Author;
@class GTLRBlogger_Comment_Author_Image;
@class GTLRBlogger_Comment_Blog;
@class GTLRBlogger_Comment_InReplyTo;
@class GTLRBlogger_Comment_Post;
@class GTLRBlogger_Page;
@class GTLRBlogger_Page_Author;
@class GTLRBlogger_Page_Author_Image;
@class GTLRBlogger_Page_Blog;
@class GTLRBlogger_Pageviews_Counts_Item;
@class GTLRBlogger_Post;
@class GTLRBlogger_Post_Author;
@class GTLRBlogger_Post_Author_Image;
@class GTLRBlogger_Post_Blog;
@class GTLRBlogger_Post_Images_Item;
@class GTLRBlogger_Post_Location;
@class GTLRBlogger_Post_Replies;
@class GTLRBlogger_PostPerUserInfo;
@class GTLRBlogger_PostUserInfo;
@class GTLRBlogger_User_Blogs;
@class GTLRBlogger_User_Locale;

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRBlogger_Blog
 */
@interface GTLRBlogger_Blog : GTLRObject

/** The JSON custom meta-data for the Blog */
@property(nonatomic, copy, nullable) NSString *customMetaData;

/**
 *  The description of this blog. This is displayed underneath the title.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The identifier for this resource.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The kind of this entry. Always blogger#blog */
@property(nonatomic, copy, nullable) NSString *kind;

/** The locale this Blog is set to. */
@property(nonatomic, strong, nullable) GTLRBlogger_Blog_Locale *locale;

/** The name of this blog. This is displayed as the title. */
@property(nonatomic, copy, nullable) NSString *name;

/** The container of pages in this blog. */
@property(nonatomic, strong, nullable) GTLRBlogger_Blog_Pages *pages;

/** The container of posts in this blog. */
@property(nonatomic, strong, nullable) GTLRBlogger_Blog_Posts *posts;

/** RFC 3339 date-time when this blog was published. */
@property(nonatomic, strong, nullable) GTLRDateTime *published;

/** The API REST URL to fetch this resource from. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** The status of the blog. */
@property(nonatomic, copy, nullable) NSString *status;

/** RFC 3339 date-time when this blog was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

/** The URL where this blog is published. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The locale this Blog is set to.
 */
@interface GTLRBlogger_Blog_Locale : GTLRObject

/** The country this blog's locale is set to. */
@property(nonatomic, copy, nullable) NSString *country;

/** The language this blog is authored in. */
@property(nonatomic, copy, nullable) NSString *language;

/** The language variant this blog is authored in. */
@property(nonatomic, copy, nullable) NSString *variant;

@end


/**
 *  The container of pages in this blog.
 */
@interface GTLRBlogger_Blog_Pages : GTLRObject

/** The URL of the container for pages in this blog. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The count of pages in this blog.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalItems;

@end


/**
 *  The container of posts in this blog.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRBlogger_Blog_Posts : GTLRCollectionObject

/**
 *  The List of Posts for this Blog.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Post *> *items;

/** The URL of the container for posts in this blog. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The count of posts in this blog.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalItems;

@end


/**
 *  GTLRBlogger_BlogList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRBlogger_BlogList : GTLRCollectionObject

/** Admin level list of blog per-user information */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_BlogUserInfo *> *blogUserInfos;

/**
 *  The list of Blogs this user has Authorship or Admin rights over.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Blog *> *items;

/** The kind of this entity. Always blogger#blogList */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRBlogger_BlogPerUserInfo
 */
@interface GTLRBlogger_BlogPerUserInfo : GTLRObject

/** ID of the Blog resource */
@property(nonatomic, copy, nullable) NSString *blogId;

/**
 *  True if the user has Admin level access to the blog.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasAdminAccess;

/** The kind of this entity. Always blogger#blogPerUserInfo */
@property(nonatomic, copy, nullable) NSString *kind;

/** The Photo Album Key for the user when adding photos to the blog */
@property(nonatomic, copy, nullable) NSString *photosAlbumKey;

/**
 *  Access permissions that the user has for the blog (ADMIN, AUTHOR, or
 *  READER).
 */
@property(nonatomic, copy, nullable) NSString *role;

/** ID of the User */
@property(nonatomic, copy, nullable) NSString *userId;

@end


/**
 *  GTLRBlogger_BlogUserInfo
 */
@interface GTLRBlogger_BlogUserInfo : GTLRObject

/** The Blog resource. */
@property(nonatomic, strong, nullable) GTLRBlogger_Blog *blog;

/** Information about a User for the Blog. */
@property(nonatomic, strong, nullable) GTLRBlogger_BlogPerUserInfo *blogUserInfo;

/** The kind of this entity. Always blogger#blogUserInfo */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRBlogger_Comment
 */
@interface GTLRBlogger_Comment : GTLRObject

/** The author of this Comment. */
@property(nonatomic, strong, nullable) GTLRBlogger_Comment_Author *author;

/** Data about the blog containing this comment. */
@property(nonatomic, strong, nullable) GTLRBlogger_Comment_Blog *blog;

/** The actual content of the comment. May include HTML markup. */
@property(nonatomic, copy, nullable) NSString *content;

/**
 *  The identifier for this resource.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Data about the comment this is in reply to. */
@property(nonatomic, strong, nullable) GTLRBlogger_Comment_InReplyTo *inReplyTo;

/** The kind of this entry. Always blogger#comment */
@property(nonatomic, copy, nullable) NSString *kind;

/** Data about the post containing this comment. */
@property(nonatomic, strong, nullable) GTLRBlogger_Comment_Post *post;

/** RFC 3339 date-time when this comment was published. */
@property(nonatomic, strong, nullable) GTLRDateTime *published;

/** The API REST URL to fetch this resource from. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** The status of the comment (only populated for admin users) */
@property(nonatomic, copy, nullable) NSString *status;

/** RFC 3339 date-time when this comment was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

@end


/**
 *  The author of this Comment.
 */
@interface GTLRBlogger_Comment_Author : GTLRObject

/** The display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The identifier of the Comment creator.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The comment creator's avatar. */
@property(nonatomic, strong, nullable) GTLRBlogger_Comment_Author_Image *image;

/** The URL of the Comment creator's Profile page. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Data about the blog containing this comment.
 */
@interface GTLRBlogger_Comment_Blog : GTLRObject

/**
 *  The identifier of the blog containing this comment.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  Data about the comment this is in reply to.
 */
@interface GTLRBlogger_Comment_InReplyTo : GTLRObject

/**
 *  The identified of the parent of this comment.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  Data about the post containing this comment.
 */
@interface GTLRBlogger_Comment_Post : GTLRObject

/**
 *  The identifier of the post containing this comment.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  The comment creator's avatar.
 */
@interface GTLRBlogger_Comment_Author_Image : GTLRObject

/** The comment creator's avatar URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  GTLRBlogger_CommentList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBlogger_CommentList : GTLRCollectionObject

/** Etag of the response. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The List of Comments for a Post.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Comment *> *items;

/** The kind of this entry. Always blogger#commentList */
@property(nonatomic, copy, nullable) NSString *kind;

/** Pagination token to fetch the next page, if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** Pagination token to fetch the previous page, if one exists. */
@property(nonatomic, copy, nullable) NSString *prevPageToken;

@end


/**
 *  GTLRBlogger_Page
 */
@interface GTLRBlogger_Page : GTLRObject

/** The author of this Page. */
@property(nonatomic, strong, nullable) GTLRBlogger_Page_Author *author;

/** Data about the blog containing this Page. */
@property(nonatomic, strong, nullable) GTLRBlogger_Page_Blog *blog;

/** The body content of this Page, in HTML. */
@property(nonatomic, copy, nullable) NSString *content;

/** Etag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The identifier for this resource.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The kind of this entity. Always blogger#page */
@property(nonatomic, copy, nullable) NSString *kind;

/** RFC 3339 date-time when this Page was published. */
@property(nonatomic, strong, nullable) GTLRDateTime *published;

/** The API REST URL to fetch this resource from. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** The status of the page for admin resources (either LIVE or DRAFT). */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  The title of this entity. This is the name displayed in the Admin user
 *  interface.
 */
@property(nonatomic, copy, nullable) NSString *title;

/** RFC 3339 date-time when this Page was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

/** The URL that this Page is displayed at. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The author of this Page.
 */
@interface GTLRBlogger_Page_Author : GTLRObject

/** The display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The identifier of the Page creator.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The page author's avatar. */
@property(nonatomic, strong, nullable) GTLRBlogger_Page_Author_Image *image;

/** The URL of the Page creator's Profile page. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Data about the blog containing this Page.
 */
@interface GTLRBlogger_Page_Blog : GTLRObject

/**
 *  The identifier of the blog containing this page.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  The page author's avatar.
 */
@interface GTLRBlogger_Page_Author_Image : GTLRObject

/** The page author's avatar URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  GTLRBlogger_PageList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBlogger_PageList : GTLRCollectionObject

/** Etag of the response. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The list of Pages for a Blog.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Page *> *items;

/** The kind of this entity. Always blogger#pageList */
@property(nonatomic, copy, nullable) NSString *kind;

/** Pagination token to fetch the next page, if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRBlogger_Pageviews
 */
@interface GTLRBlogger_Pageviews : GTLRObject

/** Blog Id */
@property(nonatomic, copy, nullable) NSString *blogId;

/** The container of posts in this blog. */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Pageviews_Counts_Item *> *counts;

/** The kind of this entry. Always blogger#page_views */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRBlogger_Pageviews_Counts_Item
 */
@interface GTLRBlogger_Pageviews_Counts_Item : GTLRObject

/**
 *  Count of page views for the given time range
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** Time range the given count applies to */
@property(nonatomic, copy, nullable) NSString *timeRange;

@end


/**
 *  GTLRBlogger_Post
 */
@interface GTLRBlogger_Post : GTLRObject

/** The author of this Post. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post_Author *author;

/** Data about the blog containing this Post. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post_Blog *blog;

/** The content of the Post. May contain HTML markup. */
@property(nonatomic, copy, nullable) NSString *content;

/** The JSON meta-data for the Post. */
@property(nonatomic, copy, nullable) NSString *customMetaData;

/** Etag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The identifier of this Post.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Display image for the Post. */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Post_Images_Item *> *images;

/** The kind of this entity. Always blogger#post */
@property(nonatomic, copy, nullable) NSString *kind;

/** The list of labels this Post was tagged with. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *labels;

/** The location for geotagged posts. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post_Location *location;

/** RFC 3339 date-time when this Post was published. */
@property(nonatomic, strong, nullable) GTLRDateTime *published;

/** Comment control and display setting for readers of this post. */
@property(nonatomic, copy, nullable) NSString *readerComments;

/** The container of comments on this Post. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post_Replies *replies;

/** The API REST URL to fetch this resource from. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** Status of the post. Only set for admin-level requests */
@property(nonatomic, copy, nullable) NSString *status;

/** The title of the Post. */
@property(nonatomic, copy, nullable) NSString *title;

/** The title link URL, similar to atom's related link. */
@property(nonatomic, copy, nullable) NSString *titleLink;

/** RFC 3339 date-time when this Post was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

/** The URL where this Post is displayed. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The author of this Post.
 */
@interface GTLRBlogger_Post_Author : GTLRObject

/** The display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The identifier of the Post creator.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The Post author's avatar. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post_Author_Image *image;

/** The URL of the Post creator's Profile page. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Data about the blog containing this Post.
 */
@interface GTLRBlogger_Post_Blog : GTLRObject

/**
 *  The identifier of the Blog that contains this Post.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  GTLRBlogger_Post_Images_Item
 */
@interface GTLRBlogger_Post_Images_Item : GTLRObject

@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The location for geotagged posts.
 */
@interface GTLRBlogger_Post_Location : GTLRObject

/**
 *  Location's latitude.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lat;

/**
 *  Location's longitude.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lng;

/** Location name. */
@property(nonatomic, copy, nullable) NSString *name;

/** Location's viewport span. Can be used when rendering a map preview. */
@property(nonatomic, copy, nullable) NSString *span;

@end


/**
 *  The container of comments on this Post.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRBlogger_Post_Replies : GTLRCollectionObject

/**
 *  The List of Comments for this Post.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Comment *> *items;

/** The URL of the comments on this post. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The count of comments on this post.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalItems;

@end


/**
 *  The Post author's avatar.
 */
@interface GTLRBlogger_Post_Author_Image : GTLRObject

/** The Post author's avatar URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  GTLRBlogger_PostList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBlogger_PostList : GTLRCollectionObject

/** Etag of the response. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The list of Posts for this Blog.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_Post *> *items;

/** The kind of this entity. Always blogger#postList */
@property(nonatomic, copy, nullable) NSString *kind;

/** Pagination token to fetch the next page, if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRBlogger_PostPerUserInfo
 */
@interface GTLRBlogger_PostPerUserInfo : GTLRObject

/** ID of the Blog that the post resource belongs to. */
@property(nonatomic, copy, nullable) NSString *blogId;

/**
 *  True if the user has Author level access to the post.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasEditAccess;

/** The kind of this entity. Always blogger#postPerUserInfo */
@property(nonatomic, copy, nullable) NSString *kind;

/** ID of the Post resource. */
@property(nonatomic, copy, nullable) NSString *postId;

/** ID of the User. */
@property(nonatomic, copy, nullable) NSString *userId;

@end


/**
 *  GTLRBlogger_PostUserInfo
 */
@interface GTLRBlogger_PostUserInfo : GTLRObject

/** The kind of this entity. Always blogger#postUserInfo */
@property(nonatomic, copy, nullable) NSString *kind;

/** The Post resource. */
@property(nonatomic, strong, nullable) GTLRBlogger_Post *post;

/** Information about a User for the Post. */
@property(nonatomic, strong, nullable) GTLRBlogger_PostPerUserInfo *postUserInfo;

@end


/**
 *  GTLRBlogger_PostUserInfosList
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBlogger_PostUserInfosList : GTLRCollectionObject

/**
 *  The list of Posts with User information for the post, for this Blog.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBlogger_PostUserInfo *> *items;

/** The kind of this entity. Always blogger#postList */
@property(nonatomic, copy, nullable) NSString *kind;

/** Pagination token to fetch the next page, if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRBlogger_User
 */
@interface GTLRBlogger_User : GTLRObject

/** Profile summary information. */
@property(nonatomic, copy, nullable) NSString *about;

/** The container of blogs for this user. */
@property(nonatomic, strong, nullable) GTLRBlogger_User_Blogs *blogs;

/** The timestamp of when this profile was created, in seconds since epoch. */
@property(nonatomic, strong, nullable) GTLRDateTime *created;

/** The display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The identifier for this User.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The kind of this entity. Always blogger#user */
@property(nonatomic, copy, nullable) NSString *kind;

/** This user's locale */
@property(nonatomic, strong, nullable) GTLRBlogger_User_Locale *locale;

/** The API REST URL to fetch this resource from. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** The user's profile page. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The container of blogs for this user.
 */
@interface GTLRBlogger_User_Blogs : GTLRObject

/** The URL of the Blogs for this user. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  This user's locale
 */
@interface GTLRBlogger_User_Locale : GTLRObject

/** The user's country setting. */
@property(nonatomic, copy, nullable) NSString *country;

/** The user's language setting. */
@property(nonatomic, copy, nullable) NSString *language;

/** The user's language variant setting. */
@property(nonatomic, copy, nullable) NSString *variant;

@end

NS_ASSUME_NONNULL_END
