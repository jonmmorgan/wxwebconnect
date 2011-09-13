/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ns_xulrunner_20.idl
 */

#ifndef __gen_ns_xulrunner_20_h__
#define __gen_ns_xulrunner_20_h__


#ifndef __gen_ns_generic_h__
#include "ns_generic.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMConfiguration; /* forward declaration */


/* starting interface:    nsIDOM3Document */
#define NS_IDOM3DOCUMENT_IID_STR "c0568f22-b9d5-427a-9642-b6a797edc5cd"

#define NS_IDOM3DOCUMENT_IID \
  {0xc0568f22, 0xb9d5, 0x427a, \
    { 0x96, 0x42, 0xb6, 0xa7, 0x97, 0xed, 0xc5, 0xcd }}

/**
 * For more information on this interface, please see
 * http://www.w3.org/TR/DOM-Level-3-Core/
 */
class NS_NO_VTABLE nsIDOM3Document : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOM3DOCUMENT_IID)

  /* readonly attribute DOMString inputEncoding; */
  NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) = 0;

  /* readonly attribute DOMString xmlEncoding; */
  NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) = 0;

  /* attribute boolean xmlStandalone; */
  NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) = 0;
  NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) = 0;

  /* attribute DOMString xmlVersion; */
  NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) = 0;
  NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) = 0;

  /* attribute boolean strictErrorChecking; */
  NS_IMETHOD GetStrictErrorChecking(PRBool *aStrictErrorChecking) = 0;
  NS_IMETHOD SetStrictErrorChecking(PRBool aStrictErrorChecking) = 0;

  /* attribute DOMString documentURI; */
  NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) = 0;
  NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) = 0;

  /* nsIDOMNode adoptNode (in nsIDOMNode source)  raises (DOMException); */
  NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode **_retval) = 0;

  /* readonly attribute nsIDOMDOMConfiguration domConfig; */
  NS_IMETHOD GetDomConfig(nsIDOMDOMConfiguration * *aDomConfig) = 0;

  /* void normalizeDocument (); */
  NS_IMETHOD NormalizeDocument(void) = 0;

  /* nsIDOMNode renameNode (in nsIDOMNode node, in DOMString namespaceURI, in DOMString qualifiedName)  raises (DOMException); */
  NS_IMETHOD RenameNode(nsIDOMNode *node, const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMNode **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOM3DOCUMENT \
  NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding); \
  NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding); \
  NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone); \
  NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone); \
  NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion); \
  NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion); \
  NS_IMETHOD GetStrictErrorChecking(PRBool *aStrictErrorChecking); \
  NS_IMETHOD SetStrictErrorChecking(PRBool aStrictErrorChecking); \
  NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI); \
  NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI); \
  NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode **_retval); \
  NS_IMETHOD GetDomConfig(nsIDOMDOMConfiguration * *aDomConfig); \
  NS_IMETHOD NormalizeDocument(void); \
  NS_IMETHOD RenameNode(nsIDOMNode *node, const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMNode **_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOM3DOCUMENT(_to) \
  NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) { return _to GetInputEncoding(aInputEncoding); } \
  NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) { return _to GetXmlEncoding(aXmlEncoding); } \
  NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) { return _to GetXmlStandalone(aXmlStandalone); } \
  NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) { return _to SetXmlStandalone(aXmlStandalone); } \
  NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) { return _to GetXmlVersion(aXmlVersion); } \
  NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) { return _to SetXmlVersion(aXmlVersion); } \
  NS_IMETHOD GetStrictErrorChecking(PRBool *aStrictErrorChecking) { return _to GetStrictErrorChecking(aStrictErrorChecking); } \
  NS_IMETHOD SetStrictErrorChecking(PRBool aStrictErrorChecking) { return _to SetStrictErrorChecking(aStrictErrorChecking); } \
  NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) { return _to GetDocumentURI(aDocumentURI); } \
  NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) { return _to SetDocumentURI(aDocumentURI); } \
  NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode **_retval) { return _to AdoptNode(source, _retval); } \
  NS_IMETHOD GetDomConfig(nsIDOMDOMConfiguration * *aDomConfig) { return _to GetDomConfig(aDomConfig); } \
  NS_IMETHOD NormalizeDocument(void) { return _to NormalizeDocument(); } \
  NS_IMETHOD RenameNode(nsIDOMNode *node, const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMNode **_retval) { return _to RenameNode(node, namespaceURI, qualifiedName, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOM3DOCUMENT(_to) \
  NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputEncoding(aInputEncoding); } \
  NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlEncoding(aXmlEncoding); } \
  NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlStandalone(aXmlStandalone); } \
  NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXmlStandalone(aXmlStandalone); } \
  NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlVersion(aXmlVersion); } \
  NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXmlVersion(aXmlVersion); } \
  NS_IMETHOD GetStrictErrorChecking(PRBool *aStrictErrorChecking) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStrictErrorChecking(aStrictErrorChecking); } \
  NS_IMETHOD SetStrictErrorChecking(PRBool aStrictErrorChecking) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStrictErrorChecking(aStrictErrorChecking); } \
  NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentURI(aDocumentURI); } \
  NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentURI(aDocumentURI); } \
  NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->AdoptNode(source, _retval); } \
  NS_IMETHOD GetDomConfig(nsIDOMDOMConfiguration * *aDomConfig) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomConfig(aDomConfig); } \
  NS_IMETHOD NormalizeDocument(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->NormalizeDocument(); } \
  NS_IMETHOD RenameNode(nsIDOMNode *node, const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMNode **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->RenameNode(node, namespaceURI, qualifiedName, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOM3Document : public nsIDOM3Document
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOM3DOCUMENT

  nsDOM3Document();

private:
  ~nsDOM3Document();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOM3Document, nsIDOM3Document)

nsDOM3Document::nsDOM3Document()
{
  /* member initializers and constructor code */
}

nsDOM3Document::~nsDOM3Document()
{
  /* destructor code */
}

/* readonly attribute DOMString inputEncoding; */
NS_IMETHODIMP nsDOM3Document::GetInputEncoding(nsAString & aInputEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString xmlEncoding; */
NS_IMETHODIMP nsDOM3Document::GetXmlEncoding(nsAString & aXmlEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean xmlStandalone; */
NS_IMETHODIMP nsDOM3Document::GetXmlStandalone(PRBool *aXmlStandalone)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOM3Document::SetXmlStandalone(PRBool aXmlStandalone)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString xmlVersion; */
NS_IMETHODIMP nsDOM3Document::GetXmlVersion(nsAString & aXmlVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOM3Document::SetXmlVersion(const nsAString & aXmlVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean strictErrorChecking; */
NS_IMETHODIMP nsDOM3Document::GetStrictErrorChecking(PRBool *aStrictErrorChecking)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOM3Document::SetStrictErrorChecking(PRBool aStrictErrorChecking)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString documentURI; */
NS_IMETHODIMP nsDOM3Document::GetDocumentURI(nsAString & aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOM3Document::SetDocumentURI(const nsAString & aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode adoptNode (in nsIDOMNode source)  raises (DOMException); */
NS_IMETHODIMP nsDOM3Document::AdoptNode(nsIDOMNode *source, nsIDOMNode **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMConfiguration domConfig; */
NS_IMETHODIMP nsDOM3Document::GetDomConfig(nsIDOMDOMConfiguration * *aDomConfig)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void normalizeDocument (); */
NS_IMETHODIMP nsDOM3Document::NormalizeDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode renameNode (in nsIDOMNode node, in DOMString namespaceURI, in DOMString qualifiedName)  raises (DOMException); */
NS_IMETHODIMP nsDOM3Document::RenameNode(nsIDOMNode *node, const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMNode **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIDOMEventTarget; /* forward declaration */

class nsIDOMOfflineResourceList; /* forward declaration */

class nsIDOMBlob; /* forward declaration */


/* starting interface:    nsIDOMWindow2 */
#define NS_IDOMWINDOW2_IID_STR "efff0d88-3b94-4375-bdeb-676a847ecd7d"

#define NS_IDOMWINDOW2_IID \
  {0xefff0d88, 0x3b94, 0x4375, \
    { 0xbd, 0xeb, 0x67, 0x6a, 0x84, 0x7e, 0xcd, 0x7d }}

class NS_NO_VTABLE nsIDOMWindow2 : public nsIDOMWindow {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMWINDOW2_IID)

  /**
   * Get the window root for this window. This is useful for hooking
   * up event listeners to this window and every other window nested
   * in the window root.
   */
  /* [noscript] readonly attribute nsIDOMEventTarget windowRoot; */
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) = 0;

  /**
   * Get the application cache object for this window.
   */
  /* readonly attribute nsIDOMOfflineResourceList applicationCache; */
  NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) = 0;

  /**
   * Deprecated, but can't remove yet since we don't want to change interfaces.
   */
  /* [noscript] DOMString createBlobURL (in nsIDOMBlob blob); */
  NS_IMETHOD CreateBlobURL(nsIDOMBlob *blob, nsAString & _retval) = 0;

  /* [noscript] void revokeBlobURL (in DOMString URL); */
  NS_IMETHOD RevokeBlobURL(const nsAString & URL) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOW2 \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot); \
  NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache); \
  NS_IMETHOD CreateBlobURL(nsIDOMBlob *blob, nsAString & _retval); \
  NS_IMETHOD RevokeBlobURL(const nsAString & URL); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOW2(_to) \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) { return _to GetWindowRoot(aWindowRoot); } \
  NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) { return _to GetApplicationCache(aApplicationCache); } \
  NS_IMETHOD CreateBlobURL(nsIDOMBlob *blob, nsAString & _retval) { return _to CreateBlobURL(blob, _retval); } \
  NS_IMETHOD RevokeBlobURL(const nsAString & URL) { return _to RevokeBlobURL(URL); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOW2(_to) \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowRoot(aWindowRoot); } \
  NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplicationCache(aApplicationCache); } \
  NS_IMETHOD CreateBlobURL(nsIDOMBlob *blob, nsAString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateBlobURL(blob, _retval); } \
  NS_IMETHOD RevokeBlobURL(const nsAString & URL) { return !_to ? NS_ERROR_NULL_POINTER : _to->RevokeBlobURL(URL); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindow2 : public nsIDOMWindow2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOW2

  nsDOMWindow2();

private:
  ~nsDOMWindow2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWindow2, nsIDOMWindow2)

nsDOMWindow2::nsDOMWindow2()
{
  /* member initializers and constructor code */
}

nsDOMWindow2::~nsDOMWindow2()
{
  /* destructor code */
}

/* [noscript] readonly attribute nsIDOMEventTarget windowRoot; */
NS_IMETHODIMP nsDOMWindow2::GetWindowRoot(nsIDOMEventTarget * *aWindowRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMOfflineResourceList applicationCache; */
NS_IMETHODIMP nsDOMWindow2::GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] DOMString createBlobURL (in nsIDOMBlob blob); */
NS_IMETHODIMP nsDOMWindow2::CreateBlobURL(nsIDOMBlob *blob, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void revokeBlobURL (in DOMString URL); */
NS_IMETHODIMP nsDOMWindow2::RevokeBlobURL(const nsAString & URL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIURI; /* forward declaration */

class nsICancelable; /* forward declaration */

class nsIMIMEInfo; /* forward declaration */

class nsILocalFile; /* forward declaration */


/* starting interface:    nsITransfer */
#define NS_ITRANSFER_IID_STR "3a982955-dc44-422e-8734-8462bf8d2121"

#define NS_ITRANSFER_IID \
  {0x3a982955, 0xdc44, 0x422e, \
    { 0x87, 0x34, 0x84, 0x62, 0xbf, 0x8d, 0x21, 0x21 }}

class NS_NO_VTABLE nsITransfer : public nsIWebProgressListener2 {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ITRANSFER_IID)

  /**
     * Initializes the transfer with certain properties.  This function must
     * be called prior to accessing any properties on this interface.
     *
     * @param aSource The source URI of the transfer. Must not be null.
     *
     * @param aTarget The target URI of the transfer. Must not be null.
     *
     * @param aDisplayName The user-readable description of the transfer.
     *                     Can be empty.
     *
     * @param aMIMEInfo The MIME info associated with the target,
     *                  including MIME type and helper app when appropriate.
     *                  This parameter is optional.
     *
     * @param startTime Time when the download started (ie, when the first
     *                  response from the server was received)
     *                  XXX presumably wbp and exthandler do this differently
     *
     * @param aTempFile The location of a temporary file; i.e. a file in which
     *                  the received data will be stored, but which is not
     *                  equal to the target file. (will be moved to the real
     *                  target by the caller, when the download is finished)
     *                  May be null.
     *
     * @param aCancelable An object that can be used to abort the download.
     *                    Must not be null.
     *                    Implementations are expected to hold a strong
     *                    reference to this object until the download is
     *                    finished, at which point they should release the
     *                    reference.
     */
  /* void init (in nsIURI aSource, in nsIURI aTarget, in AString aDisplayName, in nsIMIMEInfo aMIMEInfo, in PRTime startTime, in nsILocalFile aTempFile, in nsICancelable aCancelable); */
  NS_IMETHOD Init(nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime startTime, nsILocalFile *aTempFile, nsICancelable *aCancelable) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITRANSFER \
  NS_IMETHOD Init(nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime startTime, nsILocalFile *aTempFile, nsICancelable *aCancelable); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITRANSFER(_to) \
  NS_IMETHOD Init(nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime startTime, nsILocalFile *aTempFile, nsICancelable *aCancelable) { return _to Init(aSource, aTarget, aDisplayName, aMIMEInfo, startTime, aTempFile, aCancelable); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITRANSFER(_to) \
  NS_IMETHOD Init(nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime startTime, nsILocalFile *aTempFile, nsICancelable *aCancelable) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aSource, aTarget, aDisplayName, aMIMEInfo, startTime, aTempFile, aCancelable); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTransfer : public nsITransfer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITRANSFER

  nsTransfer();

private:
  ~nsTransfer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTransfer, nsITransfer)

nsTransfer::nsTransfer()
{
  /* member initializers and constructor code */
}

nsTransfer::~nsTransfer()
{
  /* destructor code */
}

/* void init (in nsIURI aSource, in nsIURI aTarget, in AString aDisplayName, in nsIMIMEInfo aMIMEInfo, in PRTime startTime, in nsILocalFile aTempFile, in nsICancelable aCancelable); */
NS_IMETHODIMP nsTransfer::Init(nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime startTime, nsILocalFile *aTempFile, nsICancelable *aCancelable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIURI; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIUTF8StringEnumerator; /* forward declaration */

class nsIHandlerApp; /* forward declaration */

class nsIArray; /* forward declaration */

class nsIMutableArray; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

typedef PRInt32 nsHandlerInfoAction;


/* starting interface:    nsIHandlerInfo */
#define NS_IHANDLERINFO_IID_STR "325e56a7-3762-4312-aec7-f1fcf84b4145"

#define NS_IHANDLERINFO_IID \
  {0x325e56a7, 0x3762, 0x4312, \
    { 0xae, 0xc7, 0xf1, 0xfc, 0xf8, 0x4b, 0x41, 0x45 }}

/**
 * nsIHandlerInfo gives access to the information about how a given protocol
 * scheme or MIME-type is handled.
 */
class NS_NO_VTABLE nsIHandlerInfo : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IHANDLERINFO_IID)

  /**
     * The type of this handler info.  For MIME handlers, this is the MIME type.
     * For protocol handlers, it's the scheme.
     * 
     * @return String representing the type.
     */
  /* readonly attribute ACString type; */
  NS_IMETHOD GetType(nsACString & aType) = 0;

  /**
     * A human readable description of the handler type
     */
  /* attribute AString description; */
  NS_IMETHOD GetDescription(nsAString & aDescription) = 0;
  NS_IMETHOD SetDescription(const nsAString & aDescription) = 0;

  /**
     * The application the user has said they want associated with this content
     * type. This is not always guaranteed to be set!!
     */
  /* attribute nsIHandlerApp preferredApplicationHandler; */
  NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) = 0;
  NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp * aPreferredApplicationHandler) = 0;

  /**
     * Applications that can handle this content type.
     *
     * The list will include the preferred handler, if any.  Elements of this
     * array are nsIHandlerApp objects, and this attribute will always reference
     * an array, whether or not there are any possible handlers.  If there are
     * no possible handlers, the array will contain no elements, so just check
     * its length (nsIArray::length) to see if there are any possible handlers.
     */
  /* readonly attribute nsIMutableArray possibleApplicationHandlers; */
  NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) = 0;

  /**
     * Indicates whether a default application handler exists,
     * i.e. whether launchWithFile with action = useSystemDefault is possible
     * and defaultDescription will contain usable information.
     */
  /* readonly attribute boolean hasDefaultHandler; */
  NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) = 0;

  /**
     * A pretty name description of the associated default application. Only
     * usable if hasDefaultHandler is true.
     */
  /* readonly attribute AString defaultDescription; */
  NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) = 0;

  /**
     * Launches the application with the specified URI, in a way that
     * depends on the value of preferredAction. preferredAction must be
     * useHelperApp or useSystemDefault.
     *  
     * @note Only the URI scheme is used to determine how to launch.  This is
     * essentially a pass-by-value operation.  This means that in the case of
     * a file: URI, the handler that is registered for file: will be launched
     * and our code will not make any decision based on the content-type or
     * extension, though the invoked file: handler is free to do so. 
     *
     * @param aURI
     *        The URI to launch this application with
     *
     * @param aWindowContext 
     *        The window to parent the dialog against, and, if a web handler
     *        is chosen, it is loaded in this window as well.  See 
     *        nsIHandlerApp.launchWithURI for more details.
     *
     * @throw NS_ERROR_INVALID_ARG if preferredAction is not valid for this
     * call. Other exceptions may be thrown.
     */
  /* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
  NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) = 0;

  /**
     * preferredAction is how the user specified they would like to handle
     * this content type: save to disk, use specified helper app, use OS
     * default handler or handle using navigator; possible value constants
     * listed below
     */
  /* attribute nsHandlerInfoAction preferredAction; */
  NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) = 0;
  NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) = 0;

  enum { saveToDisk = 0 };

  /**
     * Used to indicate that we know nothing about what to do with this.  You
     * could consider this to be not initialized.
     */
  enum { alwaysAsk = 1 };

  enum { useHelperApp = 2 };

  enum { handleInternally = 3 };

  enum { useSystemDefault = 4 };

  /**
     * alwaysAskBeforeHandling: if true, we should always give the user a
     * dialog asking how to dispose of this content.
     */
  /* attribute boolean alwaysAskBeforeHandling; */
  NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) = 0;
  NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHANDLERINFO \
  NS_IMETHOD GetType(nsACString & aType); \
  NS_IMETHOD GetDescription(nsAString & aDescription); \
  NS_IMETHOD SetDescription(const nsAString & aDescription); \
  NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler); \
  NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp * aPreferredApplicationHandler); \
  NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers); \
  NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler); \
  NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription); \
  NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext); \
  NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction); \
  NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction); \
  NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling); \
  NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHANDLERINFO(_to) \
  NS_IMETHOD GetType(nsACString & aType) { return _to GetType(aType); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) { return _to GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) { return _to SetDescription(aDescription); } \
  NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) { return _to GetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp * aPreferredApplicationHandler) { return _to SetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) { return _to GetPossibleApplicationHandlers(aPossibleApplicationHandlers); } \
  NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) { return _to GetHasDefaultHandler(aHasDefaultHandler); } \
  NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) { return _to GetDefaultDescription(aDefaultDescription); } \
  NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return _to LaunchWithURI(aURI, aWindowContext); } \
  NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) { return _to GetPreferredAction(aPreferredAction); } \
  NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) { return _to SetPreferredAction(aPreferredAction); } \
  NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) { return _to GetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } \
  NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) { return _to SetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHANDLERINFO(_to) \
  NS_IMETHOD GetType(nsACString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDescription(aDescription); } \
  NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp * aPreferredApplicationHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPossibleApplicationHandlers(aPossibleApplicationHandlers); } \
  NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasDefaultHandler(aHasDefaultHandler); } \
  NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultDescription(aDefaultDescription); } \
  NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithURI(aURI, aWindowContext); } \
  NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferredAction(aPreferredAction); } \
  NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreferredAction(aPreferredAction); } \
  NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } \
  NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHandlerInfo : public nsIHandlerInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHANDLERINFO

  nsHandlerInfo();

private:
  ~nsHandlerInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHandlerInfo, nsIHandlerInfo)

nsHandlerInfo::nsHandlerInfo()
{
  /* member initializers and constructor code */
}

nsHandlerInfo::~nsHandlerInfo()
{
  /* destructor code */
}

