/* ----------------------------------------------------------------------------
 * iocpDecls.h --
 *
 *	Declarations of functions in the platform dependent public
 *	Iocpsock API.
 *
 * ----------------------------------------------------------------------------
 * RCS: @(#) $Id: iocpDecls.h,v 1.7 2006/10/09 22:02:56 davygrvy Exp $
 * ----------------------------------------------------------------------------
 */

#ifndef INCL_iocpDecls_h_
#define INCL_iocpDecls_h_

/*
 * WARNING: This file is automatically generated by the $(TCLROOT)/tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the iocpsock.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */

#ifndef Iocpsock_Init_TCL_DECLARED
#define Iocpsock_Init_TCL_DECLARED
/* 0 */
TCL_EXTERN(int)		Iocpsock_Init _ANSI_ARGS_((Tcl_Interp * interp));
#endif
#ifndef Iocpsock_SafeInit_TCL_DECLARED
#define Iocpsock_SafeInit_TCL_DECLARED
/* 1 */
TCL_EXTERN(int)		Iocpsock_SafeInit _ANSI_ARGS_((Tcl_Interp * interp));
#endif
#ifndef Tcl_WinErrId_TCL_DECLARED
#define Tcl_WinErrId_TCL_DECLARED
/* 2 */
TCL_EXTERN(CONST char *) Tcl_WinErrId _ANSI_ARGS_((void));
#endif
#ifndef Tcl_WinErrMsg_TCL_DECLARED
#define Tcl_WinErrMsg_TCL_DECLARED
/* 3 */
TCL_EXTERN(CONST char *) Tcl_WinErrMsg _ANSI_ARGS_((void));
#endif
#ifndef Tcl_WinError_TCL_DECLARED
#define Tcl_WinError_TCL_DECLARED
/* 4 */
TCL_EXTERN(CONST char *) Tcl_WinError _ANSI_ARGS_((Tcl_Interp * interp));
#endif
#ifndef Iocp_OpenTcpClient_TCL_DECLARED
#define Iocp_OpenTcpClient_TCL_DECLARED
/* 5 */
TCL_EXTERN(Tcl_Channel)	 Iocp_OpenTcpClient _ANSI_ARGS_((Tcl_Interp * interp, 
				CONST char * port, CONST char * host, 
				CONST char * myaddr, CONST char * myport, 
				int async));
#endif
#ifndef Iocp_OpenTcpServer_TCL_DECLARED
#define Iocp_OpenTcpServer_TCL_DECLARED
/* 6 */
TCL_EXTERN(Tcl_Channel)	 Iocp_OpenTcpServer _ANSI_ARGS_((Tcl_Interp * interp, 
				CONST char * port, CONST char * host, 
				Tcl_TcpAcceptProc * acceptProc, 
				ClientData acceptProcData));
#endif
#ifndef Iocp_MakeTcpClientChannel_TCL_DECLARED
#define Iocp_MakeTcpClientChannel_TCL_DECLARED
/* 7 */
TCL_EXTERN(Tcl_Channel)	 Iocp_MakeTcpClientChannel _ANSI_ARGS_((
				ClientData sock));
#endif

typedef struct IocpStubHooks {
    struct IocpIntStubs *iocpIntStubs;
} IocpStubHooks;

typedef struct IocpStubs {
    int magic;
    struct IocpStubHooks *hooks;

    int (*iocpsock_Init) _ANSI_ARGS_((Tcl_Interp * interp)); /* 0 */
    int (*iocpsock_SafeInit) _ANSI_ARGS_((Tcl_Interp * interp)); /* 1 */
    CONST char * (*tcl_WinErrId) _ANSI_ARGS_((void)); /* 2 */
    CONST char * (*tcl_WinErrMsg) _ANSI_ARGS_((void)); /* 3 */
    CONST char * (*tcl_WinError) _ANSI_ARGS_((Tcl_Interp * interp)); /* 4 */
    Tcl_Channel (*iocp_OpenTcpClient) _ANSI_ARGS_((Tcl_Interp * interp, CONST char * port, CONST char * host, CONST char * myaddr, CONST char * myport, int async)); /* 5 */
    Tcl_Channel (*iocp_OpenTcpServer) _ANSI_ARGS_((Tcl_Interp * interp, CONST char * port, CONST char * host, Tcl_TcpAcceptProc * acceptProc, ClientData acceptProcData)); /* 6 */
    Tcl_Channel (*iocp_MakeTcpClientChannel) _ANSI_ARGS_((ClientData sock)); /* 7 */
} IocpStubs;
TCL_EXTERNC IocpStubs *iocpStubsPtr;

#if defined(USE_IOCP_STUBS) && !defined(USE_IOCP_STUB_PROCS)

/*
 * Inline function declarations:
 */

#ifndef Iocpsock_Init
#define Iocpsock_Init \
	(iocpStubsPtr->iocpsock_Init) /* 0 */
#endif
#ifndef Iocpsock_SafeInit
#define Iocpsock_SafeInit \
	(iocpStubsPtr->iocpsock_SafeInit) /* 1 */
#endif
#ifndef Tcl_WinErrId
#define Tcl_WinErrId \
	(iocpStubsPtr->tcl_WinErrId) /* 2 */
#endif
#ifndef Tcl_WinErrMsg
#define Tcl_WinErrMsg \
	(iocpStubsPtr->tcl_WinErrMsg) /* 3 */
#endif
#ifndef Tcl_WinError
#define Tcl_WinError \
	(iocpStubsPtr->tcl_WinError) /* 4 */
#endif
#ifndef Iocp_OpenTcpClient
#define Iocp_OpenTcpClient \
	(iocpStubsPtr->iocp_OpenTcpClient) /* 5 */
#endif
#ifndef Iocp_OpenTcpServer
#define Iocp_OpenTcpServer \
	(iocpStubsPtr->iocp_OpenTcpServer) /* 6 */
#endif
#ifndef Iocp_MakeTcpClientChannel
#define Iocp_MakeTcpClientChannel \
	(iocpStubsPtr->iocp_MakeTcpClientChannel) /* 7 */
#endif

#endif /* defined(USE_IOCP_STUBS) && !defined(USE_IOCP_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* #ifndef INCL_iocpDecls_h_ */
