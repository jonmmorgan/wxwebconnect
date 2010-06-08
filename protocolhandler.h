#ifndef __WXWEBCONNECT_PROTOCOL_HANDLER_H
#define __WXWEBCONNECT_PROTOCOL_HANDLER_H

class wxProtocolHandler {
public:
  enum { URI_STD = 0U };

  /**
     * no concept of relative URIs (about, javascript, finger, ...)
     */
  enum { URI_NORELATIVE = 1U };

  /**
     * no authority component (file, ...)
     */
  enum { URI_NOAUTH = 2U };

  /**
     * The URIs for this protocol have no inherent security context, so
     * documents loaded via this protocol should inherit the security context
     * from the document that loads them.
     */
  enum { URI_INHERITS_SECURITY_CONTEXT = 16U };

  /**
     * "Automatic" loads that would replace the document (e.g. <meta> refresh,
     * certain types of XLinks, possibly other loads that the application
     * decides are not user triggered) are not allowed if the originating (NOT
     * the target) URI has this protocol flag.  Note that the decision as to
     * what constitutes an "automatic" load is made externally, by the caller
     * of nsIScriptSecurityManager::CheckLoadURI.  See documentation for that
     * method for more information.
     *
     * A typical protocol that might want to set this flag is a protocol that
     * shows highly untrusted content in a viewing area that the user expects
     * to have a lot of control over, such as an e-mail reader.
     */
  enum { URI_FORBIDS_AUTOMATIC_DOCUMENT_REPLACEMENT = 32U };

  /**
     * +-------------------------------------------------------------------+
     * |                                                                   |
     * |  ALL PROTOCOL HANDLERS MUST SET ONE OF THE FOLLOWING FOUR FLAGS.  |
     * |                                                                   |
     * +-------------------------------------------------------------------+
     *
     * These flags are used to determine who is allowed to load URIs for this
     * protocol.  Note that if a URI is nested, only the flags for the
     * innermost URI matter.  See nsINestedURI.
     *
     * If none of these four flags are set, the URI must be treated as if it
     * had the URI_LOADABLE_BY_ANYONE flag set, for compatibility with protocol
     * handlers written against Gecko 1.8 or earlier.  In this case, there may
     * be run-time warning messages indicating that a "default insecure"
     * assumption is being made.  At some point in the futures (Mozilla 2.0,
     * most likely), these warnings will become errors.
     */
/**
     * The URIs for this protocol can be loaded by anyone.  For example, any
     * website should be allowed to trigger a load of a URI for this protocol.
     * Web-safe protocols like "http" should set this flag.
     */
  enum { URI_LOADABLE_BY_ANYONE = 64U };

  /**
     * The URIs for this protocol are UNSAFE if loaded by untrusted (web)
     * content and may only be loaded by privileged code (for example, code
     * which has the system principal).  Various internal protocols should set
     * this flag.
     */
  enum { URI_DANGEROUS_TO_LOAD = 128U };

  /**
     * The URIs for this protocol point to resources that are part of the
     * application's user interface.  There are cases when such resources may
     * be made accessible to untrusted content such as web pages, so this is
     * less restrictive than URI_DANGEROUS_TO_LOAD but more restrictive than
     * URI_LOADABLE_BY_ANYONE.  See the documentation for
     * nsIScriptSecurityManager::CheckLoadURI.
     */
  enum { URI_IS_UI_RESOURCE = 256U };

  /**
     * Loading of URIs for this protocol from other origins should only be
     * allowed if those origins should have access to the local filesystem.
     * It's up to the application to decide what origins should have such
     * access.  Protocols like "file" that point to local data should set this
     * flag.
     */
  enum { URI_IS_LOCAL_FILE = 512U };

  /**
     * Loading channels from this protocol has side-effects that make
     * it unsuitable for saving to a local file.
     */
  enum { URI_NON_PERSISTABLE = 1024U };

  /**
     * Channels using this protocol never call OnDataAvailable
     * on the listener passed to AsyncOpen and they therefore
     * do not return any data that we can use.
     */
  enum { URI_DOES_NOT_RETURN_DATA = 2048U };

  /**
     * This protocol handler can be proxied via a proxy (socks or http)
     * (e.g., irc, smtp, http, etc.).  If the protocol supports transparent
     * proxying, the handler should implement nsIProxiedProtocolHandler.
     *
     * If it supports only HTTP proxying, then it need not support
     * nsIProxiedProtocolHandler, but should instead set the ALLOWS_PROXY_HTTP
     * flag (see below).
     *
     * @see nsIProxiedProtocolHandler
     */
  enum { ALLOWS_PROXY = 4U };

  /**
     * This protocol handler can be proxied using a http proxy (e.g., http,
     * ftp, etc.).  nsIIOService::newChannelFromURI will feed URIs from this
     * protocol handler to the HTTP protocol handler instead.  This flag is
     * ignored if ALLOWS_PROXY is not set.
     */
  enum { ALLOWS_PROXY_HTTP = 8U };

    wxProtocolHandler();
    ~wxProtocolHandler();

    /* XXX: Is there a better way to handle Int32s than this? */
    virtual int GetDefaultPort();

    virtual int GetProtocolFlags();

    virtual bool AllowPort(int port, const char* scheme);

    virtual wxString GetContent(const wxString& url);

    virtual wxString GetContentType(const wxString& url);
};

bool RegisterProtocol(const wxString &scheme, wxProtocolHandler *handler);

#endif