/* readonly attribute ACString type; */
NS_IMETHODIMP nsHandlerInfo::GetType(nsACString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString description; */
NS_IMETHODIMP nsHandlerInfo::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetDescription(const nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIHandlerApp preferredApplicationHandler; */
NS_IMETHODIMP nsHandlerInfo::GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetPreferredApplicationHandler(nsIHandlerApp * aPreferredApplicationHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIMutableArray possibleApplicationHandlers; */
NS_IMETHODIMP nsHandlerInfo::GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasDefaultHandler; */
NS_IMETHODIMP nsHandlerInfo::GetHasDefaultHandler(PRBool *aHasDefaultHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString defaultDescription; */
NS_IMETHODIMP nsHandlerInfo::GetDefaultDescription(nsAString & aDefaultDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
NS_IMETHODIMP nsHandlerInfo::LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsHandlerInfoAction preferredAction; */
NS_IMETHODIMP nsHandlerInfo::GetPreferredAction(nsHandlerInfoAction *aPreferredAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetPreferredAction(nsHandlerInfoAction aPreferredAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean alwaysAskBeforeHandling; */
NS_IMETHODIMP nsHandlerInfo::GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMIMEInfo */
#define NS_IMIMEINFO_IID_STR "1c21acef-c7a1-40c6-9d40-a20480ee53a1"

#define NS_IMIMEINFO_IID \
  {0x1c21acef, 0xc7a1, 0x40c6, \
    { 0x9d, 0x40, 0xa2, 0x04, 0x80, 0xee, 0x53, 0xa1 }}

class NS_NO_VTABLE nsIMIMEInfo : public nsIHandlerInfo {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IMIMEINFO_IID)

  /**
 * nsIMIMEInfo extends nsIHandlerInfo with a bunch of information specific to
 * MIME content-types. There is a one-to-many relationship between MIME types
 * and file extensions. This means that a MIMEInfo object may have multiple
 * file extensions associated with it.  However, the reverse is not true.
 *
 * MIMEInfo objects are generally retrieved from the MIME Service
 * @see nsIMIMEService
 */
/**
     * Gives you an array of file types associated with this type.
     *
     * @return Number of elements in the array.
     * @return Array of extensions.
     */
  /* nsIUTF8StringEnumerator getFileExtensions (); */
  NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator **_retval) = 0;

  /**
     * Set File Extensions. Input is a comma delimited list of extensions.
     */
  /* void setFileExtensions (in AUTF8String aExtensions); */
  NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) = 0;

  /**
     * Returns whether or not the given extension is
     * associated with this MIME info.
     *
     * @return TRUE if the association exists. 
     */
  /* boolean extensionExists (in AUTF8String aExtension); */
  NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval) = 0;

  /**
     * Append a given extension to the set of extensions
     */
  /* void appendExtension (in AUTF8String aExtension); */
  NS_IMETHOD AppendExtension(const nsACString & aExtension) = 0;

  /**
     * Returns the first extension association in
     * the internal set of extensions.
     *
     * @return The first extension.
     */
  /* attribute AUTF8String primaryExtension; */
  NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) = 0;
  NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) = 0;

  /**
     * The MIME type of this MIMEInfo.
     * 
     * @return String representing the MIME type.
     * 
     * @deprecated  use nsIHandlerInfo::type instead.
     */
  /* readonly attribute ACString MIMEType; */
  NS_IMETHOD GetMIMEType(nsACString & aMIMEType) = 0;

  /**
     * Returns whether or not these two nsIMIMEInfos are logically
     * equivalent.
     *
     * @returns PR_TRUE if the two are considered equal
     */
  /* boolean equals (in nsIMIMEInfo aMIMEInfo); */
  NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval) = 0;

  /** 
     * Returns a list of nsILocalHandlerApp objects containing
     * handlers associated with this mimeinfo. Implemented per 
     * platform using information in this object to generate the
     * best list. Typically used for an "open with" style user 
     * option.
     * 
     * @return nsIArray of nsILocalHandlerApp
     */
  /* readonly attribute nsIArray possibleLocalHandlers; */
  NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) = 0;

  /**
     * Launches the application with the specified file, in a way that
     * depends on the value of preferredAction. preferredAction must be
     * useHelperApp or useSystemDefault.
     *
     * @param aFile The file to launch this application with.
     *
     * @throw NS_ERROR_INVALID_ARG if action is not valid for this function.
     * Other exceptions may be thrown.
     */
  /* void launchWithFile (in nsIFile aFile); */
  NS_IMETHOD LaunchWithFile(nsIFile *aFile) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMIMEINFO \
  NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator **_retval); \
  NS_IMETHOD SetFileExtensions(const nsACString & aExtensions); \
  NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval); \
  NS_IMETHOD AppendExtension(const nsACString & aExtension); \
  NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension); \
  NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension); \
  NS_IMETHOD GetMIMEType(nsACString & aMIMEType); \
  NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval); \
  NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers); \
  NS_IMETHOD LaunchWithFile(nsIFile *aFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMIMEINFO(_to) \
  NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator **_retval) { return _to GetFileExtensions(_retval); } \
  NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) { return _to SetFileExtensions(aExtensions); } \
  NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval) { return _to ExtensionExists(aExtension, _retval); } \
  NS_IMETHOD AppendExtension(const nsACString & aExtension) { return _to AppendExtension(aExtension); } \
  NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) { return _to GetPrimaryExtension(aPrimaryExtension); } \
  NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) { return _to SetPrimaryExtension(aPrimaryExtension); } \
  NS_IMETHOD GetMIMEType(nsACString & aMIMEType) { return _to GetMIMEType(aMIMEType); } \
  NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval) { return _to Equals(aMIMEInfo, _retval); } \
  NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) { return _to GetPossibleLocalHandlers(aPossibleLocalHandlers); } \
  NS_IMETHOD LaunchWithFile(nsIFile *aFile) { return _to LaunchWithFile(aFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMIMEINFO(_to) \
  NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileExtensions(_retval); } \
  NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileExtensions(aExtensions); } \
  NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtensionExists(aExtension, _retval); } \
  NS_IMETHOD AppendExtension(const nsACString & aExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendExtension(aExtension); } \
  NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryExtension(aPrimaryExtension); } \
  NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrimaryExtension(aPrimaryExtension); } \
  NS_IMETHOD GetMIMEType(nsACString & aMIMEType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMIMEType(aMIMEType); } \
  NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(aMIMEInfo, _retval); } \
  NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPossibleLocalHandlers(aPossibleLocalHandlers); } \
  NS_IMETHOD LaunchWithFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithFile(aFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMIMEInfo : public nsIMIMEInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMIMEINFO

  nsMIMEInfo();

private:
  ~nsMIMEInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMIMEInfo, nsIMIMEInfo)

nsMIMEInfo::nsMIMEInfo()
{
  /* member initializers and constructor code */
}

nsMIMEInfo::~nsMIMEInfo()
{
  /* destructor code */
}

/* nsIUTF8StringEnumerator getFileExtensions (); */
NS_IMETHODIMP nsMIMEInfo::GetFileExtensions(nsIUTF8StringEnumerator **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFileExtensions (in AUTF8String aExtensions); */
NS_IMETHODIMP nsMIMEInfo::SetFileExtensions(const nsACString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean extensionExists (in AUTF8String aExtension); */
NS_IMETHODIMP nsMIMEInfo::ExtensionExists(const nsACString & aExtension, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendExtension (in AUTF8String aExtension); */
NS_IMETHODIMP nsMIMEInfo::AppendExtension(const nsACString & aExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String primaryExtension; */
NS_IMETHODIMP nsMIMEInfo::GetPrimaryExtension(nsACString & aPrimaryExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMIMEInfo::SetPrimaryExtension(const nsACString & aPrimaryExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString MIMEType; */
NS_IMETHODIMP nsMIMEInfo::GetMIMEType(nsACString & aMIMEType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equals (in nsIMIMEInfo aMIMEInfo); */
NS_IMETHODIMP nsMIMEInfo::Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray possibleLocalHandlers; */
NS_IMETHODIMP nsMIMEInfo::GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithFile (in nsIFile aFile); */
NS_IMETHODIMP nsMIMEInfo::LaunchWithFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIControllers; /* forward declaration */

class nsIDOMFileList; /* forward declaration */

class nsIDOMValidityState; /* forward declaration */


/* starting interface:    nsIDOMHTMLInputElement */
#define NS_IDOMHTMLINPUTELEMENT_IID_STR "0805059d-f18f-4095-ae6b-0bf6df80b7b8"

#define NS_IDOMHTMLINPUTELEMENT_IID \
  {0x0805059d, 0xf18f, 0x4095, \
    { 0xae, 0x6b, 0x0b, 0xf6, 0xdf, 0x80, 0xb7, 0xb8 }}

/**
  * The nsIDOMHTMLInputElement interface is the interface to a [X]HTML
  * input element.
  *
  * This interface is trying to follow the DOM Level 2 HTML specification:
  * http://www.w3.org/TR/DOM-Level-2-HTML/
  *
  * with changes from the work-in-progress WHATWG HTML specification:
  * http://www.whatwg.org/specs/web-apps/current-work/
  */
class NS_NO_VTABLE nsIDOMHTMLInputElement : public nsIDOMHTMLElement {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMHTMLINPUTELEMENT_IID)

  /* attribute DOMString accept; */
  NS_IMETHOD GetAccept(nsAString & aAccept) = 0;
  NS_IMETHOD SetAccept(const nsAString & aAccept) = 0;

  /* attribute DOMString alt; */
  NS_IMETHOD GetAlt(nsAString & aAlt) = 0;
  NS_IMETHOD SetAlt(const nsAString & aAlt) = 0;

  /* attribute DOMString autocomplete; */
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) = 0;
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) = 0;

  /* attribute boolean autofocus; */
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) = 0;
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) = 0;

  /* attribute boolean defaultChecked; */
  NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) = 0;
  NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) = 0;

  /* attribute boolean checked; */
  NS_IMETHOD GetChecked(PRBool *aChecked) = 0;
  NS_IMETHOD SetChecked(PRBool aChecked) = 0;

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute DOMString formAction; */
  NS_IMETHOD GetFormAction(nsAString & aFormAction) = 0;
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) = 0;

  /* attribute DOMString formEnctype; */
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) = 0;
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) = 0;

  /* attribute DOMString formMethod; */
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) = 0;
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) = 0;

  /* attribute boolean formNoValidate; */
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) = 0;
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) = 0;

  /* attribute DOMString formTarget; */
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) = 0;
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) = 0;

  /* readonly attribute nsIDOMFileList files; */
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) = 0;

  /* attribute boolean indeterminate; */
  NS_IMETHOD GetIndeterminate(PRBool *aIndeterminate) = 0;
  NS_IMETHOD SetIndeterminate(PRBool aIndeterminate) = 0;

  /* readonly attribute nsIDOMHTMLElement list; */
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) = 0;

  /* attribute long maxLength; */
  NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) = 0;
  NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) = 0;

  /* attribute boolean multiple; */
  NS_IMETHOD GetMultiple(PRBool *aMultiple) = 0;
  NS_IMETHOD SetMultiple(PRBool aMultiple) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString pattern; */
  NS_IMETHOD GetPattern(nsAString & aPattern) = 0;
  NS_IMETHOD SetPattern(const nsAString & aPattern) = 0;

  /* attribute DOMString placeholder; */
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) = 0;
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) = 0;

  /* attribute boolean readOnly; */
  NS_IMETHOD GetReadOnly(PRBool *aReadOnly) = 0;
  NS_IMETHOD SetReadOnly(PRBool aReadOnly) = 0;

  /* attribute boolean required; */
  NS_IMETHOD GetRequired(PRBool *aRequired) = 0;
  NS_IMETHOD SetRequired(PRBool aRequired) = 0;

  /* attribute DOMString accessKey; */
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) = 0;
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) = 0;

  /* attribute DOMString align; */
  NS_IMETHOD GetAlign(nsAString & aAlign) = 0;
  NS_IMETHOD SetAlign(const nsAString & aAlign) = 0;

  /* attribute unsigned long size; */
  NS_IMETHOD GetSize(PRUint32 *aSize) = 0;
  NS_IMETHOD SetSize(PRUint32 aSize) = 0;

  /* attribute DOMString src; */
  NS_IMETHOD GetSrc(nsAString & aSrc) = 0;
  NS_IMETHOD SetSrc(const nsAString & aSrc) = 0;

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString defaultValue; */
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) = 0;
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* readonly attribute boolean willValidate; */
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) = 0;

  /* readonly attribute nsIDOMValidityState validity; */
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) = 0;

  /* readonly attribute DOMString validationMessage; */
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) = 0;

  /* boolean checkValidity (); */
  NS_IMETHOD CheckValidity(PRBool *_retval) = 0;

  /* void setCustomValidity (in DOMString error); */
  NS_IMETHOD SetCustomValidity(const nsAString & error) = 0;

  /* void select (); */
  NS_IMETHOD Select(void) = 0;

  /* attribute long selectionStart; */
  NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) = 0;
  NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) = 0;

  /* attribute long selectionEnd; */
  NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) = 0;
  NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) = 0;

  /* void setSelectionRange (in long selectionStart, in long selectionEnd); */
  NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd) = 0;

  /* attribute long tabIndex; */
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) = 0;
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) = 0;

  /* attribute DOMString useMap; */
  NS_IMETHOD GetUseMap(nsAString & aUseMap) = 0;
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) = 0;

  /* readonly attribute nsIControllers controllers; */
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) = 0;

  /* readonly attribute long textLength; */
  NS_IMETHOD GetTextLength(PRInt32 *aTextLength) = 0;

  /* void mozGetFileNameArray ([optional] out unsigned long aLength, [array, size_is (aLength), retval] out wstring aFileNames); */
  NS_IMETHOD MozGetFileNameArray(PRUint32 *aLength, PRUnichar ***aFileNames) = 0;

  /* void mozSetFileNameArray ([array, size_is (aLength)] in wstring aFileNames, in unsigned long aLength); */
  NS_IMETHOD MozSetFileNameArray(const PRUnichar **aFileNames, PRUint32 aLength) = 0;

  /**
   * This non-standard method prevents to check types manually to know if the
   * element is a text field.
   */
  /* boolean mozIsTextField (in boolean aExcludePassword); */
  NS_IMETHOD MozIsTextField(PRBool aExcludePassword, PRBool *_retval) = 0;

  /* void blur (); */
  NS_IMETHOD Blur(void) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

  /* void click (); */
  NS_IMETHOD Click(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLINPUTELEMENT \
  NS_IMETHOD GetAccept(nsAString & aAccept); \
  NS_IMETHOD SetAccept(const nsAString & aAccept); \
  NS_IMETHOD GetAlt(nsAString & aAlt); \
  NS_IMETHOD SetAlt(const nsAString & aAlt); \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete); \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete); \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus); \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus); \
  NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked); \
  NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked); \
  NS_IMETHOD GetChecked(PRBool *aChecked); \
  NS_IMETHOD SetChecked(PRBool aChecked); \
  NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); \
  NS_IMETHOD GetFormAction(nsAString & aFormAction); \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction); \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype); \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype); \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod); \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod); \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate); \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate); \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget); \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget); \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles); \
  NS_IMETHOD GetIndeterminate(PRBool *aIndeterminate); \
  NS_IMETHOD SetIndeterminate(PRBool aIndeterminate); \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList); \
  NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength); \
  NS_IMETHOD SetMaxLength(PRInt32 aMaxLength); \
  NS_IMETHOD GetMultiple(PRBool *aMultiple); \
  NS_IMETHOD SetMultiple(PRBool aMultiple); \
  NS_IMETHOD GetName(nsAString & aName); \
  NS_IMETHOD SetName(const nsAString & aName); \
  NS_IMETHOD GetPattern(nsAString & aPattern); \
  NS_IMETHOD SetPattern(const nsAString & aPattern); \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder); \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder); \
  NS_IMETHOD GetReadOnly(PRBool *aReadOnly); \
  NS_IMETHOD SetReadOnly(PRBool aReadOnly); \
  NS_IMETHOD GetRequired(PRBool *aRequired); \
  NS_IMETHOD SetRequired(PRBool aRequired); \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey); \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey); \
  NS_IMETHOD GetAlign(nsAString & aAlign); \
  NS_IMETHOD SetAlign(const nsAString & aAlign); \
  NS_IMETHOD GetSize(PRUint32 *aSize); \
  NS_IMETHOD SetSize(PRUint32 aSize); \
  NS_IMETHOD GetSrc(nsAString & aSrc); \
  NS_IMETHOD SetSrc(const nsAString & aSrc); \
  NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD SetType(const nsAString & aType); \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue); \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue); \
  NS_IMETHOD GetValue(nsAString & aValue); \
  NS_IMETHOD SetValue(const nsAString & aValue); \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate); \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity); \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage); \
  NS_IMETHOD CheckValidity(PRBool *_retval); \
  NS_IMETHOD SetCustomValidity(const nsAString & error); \
  NS_IMETHOD Select(void); \
  NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart); \
  NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart); \
  NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd); \
  NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd); \
  NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd); \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex); \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex); \
  NS_IMETHOD GetUseMap(nsAString & aUseMap); \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap); \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers); \
  NS_IMETHOD GetTextLength(PRInt32 *aTextLength); \
  NS_IMETHOD MozGetFileNameArray(PRUint32 *aLength, PRUnichar ***aFileNames); \
  NS_IMETHOD MozSetFileNameArray(const PRUnichar **aFileNames, PRUint32 aLength); \
  NS_IMETHOD MozIsTextField(PRBool aExcludePassword, PRBool *_retval); \
  NS_IMETHOD Blur(void); \
  NS_IMETHOD Focus(void); \
  NS_IMETHOD Click(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLINPUTELEMENT(_to) \
  NS_IMETHOD GetAccept(nsAString & aAccept) { return _to GetAccept(aAccept); } \
  NS_IMETHOD SetAccept(const nsAString & aAccept) { return _to SetAccept(aAccept); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) { return _to GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) { return _to SetAlt(aAlt); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) { return _to GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) { return _to SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return _to GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return _to SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) { return _to GetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) { return _to SetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD GetChecked(PRBool *aChecked) { return _to GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(PRBool aChecked) { return _to SetChecked(aChecked); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) { return _to GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) { return _to SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) { return _to GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) { return _to SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) { return _to GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) { return _to SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) { return _to GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) { return _to SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) { return _to GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) { return _to SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) { return _to GetFiles(aFiles); } \
  NS_IMETHOD GetIndeterminate(PRBool *aIndeterminate) { return _to GetIndeterminate(aIndeterminate); } \
  NS_IMETHOD SetIndeterminate(PRBool aIndeterminate) { return _to SetIndeterminate(aIndeterminate); } \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) { return _to GetList(aList); } \
  NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) { return _to GetMaxLength(aMaxLength); } \
  NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) { return _to SetMaxLength(aMaxLength); } \
  NS_IMETHOD GetMultiple(PRBool *aMultiple) { return _to GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(PRBool aMultiple) { return _to SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_IMETHOD GetPattern(nsAString & aPattern) { return _to GetPattern(aPattern); } \
  NS_IMETHOD SetPattern(const nsAString & aPattern) { return _to SetPattern(aPattern); } \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) { return _to GetPlaceholder(aPlaceholder); } \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) { return _to SetPlaceholder(aPlaceholder); } \
  NS_IMETHOD GetReadOnly(PRBool *aReadOnly) { return _to GetReadOnly(aReadOnly); } \
  NS_IMETHOD SetReadOnly(PRBool aReadOnly) { return _to SetReadOnly(aReadOnly); } \
  NS_IMETHOD GetRequired(PRBool *aRequired) { return _to GetRequired(aRequired); } \
  NS_IMETHOD SetRequired(PRBool aRequired) { return _to SetRequired(aRequired); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return _to GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return _to SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) { return _to GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) { return _to SetAlign(aAlign); } \
  NS_IMETHOD GetSize(PRUint32 *aSize) { return _to GetSize(aSize); } \
  NS_IMETHOD SetSize(PRUint32 aSize) { return _to SetSize(aSize); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) { return _to GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) { return _to SetSrc(aSrc); } \
  NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) { return _to GetDefaultValue(aDefaultValue); } \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) { return _to SetDefaultValue(aDefaultValue); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return _to SetValue(aValue); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return _to GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return _to GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return _to GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return _to CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return _to SetCustomValidity(error); } \
  NS_IMETHOD Select(void) { return _to Select(); } \
  NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) { return _to GetSelectionStart(aSelectionStart); } \
  NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) { return _to SetSelectionStart(aSelectionStart); } \
  NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) { return _to GetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) { return _to SetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd) { return _to SetSelectionRange(selectionStart, selectionEnd); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return _to GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return _to SetTabIndex(aTabIndex); } \
  NS_IMETHOD GetUseMap(nsAString & aUseMap) { return _to GetUseMap(aUseMap); } \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) { return _to SetUseMap(aUseMap); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return _to GetControllers(aControllers); } \
  NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return _to GetTextLength(aTextLength); } \
  NS_IMETHOD MozGetFileNameArray(PRUint32 *aLength, PRUnichar ***aFileNames) { return _to MozGetFileNameArray(aLength, aFileNames); } \
  NS_IMETHOD MozSetFileNameArray(const PRUnichar **aFileNames, PRUint32 aLength) { return _to MozSetFileNameArray(aFileNames, aLength); } \
  NS_IMETHOD MozIsTextField(PRBool aExcludePassword, PRBool *_retval) { return _to MozIsTextField(aExcludePassword, _retval); } \
  NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_IMETHOD Click(void) { return _to Click(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLINPUTELEMENT(_to) \
  NS_IMETHOD GetAccept(nsAString & aAccept) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccept(aAccept); } \
  NS_IMETHOD SetAccept(const nsAString & aAccept) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccept(aAccept); } \
  NS_IMETHOD GetAlt(nsAString & aAlt) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlt(aAlt); } \
  NS_IMETHOD SetAlt(const nsAString & aAlt) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlt(aAlt); } \
  NS_IMETHOD GetAutocomplete(nsAString & aAutocomplete) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutocomplete(aAutocomplete); } \
  NS_IMETHOD SetAutocomplete(const nsAString & aAutocomplete) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutocomplete(aAutocomplete); } \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultChecked(aDefaultChecked); } \
  NS_IMETHOD GetChecked(PRBool *aChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChecked(aChecked); } \
  NS_IMETHOD SetChecked(PRBool aChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChecked(aChecked); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetFiles(nsIDOMFileList * *aFiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(aFiles); } \
  NS_IMETHOD GetIndeterminate(PRBool *aIndeterminate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndeterminate(aIndeterminate); } \
  NS_IMETHOD SetIndeterminate(PRBool aIndeterminate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIndeterminate(aIndeterminate); } \
  NS_IMETHOD GetList(nsIDOMHTMLElement * *aList) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetList(aList); } \
  NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxLength(aMaxLength); } \
  NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxLength(aMaxLength); } \
  NS_IMETHOD GetMultiple(PRBool *aMultiple) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(PRBool aMultiple) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetPattern(nsAString & aPattern) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPattern(aPattern); } \
  NS_IMETHOD SetPattern(const nsAString & aPattern) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPattern(aPattern); } \
  NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlaceholder(aPlaceholder); } \
  NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlaceholder(aPlaceholder); } \
  NS_IMETHOD GetReadOnly(PRBool *aReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadOnly(aReadOnly); } \
  NS_IMETHOD SetReadOnly(PRBool aReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReadOnly(aReadOnly); } \
  NS_IMETHOD GetRequired(PRBool *aRequired) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequired(aRequired); } \
  NS_IMETHOD SetRequired(PRBool aRequired) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequired(aRequired); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlign(aAlign); } \
  NS_IMETHOD GetSize(PRUint32 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_IMETHOD SetSize(PRUint32 aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSize(aSize); } \
  NS_IMETHOD GetSrc(nsAString & aSrc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrc(aSrc); } \
  NS_IMETHOD SetSrc(const nsAString & aSrc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrc(aSrc); } \
  NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultValue(aDefaultValue); } \
  NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultValue(aDefaultValue); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } \
  NS_IMETHOD Select(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(); } \
  NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionStart(aSelectionStart); } \
  NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionStart(aSelectionStart); } \
  NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionEnd(aSelectionEnd); } \
  NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionRange(selectionStart, selectionEnd); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabIndex(aTabIndex); } \
  NS_IMETHOD GetUseMap(nsAString & aUseMap) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUseMap(aUseMap); } \
  NS_IMETHOD SetUseMap(const nsAString & aUseMap) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseMap(aUseMap); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(aControllers); } \
  NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextLength(aTextLength); } \
  NS_IMETHOD MozGetFileNameArray(PRUint32 *aLength, PRUnichar ***aFileNames) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetFileNameArray(aLength, aFileNames); } \
  NS_IMETHOD MozSetFileNameArray(const PRUnichar **aFileNames, PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSetFileNameArray(aFileNames, aLength); } \
  NS_IMETHOD MozIsTextField(PRBool aExcludePassword, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozIsTextField(aExcludePassword, _retval); } \
  NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_IMETHOD Click(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Click(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLInputElement : public nsIDOMHTMLInputElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLINPUTELEMENT

  nsDOMHTMLInputElement();

private:
  ~nsDOMHTMLInputElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLInputElement, nsIDOMHTMLInputElement)

nsDOMHTMLInputElement::nsDOMHTMLInputElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLInputElement::~nsDOMHTMLInputElement()
{
  /* destructor code */
}

/* attribute DOMString accept; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAccept(nsAString & aAccept)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAccept(const nsAString & aAccept)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString alt; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAlt(nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAlt(const nsAString & aAlt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString autocomplete; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAutocomplete(nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAutocomplete(const nsAString & aAutocomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean autofocus; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAutofocus(PRBool *aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAutofocus(PRBool aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean defaultChecked; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDefaultChecked(PRBool *aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDefaultChecked(PRBool aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean checked; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetChecked(PRBool *aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetChecked(PRBool aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formAction; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormAction(nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormAction(const nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formEnctype; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormEnctype(nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormEnctype(const nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formMethod; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormMethod(nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormMethod(const nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean formNoValidate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormNoValidate(PRBool *aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormNoValidate(PRBool aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formTarget; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFormTarget(nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetFormTarget(const nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMFileList files; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetFiles(nsIDOMFileList * *aFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean indeterminate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetIndeterminate(PRBool *aIndeterminate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetIndeterminate(PRBool aIndeterminate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLElement list; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetList(nsIDOMHTMLElement * *aList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxLength; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMaxLength(PRInt32 *aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMaxLength(PRInt32 aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean multiple; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetMultiple(PRBool *aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetMultiple(PRBool aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString pattern; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetPattern(nsAString & aPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetPattern(const nsAString & aPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString placeholder; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetPlaceholder(nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetPlaceholder(const nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean readOnly; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetReadOnly(PRBool *aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetReadOnly(PRBool aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean required; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetRequired(PRBool *aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetRequired(PRBool aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString accessKey; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAccessKey(nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAccessKey(const nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString align; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetAlign(nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetAlign(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long size; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSize(PRUint32 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSize(PRUint32 aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString src; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSrc(nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSrc(const nsAString & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString defaultValue; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetDefaultValue(nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetDefaultValue(const nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetWillValidate(PRBool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLInputElement::CheckValidity(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLInputElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void select (); */
NS_IMETHODIMP nsDOMHTMLInputElement::Select()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionStart; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSelectionStart(PRInt32 *aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionStart(PRInt32 aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionEnd; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetSelectionEnd(PRInt32 *aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionEnd(PRInt32 aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelectionRange (in long selectionStart, in long selectionEnd); */
NS_IMETHODIMP nsDOMHTMLInputElement::SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long tabIndex; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetTabIndex(PRInt32 *aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetTabIndex(PRInt32 aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString useMap; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetUseMap(nsAString & aUseMap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLInputElement::SetUseMap(const nsAString & aUseMap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIControllers controllers; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetControllers(nsIControllers * *aControllers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long textLength; */
NS_IMETHODIMP nsDOMHTMLInputElement::GetTextLength(PRInt32 *aTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozGetFileNameArray ([optional] out unsigned long aLength, [array, size_is (aLength), retval] out wstring aFileNames); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozGetFileNameArray(PRUint32 *aLength, PRUnichar ***aFileNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozSetFileNameArray ([array, size_is (aLength)] in wstring aFileNames, in unsigned long aLength); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozSetFileNameArray(const PRUnichar **aFileNames, PRUint32 aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean mozIsTextField (in boolean aExcludePassword); */
NS_IMETHODIMP nsDOMHTMLInputElement::MozIsTextField(PRBool aExcludePassword, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMHTMLInputElement::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMHTMLInputElement::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void click (); */
NS_IMETHODIMP nsDOMHTMLInputElement::Click()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIDOMValidityState; /* forward declaration */


/* starting interface:    nsIDOMHTMLButtonElement */
#define NS_IDOMHTMLBUTTONELEMENT_IID_STR "bcae78a1-9f9b-46bf-abb5-a3fe410d97ae"

#define NS_IDOMHTMLBUTTONELEMENT_IID \
  {0xbcae78a1, 0x9f9b, 0x46bf, \
    { 0xab, 0xb5, 0xa3, 0xfe, 0x41, 0x0d, 0x97, 0xae }}

class NS_NO_VTABLE nsIDOMHTMLButtonElement : public nsIDOMHTMLElement {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMHTMLBUTTONELEMENT_IID)

  /* attribute boolean autofocus; */
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) = 0;
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) = 0;

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute DOMString formAction; */
  NS_IMETHOD GetFormAction(nsAString & aFormAction) = 0;
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) = 0;

  /* attribute DOMString formEnctype; */
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) = 0;
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) = 0;

  /* attribute DOMString formMethod; */
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) = 0;
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) = 0;

  /* attribute boolean formNoValidate; */
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) = 0;
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) = 0;

  /* attribute DOMString formTarget; */
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) = 0;
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* attribute DOMString accessKey; */
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) = 0;
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) = 0;

  /* attribute long tabIndex; */
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) = 0;
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) = 0;

  /* void blur (); */
  NS_IMETHOD Blur(void) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

  /* void click (); */
  NS_IMETHOD Click(void) = 0;

  /* readonly attribute boolean willValidate; */
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) = 0;

  /* readonly attribute nsIDOMValidityState validity; */
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) = 0;

  /* readonly attribute DOMString validationMessage; */
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) = 0;

  /* boolean checkValidity (); */
  NS_IMETHOD CheckValidity(PRBool *_retval) = 0;

  /* void setCustomValidity (in DOMString error); */
  NS_IMETHOD SetCustomValidity(const nsAString & error) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLBUTTONELEMENT \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus); \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus); \
  NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); \
  NS_IMETHOD GetFormAction(nsAString & aFormAction); \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction); \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype); \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype); \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod); \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod); \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate); \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate); \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget); \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget); \
  NS_IMETHOD GetName(nsAString & aName); \
  NS_IMETHOD SetName(const nsAString & aName); \
  NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD SetType(const nsAString & aType); \
  NS_IMETHOD GetValue(nsAString & aValue); \
  NS_IMETHOD SetValue(const nsAString & aValue); \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey); \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey); \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex); \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex); \
  NS_IMETHOD Blur(void); \
  NS_IMETHOD Focus(void); \
  NS_IMETHOD Click(void); \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate); \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity); \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage); \
  NS_IMETHOD CheckValidity(PRBool *_retval); \
  NS_IMETHOD SetCustomValidity(const nsAString & error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLBUTTONELEMENT(_to) \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return _to GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return _to SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) { return _to GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) { return _to SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) { return _to GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) { return _to SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) { return _to GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) { return _to SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) { return _to GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) { return _to SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) { return _to GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) { return _to SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return _to SetValue(aValue); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return _to GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return _to SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return _to GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return _to SetTabIndex(aTabIndex); } \
  NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_IMETHOD Click(void) { return _to Click(); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return _to GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return _to GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return _to GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return _to CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return _to SetCustomValidity(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLBUTTONELEMENT(_to) \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetFormAction(nsAString & aFormAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormAction(aFormAction); } \
  NS_IMETHOD SetFormAction(const nsAString & aFormAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormAction(aFormAction); } \
  NS_IMETHOD GetFormEnctype(nsAString & aFormEnctype) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormEnctype(aFormEnctype); } \
  NS_IMETHOD SetFormEnctype(const nsAString & aFormEnctype) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormEnctype(aFormEnctype); } \
  NS_IMETHOD GetFormMethod(nsAString & aFormMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormMethod(aFormMethod); } \
  NS_IMETHOD SetFormMethod(const nsAString & aFormMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormMethod(aFormMethod); } \
  NS_IMETHOD GetFormNoValidate(PRBool *aFormNoValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD SetFormNoValidate(PRBool aFormNoValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormNoValidate(aFormNoValidate); } \
  NS_IMETHOD GetFormTarget(nsAString & aFormTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormTarget(aFormTarget); } \
  NS_IMETHOD SetFormTarget(const nsAString & aFormTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFormTarget(aFormTarget); } \
  NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabIndex(aTabIndex); } \
  NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_IMETHOD Click(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Click(); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLButtonElement : public nsIDOMHTMLButtonElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLBUTTONELEMENT

  nsDOMHTMLButtonElement();

private:
  ~nsDOMHTMLButtonElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLButtonElement, nsIDOMHTMLButtonElement)

