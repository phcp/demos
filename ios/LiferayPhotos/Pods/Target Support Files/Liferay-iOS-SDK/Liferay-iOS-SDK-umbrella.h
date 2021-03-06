#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LRBasicAuthentication.h"
#import "LRCookieAuthentication.h"
#import "LRAuthentication.h"
#import "LRCookieSignIn.h"
#import "LRCredentialStorage.h"
#import "LROAuth2SignIn.h"
#import "LRSignIn.h"
#import "LROAuth2Authentication.h"
#import "LROAuth2AuthorizationFlow.h"
#import "SafariAuthorizationUICoordinator.h"
#import "LRBaseService.h"
#import "LRBatchSession.h"
#import "LRBlockCallback.h"
#import "LRBlockCookieCallback.h"
#import "LRCallback.h"
#import "LRCookieCallback.h"
#import "LRJSONObjectWrapper.h"
#import "LRServiceFactory.h"
#import "LRSession.h"
#import "Macros.h"
#import "LRAuthenticationRefreshFactory.h"
#import "LRAuthenticationRefreshHandler.h"
#import "LRBasicAuthRefreshHandler.h"
#import "LRCookieExpirationHandler.h"
#import "LROAuth2RefreshHandler.h"
#import "LRDownloadDelegate.h"
#import "LRDownloadUtil.h"
#import "LRFileProgressDelegate.h"
#import "LRUploadData.h"
#import "LRUploadUtil.h"
#import "LRError.h"
#import "LRHttpUtil.h"
#import "LRRedirectDelegate.h"
#import "LRResponseParser.h"
#import "LRAddressService_v62.h"
#import "LRAnnouncementsDeliveryService_v62.h"
#import "LRAnnouncementsEntryService_v62.h"
#import "LRAnnouncementsFlagService_v62.h"
#import "LRAssetCategoryService_v62.h"
#import "LRAssetCategoryPropertyService_v62.h"
#import "LRAssetEntryService_v62.h"
#import "LRAssetTagService_v62.h"
#import "LRAssetTagPropertyService_v62.h"
#import "LRAssetVocabularyService_v62.h"
#import "LRBackgroundTaskService_v62.h"
#import "LRBlogsEntryService_v62.h"
#import "LRBookmarksEntryService_v62.h"
#import "LRBookmarksFolderService_v62.h"
#import "LRClassNameService_v62.h"
#import "LRCompanyService_v62.h"
#import "LRContactService_v62.h"
#import "LRCountryService_v62.h"
#import "LRDDLRecordService_v62.h"
#import "LRDDLRecordSetService_v62.h"
#import "LRDDMStructureService_v62.h"
#import "LRDDMTemplateService_v62.h"
#import "LRDLAppService_v62.h"
#import "LRDLFileEntryService_v62.h"
#import "LRDLFileEntryTypeService_v62.h"
#import "LRDLFileShortcutService_v62.h"
#import "LRDLFileVersionService_v62.h"
#import "LRDLFolderService_v62.h"
#import "LREmailAddressService_v62.h"
#import "LRExpandoColumnService_v62.h"
#import "LRExpandoValueService_v62.h"
#import "LRFlagsEntryService_v62.h"
#import "LRGroupService_v62.h"
#import "LRImageService_v62.h"
#import "LRJournalArticleService_v62.h"
#import "LRJournalFeedService_v62.h"
#import "LRJournalFolderService_v62.h"
#import "LRJournalStructureService_v62.h"
#import "LRJournalTemplateService_v62.h"
#import "LRLayoutService_v62.h"
#import "LRLayoutBranchService_v62.h"
#import "LRLayoutPrototypeService_v62.h"
#import "LRLayoutRevisionService_v62.h"
#import "LRLayoutSetService_v62.h"
#import "LRLayoutSetBranchService_v62.h"
#import "LRLayoutSetPrototypeService_v62.h"
#import "LRListTypeService_v62.h"
#import "LRMBBanService_v62.h"
#import "LRMBCategoryService_v62.h"
#import "LRMBMessageService_v62.h"
#import "LRMBThreadService_v62.h"
#import "LRMDRActionService_v62.h"
#import "LRMDRRuleService_v62.h"
#import "LRMDRRuleGroupService_v62.h"
#import "LRMDRRuleGroupInstanceService_v62.h"
#import "LRMembershipRequestService_v62.h"
#import "LROrganizationService_v62.h"
#import "LROrgLaborService_v62.h"
#import "LRPasswordPolicyService_v62.h"
#import "LRPermissionService_v62.h"
#import "LRPhoneService_v62.h"
#import "LRPluginSettingService_v62.h"
#import "LRPollsQuestionService_v62.h"
#import "LRPollsVoteService_v62.h"
#import "LRPortalService_v62.h"
#import "LRPortletService_v62.h"
#import "LRPortletPreferencesService_v62.h"
#import "LRRatingsEntryService_v62.h"
#import "LRRegionService_v62.h"
#import "LRRepositoryService_v62.h"
#import "LRResourceBlockService_v62.h"
#import "LRResourcePermissionService_v62.h"
#import "LRRoleService_v62.h"
#import "LRSCFrameworkVersionService_v62.h"
#import "LRSCLicenseService_v62.h"
#import "LRSCProductEntryService_v62.h"
#import "LRSCProductVersionService_v62.h"
#import "LRShoppingCategoryService_v62.h"
#import "LRShoppingCouponService_v62.h"
#import "LRShoppingItemService_v62.h"
#import "LRShoppingOrderService_v62.h"
#import "LRSocialActivityService_v62.h"
#import "LRSocialActivitySettingService_v62.h"
#import "LRSocialRequestService_v62.h"
#import "LRStagingService_v62.h"
#import "LRTeamService_v62.h"
#import "LRThemeService_v62.h"
#import "LRTrashEntryService_v62.h"
#import "LRUserService_v62.h"
#import "LRUserGroupService_v62.h"
#import "LRUserGroupGroupRoleService_v62.h"
#import "LRUserGroupRoleService_v62.h"
#import "LRWebsiteService_v62.h"
#import "LRWikiNodeService_v62.h"
#import "LRWikiPageService_v62.h"
#import "LRAddressService_v7.h"
#import "LRAnnouncementsDeliveryService_v7.h"
#import "LRAnnouncementsEntryService_v7.h"
#import "LRAnnouncementsFlagService_v7.h"
#import "LRAppService_v7.h"
#import "LRAssetCategoryService_v7.h"
#import "LRAssetCategoryPropertyService_v7.h"
#import "LRAssetEntryService_v7.h"
#import "LRAssetTagService_v7.h"
#import "LRAssetVocabularyService_v7.h"
#import "LRBackgroundTaskService_v7.h"
#import "LRBlogsEntryService_v7.h"
#import "LRBookmarksEntryService_v7.h"
#import "LRBookmarksFolderService_v7.h"
#import "LRCalendarService_v7.h"
#import "LRCalendarbookingService_v7.h"
#import "LRCalendarnotificationtemplateService_v7.h"
#import "LRCalendarresourceService_v7.h"
#import "LRClassNameService_v7.h"
#import "LRCommentmanagerjsonwsService_v7.h"
#import "LRCompanyService_v7.h"
#import "LRContactService_v7.h"
#import "LRCountryService_v7.h"
#import "LRDDLRecordService_v7.h"
#import "LRDDLRecordSetService_v7.h"
#import "LRDdlrecordversionService_v7.h"
#import "LRDdmdataproviderinstanceService_v7.h"
#import "LRDDMStructureService_v7.h"
#import "LRDdmstructureversionService_v7.h"
#import "LRDDMTemplateService_v7.h"
#import "LRDdmtemplateversionService_v7.h"
#import "LRDLAppService_v7.h"
#import "LRDLFileEntryService_v7.h"
#import "LRDLFileEntryTypeService_v7.h"
#import "LRDLFileShortcutService_v7.h"
#import "LRDLFileVersionService_v7.h"
#import "LRDLFolderService_v7.h"
#import "LRDltrashService_v7.h"
#import "LREmailAddressService_v7.h"
#import "LRExpandoColumnService_v7.h"
#import "LRExpandoValueService_v7.h"
#import "LRExportimportService_v7.h"
#import "LRExportimportconfigurationService_v7.h"
#import "LRFlagsEntryService_v7.h"
#import "LRGroupService_v7.h"
#import "LRImageService_v7.h"
#import "LRJournalArticleService_v7.h"
#import "LRJournalFeedService_v7.h"
#import "LRJournalFolderService_v7.h"
#import "LRKaleodefinitionService_v7.h"
#import "LRLayoutService_v7.h"
#import "LRLayoutBranchService_v7.h"
#import "LRLayoutPrototypeService_v7.h"
#import "LRLayoutRevisionService_v7.h"
#import "LRLayoutSetService_v7.h"
#import "LRLayoutSetBranchService_v7.h"
#import "LRLayoutSetPrototypeService_v7.h"
#import "LRListTypeService_v7.h"
#import "LRMBBanService_v7.h"
#import "LRMBCategoryService_v7.h"
#import "LRMBMessageService_v7.h"
#import "LRMBThreadService_v7.h"
#import "LRMDRActionService_v7.h"
#import "LRMDRRuleService_v7.h"
#import "LRMDRRuleGroupService_v7.h"
#import "LRMDRRuleGroupInstanceService_v7.h"
#import "LRMembershipRequestService_v7.h"
#import "LRMicroblogsentryService_v7.h"
#import "LROrganizationService_v7.h"
#import "LROrgLaborService_v7.h"
#import "LRPasswordPolicyService_v7.h"
#import "LRPermissionService_v7.h"
#import "LRPhoneService_v7.h"
#import "LRPluginSettingService_v7.h"
#import "LRPollsQuestionService_v7.h"
#import "LRPollsVoteService_v7.h"
#import "LRPortalService_v7.h"
#import "LRPortletService_v7.h"
#import "LRPortletPreferencesService_v7.h"
#import "LRRatingsEntryService_v7.h"
#import "LRRegionService_v7.h"
#import "LRRepositoryService_v7.h"
#import "LRResourceBlockService_v7.h"
#import "LRResourcePermissionService_v7.h"
#import "LRRoleService_v7.h"
#import "LRSapentryService_v7.h"
#import "LRShoppingCategoryService_v7.h"
#import "LRShoppingCouponService_v7.h"
#import "LRShoppingItemService_v7.h"
#import "LRShoppingOrderService_v7.h"
#import "LRSocialActivityService_v7.h"
#import "LRSocialActivitySettingService_v7.h"
#import "LRSocialRequestService_v7.h"
#import "LRStagingService_v7.h"
#import "LRTeamService_v7.h"
#import "LRThemeService_v7.h"
#import "LRTrashEntryService_v7.h"
#import "LRUserService_v7.h"
#import "LRUserGroupService_v7.h"
#import "LRUserGroupGroupRoleService_v7.h"
#import "LRUserGroupRoleService_v7.h"
#import "LRWebsiteService_v7.h"
#import "LRWikiNodeService_v7.h"
#import "LRWikiPageService_v7.h"
#import "LRAddressService_v71.h"
#import "LRAnnouncementsDeliveryService_v71.h"
#import "LRAnnouncementsEntryService_v71.h"
#import "LRAnnouncementsFlagService_v71.h"
#import "LRAppService_v71.h"
#import "LRAssetCategoryService_v71.h"
#import "LRAssetCategoryPropertyService_v71.h"
#import "LRAssetEntryService_v71.h"
#import "LRAssetTagService_v71.h"
#import "LRAssetVocabularyService_v71.h"
#import "LRBackgroundTaskService_v71.h"
#import "LRBlogsEntryService_v71.h"
#import "LRBookmarksEntryService_v71.h"
#import "LRBookmarksFolderService_v71.h"
#import "LRCalendarService_v71.h"
#import "LRCalendarbookingService_v71.h"
#import "LRCalendarnotificationtemplateService_v71.h"
#import "LRCalendarresourceService_v71.h"
#import "LRClassNameService_v71.h"
#import "LRCommentmanagerjsonwsService_v71.h"
#import "LRCompanyService_v71.h"
#import "LRContactService_v71.h"
#import "LRCountryService_v71.h"
#import "LRDDLRecordService_v71.h"
#import "LRDDLRecordSetService_v71.h"
#import "LRDdlrecordsetversionService_v71.h"
#import "LRDdlrecordversionService_v71.h"
#import "LRDdmdataproviderinstanceService_v71.h"
#import "LRDdmforminstanceService_v71.h"
#import "LRDdmforminstancerecordService_v71.h"
#import "LRDdmforminstancerecordversionService_v71.h"
#import "LRDdmforminstanceversionService_v71.h"
#import "LRDDMStructureService_v71.h"
#import "LRDdmstructureversionService_v71.h"
#import "LRDDMTemplateService_v71.h"
#import "LRDdmtemplateversionService_v71.h"
#import "LRDLAppService_v71.h"
#import "LRDLFileEntryService_v71.h"
#import "LRDLFileEntryTypeService_v71.h"
#import "LRDLFileShortcutService_v71.h"
#import "LRDLFileVersionService_v71.h"
#import "LRDLFolderService_v71.h"
#import "LRDltrashService_v71.h"
#import "LREmailAddressService_v71.h"
#import "LRExpandoColumnService_v71.h"
#import "LRExpandoValueService_v71.h"
#import "LRExportimportService_v71.h"
#import "LRExportimportconfigurationService_v71.h"
#import "LRFlagsEntryService_v71.h"
#import "LRGroupService_v71.h"
#import "LRImageService_v71.h"
#import "LRJournalArticleService_v71.h"
#import "LRJournalFeedService_v71.h"
#import "LRJournalFolderService_v71.h"
#import "LRKaleodefinitionService_v71.h"
#import "LRLayoutService_v71.h"
#import "LRLayoutBranchService_v71.h"
#import "LRLayoutPrototypeService_v71.h"
#import "LRLayoutRevisionService_v71.h"
#import "LRLayoutSetService_v71.h"
#import "LRLayoutSetBranchService_v71.h"
#import "LRLayoutSetPrototypeService_v71.h"
#import "LRListTypeService_v71.h"
#import "LRMBBanService_v71.h"
#import "LRMBCategoryService_v71.h"
#import "LRMBMessageService_v71.h"
#import "LRMBThreadService_v71.h"
#import "LRMDRActionService_v71.h"
#import "LRMDRRuleService_v71.h"
#import "LRMDRRuleGroupService_v71.h"
#import "LRMDRRuleGroupInstanceService_v71.h"
#import "LRMembershipRequestService_v71.h"
#import "LRMicroblogsentryService_v71.h"
#import "LROrganizationService_v71.h"
#import "LROrgLaborService_v71.h"
#import "LRPasswordPolicyService_v71.h"
#import "LRPermissionService_v71.h"
#import "LRPhoneService_v71.h"
#import "LRPluginSettingService_v71.h"
#import "LRPollsQuestionService_v71.h"
#import "LRPollsVoteService_v71.h"
#import "LRPortalService_v71.h"
#import "LRPortletPreferencesService_v71.h"
#import "LRRatingsEntryService_v71.h"
#import "LRRegionService_v71.h"
#import "LRRepositoryService_v71.h"
#import "LRResourceBlockService_v71.h"
#import "LRResourcePermissionService_v71.h"
#import "LRRoleService_v71.h"
#import "LRSapentryService_v71.h"
#import "LRShoppingCategoryService_v71.h"
#import "LRShoppingCouponService_v71.h"
#import "LRShoppingItemService_v71.h"
#import "LRShoppingOrderService_v71.h"
#import "LRSocialActivityService_v71.h"
#import "LRSocialActivitySettingService_v71.h"
#import "LRSocialRequestService_v71.h"
#import "LRStagingService_v71.h"
#import "LRTeamService_v71.h"
#import "LRThemeService_v71.h"
#import "LRTrashEntryService_v71.h"
#import "LRUserService_v71.h"
#import "LRUserGroupService_v71.h"
#import "LRUserGroupGroupRoleService_v71.h"
#import "LRUserGroupRoleService_v71.h"
#import "LRWebsiteService_v71.h"
#import "LRWikiNodeService_v71.h"
#import "LRWikiPageService_v71.h"
#import "LRLocalizationUtil.h"
#import "LRPortalVersionUtil.h"
#import "LRPortraitUtil.h"
#import "LRValidator.h"

FOUNDATION_EXPORT double LRMobileSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char LRMobileSDKVersionString[];