nsDOMHTMLButtonElement::nsDOMHTMLButtonElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLButtonElement::~nsDOMHTMLButtonElement()
{
  /* destructor code */
}

/* attribute boolean autofocus; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetAutofocus(PRBool *aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetAutofocus(PRBool aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formAction; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetFormAction(nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetFormAction(const nsAString & aFormAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formEnctype; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetFormEnctype(nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetFormEnctype(const nsAString & aFormEnctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formMethod; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetFormMethod(nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetFormMethod(const nsAString & aFormMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean formNoValidate; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetFormNoValidate(PRBool *aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetFormNoValidate(PRBool aFormNoValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString formTarget; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetFormTarget(nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetFormTarget(const nsAString & aFormTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString accessKey; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetAccessKey(nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetAccessKey(const nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long tabIndex; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetTabIndex(PRInt32 *aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLButtonElement::SetTabIndex(PRInt32 aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMHTMLButtonElement::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMHTMLButtonElement::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void click (); */
NS_IMETHODIMP nsDOMHTMLButtonElement::Click()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetWillValidate(PRBool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLButtonElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLButtonElement::CheckValidity(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLButtonElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIDOMHTMLFormElement; /* forward declaration */


/* starting interface:    nsIDOMHTMLAnchorElement */
#define NS_IDOMHTMLANCHORELEMENT_IID_STR "4e237175-3628-4dc8-892f-5270edc3c71a"

#define NS_IDOMHTMLANCHORELEMENT_IID \
  {0x4e237175, 0x3628, 0x4dc8, \
    { 0x89, 0x2f, 0x52, 0x70, 0xed, 0xc3, 0xc7, 0x1a }}

class NS_NO_VTABLE nsIDOMHTMLAnchorElement : public nsIDOMHTMLElement {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMHTMLANCHORELEMENT_IID)

  /* attribute DOMString href; */
  NS_IMETHOD GetHref(nsAString & aHref) = 0;
  NS_IMETHOD SetHref(const nsAString & aHref) = 0;

  /* attribute DOMString target; */
  NS_IMETHOD GetTarget(nsAString & aTarget) = 0;
  NS_IMETHOD SetTarget(const nsAString & aTarget) = 0;

  /* attribute DOMString ping; */
  NS_IMETHOD GetPing(nsAString & aPing) = 0;
  NS_IMETHOD SetPing(const nsAString & aPing) = 0;

  /* attribute DOMString rel; */
  NS_IMETHOD GetRel(nsAString & aRel) = 0;
  NS_IMETHOD SetRel(const nsAString & aRel) = 0;

  /* attribute DOMString hreflang; */
  NS_IMETHOD GetHreflang(nsAString & aHreflang) = 0;
  NS_IMETHOD SetHreflang(const nsAString & aHreflang) = 0;

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /**
   * An alias for the textContent attribute.
   */
  /* [Null (Stringify)] attribute DOMString text; */
  NS_IMETHOD GetText(nsAString & aText) = 0;
  NS_IMETHOD SetText(const nsAString & aText) = 0;

  /* attribute DOMString protocol; */
  NS_IMETHOD GetProtocol(nsAString & aProtocol) = 0;
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) = 0;

  /* attribute DOMString host; */
  NS_IMETHOD GetHost(nsAString & aHost) = 0;
  NS_IMETHOD SetHost(const nsAString & aHost) = 0;

  /* attribute DOMString hostname; */
  NS_IMETHOD GetHostname(nsAString & aHostname) = 0;
  NS_IMETHOD SetHostname(const nsAString & aHostname) = 0;

  /* attribute DOMString port; */
  NS_IMETHOD GetPort(nsAString & aPort) = 0;
  NS_IMETHOD SetPort(const nsAString & aPort) = 0;

  /* attribute DOMString pathname; */
  NS_IMETHOD GetPathname(nsAString & aPathname) = 0;
  NS_IMETHOD SetPathname(const nsAString & aPathname) = 0;

  /* attribute DOMString search; */
  NS_IMETHOD GetSearch(nsAString & aSearch) = 0;
  NS_IMETHOD SetSearch(const nsAString & aSearch) = 0;

  /* attribute DOMString hash; */
  NS_IMETHOD GetHash(nsAString & aHash) = 0;
  NS_IMETHOD SetHash(const nsAString & aHash) = 0;

  /* attribute DOMString accessKey; */
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) = 0;
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) = 0;

  /* attribute DOMString charset; */
  NS_IMETHOD GetCharset(nsAString & aCharset) = 0;
  NS_IMETHOD SetCharset(const nsAString & aCharset) = 0;

  /* attribute DOMString coords; */
  NS_IMETHOD GetCoords(nsAString & aCoords) = 0;
  NS_IMETHOD SetCoords(const nsAString & aCoords) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString rev; */
  NS_IMETHOD GetRev(nsAString & aRev) = 0;
  NS_IMETHOD SetRev(const nsAString & aRev) = 0;

  /* attribute DOMString shape; */
  NS_IMETHOD GetShape(nsAString & aShape) = 0;
  NS_IMETHOD SetShape(const nsAString & aShape) = 0;

  /* attribute long tabIndex; */
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) = 0;
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) = 0;

  /* DOMString toString (); */
  NS_IMETHOD ToString(nsAString & _retval) = 0;

  /* void blur (); */
  NS_IMETHOD Blur(void) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLANCHORELEMENT \
  NS_IMETHOD GetHref(nsAString & aHref); \
  NS_IMETHOD SetHref(const nsAString & aHref); \
  NS_IMETHOD GetTarget(nsAString & aTarget); \
  NS_IMETHOD SetTarget(const nsAString & aTarget); \
  NS_IMETHOD GetPing(nsAString & aPing); \
  NS_IMETHOD SetPing(const nsAString & aPing); \
  NS_IMETHOD GetRel(nsAString & aRel); \
  NS_IMETHOD SetRel(const nsAString & aRel); \
  NS_IMETHOD GetHreflang(nsAString & aHreflang); \
  NS_IMETHOD SetHreflang(const nsAString & aHreflang); \
  NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD SetType(const nsAString & aType); \
  NS_IMETHOD GetText(nsAString & aText); \
  NS_IMETHOD SetText(const nsAString & aText); \
  NS_IMETHOD GetProtocol(nsAString & aProtocol); \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol); \
  NS_IMETHOD GetHost(nsAString & aHost); \
  NS_IMETHOD SetHost(const nsAString & aHost); \
  NS_IMETHOD GetHostname(nsAString & aHostname); \
  NS_IMETHOD SetHostname(const nsAString & aHostname); \
  NS_IMETHOD GetPort(nsAString & aPort); \
  NS_IMETHOD SetPort(const nsAString & aPort); \
  NS_IMETHOD GetPathname(nsAString & aPathname); \
  NS_IMETHOD SetPathname(const nsAString & aPathname); \
  NS_IMETHOD GetSearch(nsAString & aSearch); \
  NS_IMETHOD SetSearch(const nsAString & aSearch); \
  NS_IMETHOD GetHash(nsAString & aHash); \
  NS_IMETHOD SetHash(const nsAString & aHash); \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey); \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey); \
  NS_IMETHOD GetCharset(nsAString & aCharset); \
  NS_IMETHOD SetCharset(const nsAString & aCharset); \
  NS_IMETHOD GetCoords(nsAString & aCoords); \
  NS_IMETHOD SetCoords(const nsAString & aCoords); \
  NS_IMETHOD GetName(nsAString & aName); \
  NS_IMETHOD SetName(const nsAString & aName); \
  NS_IMETHOD GetRev(nsAString & aRev); \
  NS_IMETHOD SetRev(const nsAString & aRev); \
  NS_IMETHOD GetShape(nsAString & aShape); \
  NS_IMETHOD SetShape(const nsAString & aShape); \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex); \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex); \
  NS_IMETHOD ToString(nsAString & _retval); \
  NS_IMETHOD Blur(void); \
  NS_IMETHOD Focus(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLANCHORELEMENT(_to) \
  NS_IMETHOD GetHref(nsAString & aHref) { return _to GetHref(aHref); } \
  NS_IMETHOD SetHref(const nsAString & aHref) { return _to SetHref(aHref); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) { return _to GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const nsAString & aTarget) { return _to SetTarget(aTarget); } \
  NS_IMETHOD GetPing(nsAString & aPing) { return _to GetPing(aPing); } \
  NS_IMETHOD SetPing(const nsAString & aPing) { return _to SetPing(aPing); } \
  NS_IMETHOD GetRel(nsAString & aRel) { return _to GetRel(aRel); } \
  NS_IMETHOD SetRel(const nsAString & aRel) { return _to SetRel(aRel); } \
  NS_IMETHOD GetHreflang(nsAString & aHreflang) { return _to GetHreflang(aHreflang); } \
  NS_IMETHOD SetHreflang(const nsAString & aHreflang) { return _to SetHreflang(aHreflang); } \
  NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_IMETHOD GetText(nsAString & aText) { return _to GetText(aText); } \
  NS_IMETHOD SetText(const nsAString & aText) { return _to SetText(aText); } \
  NS_IMETHOD GetProtocol(nsAString & aProtocol) { return _to GetProtocol(aProtocol); } \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) { return _to SetProtocol(aProtocol); } \
  NS_IMETHOD GetHost(nsAString & aHost) { return _to GetHost(aHost); } \
  NS_IMETHOD SetHost(const nsAString & aHost) { return _to SetHost(aHost); } \
  NS_IMETHOD GetHostname(nsAString & aHostname) { return _to GetHostname(aHostname); } \
  NS_IMETHOD SetHostname(const nsAString & aHostname) { return _to SetHostname(aHostname); } \
  NS_IMETHOD GetPort(nsAString & aPort) { return _to GetPort(aPort); } \
  NS_IMETHOD SetPort(const nsAString & aPort) { return _to SetPort(aPort); } \
  NS_IMETHOD GetPathname(nsAString & aPathname) { return _to GetPathname(aPathname); } \
  NS_IMETHOD SetPathname(const nsAString & aPathname) { return _to SetPathname(aPathname); } \
  NS_IMETHOD GetSearch(nsAString & aSearch) { return _to GetSearch(aSearch); } \
  NS_IMETHOD SetSearch(const nsAString & aSearch) { return _to SetSearch(aSearch); } \
  NS_IMETHOD GetHash(nsAString & aHash) { return _to GetHash(aHash); } \
  NS_IMETHOD SetHash(const nsAString & aHash) { return _to SetHash(aHash); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return _to GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return _to SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetCharset(nsAString & aCharset) { return _to GetCharset(aCharset); } \
  NS_IMETHOD SetCharset(const nsAString & aCharset) { return _to SetCharset(aCharset); } \
  NS_IMETHOD GetCoords(nsAString & aCoords) { return _to GetCoords(aCoords); } \
  NS_IMETHOD SetCoords(const nsAString & aCoords) { return _to SetCoords(aCoords); } \
  NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_IMETHOD GetRev(nsAString & aRev) { return _to GetRev(aRev); } \
  NS_IMETHOD SetRev(const nsAString & aRev) { return _to SetRev(aRev); } \
  NS_IMETHOD GetShape(nsAString & aShape) { return _to GetShape(aShape); } \
  NS_IMETHOD SetShape(const nsAString & aShape) { return _to SetShape(aShape); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return _to GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return _to SetTabIndex(aTabIndex); } \
  NS_IMETHOD ToString(nsAString & _retval) { return _to ToString(_retval); } \
  NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLANCHORELEMENT(_to) \
  NS_IMETHOD GetHref(nsAString & aHref) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHref(aHref); } \
  NS_IMETHOD SetHref(const nsAString & aHref) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHref(aHref); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD SetTarget(const nsAString & aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTarget(aTarget); } \
  NS_IMETHOD GetPing(nsAString & aPing) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPing(aPing); } \
  NS_IMETHOD SetPing(const nsAString & aPing) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPing(aPing); } \
  NS_IMETHOD GetRel(nsAString & aRel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRel(aRel); } \
  NS_IMETHOD SetRel(const nsAString & aRel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRel(aRel); } \
  NS_IMETHOD GetHreflang(nsAString & aHreflang) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHreflang(aHreflang); } \
  NS_IMETHOD SetHreflang(const nsAString & aHreflang) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHreflang(aHreflang); } \
  NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetText(nsAString & aText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetText(aText); } \
  NS_IMETHOD SetText(const nsAString & aText) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetText(aText); } \
  NS_IMETHOD GetProtocol(nsAString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocol(aProtocol); } \
  NS_IMETHOD SetProtocol(const nsAString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProtocol(aProtocol); } \
  NS_IMETHOD GetHost(nsAString & aHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHost(aHost); } \
  NS_IMETHOD SetHost(const nsAString & aHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHost(aHost); } \
  NS_IMETHOD GetHostname(nsAString & aHostname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHostname(aHostname); } \
  NS_IMETHOD SetHostname(const nsAString & aHostname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHostname(aHostname); } \
  NS_IMETHOD GetPort(nsAString & aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_IMETHOD SetPort(const nsAString & aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPort(aPort); } \
  NS_IMETHOD GetPathname(nsAString & aPathname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPathname(aPathname); } \
  NS_IMETHOD SetPathname(const nsAString & aPathname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPathname(aPathname); } \
  NS_IMETHOD GetSearch(nsAString & aSearch) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearch(aSearch); } \
  NS_IMETHOD SetSearch(const nsAString & aSearch) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearch(aSearch); } \
  NS_IMETHOD GetHash(nsAString & aHash) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHash(aHash); } \
  NS_IMETHOD SetHash(const nsAString & aHash) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHash(aHash); } \
  NS_IMETHOD GetAccessKey(nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessKey(aAccessKey); } \
  NS_IMETHOD SetAccessKey(const nsAString & aAccessKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccessKey(aAccessKey); } \
  NS_IMETHOD GetCharset(nsAString & aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharset(aCharset); } \
  NS_IMETHOD SetCharset(const nsAString & aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharset(aCharset); } \
  NS_IMETHOD GetCoords(nsAString & aCoords) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCoords(aCoords); } \
  NS_IMETHOD SetCoords(const nsAString & aCoords) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCoords(aCoords); } \
  NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetRev(nsAString & aRev) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRev(aRev); } \
  NS_IMETHOD SetRev(const nsAString & aRev) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRev(aRev); } \
  NS_IMETHOD GetShape(nsAString & aShape) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShape(aShape); } \
  NS_IMETHOD SetShape(const nsAString & aShape) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShape(aShape); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabIndex(aTabIndex); } \
  NS_IMETHOD ToString(nsAString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(_retval); } \
  NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLAnchorElement : public nsIDOMHTMLAnchorElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLANCHORELEMENT

  nsDOMHTMLAnchorElement();

private:
  ~nsDOMHTMLAnchorElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLAnchorElement, nsIDOMHTMLAnchorElement)

nsDOMHTMLAnchorElement::nsDOMHTMLAnchorElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLAnchorElement::~nsDOMHTMLAnchorElement()
{
  /* destructor code */
}

/* attribute DOMString href; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetHref(nsAString & aHref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetHref(const nsAString & aHref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString target; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetTarget(nsAString & aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetTarget(const nsAString & aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString ping; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetPing(nsAString & aPing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetPing(const nsAString & aPing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString rel; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetRel(nsAString & aRel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetRel(const nsAString & aRel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString hreflang; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetHreflang(nsAString & aHreflang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetHreflang(const nsAString & aHreflang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [Null (Stringify)] attribute DOMString text; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetText(nsAString & aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetText(const nsAString & aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString protocol; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetProtocol(nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetProtocol(const nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString host; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetHost(nsAString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetHost(const nsAString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString hostname; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetHostname(nsAString & aHostname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetHostname(const nsAString & aHostname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString port; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetPort(nsAString & aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetPort(const nsAString & aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString pathname; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetPathname(nsAString & aPathname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetPathname(const nsAString & aPathname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString search; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetSearch(nsAString & aSearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetSearch(const nsAString & aSearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString hash; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetHash(nsAString & aHash)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetHash(const nsAString & aHash)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString accessKey; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetAccessKey(nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetAccessKey(const nsAString & aAccessKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString charset; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetCharset(nsAString & aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetCharset(const nsAString & aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString coords; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetCoords(nsAString & aCoords)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetCoords(const nsAString & aCoords)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString rev; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetRev(nsAString & aRev)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetRev(const nsAString & aRev)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString shape; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetShape(nsAString & aShape)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetShape(const nsAString & aShape)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long tabIndex; */
NS_IMETHODIMP nsDOMHTMLAnchorElement::GetTabIndex(PRInt32 *aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLAnchorElement::SetTabIndex(PRInt32 aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString toString (); */
NS_IMETHODIMP nsDOMHTMLAnchorElement::ToString(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMHTMLAnchorElement::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMHTMLAnchorElement::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIDOMValidityState; /* forward declaration */

class nsIDOMHTMLOptionsCollection; /* forward declaration */


/* starting interface:    nsIDOMHTMLSelectElement */
#define NS_IDOMHTMLSELECTELEMENT_IID_STR "e3c6d960-972c-4a5e-a8f4-6ca65d578abf"

#define NS_IDOMHTMLSELECTELEMENT_IID \
  {0xe3c6d960, 0x972c, 0x4a5e, \
    { 0xa8, 0xf4, 0x6c, 0xa6, 0x5d, 0x57, 0x8a, 0xbf }}

class NS_NO_VTABLE nsIDOMHTMLSelectElement : public nsIDOMHTMLElement {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMHTMLSELECTELEMENT_IID)

  /* attribute boolean autofocus; */
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) = 0;
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) = 0;

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute boolean multiple; */
  NS_IMETHOD GetMultiple(PRBool *aMultiple) = 0;
  NS_IMETHOD SetMultiple(PRBool aMultiple) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute long size; */
  NS_IMETHOD GetSize(PRInt32 *aSize) = 0;
  NS_IMETHOD SetSize(PRInt32 aSize) = 0;

  /* readonly attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMHTMLOptionsCollection options; */
  NS_IMETHOD GetOptions(nsIDOMHTMLOptionsCollection * *aOptions) = 0;

  /* attribute unsigned long length; */
  NS_IMETHOD GetLength(PRUint32 *aLength) = 0;
  NS_IMETHOD SetLength(PRUint32 aLength) = 0;

  /* nsIDOMNode item (in unsigned long index); */
  NS_IMETHOD Item(PRUint32 index, nsIDOMNode **_retval) = 0;

  /* nsIDOMNode namedItem (in DOMString name); */
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMNode **_retval) = 0;

  /* void add (in nsIDOMHTMLElement element, in nsIDOMHTMLElement before)  raises (DOMException); */
  NS_IMETHOD Add(nsIDOMHTMLElement *element, nsIDOMHTMLElement *before) = 0;

  /* void remove (in long index); */
  NS_IMETHOD Remove(PRInt32 index) = 0;

  /* attribute long selectedIndex; */
  NS_IMETHOD GetSelectedIndex(PRInt32 *aSelectedIndex) = 0;
  NS_IMETHOD SetSelectedIndex(PRInt32 aSelectedIndex) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* attribute long tabIndex; */
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) = 0;
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) = 0;

  /* void blur (); */
  NS_IMETHOD Blur(void) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

  /* readonly attribute boolean willValidate; */
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) = 0;

  /* readonly attribute nsIDOMValidityState validity; */
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) = 0;

  /* readonly attribute DOMString validationMessage; */
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) = 0;

  /* boolean checkValidity (); */
  NS_IMETHOD CheckValidity(PRBool *_retval) = 0;

  /* void setCustomValidity (in DOMString error); */
  NS_IMETHOD SetCustomValidity(const nsAString & error) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLSELECTELEMENT \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus); \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus); \
  NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); \
  NS_IMETHOD GetMultiple(PRBool *aMultiple); \
  NS_IMETHOD SetMultiple(PRBool aMultiple); \
  NS_IMETHOD GetName(nsAString & aName); \
  NS_IMETHOD SetName(const nsAString & aName); \
  NS_IMETHOD GetSize(PRInt32 *aSize); \
  NS_IMETHOD SetSize(PRInt32 aSize); \
  NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD GetOptions(nsIDOMHTMLOptionsCollection * *aOptions); \
  NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_IMETHOD SetLength(PRUint32 aLength); \
  NS_IMETHOD Item(PRUint32 index, nsIDOMNode **_retval); \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMNode **_retval); \
  NS_IMETHOD Add(nsIDOMHTMLElement *element, nsIDOMHTMLElement *before); \
  NS_IMETHOD Remove(PRInt32 index); \
  NS_IMETHOD GetSelectedIndex(PRInt32 *aSelectedIndex); \
  NS_IMETHOD SetSelectedIndex(PRInt32 aSelectedIndex); \
  NS_IMETHOD GetValue(nsAString & aValue); \
  NS_IMETHOD SetValue(const nsAString & aValue); \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex); \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex); \
  NS_IMETHOD Blur(void); \
  NS_IMETHOD Focus(void); \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate); \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity); \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage); \
  NS_IMETHOD CheckValidity(PRBool *_retval); \
  NS_IMETHOD SetCustomValidity(const nsAString & error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLSELECTELEMENT(_to) \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return _to GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return _to SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } \
  NS_IMETHOD GetMultiple(PRBool *aMultiple) { return _to GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(PRBool aMultiple) { return _to SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_IMETHOD GetSize(PRInt32 *aSize) { return _to GetSize(aSize); } \
  NS_IMETHOD SetSize(PRInt32 aSize) { return _to SetSize(aSize); } \
  NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD GetOptions(nsIDOMHTMLOptionsCollection * *aOptions) { return _to GetOptions(aOptions); } \
  NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_IMETHOD SetLength(PRUint32 aLength) { return _to SetLength(aLength); } \
  NS_IMETHOD Item(PRUint32 index, nsIDOMNode **_retval) { return _to Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMNode **_retval) { return _to NamedItem(name, _retval); } \
  NS_IMETHOD Add(nsIDOMHTMLElement *element, nsIDOMHTMLElement *before) { return _to Add(element, before); } \
  NS_IMETHOD Remove(PRInt32 index) { return _to Remove(index); } \
  NS_IMETHOD GetSelectedIndex(PRInt32 *aSelectedIndex) { return _to GetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD SetSelectedIndex(PRInt32 aSelectedIndex) { return _to SetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return _to SetValue(aValue); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return _to GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return _to SetTabIndex(aTabIndex); } \
  NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return _to GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return _to GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return _to GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return _to CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return _to SetCustomValidity(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLSELECTELEMENT(_to) \
  NS_IMETHOD GetAutofocus(PRBool *aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutofocus(aAutofocus); } \
  NS_IMETHOD SetAutofocus(PRBool aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutofocus(aAutofocus); } \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetMultiple(PRBool *aMultiple) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMultiple(aMultiple); } \
  NS_IMETHOD SetMultiple(PRBool aMultiple) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMultiple(aMultiple); } \
  NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetSize(PRInt32 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_IMETHOD SetSize(PRInt32 aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSize(aSize); } \
  NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetOptions(nsIDOMHTMLOptionsCollection * *aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOptions(aOptions); } \
  NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_IMETHOD SetLength(PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLength(aLength); } \
  NS_IMETHOD Item(PRUint32 index, nsIDOMNode **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMNode **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->NamedItem(name, _retval); } \
  NS_IMETHOD Add(nsIDOMHTMLElement *element, nsIDOMHTMLElement *before) { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(element, before); } \
  NS_IMETHOD Remove(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(index); } \
  NS_IMETHOD GetSelectedIndex(PRInt32 *aSelectedIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD SetSelectedIndex(PRInt32 aSelectedIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabIndex(aTabIndex); } \
  NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabIndex(aTabIndex); } \
  NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_IMETHOD GetWillValidate(PRBool *aWillValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_IMETHOD CheckValidity(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_IMETHOD SetCustomValidity(const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLSelectElement : public nsIDOMHTMLSelectElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLSELECTELEMENT

  nsDOMHTMLSelectElement();

private:
  ~nsDOMHTMLSelectElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLSelectElement, nsIDOMHTMLSelectElement)

nsDOMHTMLSelectElement::nsDOMHTMLSelectElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLSelectElement::~nsDOMHTMLSelectElement()
{
  /* destructor code */
}

/* attribute boolean autofocus; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetAutofocus(PRBool *aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetAutofocus(PRBool aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean multiple; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetMultiple(PRBool *aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetMultiple(PRBool aMultiple)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long size; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetSize(PRInt32 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetSize(PRInt32 aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLOptionsCollection options; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetOptions(nsIDOMHTMLOptionsCollection * *aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long length; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetLength(PRUint32 aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode item (in unsigned long index); */
NS_IMETHODIMP nsDOMHTMLSelectElement::Item(PRUint32 index, nsIDOMNode **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode namedItem (in DOMString name); */
NS_IMETHODIMP nsDOMHTMLSelectElement::NamedItem(const nsAString & name, nsIDOMNode **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void add (in nsIDOMHTMLElement element, in nsIDOMHTMLElement before)  raises (DOMException); */
NS_IMETHODIMP nsDOMHTMLSelectElement::Add(nsIDOMHTMLElement *element, nsIDOMHTMLElement *before)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void remove (in long index); */
NS_IMETHODIMP nsDOMHTMLSelectElement::Remove(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectedIndex; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetSelectedIndex(PRInt32 *aSelectedIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetSelectedIndex(PRInt32 aSelectedIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long tabIndex; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetTabIndex(PRInt32 *aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLSelectElement::SetTabIndex(PRInt32 aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMHTMLSelectElement::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMHTMLSelectElement::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetWillValidate(PRBool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLSelectElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLSelectElement::CheckValidity(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLSelectElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMHTMLOptionElement */
#define NS_IDOMHTMLOPTIONELEMENT_IID_STR "611d00f5-1eb8-4571-b995-2a2019d2d11c"

#define NS_IDOMHTMLOPTIONELEMENT_IID \
  {0x611d00f5, 0x1eb8, 0x4571, \
    { 0xb9, 0x95, 0x2a, 0x20, 0x19, 0xd2, 0xd1, 0x1c }}

class NS_NO_VTABLE nsIDOMHTMLOptionElement : public nsIDOMHTMLElement {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOMHTMLOPTIONELEMENT_IID)

  /* attribute boolean disabled; */
  NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute DOMString label; */
  NS_IMETHOD GetLabel(nsAString & aLabel) = 0;
  NS_IMETHOD SetLabel(const nsAString & aLabel) = 0;

  /* attribute boolean defaultSelected; */
  NS_IMETHOD GetDefaultSelected(PRBool *aDefaultSelected) = 0;
  NS_IMETHOD SetDefaultSelected(PRBool aDefaultSelected) = 0;

  /* attribute boolean selected; */
  NS_IMETHOD GetSelected(PRBool *aSelected) = 0;
  NS_IMETHOD SetSelected(PRBool aSelected) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* attribute DOMString text; */
  NS_IMETHOD GetText(nsAString & aText) = 0;
  NS_IMETHOD SetText(const nsAString & aText) = 0;

  /* readonly attribute long index; */
  NS_IMETHOD GetIndex(PRInt32 *aIndex) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLOPTIONELEMENT \
  NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); \
  NS_IMETHOD GetLabel(nsAString & aLabel); \
  NS_IMETHOD SetLabel(const nsAString & aLabel); \
  NS_IMETHOD GetDefaultSelected(PRBool *aDefaultSelected); \
  NS_IMETHOD SetDefaultSelected(PRBool aDefaultSelected); \
  NS_IMETHOD GetSelected(PRBool *aSelected); \
  NS_IMETHOD SetSelected(PRBool aSelected); \
  NS_IMETHOD GetValue(nsAString & aValue); \
  NS_IMETHOD SetValue(const nsAString & aValue); \
  NS_IMETHOD GetText(nsAString & aText); \
  NS_IMETHOD SetText(const nsAString & aText); \
  NS_IMETHOD GetIndex(PRInt32 *aIndex); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLOPTIONELEMENT(_to) \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } \
  NS_IMETHOD GetLabel(nsAString & aLabel) { return _to GetLabel(aLabel); } \
  NS_IMETHOD SetLabel(const nsAString & aLabel) { return _to SetLabel(aLabel); } \
  NS_IMETHOD GetDefaultSelected(PRBool *aDefaultSelected) { return _to GetDefaultSelected(aDefaultSelected); } \
  NS_IMETHOD SetDefaultSelected(PRBool aDefaultSelected) { return _to SetDefaultSelected(aDefaultSelected); } \
  NS_IMETHOD GetSelected(PRBool *aSelected) { return _to GetSelected(aSelected); } \
  NS_IMETHOD SetSelected(PRBool aSelected) { return _to SetSelected(aSelected); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return _to SetValue(aValue); } \
  NS_IMETHOD GetText(nsAString & aText) { return _to GetText(aText); } \
  NS_IMETHOD SetText(const nsAString & aText) { return _to SetText(aText); } \
  NS_IMETHOD GetIndex(PRInt32 *aIndex) { return _to GetIndex(aIndex); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLOPTIONELEMENT(_to) \
  NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_IMETHOD GetLabel(nsAString & aLabel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLabel(aLabel); } \
  NS_IMETHOD SetLabel(const nsAString & aLabel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLabel(aLabel); } \
  NS_IMETHOD GetDefaultSelected(PRBool *aDefaultSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultSelected(aDefaultSelected); } \
  NS_IMETHOD SetDefaultSelected(PRBool aDefaultSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultSelected(aDefaultSelected); } \
  NS_IMETHOD GetSelected(PRBool *aSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelected(aSelected); } \
  NS_IMETHOD SetSelected(PRBool aSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelected(aSelected); } \
  NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD GetText(nsAString & aText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetText(aText); } \
  NS_IMETHOD SetText(const nsAString & aText) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetText(aText); } \
  NS_IMETHOD GetIndex(PRInt32 *aIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndex(aIndex); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLOptionElement : public nsIDOMHTMLOptionElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLOPTIONELEMENT

  nsDOMHTMLOptionElement();

private:
  ~nsDOMHTMLOptionElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLOptionElement, nsIDOMHTMLOptionElement)

nsDOMHTMLOptionElement::nsDOMHTMLOptionElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLOptionElement::~nsDOMHTMLOptionElement()
{
  /* destructor code */
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString label; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetLabel(nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetLabel(const nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean defaultSelected; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetDefaultSelected(PRBool *aDefaultSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetDefaultSelected(PRBool aDefaultSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean selected; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetSelected(PRBool *aSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetSelected(PRBool aSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString text; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetText(nsAString & aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLOptionElement::SetText(const nsAString & aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long index; */
NS_IMETHODIMP nsDOMHTMLOptionElement::GetIndex(PRInt32 *aIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPrincipal */
#define NS_IPRINCIPAL_IID_STR "0575ea96-4561-4dc6-a818-3c4c97c2430d"

#define NS_IPRINCIPAL_IID \
  {0x0575ea96, 0x4561, 0x4dc6, \
    { 0xa8, 0x18, 0x3c, 0x4c, 0x97, 0xc2, 0x43, 0x0d }}

class NS_NO_VTABLE nsIPrincipal : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IPRINCIPAL_IID)

  /* void placeholder (); */
  NS_IMETHOD Placeholder(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINCIPAL \
  NS_IMETHOD Placeholder(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINCIPAL(_to) \
  NS_IMETHOD Placeholder(void) { return _to Placeholder(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINCIPAL(_to) \
  NS_IMETHOD Placeholder(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Placeholder(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrincipal : public nsIPrincipal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINCIPAL

  nsPrincipal();

private:
  ~nsPrincipal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrincipal, nsIPrincipal)

nsPrincipal::nsPrincipal()
{
  /* member initializers and constructor code */
}

nsPrincipal::~nsPrincipal()
{
  /* destructor code */
}

/* void placeholder (); */
NS_IMETHODIMP nsPrincipal::Placeholder()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsIScriptSecurityManager */
#define NS_ISCRIPTSECURITYMANAGER_IID_STR "50eda256-4dd2-4c7c-baed-96983910af9f"

#define NS_ISCRIPTSECURITYMANAGER_IID \
  {0x50eda256, 0x4dd2, 0x4c7c, \
    { 0xba, 0xed, 0x96, 0x98, 0x39, 0x10, 0xaf, 0x9f }}

class NS_NO_VTABLE nsIScriptSecurityManager : public nsIXPCSecurityManager {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISCRIPTSECURITYMANAGER_IID)

  /**
     * Checks whether the running script is allowed to access aProperty.
     */
  /* [noscript] void checkPropertyAccess (in JSContextPtr aJSContext, in JSObjectPtr aJSObject, in string aClassName, in jsid aProperty, in PRUint32 aAction); */
  NS_IMETHOD CheckPropertyAccess(JSContext * aJSContext, JSObject * aJSObject, const char *aClassName, jsid aProperty, PRUint32 aAction) = 0;

  /**
     * Check that the script currently running in context "cx" can load "uri".
     *
     * Will return error code NS_ERROR_DOM_BAD_URI if the load request 
     * should be denied.
     *
     * @param cx the JSContext of the script causing the load
     * @param uri the URI that is being loaded
     */
  /* [noscript] void checkLoadURIFromScript (in JSContextPtr cx, in nsIURI uri); */
  NS_IMETHOD CheckLoadURIFromScript(JSContext * cx, nsIURI *uri) = 0;

  /**
     * Default CheckLoadURI permissions
     */
  enum { STANDARD = 0U };

  enum { LOAD_IS_AUTOMATIC_DOCUMENT_REPLACEMENT = 1U };

  enum { ALLOW_CHROME = 2U };

  enum { DISALLOW_INHERIT_PRINCIPAL = 4U };

  enum { DISALLOW_SCRIPT_OR_DATA = 4U };

  enum { DISALLOW_SCRIPT = 8U };

  /**
     * Check that content with principal aPrincipal can load "uri".
     *
     * Will return error code NS_ERROR_DOM_BAD_URI if the load request 
     * should be denied.
     *
     * @param aPrincipal the principal identifying the actor causing the load
     * @param uri the URI that is being loaded
     * @param flags the permission set, see above
     */
  /* void checkLoadURIWithPrincipal (in nsIPrincipal aPrincipal, in nsIURI uri, in unsigned long flags); */
  NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) = 0;

  /**
     * Check that content from "from" can load "uri".
     *
     * Will return error code NS_ERROR_DOM_BAD_URI if the load request 
     * should be denied.
     *
     * @param from the URI causing the load
     * @param uri the URI that is being loaded
     * @param flags the permission set, see above
     *
     * @deprecated Use checkLoadURIWithPrincipal instead of this function.
     */
  /* void checkLoadURI (in nsIURI from, in nsIURI uri, in unsigned long flags); */
  NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) = 0;

  /**
     * Similar to checkLoadURIWithPrincipal but there are two differences:
     *
     * 1) The URI is a string, not a URI object.
     * 2) This function assumes that the URI may still be subject to fixup (and
     * hence will check whether fixed-up versions of the URI are allowed to
     * load as well); if any of the versions of this URI is not allowed, this
     * function will return error code NS_ERROR_DOM_BAD_URI.
     */
  /* void checkLoadURIStrWithPrincipal (in nsIPrincipal aPrincipal, in AUTF8String uri, in unsigned long flags); */
  NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) = 0;

  /**
     * Same as CheckLoadURI but takes string arguments for ease of use
     * by scripts
     *
     * @deprecated Use checkLoadURIStrWithPrincipal instead of this function.
     */
  /* void checkLoadURIStr (in AUTF8String from, in AUTF8String uri, in unsigned long flags); */
  NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) = 0;

  /**
     * Check that the function 'funObj' is allowed to run on 'targetObj'
     *
     * Will return error code NS_ERROR_DOM_SECURITY_ERR if the function
     * should not run
     *
     * @param cx The current active JavaScript context.
     * @param funObj The function trying to run..
     * @param targetObj The object the function will run on.
     */
  /* [noscript] void checkFunctionAccess (in JSContextPtr cx, in voidPtr funObj, in voidPtr targetObj); */
  NS_IMETHOD CheckFunctionAccess(JSContext * cx, void * funObj, void * targetObj) = 0;

  /**
     * Return true if content from the given principal is allowed to
     * execute scripts.
     */
  /* [noscript] boolean canExecuteScripts (in JSContextPtr cx, in nsIPrincipal principal); */
  NS_IMETHOD CanExecuteScripts(JSContext * cx, nsIPrincipal *principal, PRBool *_retval) = 0;

  /**
     * Return the principal of the innermost frame of the currently 
     * executing script. Will return null if there is no script 
     * currently executing.
     */
  /* [noscript] nsIPrincipal getSubjectPrincipal (); */
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal **_retval) = 0;

  /**
     * Return the all-powerful system principal.
     */
  /* nsIPrincipal getSystemPrincipal (); */
  NS_IMETHOD GetSystemPrincipal(nsIPrincipal **_retval) = 0;

  /**
     * Return a principal with the specified certificate fingerprint, subject
     * name (the full name or concatenated set of names of the entity
     * represented by the certificate), pretty name, certificate, and
     * codebase URI.  The certificate fingerprint and subject name MUST be
     * nonempty; otherwise an error will be thrown.  Similarly, aCert must
     * not be null.
     */
  /* [noscript] nsIPrincipal getCertificatePrincipal (in AUTF8String aCertFingerprint, in AUTF8String aSubjectName, in AUTF8String aPrettyName, in nsISupports aCert, in nsIURI aURI); */
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal **_retval) = 0;

  /**
     * Return a principal that has the same origin as aURI.
     */
  /* nsIPrincipal getCodebasePrincipal (in nsIURI aURI); */
  NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal **_retval) = 0;

  /**
     * Request that 'capability' can be enabled by scripts or applets
     * running with 'principal'. Will prompt user if
     * necessary. Returns nsIPrincipal::ENABLE_GRANTED or
     * nsIPrincipal::ENABLE_DENIED based on user's choice.
     */
  /* [noscript] short requestCapability (in nsIPrincipal principal, in string capability); */
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char *capability, PRInt16 *_retval) = 0;

  /**
     * Return true if the currently executing script has 'capability' enabled.
     */
  /* boolean isCapabilityEnabled (in string capability); */
  NS_IMETHOD IsCapabilityEnabled(const char *capability, PRBool *_retval) = 0;

  /**
     * Enable 'capability' in the innermost frame of the currently executing
     * script.
     */
  /* void enableCapability (in string capability); */
  NS_IMETHOD EnableCapability(const char *capability) = 0;

  /**
     * Remove 'capability' from the innermost frame of the currently
     * executing script. Any setting of 'capability' from enclosing
     * frames thus comes into effect.
     */
  /* void revertCapability (in string capability); */
  NS_IMETHOD RevertCapability(const char *capability) = 0;

  /**
     * Disable 'capability' in the innermost frame of the currently executing
     * script.
     */
  /* void disableCapability (in string capability); */
  NS_IMETHOD DisableCapability(const char *capability) = 0;

  /**
     * Allow 'certificateID' to enable 'capability.' Can only be performed
     * by code signed by the system certificate.
     */
  /* void setCanEnableCapability (in AUTF8String certificateFingerprint, in string capability, in short canEnable); */
  NS_IMETHOD SetCanEnableCapability(const nsACString & certificateFingerprint, const char *capability, PRInt16 canEnable) = 0;

  /**
     * Return the principal of the specified object in the specified context.
     */
  /* [noscript] nsIPrincipal getObjectPrincipal (in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD GetObjectPrincipal(JSContext * cx, JSObject * obj, nsIPrincipal **_retval) = 0;

  /**
     * Returns true if the principal of the currently running script is the
     * system principal, false otherwise.
     */
  /* [noscript] boolean subjectPrincipalIsSystem (); */
  NS_IMETHOD SubjectPrincipalIsSystem(PRBool *_retval) = 0;

  /**
     * Returns OK if aJSContext and target have the same "origin"
     * (scheme, host, and port).
     */
  /* [noscript] void checkSameOrigin (in JSContextPtr aJSContext, in nsIURI aTargetURI); */
  NS_IMETHOD CheckSameOrigin(JSContext * aJSContext, nsIURI *aTargetURI) = 0;

  /**
     * Returns OK if aSourceURI and target have the same "origin"
     * (scheme, host, and port).
     * ReportError flag suppresses error reports for functions that
     * don't need reporting.
     */
  /* void checkSameOriginURI (in nsIURI aSourceURI, in nsIURI aTargetURI, in boolean reportError); */
  NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, PRBool reportError) = 0;

  /**
     * Returns the principal of the global object of the given context, or null
     * if no global or no principal.
     */
  /* [noscript] nsIPrincipal getPrincipalFromContext (in JSContextPtr cx); */
  NS_IMETHOD GetPrincipalFromContext(JSContext * cx, nsIPrincipal **_retval) = 0;

  /**
     * Get the principal for the given channel.  This will typically be the
     * channel owner if there is one, and the codebase principal for the
     * channel's URI otherwise.  aChannel must not be null.
     */
  /* nsIPrincipal getChannelPrincipal (in nsIChannel aChannel); */
  NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal **_retval) = 0;

  /**
     * Check whether a given principal is a system principal.  This allows us
     * to avoid handing back the system principal to script while allowing
     * script to check whether a given principal is system.
     */
  /* boolean isSystemPrincipal (in nsIPrincipal aPrincipal); */
  NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, PRBool *_retval) = 0;

  /**
     * Same as getSubjectPrincipal(), only faster. cx must *never* be
     * passed null, and it must be the context on the top of the
     * context stack. Does *not* reference count the returned
     * principal.
     */
  /* [noscript, notxpcom] nsIPrincipal getCxSubjectPrincipal (in JSContextPtr cx); */
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext * cx) = 0;

  /* [noscript, notxpcom] nsIPrincipal getCxSubjectPrincipalAndFrame (in JSContextPtr cx, out JSStackFramePtr fp); */
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext * cx, JSStackFrame * *fp) = 0;

  /**
     * If no scripted code is running "above" (or called from) fp, then
     * instead of looking at cx->globalObject, we will return |principal|.
     * This function only affects |cx|. If someone pushes another context onto
     * the context stack, then it supersedes this call.
     * NOTE: If |fp| is non-null popContextPrincipal must be called before fp
     * has finished executing.
     *
     * @param cx The context to clamp.
     * @param fp The frame pointer to clamp at. May be 'null'.
     * @param principal The principal to clamp to.
     */
  /* [noscript] void pushContextPrincipal (in JSContextPtr cx, in JSStackFramePtr fp, in nsIPrincipal principal); */
  NS_IMETHOD PushContextPrincipal(JSContext * cx, JSStackFrame * fp, nsIPrincipal *principal) = 0;

  /**
     * Removes a clamp set by pushContextPrincipal from cx. This must be
     * called in a stack-like fashion (e.g., given two contexts |a| and |b|,
     * it is not legal to do: push(a) push(b) pop(a)).
     */
  /* [noscript] void popContextPrincipal (in JSContextPtr cx); */
  NS_IMETHOD PopContextPrincipal(JSContext * cx) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTSECURITYMANAGER \
  NS_IMETHOD CheckPropertyAccess(JSContext * aJSContext, JSObject * aJSObject, const char *aClassName, jsid aProperty, PRUint32 aAction); \
  NS_IMETHOD CheckLoadURIFromScript(JSContext * cx, nsIURI *uri); \
  NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags); \
  NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags); \
  NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags); \
  NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags); \
  NS_IMETHOD CheckFunctionAccess(JSContext * cx, void * funObj, void * targetObj); \
  NS_IMETHOD CanExecuteScripts(JSContext * cx, nsIPrincipal *principal, PRBool *_retval); \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal **_retval); \
  NS_IMETHOD GetSystemPrincipal(nsIPrincipal **_retval); \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal **_retval); \
  NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal **_retval); \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char *capability, PRInt16 *_retval); \
  NS_IMETHOD IsCapabilityEnabled(const char *capability, PRBool *_retval); \
  NS_IMETHOD EnableCapability(const char *capability); \
  NS_IMETHOD RevertCapability(const char *capability); \
  NS_IMETHOD DisableCapability(const char *capability); \
  NS_IMETHOD SetCanEnableCapability(const nsACString & certificateFingerprint, const char *capability, PRInt16 canEnable); \
  NS_IMETHOD GetObjectPrincipal(JSContext * cx, JSObject * obj, nsIPrincipal **_retval); \
  NS_IMETHOD SubjectPrincipalIsSystem(PRBool *_retval); \
  NS_IMETHOD CheckSameOrigin(JSContext * aJSContext, nsIURI *aTargetURI); \
  NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, PRBool reportError); \
  NS_IMETHOD GetPrincipalFromContext(JSContext * cx, nsIPrincipal **_retval); \
  NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal **_retval); \
  NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, PRBool *_retval); \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext * cx); \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext * cx, JSStackFrame * *fp); \
  NS_IMETHOD PushContextPrincipal(JSContext * cx, JSStackFrame * fp, nsIPrincipal *principal); \
  NS_IMETHOD PopContextPrincipal(JSContext * cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTSECURITYMANAGER(_to) \
  NS_IMETHOD CheckPropertyAccess(JSContext * aJSContext, JSObject * aJSObject, const char *aClassName, jsid aProperty, PRUint32 aAction) { return _to CheckPropertyAccess(aJSContext, aJSObject, aClassName, aProperty, aAction); } \
  NS_IMETHOD CheckLoadURIFromScript(JSContext * cx, nsIURI *uri) { return _to CheckLoadURIFromScript(cx, uri); } \
  NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) { return _to CheckLoadURIWithPrincipal(aPrincipal, uri, flags); } \
  NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) { return _to CheckLoadURI(from, uri, flags); } \
  NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) { return _to CheckLoadURIStrWithPrincipal(aPrincipal, uri, flags); } \
  NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) { return _to CheckLoadURIStr(from, uri, flags); } \
  NS_IMETHOD CheckFunctionAccess(JSContext * cx, void * funObj, void * targetObj) { return _to CheckFunctionAccess(cx, funObj, targetObj); } \
  NS_IMETHOD CanExecuteScripts(JSContext * cx, nsIPrincipal *principal, PRBool *_retval) { return _to CanExecuteScripts(cx, principal, _retval); } \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal **_retval) { return _to GetSubjectPrincipal(_retval); } \
  NS_IMETHOD GetSystemPrincipal(nsIPrincipal **_retval) { return _to GetSystemPrincipal(_retval); } \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal **_retval) { return _to GetCertificatePrincipal(aCertFingerprint, aSubjectName, aPrettyName, aCert, aURI, _retval); } \
  NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal **_retval) { return _to GetCodebasePrincipal(aURI, _retval); } \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char *capability, PRInt16 *_retval) { return _to RequestCapability(principal, capability, _retval); } \
  NS_IMETHOD IsCapabilityEnabled(const char *capability, PRBool *_retval) { return _to IsCapabilityEnabled(capability, _retval); } \
  NS_IMETHOD EnableCapability(const char *capability) { return _to EnableCapability(capability); } \
  NS_IMETHOD RevertCapability(const char *capability) { return _to RevertCapability(capability); } \
  NS_IMETHOD DisableCapability(const char *capability) { return _to DisableCapability(capability); } \
  NS_IMETHOD SetCanEnableCapability(const nsACString & certificateFingerprint, const char *capability, PRInt16 canEnable) { return _to SetCanEnableCapability(certificateFingerprint, capability, canEnable); } \
  NS_IMETHOD GetObjectPrincipal(JSContext * cx, JSObject * obj, nsIPrincipal **_retval) { return _to GetObjectPrincipal(cx, obj, _retval); } \
  NS_IMETHOD SubjectPrincipalIsSystem(PRBool *_retval) { return _to SubjectPrincipalIsSystem(_retval); } \
  NS_IMETHOD CheckSameOrigin(JSContext * aJSContext, nsIURI *aTargetURI) { return _to CheckSameOrigin(aJSContext, aTargetURI); } \
  NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, PRBool reportError) { return _to CheckSameOriginURI(aSourceURI, aTargetURI, reportError); } \
  NS_IMETHOD GetPrincipalFromContext(JSContext * cx, nsIPrincipal **_retval) { return _to GetPrincipalFromContext(cx, _retval); } \
  NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal **_retval) { return _to GetChannelPrincipal(aChannel, _retval); } \
  NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, PRBool *_retval) { return _to IsSystemPrincipal(aPrincipal, _retval); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext * cx) { return _to GetCxSubjectPrincipal(cx); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext * cx, JSStackFrame * *fp) { return _to GetCxSubjectPrincipalAndFrame(cx, fp); } \
  NS_IMETHOD PushContextPrincipal(JSContext * cx, JSStackFrame * fp, nsIPrincipal *principal) { return _to PushContextPrincipal(cx, fp, principal); } \
  NS_IMETHOD PopContextPrincipal(JSContext * cx) { return _to PopContextPrincipal(cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTSECURITYMANAGER(_to) \
  NS_IMETHOD CheckPropertyAccess(JSContext * aJSContext, JSObject * aJSObject, const char *aClassName, jsid aProperty, PRUint32 aAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckPropertyAccess(aJSContext, aJSObject, aClassName, aProperty, aAction); } \
  NS_IMETHOD CheckLoadURIFromScript(JSContext * cx, nsIURI *uri) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIFromScript(cx, uri); } \
  NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIWithPrincipal(aPrincipal, uri, flags); } \
  NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURI(from, uri, flags); } \
  NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIStrWithPrincipal(aPrincipal, uri, flags); } \
  NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIStr(from, uri, flags); } \
  NS_IMETHOD CheckFunctionAccess(JSContext * cx, void * funObj, void * targetObj) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckFunctionAccess(cx, funObj, targetObj); } \
  NS_IMETHOD CanExecuteScripts(JSContext * cx, nsIPrincipal *principal, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanExecuteScripts(cx, principal, _retval); } \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubjectPrincipal(_retval); } \
  NS_IMETHOD GetSystemPrincipal(nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSystemPrincipal(_retval); } \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCertificatePrincipal(aCertFingerprint, aSubjectName, aPrettyName, aCert, aURI, _retval); } \
  NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCodebasePrincipal(aURI, _retval); } \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char *capability, PRInt16 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestCapability(principal, capability, _retval); } \
  NS_IMETHOD IsCapabilityEnabled(const char *capability, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCapabilityEnabled(capability, _retval); } \
  NS_IMETHOD EnableCapability(const char *capability) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableCapability(capability); } \
  NS_IMETHOD RevertCapability(const char *capability) { return !_to ? NS_ERROR_NULL_POINTER : _to->RevertCapability(capability); } \
  NS_IMETHOD DisableCapability(const char *capability) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableCapability(capability); } \
  NS_IMETHOD SetCanEnableCapability(const nsACString & certificateFingerprint, const char *capability, PRInt16 canEnable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanEnableCapability(certificateFingerprint, capability, canEnable); } \
  NS_IMETHOD GetObjectPrincipal(JSContext * cx, JSObject * obj, nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObjectPrincipal(cx, obj, _retval); } \
  NS_IMETHOD SubjectPrincipalIsSystem(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubjectPrincipalIsSystem(_retval); } \
  NS_IMETHOD CheckSameOrigin(JSContext * aJSContext, nsIURI *aTargetURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSameOrigin(aJSContext, aTargetURI); } \
  NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, PRBool reportError) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSameOriginURI(aSourceURI, aTargetURI, reportError); } \
  NS_IMETHOD GetPrincipalFromContext(JSContext * cx, nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipalFromContext(cx, _retval); } \
  NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannelPrincipal(aChannel, _retval); } \
  NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSystemPrincipal(aPrincipal, _retval); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext * cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCxSubjectPrincipal(cx); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext * cx, JSStackFrame * *fp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCxSubjectPrincipalAndFrame(cx, fp); } \
  NS_IMETHOD PushContextPrincipal(JSContext * cx, JSStackFrame * fp, nsIPrincipal *principal) { return !_to ? NS_ERROR_NULL_POINTER : _to->PushContextPrincipal(cx, fp, principal); } \
  NS_IMETHOD PopContextPrincipal(JSContext * cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->PopContextPrincipal(cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptSecurityManager : public nsIScriptSecurityManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTSECURITYMANAGER

  nsScriptSecurityManager();

private:
  ~nsScriptSecurityManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptSecurityManager, nsIScriptSecurityManager)

nsScriptSecurityManager::nsScriptSecurityManager()
{
  /* member initializers and constructor code */
}

nsScriptSecurityManager::~nsScriptSecurityManager()
{
  /* destructor code */
}

/* [noscript] void checkPropertyAccess (in JSContextPtr aJSContext, in JSObjectPtr aJSObject, in string aClassName, in jsid aProperty, in PRUint32 aAction); */
NS_IMETHODIMP nsScriptSecurityManager::CheckPropertyAccess(JSContext * aJSContext, JSObject * aJSObject, const char *aClassName, jsid aProperty, PRUint32 aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkLoadURIFromScript (in JSContextPtr cx, in nsIURI uri); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIFromScript(JSContext * cx, nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURIWithPrincipal (in nsIPrincipal aPrincipal, in nsIURI uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURI (in nsIURI from, in nsIURI uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURIStrWithPrincipal (in nsIPrincipal aPrincipal, in AUTF8String uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURIStr (in AUTF8String from, in AUTF8String uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkFunctionAccess (in JSContextPtr cx, in voidPtr funObj, in voidPtr targetObj); */
NS_IMETHODIMP nsScriptSecurityManager::CheckFunctionAccess(JSContext * cx, void * funObj, void * targetObj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean canExecuteScripts (in JSContextPtr cx, in nsIPrincipal principal); */
NS_IMETHODIMP nsScriptSecurityManager::CanExecuteScripts(JSContext * cx, nsIPrincipal *principal, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getSubjectPrincipal (); */
NS_IMETHODIMP nsScriptSecurityManager::GetSubjectPrincipal(nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getSystemPrincipal (); */
NS_IMETHODIMP nsScriptSecurityManager::GetSystemPrincipal(nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getCertificatePrincipal (in AUTF8String aCertFingerprint, in AUTF8String aSubjectName, in AUTF8String aPrettyName, in nsISupports aCert, in nsIURI aURI); */
NS_IMETHODIMP nsScriptSecurityManager::GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getCodebasePrincipal (in nsIURI aURI); */
NS_IMETHODIMP nsScriptSecurityManager::GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] short requestCapability (in nsIPrincipal principal, in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::RequestCapability(nsIPrincipal *principal, const char *capability, PRInt16 *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isCapabilityEnabled (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::IsCapabilityEnabled(const char *capability, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableCapability (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::EnableCapability(const char *capability)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void revertCapability (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::RevertCapability(const char *capability)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disableCapability (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::DisableCapability(const char *capability)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCanEnableCapability (in AUTF8String certificateFingerprint, in string capability, in short canEnable); */
NS_IMETHODIMP nsScriptSecurityManager::SetCanEnableCapability(const nsACString & certificateFingerprint, const char *capability, PRInt16 canEnable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getObjectPrincipal (in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsScriptSecurityManager::GetObjectPrincipal(JSContext * cx, JSObject * obj, nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean subjectPrincipalIsSystem (); */
NS_IMETHODIMP nsScriptSecurityManager::SubjectPrincipalIsSystem(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkSameOrigin (in JSContextPtr aJSContext, in nsIURI aTargetURI); */
NS_IMETHODIMP nsScriptSecurityManager::CheckSameOrigin(JSContext * aJSContext, nsIURI *aTargetURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkSameOriginURI (in nsIURI aSourceURI, in nsIURI aTargetURI, in boolean reportError); */
NS_IMETHODIMP nsScriptSecurityManager::CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, PRBool reportError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getPrincipalFromContext (in JSContextPtr cx); */
NS_IMETHODIMP nsScriptSecurityManager::GetPrincipalFromContext(JSContext * cx, nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getChannelPrincipal (in nsIChannel aChannel); */
NS_IMETHODIMP nsScriptSecurityManager::GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSystemPrincipal (in nsIPrincipal aPrincipal); */
NS_IMETHODIMP nsScriptSecurityManager::IsSystemPrincipal(nsIPrincipal *aPrincipal, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript, notxpcom] nsIPrincipal getCxSubjectPrincipal (in JSContextPtr cx); */
NS_IMETHODIMP_(nsIPrincipal *) nsScriptSecurityManager::GetCxSubjectPrincipal(JSContext * cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript, notxpcom] nsIPrincipal getCxSubjectPrincipalAndFrame (in JSContextPtr cx, out JSStackFramePtr fp); */
NS_IMETHODIMP_(nsIPrincipal *) nsScriptSecurityManager::GetCxSubjectPrincipalAndFrame(JSContext * cx, JSStackFrame * *fp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void pushContextPrincipal (in JSContextPtr cx, in JSStackFramePtr fp, in nsIPrincipal principal); */
NS_IMETHODIMP nsScriptSecurityManager::PushContextPrincipal(JSContext * cx, JSStackFrame * fp, nsIPrincipal *principal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void popContextPrincipal (in JSContextPtr cx); */
NS_IMETHODIMP nsScriptSecurityManager::PopContextPrincipal(JSContext * cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsISimpleEnumerator; /* forward declaration */

class nsICacheListener; /* forward declaration */

class nsICacheSession; /* forward declaration */

class nsICacheVisitor; /* forward declaration */

class nsIEventTarget; /* forward declaration */

typedef PRInt32 nsCacheStoragePolicy;


/* starting interface:    nsICacheService */
#define NS_ICACHESERVICE_IID_STR "14dbe1e9-f3bc-45af-92f4-2c574fcd4e39"

#define NS_ICACHESERVICE_IID \
  {0x14dbe1e9, 0xf3bc, 0x45af, \
    { 0x92, 0xf4, 0x2c, 0x57, 0x4f, 0xcd, 0x4e, 0x39 }}

class NS_NO_VTABLE nsICacheService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ICACHESERVICE_IID)

  /**
     * Create a cache session
     *
     * A cache session represents a client's access into the cache.  The cache
     * session is not "owned" by the cache service.  Hence, it is possible to
     * create duplicate cache sessions.  Entries created by a cache session
     * are invisible to other cache sessions, unless the cache sessions are
     * equivalent.
     *
     * @param clientID - Specifies the name of the client using the cache.
     * @param storagePolicy - Limits the storage policy for all entries
     *   accessed via the returned session.  As a result, devices excluded
     *   by the storage policy will not be searched when opening entries
     *   from the returned session.
     * @param streamBased - Indicates whether or not the data being cached
     *   can be represented as a stream.  The storagePolicy must be 
     *   consistent with the value of this field.  For example, a non-stream-
     *   based cache entry can only have a storage policy of STORE_IN_MEMORY.
     * @return new cache session.
     */
  /* nsICacheSession createSession (in string clientID, in nsCacheStoragePolicy storagePolicy, in boolean streamBased); */
  NS_IMETHOD CreateSession(const char *clientID, nsCacheStoragePolicy storagePolicy, PRBool streamBased, nsICacheSession **_retval) = 0;

  /**
     * Visit entries stored in the cache.  Used to implement about:cache.
     */
  /* void visitEntries (in nsICacheVisitor visitor); */
  NS_IMETHOD VisitEntries(nsICacheVisitor *visitor) = 0;

  /**
     * Evicts all entries in all devices implied by the storage policy.
     *
     * @note This function may evict some items but will throw if it fails to evict
     *       everything.
     */
  /* void evictEntries (in nsCacheStoragePolicy storagePolicy); */
  NS_IMETHOD EvictEntries(nsCacheStoragePolicy storagePolicy) = 0;

  /**
     * Event target which is used for I/O operations
     */
  /* readonly attribute nsIEventTarget cacheIOTarget; */
  NS_IMETHOD GetCacheIOTarget(nsIEventTarget * *aCacheIOTarget) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHESERVICE \
  NS_IMETHOD CreateSession(const char *clientID, nsCacheStoragePolicy storagePolicy, PRBool streamBased, nsICacheSession **_retval); \
  NS_IMETHOD VisitEntries(nsICacheVisitor *visitor); \
  NS_IMETHOD EvictEntries(nsCacheStoragePolicy storagePolicy); \
  NS_IMETHOD GetCacheIOTarget(nsIEventTarget * *aCacheIOTarget); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHESERVICE(_to) \
  NS_IMETHOD CreateSession(const char *clientID, nsCacheStoragePolicy storagePolicy, PRBool streamBased, nsICacheSession **_retval) { return _to CreateSession(clientID, storagePolicy, streamBased, _retval); } \
  NS_IMETHOD VisitEntries(nsICacheVisitor *visitor) { return _to VisitEntries(visitor); } \
  NS_IMETHOD EvictEntries(nsCacheStoragePolicy storagePolicy) { return _to EvictEntries(storagePolicy); } \
  NS_IMETHOD GetCacheIOTarget(nsIEventTarget * *aCacheIOTarget) { return _to GetCacheIOTarget(aCacheIOTarget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHESERVICE(_to) \
  NS_IMETHOD CreateSession(const char *clientID, nsCacheStoragePolicy storagePolicy, PRBool streamBased, nsICacheSession **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateSession(clientID, storagePolicy, streamBased, _retval); } \
  NS_IMETHOD VisitEntries(nsICacheVisitor *visitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitEntries(visitor); } \
  NS_IMETHOD EvictEntries(nsCacheStoragePolicy storagePolicy) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictEntries(storagePolicy); } \
  NS_IMETHOD GetCacheIOTarget(nsIEventTarget * *aCacheIOTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheIOTarget(aCacheIOTarget); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheService : public nsICacheService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHESERVICE

  nsCacheService();

private:
  ~nsCacheService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCacheService, nsICacheService)

nsCacheService::nsCacheService()
{
  /* member initializers and constructor code */
}

nsCacheService::~nsCacheService()
{
  /* destructor code */
}

/* nsICacheSession createSession (in string clientID, in nsCacheStoragePolicy storagePolicy, in boolean streamBased); */
NS_IMETHODIMP nsCacheService::CreateSession(const char *clientID, nsCacheStoragePolicy storagePolicy, PRBool streamBased, nsICacheSession **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitEntries (in nsICacheVisitor visitor); */
NS_IMETHODIMP nsCacheService::VisitEntries(nsICacheVisitor *visitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictEntries (in nsCacheStoragePolicy storagePolicy); */
NS_IMETHODIMP nsCacheService::EvictEntries(nsCacheStoragePolicy storagePolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIEventTarget cacheIOTarget; */
NS_IMETHODIMP nsCacheService::GetCacheIOTarget(nsIEventTarget * *aCacheIOTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIInputStream; /* forward declaration */

// {0A698C44-3BFF-11d4-9649-00C0CA135B4E}
#define NS_ISCRIPTABLEUNICODECONVERTER_CID { 0x0A698C44, 0x3BFF, 0x11d4, { 0x96, 0x49, 0x00, 0xC0, 0xCA, 0x13, 0x5B, 0x4E } }
#define NS_ISCRIPTABLEUNICODECONVERTER_CONTRACTID "@mozilla.org/intl/scriptableunicodeconverter"

/* starting interface:    nsIScriptableUnicodeConverter */
#define NS_ISCRIPTABLEUNICODECONVERTER_IID_STR "f36ee324-5c1c-437f-ba10-2b4db7a18031"

#define NS_ISCRIPTABLEUNICODECONVERTER_IID \
  {0xf36ee324, 0x5c1c, 0x437f, \
    { 0xba, 0x10, 0x2b, 0x4d, 0xb7, 0xa1, 0x80, 0x31 }}

/**
 * This interface is a unicode encoder for use by scripts
 *
 * @created         8/Jun/2000
 * @author          Makoto Kato [m_kato@ga2.so-net.ne.jp]
 */
class NS_NO_VTABLE nsIScriptableUnicodeConverter : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISCRIPTABLEUNICODECONVERTER_IID)

  /**
   * Converts the data from Unicode to one Charset.
   * Returns the converted string. After converting, Finish should be called
   * and its return value appended to this return value.
   */
  /* ACString ConvertFromUnicode (in AString aSrc); */
  NS_IMETHOD ConvertFromUnicode(const nsAString & aSrc, nsACString & _retval) = 0;

  /**
   * Returns the terminator string.
   * Should be called after ConvertFromUnicode() and appended to that
   * function's return value.
   */
  /* ACString Finish (); */
  NS_IMETHOD Finish(nsACString & _retval) = 0;

  /**
   * Converts the data from one Charset to Unicode.
   */
  /* AString ConvertToUnicode (in ACString aSrc); */
  NS_IMETHOD ConvertToUnicode(const nsACString & aSrc, nsAString & _retval) = 0;

  /**
   * Converts an array of bytes to a unicode string.
   */
  /* AString convertFromByteArray ([array, size_is (aCount), const] in octet aData, in unsigned long aCount); */
  NS_IMETHOD ConvertFromByteArray(const PRUint8 *aData, PRUint32 aCount, nsAString & _retval) = 0;

  /**
   * Convert a unicode string to an array of bytes. Finish does not need to be
   * called.
   */
  /* void convertToByteArray (in AString aString, [optional] out unsigned long aLen, [array, size_is (aLen), retval] out octet aData); */
  NS_IMETHOD ConvertToByteArray(const nsAString & aString, PRUint32 *aLen, PRUint8 **aData) = 0;

  /**
   * Converts a unicode string to an input stream. The bytes in the stream are
   * encoded according to the charset attribute.
   * The returned stream will be nonblocking.
   */
  /* nsIInputStream convertToInputStream (in AString aString); */
  NS_IMETHOD ConvertToInputStream(const nsAString & aString, nsIInputStream **_retval) = 0;

  /**
   * Current character set.
   *
   * @throw NS_ERROR_UCONV_NOCONV
   *        The requested charset is not supported.
   */
  /* attribute string charset; */
  NS_IMETHOD GetCharset(char * *aCharset) = 0;
  NS_IMETHOD SetCharset(const char * aCharset) = 0;

  /**
   * Internal use
   *
   * When this attribute is set, all charsets may be accessed.
   * When it is not set (the default), charsets with the isXSSVulnerable flag
   *  may not be accessed
   */
  /* attribute boolean isInternal; */
  NS_IMETHOD GetIsInternal(PRBool *aIsInternal) = 0;
  NS_IMETHOD SetIsInternal(PRBool aIsInternal) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTABLEUNICODECONVERTER \
  NS_IMETHOD ConvertFromUnicode(const nsAString & aSrc, nsACString & _retval); \
  NS_IMETHOD Finish(nsACString & _retval); \
  NS_IMETHOD ConvertToUnicode(const nsACString & aSrc, nsAString & _retval); \
  NS_IMETHOD ConvertFromByteArray(const PRUint8 *aData, PRUint32 aCount, nsAString & _retval); \
  NS_IMETHOD ConvertToByteArray(const nsAString & aString, PRUint32 *aLen, PRUint8 **aData); \
  NS_IMETHOD ConvertToInputStream(const nsAString & aString, nsIInputStream **_retval); \
  NS_IMETHOD GetCharset(char * *aCharset); \
  NS_IMETHOD SetCharset(const char * aCharset); \
  NS_IMETHOD GetIsInternal(PRBool *aIsInternal); \
  NS_IMETHOD SetIsInternal(PRBool aIsInternal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTABLEUNICODECONVERTER(_to) \
  NS_IMETHOD ConvertFromUnicode(const nsAString & aSrc, nsACString & _retval) { return _to ConvertFromUnicode(aSrc, _retval); } \
  NS_IMETHOD Finish(nsACString & _retval) { return _to Finish(_retval); } \
  NS_IMETHOD ConvertToUnicode(const nsACString & aSrc, nsAString & _retval) { return _to ConvertToUnicode(aSrc, _retval); } \
  NS_IMETHOD ConvertFromByteArray(const PRUint8 *aData, PRUint32 aCount, nsAString & _retval) { return _to ConvertFromByteArray(aData, aCount, _retval); } \
  NS_IMETHOD ConvertToByteArray(const nsAString & aString, PRUint32 *aLen, PRUint8 **aData) { return _to ConvertToByteArray(aString, aLen, aData); } \
  NS_IMETHOD ConvertToInputStream(const nsAString & aString, nsIInputStream **_retval) { return _to ConvertToInputStream(aString, _retval); } \
  NS_IMETHOD GetCharset(char * *aCharset) { return _to GetCharset(aCharset); } \
  NS_IMETHOD SetCharset(const char * aCharset) { return _to SetCharset(aCharset); } \
  NS_IMETHOD GetIsInternal(PRBool *aIsInternal) { return _to GetIsInternal(aIsInternal); } \
  NS_IMETHOD SetIsInternal(PRBool aIsInternal) { return _to SetIsInternal(aIsInternal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTABLEUNICODECONVERTER(_to) \
  NS_IMETHOD ConvertFromUnicode(const nsAString & aSrc, nsACString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertFromUnicode(aSrc, _retval); } \
  NS_IMETHOD Finish(nsACString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Finish(_retval); } \
  NS_IMETHOD ConvertToUnicode(const nsACString & aSrc, nsAString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertToUnicode(aSrc, _retval); } \
  NS_IMETHOD ConvertFromByteArray(const PRUint8 *aData, PRUint32 aCount, nsAString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertFromByteArray(aData, aCount, _retval); } \
  NS_IMETHOD ConvertToByteArray(const nsAString & aString, PRUint32 *aLen, PRUint8 **aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertToByteArray(aString, aLen, aData); } \
  NS_IMETHOD ConvertToInputStream(const nsAString & aString, nsIInputStream **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertToInputStream(aString, _retval); } \
  NS_IMETHOD GetCharset(char * *aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharset(aCharset); } \
  NS_IMETHOD SetCharset(const char * aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharset(aCharset); } \
  NS_IMETHOD GetIsInternal(PRBool *aIsInternal) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsInternal(aIsInternal); } \
  NS_IMETHOD SetIsInternal(PRBool aIsInternal) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsInternal(aIsInternal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptableUnicodeConverter : public nsIScriptableUnicodeConverter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTABLEUNICODECONVERTER

  nsScriptableUnicodeConverter();

private:
  ~nsScriptableUnicodeConverter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptableUnicodeConverter, nsIScriptableUnicodeConverter)

nsScriptableUnicodeConverter::nsScriptableUnicodeConverter()
{
  /* member initializers and constructor code */
}

nsScriptableUnicodeConverter::~nsScriptableUnicodeConverter()
{
  /* destructor code */
}

/* ACString ConvertFromUnicode (in AString aSrc); */
NS_IMETHODIMP nsScriptableUnicodeConverter::ConvertFromUnicode(const nsAString & aSrc, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString Finish (); */
NS_IMETHODIMP nsScriptableUnicodeConverter::Finish(nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString ConvertToUnicode (in ACString aSrc); */
NS_IMETHODIMP nsScriptableUnicodeConverter::ConvertToUnicode(const nsACString & aSrc, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString convertFromByteArray ([array, size_is (aCount), const] in octet aData, in unsigned long aCount); */
NS_IMETHODIMP nsScriptableUnicodeConverter::ConvertFromByteArray(const PRUint8 *aData, PRUint32 aCount, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void convertToByteArray (in AString aString, [optional] out unsigned long aLen, [array, size_is (aLen), retval] out octet aData); */
NS_IMETHODIMP nsScriptableUnicodeConverter::ConvertToByteArray(const nsAString & aString, PRUint32 *aLen, PRUint8 **aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream convertToInputStream (in AString aString); */
NS_IMETHODIMP nsScriptableUnicodeConverter::ConvertToInputStream(const nsAString & aString, nsIInputStream **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string charset; */
NS_IMETHODIMP nsScriptableUnicodeConverter::GetCharset(char * *aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableUnicodeConverter::SetCharset(const char * aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isInternal; */
NS_IMETHODIMP nsScriptableUnicodeConverter::GetIsInternal(PRBool *aIsInternal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableUnicodeConverter::SetIsInternal(PRBool aIsInternal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIInterfaceRequestor; /* forward declaration */

class nsIWebBrowserChrome; /* forward declaration */

class nsIURIContentListener; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIWeakReference; /* forward declaration */


/* starting interface:    nsIWebBrowser */
#define NS_IWEBBROWSER_IID_STR "33e9d001-caab-4ba9-8961-54902f197202"

#define NS_IWEBBROWSER_IID \
  {0x33e9d001, 0xcaab, 0x4ba9, \
    { 0x89, 0x61, 0x54, 0x90, 0x2f, 0x19, 0x72, 0x02 }}

class NS_NO_VTABLE nsIWebBrowser : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IWEBBROWSER_IID)

  /**
 * The nsIWebBrowser interface is implemented by web browser objects.
 * Embedders use this interface during initialisation to associate
 * the new web browser instance with the embedders chrome and
 * to register any listeners. The interface may also be used at runtime
 * to obtain the content DOM window and from that the rest of the DOM.
 */
/**
     * Registers a listener of the type specified by the iid to receive
     * callbacks. The browser stores a weak reference to the listener
     * to avoid any circular dependencies.
     * Typically this method will be called to register an object
     * to receive <CODE>nsIWebProgressListener</CODE> or 
     * <CODE>nsISHistoryListener</CODE> notifications in which case the
     * the IID is that of the interface.
     *
     * @param aListener The listener to be added.
     * @param aIID      The IID of the interface that will be called
     *                  on the listener as appropriate.
     * @return          <CODE>NS_OK</CODE> for successful registration;
     *                  <CODE>NS_ERROR_INVALID_ARG</CODE> if aIID is not
     *                  supposed to be registered using this method;
     *                  <CODE>NS_ERROR_FAILURE</CODE> either aListener did not
     *                  expose the interface specified by the IID, or some
     *                  other internal error occurred.
     *
     * @see removeWebBrowserListener
     * @see nsIWeakReference
     * @see nsIWebProgressListener
     * @see nsISHistoryListener
     *
     * @return <CODE>NS_OK</CODE>, listener was successfully added;
     *         <CODE>NS_ERROR_INVALID_ARG</CODE>, one of the arguments was
     *         invalid or the object did not implement the interface
     *         specified by the IID.
     */
  /* void addWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) = 0;

  /**
     * Removes a previously registered listener.
     *
     * @param aListener The listener to be removed.
     * @param aIID      The IID of the interface on the listener that will
     *                  no longer be called.
     *
     * @return <CODE>NS_OK</CODE>, listener was successfully removed;
     *         <CODE>NS_ERROR_INVALID_ARG</CODE> arguments was invalid or
     *         the object did not implement the interface specified by the IID.
     *
     * @see addWebBrowserListener
     * @see nsIWeakReference
     */
  /* void removeWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) = 0;

  /**
     * The chrome object associated with the browser instance. The embedder
     * must create one chrome object for <I>each</I> browser object
     * that is instantiated. The embedder must associate the two by setting
     * this property to point to the chrome object before creating the browser
     * window via the browser's <CODE>nsIBaseWindow</CODE> interface. 
     *
     * The chrome object must also implement <CODE>nsIEmbeddingSiteWindow</CODE>.
     *
     * The chrome may optionally implement <CODE>nsIInterfaceRequestor</CODE>,
     * <CODE>nsIWebBrowserChromeFocus</CODE>,
     * <CODE>nsIContextMenuListener</CODE> and
     * <CODE>nsITooltipListener</CODE> to receive additional notifications
     * from the browser object.
     *
     * The chrome object may optionally implement <CODE>nsIWebProgressListener</CODE> 
     * instead of explicitly calling <CODE>addWebBrowserListener</CODE> and
     * <CODE>removeWebBrowserListener</CODE> to register a progress listener
     * object. If the implementation does this, it must also implement
     * <CODE>nsIWeakReference</CODE>.
     * 
     * @note The implementation should not refcount the supplied chrome
     *       object; it should assume that a non <CODE>nsnull</CODE> value is
     *       always valid. The embedder must explicitly set this value back
     *       to nsnull if the chrome object is destroyed before the browser
     *       object.
     *
     * @see nsIBaseWindow
     * @see nsIWebBrowserChrome
     * @see nsIEmbeddingSiteWindow
     * @see nsIInterfaceRequestor
     * @see nsIWebBrowserChromeFocus
     * @see nsIContextMenuListener
     * @see nsITooltipListener
     * @see nsIWeakReference
     * @see nsIWebProgressListener
     */
  /* attribute nsIWebBrowserChrome containerWindow; */
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) = 0;
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome * aContainerWindow) = 0;

  /**
     * URI content listener parent. The embedder may set this property to
     * their own implementation if they intend to override or prevent
     * how certain kinds of content are loaded.
     *
     * @note If this attribute is set to an object that implements
     *       nsISupportsWeakReference, the implementation should get the
     *       nsIWeakReference and hold that.  Otherwise, the implementation
     *       should not refcount this interface; it should assume that a non
     *       null value is always valid.  In that case, the embedder should
     *       explicitly set this value back to null if the parent content
     *       listener is destroyed before the browser object.
     *
     * @see nsIURIContentListener
     */
  /* attribute nsIURIContentListener parentURIContentListener; */
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) = 0;
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener * aParentURIContentListener) = 0;

  /**
     * The top-level DOM window. The embedder may walk the entire
     * DOM starting from this value.
     *
     * @see nsIDOMWindow
     */
  /* readonly attribute nsIDOMWindow contentDOMWindow; */
  NS_IMETHOD GetContentDOMWindow(nsIDOMWindow * *aContentDOMWindow) = 0;

  /**
     * Whether this web browser is active. Active means that it's visible
     * enough that we want to avoid certain optimizations like discarding
     * decoded image data and throttling the refresh driver. In Firefox,
     * this corresponds to the visible tab.
     *
     * Defaults to true. For optimal performance, set it to false when
     * appropriate.
     */
  /* attribute boolean isActive; */
  NS_IMETHOD GetIsActive(PRBool *aIsActive) = 0;
  NS_IMETHOD SetIsActive(PRBool aIsActive) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSER \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID); \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID); \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow); \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome * aContainerWindow); \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener); \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener * aParentURIContentListener); \
  NS_IMETHOD GetContentDOMWindow(nsIDOMWindow * *aContentDOMWindow); \
  NS_IMETHOD GetIsActive(PRBool *aIsActive); \
  NS_IMETHOD SetIsActive(PRBool aIsActive); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSER(_to) \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) { return _to AddWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) { return _to RemoveWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) { return _to GetContainerWindow(aContainerWindow); } \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome * aContainerWindow) { return _to SetContainerWindow(aContainerWindow); } \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) { return _to GetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener * aParentURIContentListener) { return _to SetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD GetContentDOMWindow(nsIDOMWindow * *aContentDOMWindow) { return _to GetContentDOMWindow(aContentDOMWindow); } \
  NS_IMETHOD GetIsActive(PRBool *aIsActive) { return _to GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(PRBool aIsActive) { return _to SetIsActive(aIsActive); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSER(_to) \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContainerWindow(aContainerWindow); } \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome * aContainerWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContainerWindow(aContainerWindow); } \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener * aParentURIContentListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD GetContentDOMWindow(nsIDOMWindow * *aContentDOMWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDOMWindow(aContentDOMWindow); } \
  NS_IMETHOD GetIsActive(PRBool *aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(PRBool aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsActive(aIsActive); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowser : public nsIWebBrowser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSER

  nsWebBrowser();

private:
  ~nsWebBrowser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebBrowser, nsIWebBrowser)

nsWebBrowser::nsWebBrowser()
{
  /* member initializers and constructor code */
}

nsWebBrowser::~nsWebBrowser()
{
  /* destructor code */
}

/* void addWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
NS_IMETHODIMP nsWebBrowser::AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
NS_IMETHODIMP nsWebBrowser::RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIWebBrowserChrome containerWindow; */
NS_IMETHODIMP nsWebBrowser::GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetContainerWindow(nsIWebBrowserChrome * aContainerWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURIContentListener parentURIContentListener; */
NS_IMETHODIMP nsWebBrowser::GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetParentURIContentListener(nsIURIContentListener * aParentURIContentListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow contentDOMWindow; */
NS_IMETHODIMP nsWebBrowser::GetContentDOMWindow(nsIDOMWindow * *aContentDOMWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isActive; */
NS_IMETHODIMP nsWebBrowser::GetIsActive(PRBool *aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetIsActive(PRBool aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsPresContext;
class nsIPresShell;
class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsIContentViewer; /* forward declaration */

class nsIURIContentListener; /* forward declaration */

class nsIDOMEventTarget; /* forward declaration */

class nsIDocShellLoadInfo; /* forward declaration */

class nsIDocumentCharsetInfo; /* forward declaration */

class nsIWebNavigation; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIRequest; /* forward declaration */

class nsISHEntry; /* forward declaration */

class nsILayoutHistoryState; /* forward declaration */

class nsISecureBrowserUI; /* forward declaration */

class nsIDOMStorage; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIWebBrowserPrint; /* forward declaration */

class nsIVariant; /* forward declaration */


/* starting interface:    nsIDocShell */
#define NS_IDOCSHELL_IID_STR "98cdbcc4-2d81-4191-a63f-b6c52085edbc"

#define NS_IDOCSHELL_IID \
  {0x98cdbcc4, 0x2d81, 0x4191, \
    { 0xa6, 0x3f, 0xb6, 0xc5, 0x20, 0x85, 0xed, 0xbc }}

class NS_NO_VTABLE nsIDocShell : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDOCSHELL_IID)

  /**
   * Loads a given URI.  This will give priority to loading the requested URI
   * in the object implementing	this interface.  If it can't be loaded here
   * however, the URL dispatcher will go through its normal process of content
   * loading.
   *
   * @param uri        - The URI to load.
   * @param loadInfo   - This is the extended load info for this load.  This
   *                     most often will be null, but if you need to do 
   *                     additional setup for this load you can get a loadInfo
   *                     object by calling createLoadInfo.  Once you have this
   *                     object you can set the needed properties on it and
   *                     then pass it to loadURI.
   * @param aLoadFlags - Flags to modify load behaviour. Flags are defined in
   *                     nsIWebNavigation.  Note that using flags outside
   *                     LOAD_FLAGS_MASK is only allowed if passing in a
   *                     non-null loadInfo.  And even some of those might not
   *                     be allowed.  Use at your own risk.
   */
  /* [noscript] void loadURI (in nsIURI uri, in nsIDocShellLoadInfo loadInfo, in unsigned long aLoadFlags, in boolean firstParty); */
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, PRBool firstParty) = 0;

  /**
   * Loads a given stream. This will give priority to loading the requested
   * stream in the object implementing this interface. If it can't be loaded
   * here however, the URL dispatched will go through its normal process of
   * content loading.
   *
   * @param aStream         - The input stream that provides access to the data
   *                          to be loaded.  This must be a blocking, threadsafe
   *                          stream implementation.
   * @param aURI            - The URI representing the stream, or null.
   * @param aContentType    - The type (MIME) of data being loaded (empty if unknown).
   * @param aContentCharset - The charset of the data being loaded (empty if unknown).
   * @param aLoadInfo       - This is the extended load info for this load.  This
   *                          most often will be null, but if you need to do 
   *                          additional setup for this load you can get a
   *                          loadInfo object by calling createLoadInfo.  Once
   *                          you have this object you can set the needed 
   *                          properties on it and then pass it to loadStream.
   */
  /* [noscript] void loadStream (in nsIInputStream aStream, in nsIURI aURI, in ACString aContentType, in ACString aContentCharset, in nsIDocShellLoadInfo aLoadInfo); */
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) = 0;

  enum { INTERNAL_LOAD_FLAGS_NONE = 0 };

  enum { INTERNAL_LOAD_FLAGS_INHERIT_OWNER = 1 };

  enum { INTERNAL_LOAD_FLAGS_DONT_SEND_REFERRER = 2 };

  enum { INTERNAL_LOAD_FLAGS_ALLOW_THIRD_PARTY_FIXUP = 4 };

  enum { INTERNAL_LOAD_FLAGS_FIRST_LOAD = 8 };

  enum { INTERNAL_LOAD_FLAGS_BYPASS_CLASSIFIER = 16 };

  enum { INTERNAL_LOAD_FLAGS_FORCE_ALLOW_COOKIES = 32 };

  /**
   * Loads the given URI.  This method is identical to loadURI(...) except
   * that its parameter list is broken out instead of being packaged inside
   * of an nsIDocShellLoadInfo object...
   *
   * @param aURI            - The URI to load.
   * @param aReferrer       - Referring URI
   * @param aOwner          - Owner (security principal) 
   * @param aInheritOwner   - Flag indicating whether the owner of the current
   *                          document should be inherited if aOwner is null.
   * @param aStopActiveDoc  - Flag indicating whether loading the current
   *                          document should be stopped.
   * @param aWindowTarget   - Window target for the load.
   * @param aTypeHint       - A hint as to the content-type of the resulting
   *                          data.  May be null or empty if no hint.
   * @param aPostDataStream - Post data stream (if POSTing)
   * @param aHeadersStream  - Stream containing "extra" request headers...
   * @param aLoadFlags      - Flags to modify load behaviour. Flags are defined
   *                          in nsIWebNavigation.
   * @param aSHEntry        - Active Session History entry (if loading from SH)
   */
  /* [noscript] void internalLoad (in nsIURI aURI, in nsIURI aReferrer, in nsISupports aOwner, in PRUint32 aFlags, in wstring aWindowTarget, in string aTypeHint, in nsIInputStream aPostDataStream, in nsIInputStream aHeadersStream, in unsigned long aLoadFlags, in nsISHEntry aSHEntry, in boolean firstParty, out nsIDocShell aDocShell, out nsIRequest aRequest); */
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar *aWindowTarget, const char *aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, PRBool firstParty, nsIDocShell **aDocShell, nsIRequest **aRequest) = 0;

  /**
   * Do either a history.pushState() or history.replaceState() operation,
   * depending on the value of aReplace.
   */
  /* void addState (in nsIVariant aData, in DOMString aTitle, in DOMString aURL, in boolean aReplace); */
  NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, PRBool aReplace) = 0;

  /**
   * Creates a DocShellLoadInfo object that you can manipulate and then pass
   * to loadURI.
   */
  /* void createLoadInfo (out nsIDocShellLoadInfo loadInfo); */
  NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo **loadInfo) = 0;

  /**
   * Reset state to a new content model within the current document and the document
   * viewer.  Called by the document before initiating an out of band document.write().
   */
  /* void prepareForNewContentModel (); */
  NS_IMETHOD PrepareForNewContentModel(void) = 0;

  /**
   * For editors and suchlike who wish to change the URI associated with the
   * document. Note if you want to get the current URI, use the read-only
   * property on nsIWebNavigation.
   */
  /* void setCurrentURI (in nsIURI aURI); */
  NS_IMETHOD SetCurrentURI(nsIURI *aURI) = 0;

  /**
   * Notify the associated content viewer and all child docshells that they are
   * about to be hidden.  If |isUnload| is true, then the document is being
   * unloaded as well.
   *
   * @param isUnload if true, fire the unload event in addition to the pagehide
   *                 event.
   */
  /* [noscript] void firePageHideNotification (in boolean isUnload); */
  NS_IMETHOD FirePageHideNotification(PRBool isUnload) = 0;

  /**
   * Presentation context for the currently loaded document.  This may be null.
   */
  /* [noscript] readonly attribute nsPresContext presContext; */
  NS_IMETHOD GetPresContext(nsPresContext * *aPresContext) = 0;

  /**
   * Presentation shell for the currently loaded document.  This may be null.
   */
  /* [noscript] readonly attribute nsIPresShell presShell; */
  NS_IMETHOD GetPresShell(nsIPresShell * *aPresShell) = 0;

  /**
   * Presentation shell for the oldest document, if this docshell is
   * currently transitioning between documents.
   */
  /* [noscript] readonly attribute nsIPresShell eldestPresShell; */
  NS_IMETHOD GetEldestPresShell(nsIPresShell * *aEldestPresShell) = 0;

  /**
   * Content Viewer that is currently loaded for this DocShell.  This may
   * change as the underlying content changes.
   */
  /* readonly attribute nsIContentViewer contentViewer; */
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) = 0;

  /**
   * This attribute allows chrome to tie in to handle DOM events that may
   * be of interest to chrome.
   */
  /* attribute nsIDOMEventTarget chromeEventHandler; */
  NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) = 0;
  NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget * aChromeEventHandler) = 0;

  /**
   * The document charset info.  This is used by a load to determine priorities
   * for charset detection etc.
   */
  /* attribute nsIDocumentCharsetInfo documentCharsetInfo; */
  NS_IMETHOD GetDocumentCharsetInfo(nsIDocumentCharsetInfo * *aDocumentCharsetInfo) = 0;
  NS_IMETHOD SetDocumentCharsetInfo(nsIDocumentCharsetInfo * aDocumentCharsetInfo) = 0;

  /**
   * Whether to allow plugin execution
   */
  /* attribute boolean allowPlugins; */
  NS_IMETHOD GetAllowPlugins(PRBool *aAllowPlugins) = 0;
  NS_IMETHOD SetAllowPlugins(PRBool aAllowPlugins) = 0;

  /**
   * Whether to allow Javascript execution
   */
  /* attribute boolean allowJavascript; */
  NS_IMETHOD GetAllowJavascript(PRBool *aAllowJavascript) = 0;
  NS_IMETHOD SetAllowJavascript(PRBool aAllowJavascript) = 0;

  /**
   * Attribute stating if refresh based redirects can be allowed
   */
  /* attribute boolean allowMetaRedirects; */
  NS_IMETHOD GetAllowMetaRedirects(PRBool *aAllowMetaRedirects) = 0;
  NS_IMETHOD SetAllowMetaRedirects(PRBool aAllowMetaRedirects) = 0;

  /**
   * Attribute stating if it should allow subframes (framesets/iframes) or not
   */
  /* attribute boolean allowSubframes; */
  NS_IMETHOD GetAllowSubframes(PRBool *aAllowSubframes) = 0;
  NS_IMETHOD SetAllowSubframes(PRBool aAllowSubframes) = 0;

  /**
   * Attribute stating whether or not images should be loaded.
   */
  /* attribute boolean allowImages; */
  NS_IMETHOD GetAllowImages(PRBool *aAllowImages) = 0;
  NS_IMETHOD SetAllowImages(PRBool aAllowImages) = 0;

  /**
   * Attribute that determines whether DNS prefetch is allowed for this subtree
   * of the docshell tree.  Defaults to true.  Setting this will make it take
   * effect starting with the next document loaded in the docshell.
   */
  /* attribute boolean allowDNSPrefetch; */
  NS_IMETHOD GetAllowDNSPrefetch(PRBool *aAllowDNSPrefetch) = 0;
  NS_IMETHOD SetAllowDNSPrefetch(PRBool aAllowDNSPrefetch) = 0;

  /**
   * Get an enumerator over this docShell and its children.
   *
   * @param aItemType  - Only include docShells of this type, or if typeAll,
   *                     include all child shells.
   *                     Uses types from nsIDocShellTreeItem.
   * @param aDirection - Whether to enumerate forwards or backwards.
   */
  enum { ENUMERATE_FORWARDS = 0 };

  enum { ENUMERATE_BACKWARDS = 1 };

  /* nsISimpleEnumerator getDocShellEnumerator (in long aItemType, in long aDirection); */
  NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator **_retval) = 0;

  /**
   * The type of application that created this window
   */
  enum { APP_TYPE_UNKNOWN = 0U };

  enum { APP_TYPE_MAIL = 1U };

  enum { APP_TYPE_EDITOR = 2U };

  /* attribute unsigned long appType; */
  NS_IMETHOD GetAppType(PRUint32 *aAppType) = 0;
  NS_IMETHOD SetAppType(PRUint32 aAppType) = 0;

  /**
   * certain dochshells (like the message pane)
   * should not throw up auth dialogs
   * because it can act as a password trojan
   */
  /* attribute boolean allowAuth; */
  NS_IMETHOD GetAllowAuth(PRBool *aAllowAuth) = 0;
  NS_IMETHOD SetAllowAuth(PRBool aAllowAuth) = 0;

  /**
   * Set/Get the document scale factor.  When setting this attribute, a
   * NS_ERROR_NOT_IMPLEMENTED error may be returned by implementations
   * not supporting zoom.  Implementations not supporting zoom should return
   * 1.0 all the time for the Get operation.  1.0 by the way is the default
   * of zoom.  This means 100% of normal scaling or in other words normal size
   * no zoom. 
   */
  /* attribute float zoom; */
  NS_IMETHOD GetZoom(float *aZoom) = 0;
  NS_IMETHOD SetZoom(float aZoom) = 0;

  /* attribute long marginWidth; */
  NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) = 0;
  NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) = 0;

  /* attribute long marginHeight; */
  NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) = 0;
  NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) = 0;

  /* void tabToTreeOwner (in boolean forward, out boolean tookFocus); */
  NS_IMETHOD TabToTreeOwner(PRBool forward, PRBool *tookFocus) = 0;

  /**
   * Current busy state for DocShell
   */
  enum { BUSY_FLAGS_NONE = 0U };

  enum { BUSY_FLAGS_BUSY = 1U };

  enum { BUSY_FLAGS_BEFORE_PAGE_LOAD = 2U };

  enum { BUSY_FLAGS_PAGE_LOADING = 4U };

  /**
   * Load commands for the document 
   */
  enum { LOAD_CMD_NORMAL = 1U };

  enum { LOAD_CMD_RELOAD = 2U };

  enum { LOAD_CMD_HISTORY = 4U };

  enum { LOAD_CMD_PUSHSTATE = 8U };

  /* readonly attribute unsigned long busyFlags; */
  NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) = 0;

  /* attribute unsigned long loadType; */
  NS_IMETHOD GetLoadType(PRUint32 *aLoadType) = 0;
  NS_IMETHOD SetLoadType(PRUint32 aLoadType) = 0;

  /* boolean isBeingDestroyed (); */
  NS_IMETHOD IsBeingDestroyed(PRBool *_retval) = 0;

  /* readonly attribute boolean isExecutingOnLoadHandler; */
  NS_IMETHOD GetIsExecutingOnLoadHandler(PRBool *aIsExecutingOnLoadHandler) = 0;

  /* attribute nsILayoutHistoryState layoutHistoryState; */
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) = 0;
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState * aLayoutHistoryState) = 0;

  /* readonly attribute boolean shouldSaveLayoutState; */
  NS_IMETHOD GetShouldSaveLayoutState(PRBool *aShouldSaveLayoutState) = 0;

  /**
   * The SecureBrowserUI object for this docshell.  This is set by XUL
   * <browser> or nsWebBrowser for their root docshell.
   */
  /* attribute nsISecureBrowserUI securityUI; */
  NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) = 0;
  NS_IMETHOD SetSecurityUI(nsISecureBrowserUI * aSecurityUI) = 0;

  /**
   * Cancel the XPCOM timers for each meta-refresh URI in this docshell,
   * and this docshell's children, recursively. The meta-refresh timers can be
   * restarted using resumeRefreshURIs().  If the timers are already suspended,
   * this has no effect.
   */
  /* void suspendRefreshURIs (); */
  NS_IMETHOD SuspendRefreshURIs(void) = 0;

  /**
   * Restart the XPCOM timers for each meta-refresh URI in this docshell,
   * and this docshell's children, recursively.  If the timers are already
   * running, this has no effect.
   */
  /* void resumeRefreshURIs (); */
  NS_IMETHOD ResumeRefreshURIs(void) = 0;

  /**
   * Begin firing WebProgressListener notifications for restoring a page
   * presentation. |viewer| is the content viewer whose document we are
   * starting to load.  If null, it defaults to the docshell's current content
   * viewer, creating one if necessary.  |top| should be true for the toplevel
   * docshell that is being restored; it will be set to false when this method
   * is called for child docshells.  This method will post an event to
   * complete the simulated load after returning to the event loop.
   */
  /* void beginRestore (in nsIContentViewer viewer, in boolean top); */
  NS_IMETHOD BeginRestore(nsIContentViewer *viewer, PRBool top) = 0;

  /**
   * Finish firing WebProgressListener notifications and DOM events for
   * restoring a page presentation.  This should only be called via
   * beginRestore().
   */
  /* void finishRestore (); */
  NS_IMETHOD FinishRestore(void) = 0;

  /* readonly attribute boolean restoringDocument; */
  NS_IMETHOD GetRestoringDocument(PRBool *aRestoringDocument) = 0;

  /* attribute boolean useErrorPages; */
  NS_IMETHOD GetUseErrorPages(PRBool *aUseErrorPages) = 0;
  NS_IMETHOD SetUseErrorPages(PRBool aUseErrorPages) = 0;

  /**
   * Keeps track of the previous SHTransaction index and the current
   * SHTransaction index at the time that the doc shell begins to load.
   * Used for ContentViewer eviction.
   */
  /* readonly attribute long previousTransIndex; */
  NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) = 0;

  /* readonly attribute long loadedTransIndex; */
  NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) = 0;

  /**
   * Notification that entries have been removed from the beginning of a
   * nsSHistory which has this as its rootDocShell.
   *
   * @param numEntries - The number of entries removed
   */
  /* void historyPurged (in long numEntries); */
  NS_IMETHOD HistoryPurged(PRInt32 numEntries) = 0;

  /* nsIDOMStorage getSessionStorageForURI (in nsIURI uri, in DOMString documentURI); */
  NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage **_retval) = 0;

  /* nsIDOMStorage getSessionStorageForPrincipal (in nsIPrincipal principal, in DOMString documentURI, in boolean create); */
  NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, PRBool create, nsIDOMStorage **_retval) = 0;

  /* void addSessionStorage (in nsIPrincipal principal, in nsIDOMStorage storage); */
  NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) = 0;

  /**
   * Gets the channel for the currently loaded document, if any. 
   * For a new document load, this will be the channel of the previous document
   * until after OnLocationChange fires.
   */
  /* readonly attribute nsIChannel currentDocumentChannel; */
  NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) = 0;

  /**
   * Set the offset of this child in its container.
   */
  /* [noscript] void setChildOffset (in unsigned long offset); */
  NS_IMETHOD SetChildOffset(PRUint32 offset) = 0;

  /**
   * Find out whether the docshell is currently in the middle of a page
   * transition. This is set just before the pagehide/unload events fire.
   */
  /* readonly attribute boolean isInUnload; */
  NS_IMETHOD GetIsInUnload(PRBool *aIsInUnload) = 0;

  /**
   * Find out if the currently loaded document came from a suspicious channel
   * (such as a JAR channel where the server-returned content type isn't a
   * known JAR type).
   */
  /* readonly attribute boolean channelIsUnsafe; */
  NS_IMETHOD GetChannelIsUnsafe(PRBool *aChannelIsUnsafe) = 0;

  /**
   * Disconnects this docshell's editor from its window, and stores the
   * editor data in the open document's session history entry.  This
   * should be called only during page transitions.
   */
  /* [noscript, notxpcom] void DetachEditorFromWindow (); */
  NS_IMETHOD_(void) DetachEditorFromWindow(void) = 0;

  /**
   * If true, this browser is not visible in the traditional sense, but
   * is actively being rendered to the screen (ex. painted on a canvas)
   * and should be treated accordingly.
   **/
  /* attribute boolean isOffScreenBrowser; */
  NS_IMETHOD GetIsOffScreenBrowser(PRBool *aIsOffScreenBrowser) = 0;
  NS_IMETHOD SetIsOffScreenBrowser(PRBool aIsOffScreenBrowser) = 0;

  /**
   * If the current content viewer isn't initialized for print preview,
   * it is replaced with one which is and to which an about:blank document
   * is loaded.
   */
  /* readonly attribute nsIWebBrowserPrint printPreview; */
  NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) = 0;

  /**
   * Whether this docshell can execute scripts based on its hierarchy.
   * The rule of thumb here is that we disable js if this docshell or any
   * of its parents disallow scripting, unless the only reason for js being
   * disabled in this docshell is a parent docshell having a document that
   * is in design mode.  In that case, we explicitly allow scripting on the
   * current docshell.
   */
  /* readonly attribute boolean canExecuteScripts; */
  NS_IMETHOD GetCanExecuteScripts(PRBool *aCanExecuteScripts) = 0;

  /**
   * Sets whether a docshell is active. An active docshell is one that is
   * visible, and thus is not a good candidate for certain optimizations
   * like image frame discarding. Docshells are active unless told otherwise.
   */
  /* attribute boolean isActive; */
  NS_IMETHOD GetIsActive(PRBool *aIsActive) = 0;
  NS_IMETHOD SetIsActive(PRBool aIsActive) = 0;

  /**
   * The ID of the docshell in the session history.
   */
  /* readonly attribute unsigned long long historyID; */
  NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) = 0;

  /**
   * Sets whether a docshell is an app tab. An app tab docshell may behave
   * differently than a non-app tab docshell in some cases, such as when
   * handling link clicks. Docshells are not app tabs unless told otherwise.
   */
  /* attribute boolean isAppTab; */
  NS_IMETHOD GetIsAppTab(PRBool *aIsAppTab) = 0;
  NS_IMETHOD SetIsAppTab(PRBool aIsAppTab) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCSHELL \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, PRBool firstParty); \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo); \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar *aWindowTarget, const char *aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, PRBool firstParty, nsIDocShell **aDocShell, nsIRequest **aRequest); \
  NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, PRBool aReplace); \
  NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo **loadInfo); \
  NS_IMETHOD PrepareForNewContentModel(void); \
  NS_IMETHOD SetCurrentURI(nsIURI *aURI); \
  NS_IMETHOD FirePageHideNotification(PRBool isUnload); \
  NS_IMETHOD GetPresContext(nsPresContext * *aPresContext); \
  NS_IMETHOD GetPresShell(nsIPresShell * *aPresShell); \
  NS_IMETHOD GetEldestPresShell(nsIPresShell * *aEldestPresShell); \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer); \
  NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler); \
  NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget * aChromeEventHandler); \
  NS_IMETHOD GetDocumentCharsetInfo(nsIDocumentCharsetInfo * *aDocumentCharsetInfo); \
  NS_IMETHOD SetDocumentCharsetInfo(nsIDocumentCharsetInfo * aDocumentCharsetInfo); \
  NS_IMETHOD GetAllowPlugins(PRBool *aAllowPlugins); \
  NS_IMETHOD SetAllowPlugins(PRBool aAllowPlugins); \
  NS_IMETHOD GetAllowJavascript(PRBool *aAllowJavascript); \
  NS_IMETHOD SetAllowJavascript(PRBool aAllowJavascript); \
  NS_IMETHOD GetAllowMetaRedirects(PRBool *aAllowMetaRedirects); \
  NS_IMETHOD SetAllowMetaRedirects(PRBool aAllowMetaRedirects); \
  NS_IMETHOD GetAllowSubframes(PRBool *aAllowSubframes); \
  NS_IMETHOD SetAllowSubframes(PRBool aAllowSubframes); \
  NS_IMETHOD GetAllowImages(PRBool *aAllowImages); \
  NS_IMETHOD SetAllowImages(PRBool aAllowImages); \
  NS_IMETHOD GetAllowDNSPrefetch(PRBool *aAllowDNSPrefetch); \
  NS_IMETHOD SetAllowDNSPrefetch(PRBool aAllowDNSPrefetch); \
  NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator **_retval); \
  NS_IMETHOD GetAppType(PRUint32 *aAppType); \
  NS_IMETHOD SetAppType(PRUint32 aAppType); \
  NS_IMETHOD GetAllowAuth(PRBool *aAllowAuth); \
  NS_IMETHOD SetAllowAuth(PRBool aAllowAuth); \
  NS_IMETHOD GetZoom(float *aZoom); \
  NS_IMETHOD SetZoom(float aZoom); \
  NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth); \
  NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth); \
  NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight); \
  NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight); \
  NS_IMETHOD TabToTreeOwner(PRBool forward, PRBool *tookFocus); \
  NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags); \
  NS_IMETHOD GetLoadType(PRUint32 *aLoadType); \
  NS_IMETHOD SetLoadType(PRUint32 aLoadType); \
  NS_IMETHOD IsBeingDestroyed(PRBool *_retval); \
  NS_IMETHOD GetIsExecutingOnLoadHandler(PRBool *aIsExecutingOnLoadHandler); \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState); \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState * aLayoutHistoryState); \
  NS_IMETHOD GetShouldSaveLayoutState(PRBool *aShouldSaveLayoutState); \
  NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI); \
  NS_IMETHOD SetSecurityUI(nsISecureBrowserUI * aSecurityUI); \
  NS_IMETHOD SuspendRefreshURIs(void); \
  NS_IMETHOD ResumeRefreshURIs(void); \
  NS_IMETHOD BeginRestore(nsIContentViewer *viewer, PRBool top); \
  NS_IMETHOD FinishRestore(void); \
  NS_IMETHOD GetRestoringDocument(PRBool *aRestoringDocument); \
  NS_IMETHOD GetUseErrorPages(PRBool *aUseErrorPages); \
  NS_IMETHOD SetUseErrorPages(PRBool aUseErrorPages); \
  NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex); \
  NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex); \
  NS_IMETHOD HistoryPurged(PRInt32 numEntries); \
  NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage **_retval); \
  NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, PRBool create, nsIDOMStorage **_retval); \
  NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage); \
  NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel); \
  NS_IMETHOD SetChildOffset(PRUint32 offset); \
  NS_IMETHOD GetIsInUnload(PRBool *aIsInUnload); \
  NS_IMETHOD GetChannelIsUnsafe(PRBool *aChannelIsUnsafe); \
  NS_IMETHOD_(void) DetachEditorFromWindow(void); \
  NS_IMETHOD GetIsOffScreenBrowser(PRBool *aIsOffScreenBrowser); \
  NS_IMETHOD SetIsOffScreenBrowser(PRBool aIsOffScreenBrowser); \
  NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview); \
  NS_IMETHOD GetCanExecuteScripts(PRBool *aCanExecuteScripts); \
  NS_IMETHOD GetIsActive(PRBool *aIsActive); \
  NS_IMETHOD SetIsActive(PRBool aIsActive); \
  NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID); \
  NS_IMETHOD GetIsAppTab(PRBool *aIsAppTab); \
  NS_IMETHOD SetIsAppTab(PRBool aIsAppTab); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCSHELL(_to) \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, PRBool firstParty) { return _to LoadURI(uri, loadInfo, aLoadFlags, firstParty); } \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) { return _to LoadStream(aStream, aURI, aContentType, aContentCharset, aLoadInfo); } \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar *aWindowTarget, const char *aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, PRBool firstParty, nsIDocShell **aDocShell, nsIRequest **aRequest) { return _to InternalLoad(aURI, aReferrer, aOwner, aFlags, aWindowTarget, aTypeHint, aPostDataStream, aHeadersStream, aLoadFlags, aSHEntry, firstParty, aDocShell, aRequest); } \
  NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, PRBool aReplace) { return _to AddState(aData, aTitle, aURL, aReplace); } \
  NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo **loadInfo) { return _to CreateLoadInfo(loadInfo); } \
  NS_IMETHOD PrepareForNewContentModel(void) { return _to PrepareForNewContentModel(); } \
  NS_IMETHOD SetCurrentURI(nsIURI *aURI) { return _to SetCurrentURI(aURI); } \
  NS_IMETHOD FirePageHideNotification(PRBool isUnload) { return _to FirePageHideNotification(isUnload); } \
  NS_IMETHOD GetPresContext(nsPresContext * *aPresContext) { return _to GetPresContext(aPresContext); } \
  NS_IMETHOD GetPresShell(nsIPresShell * *aPresShell) { return _to GetPresShell(aPresShell); } \
  NS_IMETHOD GetEldestPresShell(nsIPresShell * *aEldestPresShell) { return _to GetEldestPresShell(aEldestPresShell); } \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return _to GetContentViewer(aContentViewer); } \
  NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) { return _to GetChromeEventHandler(aChromeEventHandler); } \
  NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget * aChromeEventHandler) { return _to SetChromeEventHandler(aChromeEventHandler); } \
  NS_IMETHOD GetDocumentCharsetInfo(nsIDocumentCharsetInfo * *aDocumentCharsetInfo) { return _to GetDocumentCharsetInfo(aDocumentCharsetInfo); } \
  NS_IMETHOD SetDocumentCharsetInfo(nsIDocumentCharsetInfo * aDocumentCharsetInfo) { return _to SetDocumentCharsetInfo(aDocumentCharsetInfo); } \
  NS_IMETHOD GetAllowPlugins(PRBool *aAllowPlugins) { return _to GetAllowPlugins(aAllowPlugins); } \
  NS_IMETHOD SetAllowPlugins(PRBool aAllowPlugins) { return _to SetAllowPlugins(aAllowPlugins); } \
  NS_IMETHOD GetAllowJavascript(PRBool *aAllowJavascript) { return _to GetAllowJavascript(aAllowJavascript); } \
  NS_IMETHOD SetAllowJavascript(PRBool aAllowJavascript) { return _to SetAllowJavascript(aAllowJavascript); } \
  NS_IMETHOD GetAllowMetaRedirects(PRBool *aAllowMetaRedirects) { return _to GetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_IMETHOD SetAllowMetaRedirects(PRBool aAllowMetaRedirects) { return _to SetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_IMETHOD GetAllowSubframes(PRBool *aAllowSubframes) { return _to GetAllowSubframes(aAllowSubframes); } \
  NS_IMETHOD SetAllowSubframes(PRBool aAllowSubframes) { return _to SetAllowSubframes(aAllowSubframes); } \
  NS_IMETHOD GetAllowImages(PRBool *aAllowImages) { return _to GetAllowImages(aAllowImages); } \
  NS_IMETHOD SetAllowImages(PRBool aAllowImages) { return _to SetAllowImages(aAllowImages); } \
  NS_IMETHOD GetAllowDNSPrefetch(PRBool *aAllowDNSPrefetch) { return _to GetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_IMETHOD SetAllowDNSPrefetch(PRBool aAllowDNSPrefetch) { return _to SetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator **_retval) { return _to GetDocShellEnumerator(aItemType, aDirection, _retval); } \
  NS_IMETHOD GetAppType(PRUint32 *aAppType) { return _to GetAppType(aAppType); } \
  NS_IMETHOD SetAppType(PRUint32 aAppType) { return _to SetAppType(aAppType); } \
  NS_IMETHOD GetAllowAuth(PRBool *aAllowAuth) { return _to GetAllowAuth(aAllowAuth); } \
  NS_IMETHOD SetAllowAuth(PRBool aAllowAuth) { return _to SetAllowAuth(aAllowAuth); } \
  NS_IMETHOD GetZoom(float *aZoom) { return _to GetZoom(aZoom); } \
  NS_IMETHOD SetZoom(float aZoom) { return _to SetZoom(aZoom); } \
  NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) { return _to GetMarginWidth(aMarginWidth); } \
  NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) { return _to SetMarginWidth(aMarginWidth); } \
  NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) { return _to GetMarginHeight(aMarginHeight); } \
  NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) { return _to SetMarginHeight(aMarginHeight); } \
  NS_IMETHOD TabToTreeOwner(PRBool forward, PRBool *tookFocus) { return _to TabToTreeOwner(forward, tookFocus); } \
  NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) { return _to GetBusyFlags(aBusyFlags); } \
  NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return _to GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return _to SetLoadType(aLoadType); } \
  NS_IMETHOD IsBeingDestroyed(PRBool *_retval) { return _to IsBeingDestroyed(_retval); } \
  NS_IMETHOD GetIsExecutingOnLoadHandler(PRBool *aIsExecutingOnLoadHandler) { return _to GetIsExecutingOnLoadHandler(aIsExecutingOnLoadHandler); } \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return _to GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState * aLayoutHistoryState) { return _to SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD GetShouldSaveLayoutState(PRBool *aShouldSaveLayoutState) { return _to GetShouldSaveLayoutState(aShouldSaveLayoutState); } \
  NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) { return _to GetSecurityUI(aSecurityUI); } \
  NS_IMETHOD SetSecurityUI(nsISecureBrowserUI * aSecurityUI) { return _to SetSecurityUI(aSecurityUI); } \
  NS_IMETHOD SuspendRefreshURIs(void) { return _to SuspendRefreshURIs(); } \
  NS_IMETHOD ResumeRefreshURIs(void) { return _to ResumeRefreshURIs(); } \
  NS_IMETHOD BeginRestore(nsIContentViewer *viewer, PRBool top) { return _to BeginRestore(viewer, top); } \
  NS_IMETHOD FinishRestore(void) { return _to FinishRestore(); } \
  NS_IMETHOD GetRestoringDocument(PRBool *aRestoringDocument) { return _to GetRestoringDocument(aRestoringDocument); } \
  NS_IMETHOD GetUseErrorPages(PRBool *aUseErrorPages) { return _to GetUseErrorPages(aUseErrorPages); } \
  NS_IMETHOD SetUseErrorPages(PRBool aUseErrorPages) { return _to SetUseErrorPages(aUseErrorPages); } \
  NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) { return _to GetPreviousTransIndex(aPreviousTransIndex); } \
  NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) { return _to GetLoadedTransIndex(aLoadedTransIndex); } \
  NS_IMETHOD HistoryPurged(PRInt32 numEntries) { return _to HistoryPurged(numEntries); } \
  NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage **_retval) { return _to GetSessionStorageForURI(uri, documentURI, _retval); } \
  NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, PRBool create, nsIDOMStorage **_retval) { return _to GetSessionStorageForPrincipal(principal, documentURI, create, _retval); } \
  NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) { return _to AddSessionStorage(principal, storage); } \
  NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) { return _to GetCurrentDocumentChannel(aCurrentDocumentChannel); } \
  NS_IMETHOD SetChildOffset(PRUint32 offset) { return _to SetChildOffset(offset); } \
  NS_IMETHOD GetIsInUnload(PRBool *aIsInUnload) { return _to GetIsInUnload(aIsInUnload); } \
  NS_IMETHOD GetChannelIsUnsafe(PRBool *aChannelIsUnsafe) { return _to GetChannelIsUnsafe(aChannelIsUnsafe); } \
  NS_IMETHOD_(void) DetachEditorFromWindow(void) { return _to DetachEditorFromWindow(); } \
  NS_IMETHOD GetIsOffScreenBrowser(PRBool *aIsOffScreenBrowser) { return _to GetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_IMETHOD SetIsOffScreenBrowser(PRBool aIsOffScreenBrowser) { return _to SetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) { return _to GetPrintPreview(aPrintPreview); } \
  NS_IMETHOD GetCanExecuteScripts(PRBool *aCanExecuteScripts) { return _to GetCanExecuteScripts(aCanExecuteScripts); } \
  NS_IMETHOD GetIsActive(PRBool *aIsActive) { return _to GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(PRBool aIsActive) { return _to SetIsActive(aIsActive); } \
  NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) { return _to GetHistoryID(aHistoryID); } \
  NS_IMETHOD GetIsAppTab(PRBool *aIsAppTab) { return _to GetIsAppTab(aIsAppTab); } \
  NS_IMETHOD SetIsAppTab(PRBool aIsAppTab) { return _to SetIsAppTab(aIsAppTab); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCSHELL(_to) \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, PRBool firstParty) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadURI(uri, loadInfo, aLoadFlags, firstParty); } \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadStream(aStream, aURI, aContentType, aContentCharset, aLoadInfo); } \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar *aWindowTarget, const char *aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, PRBool firstParty, nsIDocShell **aDocShell, nsIRequest **aRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->InternalLoad(aURI, aReferrer, aOwner, aFlags, aWindowTarget, aTypeHint, aPostDataStream, aHeadersStream, aLoadFlags, aSHEntry, firstParty, aDocShell, aRequest); } \
  NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, PRBool aReplace) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddState(aData, aTitle, aURL, aReplace); } \
  NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo **loadInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateLoadInfo(loadInfo); } \
  NS_IMETHOD PrepareForNewContentModel(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrepareForNewContentModel(); } \
  NS_IMETHOD SetCurrentURI(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentURI(aURI); } \
  NS_IMETHOD FirePageHideNotification(PRBool isUnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->FirePageHideNotification(isUnload); } \
  NS_IMETHOD GetPresContext(nsPresContext * *aPresContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPresContext(aPresContext); } \
  NS_IMETHOD GetPresShell(nsIPresShell * *aPresShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPresShell(aPresShell); } \
  NS_IMETHOD GetEldestPresShell(nsIPresShell * *aEldestPresShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEldestPresShell(aEldestPresShell); } \
  NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentViewer(aContentViewer); } \
  NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeEventHandler(aChromeEventHandler); } \
  NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget * aChromeEventHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChromeEventHandler(aChromeEventHandler); } \
  NS_IMETHOD GetDocumentCharsetInfo(nsIDocumentCharsetInfo * *aDocumentCharsetInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentCharsetInfo(aDocumentCharsetInfo); } \
  NS_IMETHOD SetDocumentCharsetInfo(nsIDocumentCharsetInfo * aDocumentCharsetInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentCharsetInfo(aDocumentCharsetInfo); } \
  NS_IMETHOD GetAllowPlugins(PRBool *aAllowPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowPlugins(aAllowPlugins); } \
  NS_IMETHOD SetAllowPlugins(PRBool aAllowPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowPlugins(aAllowPlugins); } \
  NS_IMETHOD GetAllowJavascript(PRBool *aAllowJavascript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowJavascript(aAllowJavascript); } \
  NS_IMETHOD SetAllowJavascript(PRBool aAllowJavascript) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowJavascript(aAllowJavascript); } \
  NS_IMETHOD GetAllowMetaRedirects(PRBool *aAllowMetaRedirects) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_IMETHOD SetAllowMetaRedirects(PRBool aAllowMetaRedirects) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_IMETHOD GetAllowSubframes(PRBool *aAllowSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowSubframes(aAllowSubframes); } \
  NS_IMETHOD SetAllowSubframes(PRBool aAllowSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowSubframes(aAllowSubframes); } \
  NS_IMETHOD GetAllowImages(PRBool *aAllowImages) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowImages(aAllowImages); } \
  NS_IMETHOD SetAllowImages(PRBool aAllowImages) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowImages(aAllowImages); } \
  NS_IMETHOD GetAllowDNSPrefetch(PRBool *aAllowDNSPrefetch) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_IMETHOD SetAllowDNSPrefetch(PRBool aAllowDNSPrefetch) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShellEnumerator(aItemType, aDirection, _retval); } \
  NS_IMETHOD GetAppType(PRUint32 *aAppType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppType(aAppType); } \
  NS_IMETHOD SetAppType(PRUint32 aAppType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAppType(aAppType); } \
  NS_IMETHOD GetAllowAuth(PRBool *aAllowAuth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowAuth(aAllowAuth); } \
  NS_IMETHOD SetAllowAuth(PRBool aAllowAuth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowAuth(aAllowAuth); } \
  NS_IMETHOD GetZoom(float *aZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZoom(aZoom); } \
  NS_IMETHOD SetZoom(float aZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZoom(aZoom); } \
  NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginWidth(aMarginWidth); } \
  NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginWidth(aMarginWidth); } \
  NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginHeight(aMarginHeight); } \
  NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginHeight(aMarginHeight); } \
  NS_IMETHOD TabToTreeOwner(PRBool forward, PRBool *tookFocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->TabToTreeOwner(forward, tookFocus); } \
  NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBusyFlags(aBusyFlags); } \
  NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadType(aLoadType); } \
  NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadType(aLoadType); } \
  NS_IMETHOD IsBeingDestroyed(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsBeingDestroyed(_retval); } \
  NS_IMETHOD GetIsExecutingOnLoadHandler(PRBool *aIsExecutingOnLoadHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsExecutingOnLoadHandler(aIsExecutingOnLoadHandler); } \
  NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState * aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_IMETHOD GetShouldSaveLayoutState(PRBool *aShouldSaveLayoutState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShouldSaveLayoutState(aShouldSaveLayoutState); } \
  NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityUI(aSecurityUI); } \
  NS_IMETHOD SetSecurityUI(nsISecureBrowserUI * aSecurityUI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurityUI(aSecurityUI); } \
  NS_IMETHOD SuspendRefreshURIs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SuspendRefreshURIs(); } \
  NS_IMETHOD ResumeRefreshURIs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeRefreshURIs(); } \
  NS_IMETHOD BeginRestore(nsIContentViewer *viewer, PRBool top) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginRestore(viewer, top); } \
  NS_IMETHOD FinishRestore(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishRestore(); } \
  NS_IMETHOD GetRestoringDocument(PRBool *aRestoringDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRestoringDocument(aRestoringDocument); } \
  NS_IMETHOD GetUseErrorPages(PRBool *aUseErrorPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUseErrorPages(aUseErrorPages); } \
  NS_IMETHOD SetUseErrorPages(PRBool aUseErrorPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseErrorPages(aUseErrorPages); } \
  NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousTransIndex(aPreviousTransIndex); } \
  NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadedTransIndex(aLoadedTransIndex); } \
  NS_IMETHOD HistoryPurged(PRInt32 numEntries) { return !_to ? NS_ERROR_NULL_POINTER : _to->HistoryPurged(numEntries); } \
  NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionStorageForURI(uri, documentURI, _retval); } \
  NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, PRBool create, nsIDOMStorage **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionStorageForPrincipal(principal, documentURI, create, _retval); } \
  NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSessionStorage(principal, storage); } \
  NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentDocumentChannel(aCurrentDocumentChannel); } \
  NS_IMETHOD SetChildOffset(PRUint32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChildOffset(offset); } \
  NS_IMETHOD GetIsInUnload(PRBool *aIsInUnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsInUnload(aIsInUnload); } \
  NS_IMETHOD GetChannelIsUnsafe(PRBool *aChannelIsUnsafe) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannelIsUnsafe(aChannelIsUnsafe); } \
  NS_IMETHOD_(void) DetachEditorFromWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DetachEditorFromWindow(); } \
  NS_IMETHOD GetIsOffScreenBrowser(PRBool *aIsOffScreenBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_IMETHOD SetIsOffScreenBrowser(PRBool aIsOffScreenBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrintPreview(aPrintPreview); } \
  NS_IMETHOD GetCanExecuteScripts(PRBool *aCanExecuteScripts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanExecuteScripts(aCanExecuteScripts); } \
  NS_IMETHOD GetIsActive(PRBool *aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(PRBool aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsActive(aIsActive); } \
  NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistoryID(aHistoryID); } \
  NS_IMETHOD GetIsAppTab(PRBool *aIsAppTab) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsAppTab(aIsAppTab); } \
  NS_IMETHOD SetIsAppTab(PRBool aIsAppTab) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsAppTab(aIsAppTab); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocShell : public nsIDocShell
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCSHELL

  nsDocShell();

private:
  ~nsDocShell();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocShell, nsIDocShell)

nsDocShell::nsDocShell()
{
  /* member initializers and constructor code */
}

nsDocShell::~nsDocShell()
{
  /* destructor code */
}

/* [noscript] void loadURI (in nsIURI uri, in nsIDocShellLoadInfo loadInfo, in unsigned long aLoadFlags, in boolean firstParty); */
NS_IMETHODIMP nsDocShell::LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, PRBool firstParty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void loadStream (in nsIInputStream aStream, in nsIURI aURI, in ACString aContentType, in ACString aContentCharset, in nsIDocShellLoadInfo aLoadInfo); */
NS_IMETHODIMP nsDocShell::LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void internalLoad (in nsIURI aURI, in nsIURI aReferrer, in nsISupports aOwner, in PRUint32 aFlags, in wstring aWindowTarget, in string aTypeHint, in nsIInputStream aPostDataStream, in nsIInputStream aHeadersStream, in unsigned long aLoadFlags, in nsISHEntry aSHEntry, in boolean firstParty, out nsIDocShell aDocShell, out nsIRequest aRequest); */
NS_IMETHODIMP nsDocShell::InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar *aWindowTarget, const char *aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, PRBool firstParty, nsIDocShell **aDocShell, nsIRequest **aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addState (in nsIVariant aData, in DOMString aTitle, in DOMString aURL, in boolean aReplace); */
NS_IMETHODIMP nsDocShell::AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, PRBool aReplace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createLoadInfo (out nsIDocShellLoadInfo loadInfo); */
NS_IMETHODIMP nsDocShell::CreateLoadInfo(nsIDocShellLoadInfo **loadInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void prepareForNewContentModel (); */
NS_IMETHODIMP nsDocShell::PrepareForNewContentModel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCurrentURI (in nsIURI aURI); */
NS_IMETHODIMP nsDocShell::SetCurrentURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void firePageHideNotification (in boolean isUnload); */
NS_IMETHODIMP nsDocShell::FirePageHideNotification(PRBool isUnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsPresContext presContext; */
NS_IMETHODIMP nsDocShell::GetPresContext(nsPresContext * *aPresContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIPresShell presShell; */
NS_IMETHODIMP nsDocShell::GetPresShell(nsIPresShell * *aPresShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIPresShell eldestPresShell; */
NS_IMETHODIMP nsDocShell::GetEldestPresShell(nsIPresShell * *aEldestPresShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIContentViewer contentViewer; */
NS_IMETHODIMP nsDocShell::GetContentViewer(nsIContentViewer * *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventTarget chromeEventHandler; */
NS_IMETHODIMP nsDocShell::GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetChromeEventHandler(nsIDOMEventTarget * aChromeEventHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDocumentCharsetInfo documentCharsetInfo; */
NS_IMETHODIMP nsDocShell::GetDocumentCharsetInfo(nsIDocumentCharsetInfo * *aDocumentCharsetInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetDocumentCharsetInfo(nsIDocumentCharsetInfo * aDocumentCharsetInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowPlugins; */
NS_IMETHODIMP nsDocShell::GetAllowPlugins(PRBool *aAllowPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowPlugins(PRBool aAllowPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowJavascript; */
NS_IMETHODIMP nsDocShell::GetAllowJavascript(PRBool *aAllowJavascript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowJavascript(PRBool aAllowJavascript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowMetaRedirects; */
NS_IMETHODIMP nsDocShell::GetAllowMetaRedirects(PRBool *aAllowMetaRedirects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowMetaRedirects(PRBool aAllowMetaRedirects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowSubframes; */
NS_IMETHODIMP nsDocShell::GetAllowSubframes(PRBool *aAllowSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowSubframes(PRBool aAllowSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowImages; */
NS_IMETHODIMP nsDocShell::GetAllowImages(PRBool *aAllowImages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowImages(PRBool aAllowImages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowDNSPrefetch; */
NS_IMETHODIMP nsDocShell::GetAllowDNSPrefetch(PRBool *aAllowDNSPrefetch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowDNSPrefetch(PRBool aAllowDNSPrefetch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISimpleEnumerator getDocShellEnumerator (in long aItemType, in long aDirection); */
NS_IMETHODIMP nsDocShell::GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long appType; */
NS_IMETHODIMP nsDocShell::GetAppType(PRUint32 *aAppType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAppType(PRUint32 aAppType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowAuth; */
NS_IMETHODIMP nsDocShell::GetAllowAuth(PRBool *aAllowAuth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowAuth(PRBool aAllowAuth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float zoom; */
NS_IMETHODIMP nsDocShell::GetZoom(float *aZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetZoom(float aZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long marginWidth; */
NS_IMETHODIMP nsDocShell::GetMarginWidth(PRInt32 *aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetMarginWidth(PRInt32 aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long marginHeight; */
NS_IMETHODIMP nsDocShell::GetMarginHeight(PRInt32 *aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetMarginHeight(PRInt32 aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void tabToTreeOwner (in boolean forward, out boolean tookFocus); */
NS_IMETHODIMP nsDocShell::TabToTreeOwner(PRBool forward, PRBool *tookFocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long busyFlags; */
NS_IMETHODIMP nsDocShell::GetBusyFlags(PRUint32 *aBusyFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long loadType; */
NS_IMETHODIMP nsDocShell::GetLoadType(PRUint32 *aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetLoadType(PRUint32 aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isBeingDestroyed (); */
NS_IMETHODIMP nsDocShell::IsBeingDestroyed(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isExecutingOnLoadHandler; */
NS_IMETHODIMP nsDocShell::GetIsExecutingOnLoadHandler(PRBool *aIsExecutingOnLoadHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILayoutHistoryState layoutHistoryState; */
NS_IMETHODIMP nsDocShell::GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetLayoutHistoryState(nsILayoutHistoryState * aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean shouldSaveLayoutState; */
NS_IMETHODIMP nsDocShell::GetShouldSaveLayoutState(PRBool *aShouldSaveLayoutState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISecureBrowserUI securityUI; */
NS_IMETHODIMP nsDocShell::GetSecurityUI(nsISecureBrowserUI * *aSecurityUI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetSecurityUI(nsISecureBrowserUI * aSecurityUI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suspendRefreshURIs (); */
NS_IMETHODIMP nsDocShell::SuspendRefreshURIs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeRefreshURIs (); */
NS_IMETHODIMP nsDocShell::ResumeRefreshURIs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginRestore (in nsIContentViewer viewer, in boolean top); */
NS_IMETHODIMP nsDocShell::BeginRestore(nsIContentViewer *viewer, PRBool top)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishRestore (); */
NS_IMETHODIMP nsDocShell::FinishRestore()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean restoringDocument; */
NS_IMETHODIMP nsDocShell::GetRestoringDocument(PRBool *aRestoringDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean useErrorPages; */
NS_IMETHODIMP nsDocShell::GetUseErrorPages(PRBool *aUseErrorPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetUseErrorPages(PRBool aUseErrorPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long previousTransIndex; */
NS_IMETHODIMP nsDocShell::GetPreviousTransIndex(PRInt32 *aPreviousTransIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long loadedTransIndex; */
NS_IMETHODIMP nsDocShell::GetLoadedTransIndex(PRInt32 *aLoadedTransIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void historyPurged (in long numEntries); */
NS_IMETHODIMP nsDocShell::HistoryPurged(PRInt32 numEntries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getSessionStorageForURI (in nsIURI uri, in DOMString documentURI); */
NS_IMETHODIMP nsDocShell::GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getSessionStorageForPrincipal (in nsIPrincipal principal, in DOMString documentURI, in boolean create); */
NS_IMETHODIMP nsDocShell::GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, PRBool create, nsIDOMStorage **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSessionStorage (in nsIPrincipal principal, in nsIDOMStorage storage); */
NS_IMETHODIMP nsDocShell::AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIChannel currentDocumentChannel; */
NS_IMETHODIMP nsDocShell::GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setChildOffset (in unsigned long offset); */
NS_IMETHODIMP nsDocShell::SetChildOffset(PRUint32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isInUnload; */
NS_IMETHODIMP nsDocShell::GetIsInUnload(PRBool *aIsInUnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean channelIsUnsafe; */
NS_IMETHODIMP nsDocShell::GetChannelIsUnsafe(PRBool *aChannelIsUnsafe)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript, notxpcom] void DetachEditorFromWindow (); */
NS_IMETHODIMP_(void) nsDocShell::DetachEditorFromWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isOffScreenBrowser; */
NS_IMETHODIMP nsDocShell::GetIsOffScreenBrowser(PRBool *aIsOffScreenBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsOffScreenBrowser(PRBool aIsOffScreenBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIWebBrowserPrint printPreview; */
NS_IMETHODIMP nsDocShell::GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean canExecuteScripts; */
NS_IMETHODIMP nsDocShell::GetCanExecuteScripts(PRBool *aCanExecuteScripts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isActive; */
NS_IMETHODIMP nsDocShell::GetIsActive(PRBool *aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsActive(PRBool aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long historyID; */
NS_IMETHODIMP nsDocShell::GetHistoryID(PRUint64 *aHistoryID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isAppTab; */
NS_IMETHODIMP nsDocShell::GetIsAppTab(PRBool *aIsAppTab)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsAppTab(PRBool aIsAppTab)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_ns_xulrunner_20_h__ */
