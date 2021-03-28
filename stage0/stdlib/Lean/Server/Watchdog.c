// Lean compiler output
// Module: Lean.Server.Watchdog
// Imports: Init Init.System.IO Init.Data.ByteArray Std.Data.RBMap Lean.Elab.Import Lean.Data.Lsp Lean.Server.FileSource Lean.Server.Utils
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleEdits___spec__3(lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__38(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_Lean_Name_toString___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_startFileWorker(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Server_Watchdog_runClientTask_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stdin(lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_Server_Watchdog_updateFileWorkers___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_io_mono_ms_now(lean_object*);
lean_object* l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidOpenTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_89_(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleDidOpen(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Char_quote___closed__1;
lean_object* l_Lean_Server_Watchdog_handleRequest___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2;
lean_object* lean_io_wait_any(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1;
lean_object* l_Lean_Parser_parseHeader(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleNotification___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_88_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonPlainGoalParams____x40_Lean_Data_Lsp_Extra___hyg_110_(lean_object*);
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleNotification___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2;
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_terminateFileWorker___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_startFileWorker___closed__3;
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__37(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_startFileWorker___closed__5;
extern lean_object* l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Lsp_Ipc_collectDiagnostics___closed__1;
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__28;
lean_object* l_Lean_Server_Watchdog_findFileWorker_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__6;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___closed__3;
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__45(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__16;
lean_object* l_Lean_Json_toStructured_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedParserDescr___closed__1;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__1(lean_object*, lean_object*);
lean_object* lean_get_stderr(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1;
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_shutdown___boxed(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_eraseFileWorker___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getStdin___at_Lean_Server_Watchdog_watchdogMain___spec__1(lean_object*);
lean_object* l_IO_FS_Stream_readLspMessage(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56(size_t, size_t, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_startFileWorker___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__58(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain___boxed__const__2;
lean_object* l_Lean_Server_Watchdog_terminateFileWorker___closed__1;
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkInputContext(lean_object*, lean_object*);
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_170_(lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__4(lean_object*);
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__4;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux(lean_object*, lean_object*);
lean_object* l_IO_sleep(uint32_t, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_461_(lean_object*);
lean_object* l_IO_throwServerError___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_startFileWorker___spec__5(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__8;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_startFileWorker___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest(lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__24;
lean_object* l_Lean_Server_Watchdog_startFileWorker___closed__4;
extern lean_object* l_Lean_Lsp_SemanticTokenType_names;
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__9;
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleEdits___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_379_(lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readMessage(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_parseImports___closed__1;
lean_object* l_Lean_Server_Watchdog_parseParams(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___closed__4;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeMessage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__10;
lean_object* l_Lean_Server_Watchdog_workerCfg;
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__44(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__4(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__59(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__5;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__5(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_findFileWorker_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5;
lean_object* l_Lean_Server_Watchdog_mainLoop_match__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3;
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_setBlack___rarg(lean_object*);
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__3;
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___closed__1;
lean_object* l_Lean_Server_Watchdog_terminateFileWorker(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__51(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonWaitForDiagnosticsParams____x40_Lean_Data_Lsp_Extra___hyg_42_(lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
extern lean_object* l_Lean_Parser_Command_initialize___elambda__1___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleDidClose(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7;
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_exit___elambda__1___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6;
extern lean_object* l_Task_Priority_dedicated;
extern lean_object* l_Lean_Lsp_msgToDiagnostic___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___closed__2;
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__7;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1;
lean_object* l_Lean_Server_Watchdog_mainLoop___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4___boxed(lean_object*);
extern lean_object* l_IO_FS_Stream_readLspNotificationAs___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_eraseFileWorker(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleDidClose___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_RBNode_appendTrees___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_handleCancelRequest___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1;
lean_object* l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
lean_object* l_Lean_Server_Watchdog_mainLoop_match__3(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1;
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_balRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeMessage(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_RBNode_isBlack___rarg(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1106_(lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_0__mkPanicMessage___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_215_(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests_match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonCancelParams____x40_Lean_Data_Lsp_Basic___hyg_61_(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_252_(lean_object*);
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits_match__1(lean_object*);
extern lean_object* l_IO_FS_Stream_readRequestAs___closed__5;
lean_object* l_IO_FS_Stream_writeLspResponseError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspMessage(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1;
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonPlainGoalParams____x40_Lean_Data_Lsp_Extra___hyg_155_(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_watchdogMain___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleCrash(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2;
lean_object* l_Lean_Server_Watchdog_mainLoop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7(size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1;
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__2(lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1046_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_stdout(lean_object*);
lean_object* lean_server_watchdog_main(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_297_(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleNotification_match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_556_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonCancelParams____x40_Lean_Data_Lsp_Basic___hyg_86_(lean_object*);
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__2;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1;
lean_object* l_Lean_Server_Watchdog_mainLoop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6;
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__10(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9;
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__44;
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_balLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1;
lean_object* l_Lean_Server_Watchdog_mainLoop(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(lean_object*);
extern lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2;
extern lean_object* l_Task_Priority_default;
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleNotification(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidCloseTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_441_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain___boxed__const__1;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1151_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1;
lean_object* l_Lean_Server_Watchdog_handleEdits___closed__2;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams_match__1(lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__36;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_IO_FS_Stream_readNotificationAs___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3(lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8;
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7;
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__17(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1;
lean_object* l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1;
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_shutdown(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2;
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__7(lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities;
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___closed__5;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1;
lean_object* l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__23(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7;
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__12;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3;
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__8;
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__16(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_RBNode_isRed___rarg(lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__32;
lean_object* l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_toJsonDidChangeTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_275_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__20;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_133_(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__52(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5;
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__2(lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__2(lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__2(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35(size_t, size_t, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stdout(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__4;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68(size_t, size_t, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__40;
lean_object* l_Lean_Server_Watchdog_watchdogMain___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1;
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__11;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_stdin(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___closed__1;
extern lean_object* l_IO_FS_Stream_readRequestAs___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_updateFileWorkers(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleCrash___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__8;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_IO_FS_Stream_readRequestAs___closed__1;
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15(lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
extern lean_object* l_IO_FS_Stream_readLspRequestAs___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits_match__2(lean_object*);
lean_object* l_Lean_Server_Watchdog_findFileWorker___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5;
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_toJsonDidOpenTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_64_(lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__65(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1;
lean_object* l_Lean_Server_Watchdog_parseParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_startFileWorker___closed__2;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_startFileWorker___closed__1;
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_updateFileWorkers___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction(lean_object*, lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_334_(lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleEdits___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1077_(lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3;
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__4;
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification(lean_object*);
lean_object* l_Lean_Server_Watchdog_findFileWorker___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__30(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_maybeTee(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_app_dir(lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__31(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_587_(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__13;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_System_FilePath_exeSuffix;
lean_object* l_Lean_Server_Watchdog_handleCancelRequest(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_log(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
lean_object* l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidChangeTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_309_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_mainLoop_match__2(lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonErrorCode___closed__12;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux_match__1(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222_(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1;
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6;
extern lean_object* l_Lean_getBuiltinSearchPath___closed__3;
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__24(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_JsonRpc_instToJsonMessage___closed__9;
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1;
lean_object* l_Lean_Server_Watchdog_tryWriteMessage_match__1(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_Server_Watchdog_handleNotification_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__3(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_findFileWorker(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49(size_t, size_t, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2;
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1;
lean_object* l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeResult____x40_Lean_Data_Lsp_InitShutdown___hyg_454_(lean_object*);
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2(lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__1(lean_object*, lean_object*);
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_416_(lean_object*);
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1;
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__2___boxed(lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(lean_object*);
static lean_object* _init_l_Lean_Server_Watchdog_workerCfg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_Ipc_ipcStdioConfig___closed__1;
return x_1;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Elab_parseImports___closed__1;
x_4 = l_Lean_Parser_mkInputContext(x_1, x_3);
x_5 = l_Lean_Parser_parseHeader(x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_stdin(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_stream_of_handle(x_3);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_stdout(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_stream_of_handle(x_3);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_readMessage_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(x_5);
x_9 = lean_apply_4(x_2, x_4, x_8, x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_readMessage_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_inc(x_1);
x_9 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_1, x_6);
if (x_9 == 0)
{
uint8_t x_10; 
lean_inc(x_1);
lean_inc(x_6);
x_10 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_6, x_1);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_11 = l_Std_RBNode_appendTrees___rarg(x_5, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Std_RBNode_isBlack___rarg(x_8);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_8);
x_14 = 0;
lean_ctor_set(x_2, 3, x_13);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_14);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_2);
x_15 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_8);
x_16 = l_Std_RBNode_balRight___rarg(x_5, x_6, x_7, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = l_Std_RBNode_isBlack___rarg(x_5);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_5);
x_19 = 0;
lean_ctor_set(x_2, 0, x_18);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_19);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_2);
x_20 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_5);
x_21 = l_Std_RBNode_balLeft___rarg(x_20, x_6, x_7, x_8);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
lean_inc(x_23);
lean_inc(x_1);
x_26 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_1, x_23);
if (x_26 == 0)
{
uint8_t x_27; 
lean_inc(x_1);
lean_inc(x_23);
x_27 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_23, x_1);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_1);
x_28 = l_Std_RBNode_appendTrees___rarg(x_22, x_25);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l_Std_RBNode_isBlack___rarg(x_25);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_25);
x_31 = 0;
x_32 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_23);
lean_ctor_set(x_32, 2, x_24);
lean_ctor_set(x_32, 3, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*4, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_25);
x_34 = l_Std_RBNode_balRight___rarg(x_22, x_23, x_24, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = l_Std_RBNode_isBlack___rarg(x_22);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_22);
x_37 = 0;
x_38 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_23);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_25);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_22);
x_40 = l_Std_RBNode_balLeft___rarg(x_39, x_23, x_24, x_25);
return x_40;
}
}
}
}
}
}
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Std_RBNode_del___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__2(x_1, x_2);
x_4 = l_Std_RBNode_setBlack___rarg(x_3);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 4);
x_7 = lean_st_ref_take(x_6, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Std_RBNode_erase___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__1(x_5, x_8);
x_11 = lean_st_ref_set(x_6, x_10, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l_Lean_Server_Watchdog_FileWorker_stdout(x_1);
x_4 = l_IO_FS_Stream_readLspMessage(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
x_9 = lean_st_ref_take(x_8, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Std_RBNode_erase___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__1(x_7, x_10);
x_13 = lean_st_ref_set(x_8, x_12, x_11);
lean_dec(x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1(x_5, x_1, x_14, x_15);
lean_dec(x_14);
lean_dec(x_1);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_box(0);
x_19 = l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1(x_5, x_1, x_18, x_17);
lean_dec(x_1);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_4);
if (x_20 == 0)
{
return x_4;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Watchdog_FileWorker_readMessage___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
x_5 = l_IO_FS_Stream_writeLspMessage(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Server_Watchdog_FileWorker_stdin(x_2);
x_6 = l_IO_FS_Stream_writeLspNotification___rarg(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeNotification___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_inc(x_2);
x_13 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
lean_inc(x_2);
lean_inc(x_10);
x_14 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_10, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_15);
return x_1;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_12, x_2, x_3);
x_17 = 0;
lean_ctor_set(x_1, 3, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
lean_inc(x_21);
lean_inc(x_2);
x_24 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
lean_inc(x_2);
lean_inc(x_21);
x_25 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_21, x_2);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_21);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set(x_27, 2, x_3);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_26);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_23, x_2, x_3);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_22);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
lean_inc(x_36);
lean_inc(x_2);
x_39 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
lean_inc(x_2);
lean_inc(x_36);
x_40 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_36, x_2);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_37);
lean_dec(x_36);
x_41 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_41);
return x_1;
}
else
{
uint8_t x_42; 
x_42 = l_Std_RBNode_isRed___rarg(x_38);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_38, x_2, x_3);
x_44 = 1;
lean_ctor_set(x_1, 3, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_44);
return x_1;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_38, x_2, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_45, 3);
lean_dec(x_49);
x_50 = lean_ctor_get(x_45, 0);
lean_dec(x_50);
x_51 = 0;
lean_ctor_set(x_45, 0, x_47);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_51);
x_52 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_45, 1);
x_54 = lean_ctor_get(x_45, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = 0;
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = 1;
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_57);
return x_1;
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_47, sizeof(void*)*4);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_45);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_45, 1);
x_61 = lean_ctor_get(x_45, 2);
x_62 = lean_ctor_get(x_45, 3);
lean_dec(x_62);
x_63 = lean_ctor_get(x_45, 0);
lean_dec(x_63);
x_64 = !lean_is_exclusive(x_47);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_47, 0);
x_66 = lean_ctor_get(x_47, 1);
x_67 = lean_ctor_get(x_47, 2);
x_68 = lean_ctor_get(x_47, 3);
x_69 = 1;
lean_ctor_set(x_47, 3, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 1, x_36);
lean_ctor_set(x_47, 0, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_69);
lean_ctor_set(x_45, 3, x_68);
lean_ctor_set(x_45, 2, x_67);
lean_ctor_set(x_45, 1, x_66);
lean_ctor_set(x_45, 0, x_65);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_69);
x_70 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_70);
return x_1;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_47, 0);
x_72 = lean_ctor_get(x_47, 1);
x_73 = lean_ctor_get(x_47, 2);
x_74 = lean_ctor_get(x_47, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_47);
x_75 = 1;
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_36);
lean_ctor_set(x_76, 2, x_37);
lean_ctor_set(x_76, 3, x_46);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_75);
lean_ctor_set(x_45, 3, x_74);
lean_ctor_set(x_45, 2, x_73);
lean_ctor_set(x_45, 1, x_72);
lean_ctor_set(x_45, 0, x_71);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_75);
x_77 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_76);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_77);
return x_1;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_78 = lean_ctor_get(x_45, 1);
x_79 = lean_ctor_get(x_45, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_45);
x_80 = lean_ctor_get(x_47, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_47, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_47, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_47, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 x_84 = x_47;
} else {
 lean_dec_ref(x_47);
 x_84 = lean_box(0);
}
x_85 = 1;
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(1, 4, 1);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_35);
lean_ctor_set(x_86, 1, x_36);
lean_ctor_set(x_86, 2, x_37);
lean_ctor_set(x_86, 3, x_46);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
x_87 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_87, 0, x_80);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_82);
lean_ctor_set(x_87, 3, x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_85);
x_88 = 0;
lean_ctor_set(x_1, 3, x_87);
lean_ctor_set(x_1, 2, x_79);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_86);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_88);
return x_1;
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_45);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_45, 3);
lean_dec(x_90);
x_91 = lean_ctor_get(x_45, 0);
lean_dec(x_91);
x_92 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_92);
x_93 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_93);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_45, 1);
x_95 = lean_ctor_get(x_45, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_45);
x_96 = 0;
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_46);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_47);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = 1;
lean_ctor_set(x_1, 3, x_97);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_98);
return x_1;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = lean_ctor_get_uint8(x_46, sizeof(void*)*4);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_45);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_45, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_46);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_46, 0);
x_104 = lean_ctor_get(x_46, 1);
x_105 = lean_ctor_get(x_46, 2);
x_106 = lean_ctor_get(x_46, 3);
x_107 = 1;
lean_ctor_set(x_46, 3, x_103);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_107);
lean_ctor_set(x_45, 0, x_106);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_107);
x_108 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
x_111 = lean_ctor_get(x_46, 2);
x_112 = lean_ctor_get(x_46, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_113 = 1;
x_114 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_114, 0, x_35);
lean_ctor_set(x_114, 1, x_36);
lean_ctor_set(x_114, 2, x_37);
lean_ctor_set(x_114, 3, x_109);
lean_ctor_set_uint8(x_114, sizeof(void*)*4, x_113);
lean_ctor_set(x_45, 0, x_112);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_113);
x_115 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_111);
lean_ctor_set(x_1, 1, x_110);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_115);
return x_1;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_116 = lean_ctor_get(x_45, 1);
x_117 = lean_ctor_get(x_45, 2);
x_118 = lean_ctor_get(x_45, 3);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_45);
x_119 = lean_ctor_get(x_46, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_46, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_46, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_46, 3);
lean_inc(x_122);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_123 = x_46;
} else {
 lean_dec_ref(x_46);
 x_123 = lean_box(0);
}
x_124 = 1;
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(1, 4, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_36);
lean_ctor_set(x_125, 2, x_37);
lean_ctor_set(x_125, 3, x_119);
lean_ctor_set_uint8(x_125, sizeof(void*)*4, x_124);
x_126 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_117);
lean_ctor_set(x_126, 3, x_118);
lean_ctor_set_uint8(x_126, sizeof(void*)*4, x_124);
x_127 = 0;
lean_ctor_set(x_1, 3, x_126);
lean_ctor_set(x_1, 2, x_121);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_125);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_127);
return x_1;
}
}
else
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_45, 3);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_45);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_45, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_45, 0);
lean_dec(x_131);
x_132 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_132);
x_133 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_133);
return x_1;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_45, 1);
x_135 = lean_ctor_get(x_45, 2);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_45);
x_136 = 0;
x_137 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_137, 0, x_46);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_135);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set_uint8(x_137, sizeof(void*)*4, x_136);
x_138 = 1;
lean_ctor_set(x_1, 3, x_137);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_138);
return x_1;
}
}
else
{
uint8_t x_139; 
x_139 = lean_ctor_get_uint8(x_128, sizeof(void*)*4);
if (x_139 == 0)
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_45);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_45, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_45, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_128);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; uint8_t x_149; 
x_144 = lean_ctor_get(x_128, 0);
x_145 = lean_ctor_get(x_128, 1);
x_146 = lean_ctor_get(x_128, 2);
x_147 = lean_ctor_get(x_128, 3);
x_148 = 1;
lean_inc(x_46);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 2, x_37);
lean_ctor_set(x_128, 1, x_36);
lean_ctor_set(x_128, 0, x_35);
x_149 = !lean_is_exclusive(x_46);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_46, 3);
lean_dec(x_150);
x_151 = lean_ctor_get(x_46, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_46, 1);
lean_dec(x_152);
x_153 = lean_ctor_get(x_46, 0);
lean_dec(x_153);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
lean_ctor_set(x_46, 3, x_147);
lean_ctor_set(x_46, 2, x_146);
lean_ctor_set(x_46, 1, x_145);
lean_ctor_set(x_46, 0, x_144);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_148);
x_154 = 0;
lean_ctor_set(x_45, 3, x_46);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_154);
return x_45;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_46);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
x_155 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_155, 0, x_144);
lean_ctor_set(x_155, 1, x_145);
lean_ctor_set(x_155, 2, x_146);
lean_ctor_set(x_155, 3, x_147);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_148);
x_156 = 0;
lean_ctor_set(x_45, 3, x_155);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_156);
return x_45;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_157 = lean_ctor_get(x_128, 0);
x_158 = lean_ctor_get(x_128, 1);
x_159 = lean_ctor_get(x_128, 2);
x_160 = lean_ctor_get(x_128, 3);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_128);
x_161 = 1;
lean_inc(x_46);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_36);
lean_ctor_set(x_162, 2, x_37);
lean_ctor_set(x_162, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_163 = x_46;
} else {
 lean_dec_ref(x_46);
 x_163 = lean_box(0);
}
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_161);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 4, 1);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_157);
lean_ctor_set(x_164, 1, x_158);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*4, x_161);
x_165 = 0;
lean_ctor_set(x_45, 3, x_164);
lean_ctor_set(x_45, 0, x_162);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_165);
return x_45;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_166 = lean_ctor_get(x_45, 1);
x_167 = lean_ctor_get(x_45, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_45);
x_168 = lean_ctor_get(x_128, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_128, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_128, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_128, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 x_172 = x_128;
} else {
 lean_dec_ref(x_128);
 x_172 = lean_box(0);
}
x_173 = 1;
lean_inc(x_46);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(1, 4, 1);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_35);
lean_ctor_set(x_174, 1, x_36);
lean_ctor_set(x_174, 2, x_37);
lean_ctor_set(x_174, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_175 = x_46;
} else {
 lean_dec_ref(x_46);
 x_175 = lean_box(0);
}
lean_ctor_set_uint8(x_174, sizeof(void*)*4, x_173);
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_168);
lean_ctor_set(x_176, 1, x_169);
lean_ctor_set(x_176, 2, x_170);
lean_ctor_set(x_176, 3, x_171);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_173);
x_177 = 0;
x_178 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_166);
lean_ctor_set(x_178, 2, x_167);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_45, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_45, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_46);
if (x_182 == 0)
{
uint8_t x_183; uint8_t x_184; 
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_139);
x_183 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_183);
x_184 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_184);
return x_1;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_185 = lean_ctor_get(x_46, 0);
x_186 = lean_ctor_get(x_46, 1);
x_187 = lean_ctor_get(x_46, 2);
x_188 = lean_ctor_get(x_46, 3);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_46);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_187);
lean_ctor_set(x_189, 3, x_188);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_139);
x_190 = 0;
lean_ctor_set(x_45, 0, x_189);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_190);
x_191 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; uint8_t x_202; 
x_192 = lean_ctor_get(x_45, 1);
x_193 = lean_ctor_get(x_45, 2);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_45);
x_194 = lean_ctor_get(x_46, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_46, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_46, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_46, 3);
lean_inc(x_197);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_198 = x_46;
} else {
 lean_dec_ref(x_46);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 4, 1);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*4, x_139);
x_200 = 0;
x_201 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_128);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = 1;
lean_ctor_set(x_1, 3, x_201);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_202);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_203; 
x_203 = l_Std_RBNode_isRed___rarg(x_35);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_35, x_2, x_3);
x_205 = 1;
lean_ctor_set(x_1, 0, x_204);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_205);
return x_1;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_35, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 3);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; uint8_t x_212; uint8_t x_213; 
x_210 = lean_ctor_get(x_206, 3);
lean_dec(x_210);
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
x_212 = 0;
lean_ctor_set(x_206, 0, x_208);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_212);
x_213 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_213);
return x_1;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
x_214 = lean_ctor_get(x_206, 1);
x_215 = lean_ctor_get(x_206, 2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_206);
x_216 = 0;
x_217 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_214);
lean_ctor_set(x_217, 2, x_215);
lean_ctor_set(x_217, 3, x_208);
lean_ctor_set_uint8(x_217, sizeof(void*)*4, x_216);
x_218 = 1;
lean_ctor_set(x_1, 0, x_217);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_218);
return x_1;
}
}
else
{
uint8_t x_219; 
x_219 = lean_ctor_get_uint8(x_208, sizeof(void*)*4);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_206);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_206, 1);
x_222 = lean_ctor_get(x_206, 2);
x_223 = lean_ctor_get(x_206, 3);
lean_dec(x_223);
x_224 = lean_ctor_get(x_206, 0);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_208);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_208, 0);
x_227 = lean_ctor_get(x_208, 1);
x_228 = lean_ctor_get(x_208, 2);
x_229 = lean_ctor_get(x_208, 3);
x_230 = 1;
lean_ctor_set(x_208, 3, x_226);
lean_ctor_set(x_208, 2, x_222);
lean_ctor_set(x_208, 1, x_221);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set_uint8(x_208, sizeof(void*)*4, x_230);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_229);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_230);
x_231 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_208);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_231);
return x_1;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; uint8_t x_238; 
x_232 = lean_ctor_get(x_208, 0);
x_233 = lean_ctor_get(x_208, 1);
x_234 = lean_ctor_get(x_208, 2);
x_235 = lean_ctor_get(x_208, 3);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_208);
x_236 = 1;
x_237 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_237, 0, x_207);
lean_ctor_set(x_237, 1, x_221);
lean_ctor_set(x_237, 2, x_222);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set_uint8(x_237, sizeof(void*)*4, x_236);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_235);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_236);
x_238 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_234);
lean_ctor_set(x_1, 1, x_233);
lean_ctor_set(x_1, 0, x_237);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_238);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_239 = lean_ctor_get(x_206, 1);
x_240 = lean_ctor_get(x_206, 2);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_206);
x_241 = lean_ctor_get(x_208, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_208, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_208, 2);
lean_inc(x_243);
x_244 = lean_ctor_get(x_208, 3);
lean_inc(x_244);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 lean_ctor_release(x_208, 2);
 lean_ctor_release(x_208, 3);
 x_245 = x_208;
} else {
 lean_dec_ref(x_208);
 x_245 = lean_box(0);
}
x_246 = 1;
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(1, 4, 1);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_207);
lean_ctor_set(x_247, 1, x_239);
lean_ctor_set(x_247, 2, x_240);
lean_ctor_set(x_247, 3, x_241);
lean_ctor_set_uint8(x_247, sizeof(void*)*4, x_246);
x_248 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_36);
lean_ctor_set(x_248, 2, x_37);
lean_ctor_set(x_248, 3, x_38);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_246);
x_249 = 0;
lean_ctor_set(x_1, 3, x_248);
lean_ctor_set(x_1, 2, x_243);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_247);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_249);
return x_1;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_206);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; uint8_t x_254; 
x_251 = lean_ctor_get(x_206, 3);
lean_dec(x_251);
x_252 = lean_ctor_get(x_206, 0);
lean_dec(x_252);
x_253 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_253);
x_254 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_254);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_206, 1);
x_256 = lean_ctor_get(x_206, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_206);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_207);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_208);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
x_259 = 1;
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
else
{
uint8_t x_260; 
x_260 = lean_ctor_get_uint8(x_207, sizeof(void*)*4);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = !lean_is_exclusive(x_206);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_262 = lean_ctor_get(x_206, 1);
x_263 = lean_ctor_get(x_206, 2);
x_264 = lean_ctor_get(x_206, 3);
x_265 = lean_ctor_get(x_206, 0);
lean_dec(x_265);
x_266 = !lean_is_exclusive(x_207);
if (x_266 == 0)
{
uint8_t x_267; uint8_t x_268; 
x_267 = 1;
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_267);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_267);
x_268 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_207);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_268);
return x_1;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_275; 
x_269 = lean_ctor_get(x_207, 0);
x_270 = lean_ctor_get(x_207, 1);
x_271 = lean_ctor_get(x_207, 2);
x_272 = lean_ctor_get(x_207, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_207);
x_273 = 1;
x_274 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_274, 0, x_269);
lean_ctor_set(x_274, 1, x_270);
lean_ctor_set(x_274, 2, x_271);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set_uint8(x_274, sizeof(void*)*4, x_273);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_273);
x_275 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_274);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_275);
return x_1;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_276 = lean_ctor_get(x_206, 1);
x_277 = lean_ctor_get(x_206, 2);
x_278 = lean_ctor_get(x_206, 3);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_206);
x_279 = lean_ctor_get(x_207, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_207, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_207, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_207, 3);
lean_inc(x_282);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_283 = x_207;
} else {
 lean_dec_ref(x_207);
 x_283 = lean_box(0);
}
x_284 = 1;
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(1, 4, 1);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_280);
lean_ctor_set(x_285, 2, x_281);
lean_ctor_set(x_285, 3, x_282);
lean_ctor_set_uint8(x_285, sizeof(void*)*4, x_284);
x_286 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_36);
lean_ctor_set(x_286, 2, x_37);
lean_ctor_set(x_286, 3, x_38);
lean_ctor_set_uint8(x_286, sizeof(void*)*4, x_284);
x_287 = 0;
lean_ctor_set(x_1, 3, x_286);
lean_ctor_set(x_1, 2, x_277);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_285);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_287);
return x_1;
}
}
else
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_206, 3);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_206);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_206, 3);
lean_dec(x_290);
x_291 = lean_ctor_get(x_206, 0);
lean_dec(x_291);
x_292 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_292);
x_293 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_293);
return x_1;
}
else
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_206, 1);
x_295 = lean_ctor_get(x_206, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_206);
x_296 = 0;
x_297 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_297, 0, x_207);
lean_ctor_set(x_297, 1, x_294);
lean_ctor_set(x_297, 2, x_295);
lean_ctor_set(x_297, 3, x_288);
lean_ctor_set_uint8(x_297, sizeof(void*)*4, x_296);
x_298 = 1;
lean_ctor_set(x_1, 0, x_297);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_298);
return x_1;
}
}
else
{
uint8_t x_299; 
x_299 = lean_ctor_get_uint8(x_288, sizeof(void*)*4);
if (x_299 == 0)
{
uint8_t x_300; 
lean_free_object(x_1);
x_300 = !lean_is_exclusive(x_206);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_206, 1);
x_302 = lean_ctor_get(x_206, 2);
x_303 = lean_ctor_get(x_206, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_206, 0);
lean_dec(x_304);
x_305 = !lean_is_exclusive(x_288);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; 
x_306 = lean_ctor_get(x_288, 0);
x_307 = lean_ctor_get(x_288, 1);
x_308 = lean_ctor_get(x_288, 2);
x_309 = lean_ctor_get(x_288, 3);
x_310 = 1;
lean_inc(x_207);
lean_ctor_set(x_288, 3, x_306);
lean_ctor_set(x_288, 2, x_302);
lean_ctor_set(x_288, 1, x_301);
lean_ctor_set(x_288, 0, x_207);
x_311 = !lean_is_exclusive(x_207);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_207, 3);
lean_dec(x_312);
x_313 = lean_ctor_get(x_207, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_207, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_207, 0);
lean_dec(x_315);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
lean_ctor_set(x_207, 3, x_38);
lean_ctor_set(x_207, 2, x_37);
lean_ctor_set(x_207, 1, x_36);
lean_ctor_set(x_207, 0, x_309);
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_310);
x_316 = 0;
lean_ctor_set(x_206, 3, x_207);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_316);
return x_206;
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_dec(x_207);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
x_317 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_36);
lean_ctor_set(x_317, 2, x_37);
lean_ctor_set(x_317, 3, x_38);
lean_ctor_set_uint8(x_317, sizeof(void*)*4, x_310);
x_318 = 0;
lean_ctor_set(x_206, 3, x_317);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_318);
return x_206;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_319 = lean_ctor_get(x_288, 0);
x_320 = lean_ctor_get(x_288, 1);
x_321 = lean_ctor_get(x_288, 2);
x_322 = lean_ctor_get(x_288, 3);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_288);
x_323 = 1;
lean_inc(x_207);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_207);
lean_ctor_set(x_324, 1, x_301);
lean_ctor_set(x_324, 2, x_302);
lean_ctor_set(x_324, 3, x_319);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_325 = x_207;
} else {
 lean_dec_ref(x_207);
 x_325 = lean_box(0);
}
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_323);
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 4, 1);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_322);
lean_ctor_set(x_326, 1, x_36);
lean_ctor_set(x_326, 2, x_37);
lean_ctor_set(x_326, 3, x_38);
lean_ctor_set_uint8(x_326, sizeof(void*)*4, x_323);
x_327 = 0;
lean_ctor_set(x_206, 3, x_326);
lean_ctor_set(x_206, 2, x_321);
lean_ctor_set(x_206, 1, x_320);
lean_ctor_set(x_206, 0, x_324);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_327);
return x_206;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; 
x_328 = lean_ctor_get(x_206, 1);
x_329 = lean_ctor_get(x_206, 2);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_206);
x_330 = lean_ctor_get(x_288, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_288, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_288, 2);
lean_inc(x_332);
x_333 = lean_ctor_get(x_288, 3);
lean_inc(x_333);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 lean_ctor_release(x_288, 2);
 lean_ctor_release(x_288, 3);
 x_334 = x_288;
} else {
 lean_dec_ref(x_288);
 x_334 = lean_box(0);
}
x_335 = 1;
lean_inc(x_207);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 4, 1);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_207);
lean_ctor_set(x_336, 1, x_328);
lean_ctor_set(x_336, 2, x_329);
lean_ctor_set(x_336, 3, x_330);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_337 = x_207;
} else {
 lean_dec_ref(x_207);
 x_337 = lean_box(0);
}
lean_ctor_set_uint8(x_336, sizeof(void*)*4, x_335);
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 4, 1);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_333);
lean_ctor_set(x_338, 1, x_36);
lean_ctor_set(x_338, 2, x_37);
lean_ctor_set(x_338, 3, x_38);
lean_ctor_set_uint8(x_338, sizeof(void*)*4, x_335);
x_339 = 0;
x_340 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_340, 0, x_336);
lean_ctor_set(x_340, 1, x_331);
lean_ctor_set(x_340, 2, x_332);
lean_ctor_set(x_340, 3, x_338);
lean_ctor_set_uint8(x_340, sizeof(void*)*4, x_339);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_206);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = lean_ctor_get(x_206, 3);
lean_dec(x_342);
x_343 = lean_ctor_get(x_206, 0);
lean_dec(x_343);
x_344 = !lean_is_exclusive(x_207);
if (x_344 == 0)
{
uint8_t x_345; uint8_t x_346; 
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_299);
x_345 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_345);
x_346 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_346);
return x_1;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; uint8_t x_353; 
x_347 = lean_ctor_get(x_207, 0);
x_348 = lean_ctor_get(x_207, 1);
x_349 = lean_ctor_get(x_207, 2);
x_350 = lean_ctor_get(x_207, 3);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_207);
x_351 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_348);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set(x_351, 3, x_350);
lean_ctor_set_uint8(x_351, sizeof(void*)*4, x_299);
x_352 = 0;
lean_ctor_set(x_206, 0, x_351);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_352);
x_353 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_353);
return x_1;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; uint8_t x_364; 
x_354 = lean_ctor_get(x_206, 1);
x_355 = lean_ctor_get(x_206, 2);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_206);
x_356 = lean_ctor_get(x_207, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_207, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_207, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_207, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_360 = x_207;
} else {
 lean_dec_ref(x_207);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 4, 1);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_357);
lean_ctor_set(x_361, 2, x_358);
lean_ctor_set(x_361, 3, x_359);
lean_ctor_set_uint8(x_361, sizeof(void*)*4, x_299);
x_362 = 0;
x_363 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_354);
lean_ctor_set(x_363, 2, x_355);
lean_ctor_set(x_363, 3, x_288);
lean_ctor_set_uint8(x_363, sizeof(void*)*4, x_362);
x_364 = 1;
lean_ctor_set(x_1, 0, x_363);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_364);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_365 = lean_ctor_get(x_1, 0);
x_366 = lean_ctor_get(x_1, 1);
x_367 = lean_ctor_get(x_1, 2);
x_368 = lean_ctor_get(x_1, 3);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_1);
lean_inc(x_366);
lean_inc(x_2);
x_369 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_2, x_366);
if (x_369 == 0)
{
uint8_t x_370; 
lean_inc(x_2);
lean_inc(x_366);
x_370 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_366, x_2);
if (x_370 == 0)
{
uint8_t x_371; lean_object* x_372; 
lean_dec(x_367);
lean_dec(x_366);
x_371 = 1;
x_372 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_2);
lean_ctor_set(x_372, 2, x_3);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_371);
return x_372;
}
else
{
uint8_t x_373; 
x_373 = l_Std_RBNode_isRed___rarg(x_368);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; 
x_374 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_368, x_2, x_3);
x_375 = 1;
x_376 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_367);
lean_ctor_set(x_376, 3, x_374);
lean_ctor_set_uint8(x_376, sizeof(void*)*4, x_375);
return x_376;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_368, x_2, x_3);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 3);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; uint8_t x_385; lean_object* x_386; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_377, 2);
lean_inc(x_381);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_382 = x_377;
} else {
 lean_dec_ref(x_377);
 x_382 = lean_box(0);
}
x_383 = 0;
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_379);
lean_ctor_set(x_384, 1, x_380);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_379);
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_383);
x_385 = 1;
x_386 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_386, 0, x_365);
lean_ctor_set(x_386, 1, x_366);
lean_ctor_set(x_386, 2, x_367);
lean_ctor_set(x_386, 3, x_384);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_385);
return x_386;
}
else
{
uint8_t x_387; 
x_387 = lean_ctor_get_uint8(x_379, sizeof(void*)*4);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; 
x_388 = lean_ctor_get(x_377, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_377, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_390 = x_377;
} else {
 lean_dec_ref(x_377);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_379, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_379, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 lean_ctor_release(x_379, 3);
 x_395 = x_379;
} else {
 lean_dec_ref(x_379);
 x_395 = lean_box(0);
}
x_396 = 1;
if (lean_is_scalar(x_395)) {
 x_397 = lean_alloc_ctor(1, 4, 1);
} else {
 x_397 = x_395;
}
lean_ctor_set(x_397, 0, x_365);
lean_ctor_set(x_397, 1, x_366);
lean_ctor_set(x_397, 2, x_367);
lean_ctor_set(x_397, 3, x_378);
lean_ctor_set_uint8(x_397, sizeof(void*)*4, x_396);
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_392);
lean_ctor_set(x_398, 2, x_393);
lean_ctor_set(x_398, 3, x_394);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_396);
x_399 = 0;
x_400 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_388);
lean_ctor_set(x_400, 2, x_389);
lean_ctor_set(x_400, 3, x_398);
lean_ctor_set_uint8(x_400, sizeof(void*)*4, x_399);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; 
x_401 = lean_ctor_get(x_377, 1);
lean_inc(x_401);
x_402 = lean_ctor_get(x_377, 2);
lean_inc(x_402);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_403 = x_377;
} else {
 lean_dec_ref(x_377);
 x_403 = lean_box(0);
}
x_404 = 0;
if (lean_is_scalar(x_403)) {
 x_405 = lean_alloc_ctor(1, 4, 1);
} else {
 x_405 = x_403;
}
lean_ctor_set(x_405, 0, x_378);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_405, 2, x_402);
lean_ctor_set(x_405, 3, x_379);
lean_ctor_set_uint8(x_405, sizeof(void*)*4, x_404);
x_406 = 1;
x_407 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_407, 0, x_365);
lean_ctor_set(x_407, 1, x_366);
lean_ctor_set(x_407, 2, x_367);
lean_ctor_set(x_407, 3, x_405);
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
return x_407;
}
}
}
else
{
uint8_t x_408; 
x_408 = lean_ctor_get_uint8(x_378, sizeof(void*)*4);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_409 = lean_ctor_get(x_377, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_377, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_377, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_412 = x_377;
} else {
 lean_dec_ref(x_377);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_378, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_378, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_378, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_378, 3);
lean_inc(x_416);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_417 = x_378;
} else {
 lean_dec_ref(x_378);
 x_417 = lean_box(0);
}
x_418 = 1;
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(1, 4, 1);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_365);
lean_ctor_set(x_419, 1, x_366);
lean_ctor_set(x_419, 2, x_367);
lean_ctor_set(x_419, 3, x_413);
lean_ctor_set_uint8(x_419, sizeof(void*)*4, x_418);
if (lean_is_scalar(x_412)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_412;
}
lean_ctor_set(x_420, 0, x_416);
lean_ctor_set(x_420, 1, x_409);
lean_ctor_set(x_420, 2, x_410);
lean_ctor_set(x_420, 3, x_411);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_418);
x_421 = 0;
x_422 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_414);
lean_ctor_set(x_422, 2, x_415);
lean_ctor_set(x_422, 3, x_420);
lean_ctor_set_uint8(x_422, sizeof(void*)*4, x_421);
return x_422;
}
else
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_377, 3);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; 
x_424 = lean_ctor_get(x_377, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_377, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_426 = x_377;
} else {
 lean_dec_ref(x_377);
 x_426 = lean_box(0);
}
x_427 = 0;
if (lean_is_scalar(x_426)) {
 x_428 = lean_alloc_ctor(1, 4, 1);
} else {
 x_428 = x_426;
}
lean_ctor_set(x_428, 0, x_378);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_425);
lean_ctor_set(x_428, 3, x_423);
lean_ctor_set_uint8(x_428, sizeof(void*)*4, x_427);
x_429 = 1;
x_430 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_430, 0, x_365);
lean_ctor_set(x_430, 1, x_366);
lean_ctor_set(x_430, 2, x_367);
lean_ctor_set(x_430, 3, x_428);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
return x_430;
}
else
{
uint8_t x_431; 
x_431 = lean_ctor_get_uint8(x_423, sizeof(void*)*4);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; uint8_t x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; lean_object* x_445; 
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_423, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_423, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_423, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_423, 3);
lean_inc(x_438);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_439 = x_423;
} else {
 lean_dec_ref(x_423);
 x_439 = lean_box(0);
}
x_440 = 1;
lean_inc(x_378);
if (lean_is_scalar(x_439)) {
 x_441 = lean_alloc_ctor(1, 4, 1);
} else {
 x_441 = x_439;
}
lean_ctor_set(x_441, 0, x_365);
lean_ctor_set(x_441, 1, x_366);
lean_ctor_set(x_441, 2, x_367);
lean_ctor_set(x_441, 3, x_378);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_442 = x_378;
} else {
 lean_dec_ref(x_378);
 x_442 = lean_box(0);
}
lean_ctor_set_uint8(x_441, sizeof(void*)*4, x_440);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_435);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_437);
lean_ctor_set(x_443, 3, x_438);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_440);
x_444 = 0;
if (lean_is_scalar(x_434)) {
 x_445 = lean_alloc_ctor(1, 4, 1);
} else {
 x_445 = x_434;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_432);
lean_ctor_set(x_445, 2, x_433);
lean_ctor_set(x_445, 3, x_443);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_444);
return x_445;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; uint8_t x_457; lean_object* x_458; 
x_446 = lean_ctor_get(x_377, 1);
lean_inc(x_446);
x_447 = lean_ctor_get(x_377, 2);
lean_inc(x_447);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_448 = x_377;
} else {
 lean_dec_ref(x_377);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_378, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_378, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = lean_ctor_get(x_378, 3);
lean_inc(x_452);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_453 = x_378;
} else {
 lean_dec_ref(x_378);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_449);
lean_ctor_set(x_454, 1, x_450);
lean_ctor_set(x_454, 2, x_451);
lean_ctor_set(x_454, 3, x_452);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_431);
x_455 = 0;
if (lean_is_scalar(x_448)) {
 x_456 = lean_alloc_ctor(1, 4, 1);
} else {
 x_456 = x_448;
}
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_446);
lean_ctor_set(x_456, 2, x_447);
lean_ctor_set(x_456, 3, x_423);
lean_ctor_set_uint8(x_456, sizeof(void*)*4, x_455);
x_457 = 1;
x_458 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_458, 0, x_365);
lean_ctor_set(x_458, 1, x_366);
lean_ctor_set(x_458, 2, x_367);
lean_ctor_set(x_458, 3, x_456);
lean_ctor_set_uint8(x_458, sizeof(void*)*4, x_457);
return x_458;
}
}
}
}
}
}
}
else
{
uint8_t x_459; 
x_459 = l_Std_RBNode_isRed___rarg(x_365);
if (x_459 == 0)
{
lean_object* x_460; uint8_t x_461; lean_object* x_462; 
x_460 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_365, x_2, x_3);
x_461 = 1;
x_462 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_366);
lean_ctor_set(x_462, 2, x_367);
lean_ctor_set(x_462, 3, x_368);
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_461);
return x_462;
}
else
{
lean_object* x_463; lean_object* x_464; 
x_463 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_365, x_2, x_3);
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; 
x_465 = lean_ctor_get(x_463, 3);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; 
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_463, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_468 = x_463;
} else {
 lean_dec_ref(x_463);
 x_468 = lean_box(0);
}
x_469 = 0;
if (lean_is_scalar(x_468)) {
 x_470 = lean_alloc_ctor(1, 4, 1);
} else {
 x_470 = x_468;
}
lean_ctor_set(x_470, 0, x_465);
lean_ctor_set(x_470, 1, x_466);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_465);
lean_ctor_set_uint8(x_470, sizeof(void*)*4, x_469);
x_471 = 1;
x_472 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_366);
lean_ctor_set(x_472, 2, x_367);
lean_ctor_set(x_472, 3, x_368);
lean_ctor_set_uint8(x_472, sizeof(void*)*4, x_471);
return x_472;
}
else
{
uint8_t x_473; 
x_473 = lean_ctor_get_uint8(x_465, sizeof(void*)*4);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; lean_object* x_486; 
x_474 = lean_ctor_get(x_463, 1);
lean_inc(x_474);
x_475 = lean_ctor_get(x_463, 2);
lean_inc(x_475);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_476 = x_463;
} else {
 lean_dec_ref(x_463);
 x_476 = lean_box(0);
}
x_477 = lean_ctor_get(x_465, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_465, 2);
lean_inc(x_479);
x_480 = lean_ctor_get(x_465, 3);
lean_inc(x_480);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 lean_ctor_release(x_465, 2);
 lean_ctor_release(x_465, 3);
 x_481 = x_465;
} else {
 lean_dec_ref(x_465);
 x_481 = lean_box(0);
}
x_482 = 1;
if (lean_is_scalar(x_481)) {
 x_483 = lean_alloc_ctor(1, 4, 1);
} else {
 x_483 = x_481;
}
lean_ctor_set(x_483, 0, x_464);
lean_ctor_set(x_483, 1, x_474);
lean_ctor_set(x_483, 2, x_475);
lean_ctor_set(x_483, 3, x_477);
lean_ctor_set_uint8(x_483, sizeof(void*)*4, x_482);
if (lean_is_scalar(x_476)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_476;
}
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_366);
lean_ctor_set(x_484, 2, x_367);
lean_ctor_set(x_484, 3, x_368);
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_482);
x_485 = 0;
x_486 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_478);
lean_ctor_set(x_486, 2, x_479);
lean_ctor_set(x_486, 3, x_484);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_485);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_487 = lean_ctor_get(x_463, 1);
lean_inc(x_487);
x_488 = lean_ctor_get(x_463, 2);
lean_inc(x_488);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_489 = x_463;
} else {
 lean_dec_ref(x_463);
 x_489 = lean_box(0);
}
x_490 = 0;
if (lean_is_scalar(x_489)) {
 x_491 = lean_alloc_ctor(1, 4, 1);
} else {
 x_491 = x_489;
}
lean_ctor_set(x_491, 0, x_464);
lean_ctor_set(x_491, 1, x_487);
lean_ctor_set(x_491, 2, x_488);
lean_ctor_set(x_491, 3, x_465);
lean_ctor_set_uint8(x_491, sizeof(void*)*4, x_490);
x_492 = 1;
x_493 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_366);
lean_ctor_set(x_493, 2, x_367);
lean_ctor_set(x_493, 3, x_368);
lean_ctor_set_uint8(x_493, sizeof(void*)*4, x_492);
return x_493;
}
}
}
else
{
uint8_t x_494; 
x_494 = lean_ctor_get_uint8(x_464, sizeof(void*)*4);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; uint8_t x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; 
x_495 = lean_ctor_get(x_463, 1);
lean_inc(x_495);
x_496 = lean_ctor_get(x_463, 2);
lean_inc(x_496);
x_497 = lean_ctor_get(x_463, 3);
lean_inc(x_497);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_498 = x_463;
} else {
 lean_dec_ref(x_463);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_464, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_464, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_464, 2);
lean_inc(x_501);
x_502 = lean_ctor_get(x_464, 3);
lean_inc(x_502);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_503 = x_464;
} else {
 lean_dec_ref(x_464);
 x_503 = lean_box(0);
}
x_504 = 1;
if (lean_is_scalar(x_503)) {
 x_505 = lean_alloc_ctor(1, 4, 1);
} else {
 x_505 = x_503;
}
lean_ctor_set(x_505, 0, x_499);
lean_ctor_set(x_505, 1, x_500);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_502);
lean_ctor_set_uint8(x_505, sizeof(void*)*4, x_504);
if (lean_is_scalar(x_498)) {
 x_506 = lean_alloc_ctor(1, 4, 1);
} else {
 x_506 = x_498;
}
lean_ctor_set(x_506, 0, x_497);
lean_ctor_set(x_506, 1, x_366);
lean_ctor_set(x_506, 2, x_367);
lean_ctor_set(x_506, 3, x_368);
lean_ctor_set_uint8(x_506, sizeof(void*)*4, x_504);
x_507 = 0;
x_508 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_508, 0, x_505);
lean_ctor_set(x_508, 1, x_495);
lean_ctor_set(x_508, 2, x_496);
lean_ctor_set(x_508, 3, x_506);
lean_ctor_set_uint8(x_508, sizeof(void*)*4, x_507);
return x_508;
}
else
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_463, 3);
lean_inc(x_509);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; uint8_t x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_463, 1);
lean_inc(x_510);
x_511 = lean_ctor_get(x_463, 2);
lean_inc(x_511);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_512 = x_463;
} else {
 lean_dec_ref(x_463);
 x_512 = lean_box(0);
}
x_513 = 0;
if (lean_is_scalar(x_512)) {
 x_514 = lean_alloc_ctor(1, 4, 1);
} else {
 x_514 = x_512;
}
lean_ctor_set(x_514, 0, x_464);
lean_ctor_set(x_514, 1, x_510);
lean_ctor_set(x_514, 2, x_511);
lean_ctor_set(x_514, 3, x_509);
lean_ctor_set_uint8(x_514, sizeof(void*)*4, x_513);
x_515 = 1;
x_516 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_366);
lean_ctor_set(x_516, 2, x_367);
lean_ctor_set(x_516, 3, x_368);
lean_ctor_set_uint8(x_516, sizeof(void*)*4, x_515);
return x_516;
}
else
{
uint8_t x_517; 
x_517 = lean_ctor_get_uint8(x_509, sizeof(void*)*4);
if (x_517 == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; lean_object* x_531; 
x_518 = lean_ctor_get(x_463, 1);
lean_inc(x_518);
x_519 = lean_ctor_get(x_463, 2);
lean_inc(x_519);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_520 = x_463;
} else {
 lean_dec_ref(x_463);
 x_520 = lean_box(0);
}
x_521 = lean_ctor_get(x_509, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_509, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_509, 2);
lean_inc(x_523);
x_524 = lean_ctor_get(x_509, 3);
lean_inc(x_524);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 lean_ctor_release(x_509, 2);
 lean_ctor_release(x_509, 3);
 x_525 = x_509;
} else {
 lean_dec_ref(x_509);
 x_525 = lean_box(0);
}
x_526 = 1;
lean_inc(x_464);
if (lean_is_scalar(x_525)) {
 x_527 = lean_alloc_ctor(1, 4, 1);
} else {
 x_527 = x_525;
}
lean_ctor_set(x_527, 0, x_464);
lean_ctor_set(x_527, 1, x_518);
lean_ctor_set(x_527, 2, x_519);
lean_ctor_set(x_527, 3, x_521);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_528 = x_464;
} else {
 lean_dec_ref(x_464);
 x_528 = lean_box(0);
}
lean_ctor_set_uint8(x_527, sizeof(void*)*4, x_526);
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 4, 1);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_524);
lean_ctor_set(x_529, 1, x_366);
lean_ctor_set(x_529, 2, x_367);
lean_ctor_set(x_529, 3, x_368);
lean_ctor_set_uint8(x_529, sizeof(void*)*4, x_526);
x_530 = 0;
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(1, 4, 1);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_522);
lean_ctor_set(x_531, 2, x_523);
lean_ctor_set(x_531, 3, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*4, x_530);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; uint8_t x_541; lean_object* x_542; uint8_t x_543; lean_object* x_544; 
x_532 = lean_ctor_get(x_463, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_463, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_534 = x_463;
} else {
 lean_dec_ref(x_463);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_464, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_464, 1);
lean_inc(x_536);
x_537 = lean_ctor_get(x_464, 2);
lean_inc(x_537);
x_538 = lean_ctor_get(x_464, 3);
lean_inc(x_538);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_539 = x_464;
} else {
 lean_dec_ref(x_464);
 x_539 = lean_box(0);
}
if (lean_is_scalar(x_539)) {
 x_540 = lean_alloc_ctor(1, 4, 1);
} else {
 x_540 = x_539;
}
lean_ctor_set(x_540, 0, x_535);
lean_ctor_set(x_540, 1, x_536);
lean_ctor_set(x_540, 2, x_537);
lean_ctor_set(x_540, 3, x_538);
lean_ctor_set_uint8(x_540, sizeof(void*)*4, x_517);
x_541 = 0;
if (lean_is_scalar(x_534)) {
 x_542 = lean_alloc_ctor(1, 4, 1);
} else {
 x_542 = x_534;
}
lean_ctor_set(x_542, 0, x_540);
lean_ctor_set(x_542, 1, x_532);
lean_ctor_set(x_542, 2, x_533);
lean_ctor_set(x_542, 3, x_509);
lean_ctor_set_uint8(x_542, sizeof(void*)*4, x_541);
x_543 = 1;
x_544 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_366);
lean_ctor_set(x_544, 2, x_367);
lean_ctor_set(x_544, 3, x_368);
lean_ctor_set_uint8(x_544, sizeof(void*)*4, x_543);
return x_544;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__2(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_5 = l_Lean_Server_Watchdog_FileWorker_stdin(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_6 = l_IO_FS_Stream_writeLspRequest___rarg(x_1, x_5, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_st_ref_take(x_8, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 2);
lean_inc(x_14);
lean_dec(x_3);
x_15 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_14);
lean_inc(x_12);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_15);
x_17 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_10, x_12, x_16);
x_18 = lean_st_ref_set(x_8, x_17, x_11);
lean_dec(x_8);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_6);
if (x_23 == 0)
{
return x_6;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_6, 0);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_6);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_errorPendingRequests_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_4, 3);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1(x_1, x_2, x_3, x_9, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
lean_inc(x_3);
lean_inc(x_10);
x_20 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*3, x_2);
lean_inc(x_1);
x_21 = l_IO_FS_Stream_writeLspResponseError(x_1, x_20, x_18);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(0);
x_4 = x_11;
x_5 = x_23;
x_6 = x_22;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_3);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_3);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_12);
if (x_29 == 0)
{
return x_12;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_1, 4);
x_7 = lean_st_ref_take(x_6, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_box(0);
x_11 = lean_st_ref_set(x_6, x_10, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1(x_2, x_3, x_4, x_8, x_13, x_12);
lean_dec(x_8);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_FileWorker_errorPendingRequests___spec__1(x_1, x_7, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_errorPendingRequests___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Internal error: empty grouped edits reference in signal task");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_mono_ms_now(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 5);
x_7 = lean_st_ref_get(x_6, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1;
x_11 = l_IO_throwServerError___rarg(x_10, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get(x_7, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_nat_dec_le(x_16, x_4);
if (x_17 == 0)
{
lean_object* x_18; uint32_t x_19; lean_object* x_20; 
lean_free_object(x_7);
x_18 = lean_nat_sub(x_16, x_4);
lean_dec(x_4);
lean_dec(x_16);
x_19 = lean_uint32_of_nat(x_18);
lean_dec(x_18);
x_20 = l_IO_sleep(x_19, x_13);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_2 = x_21;
goto _start;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_16);
lean_dec(x_4);
x_27 = lean_box(0);
lean_ctor_set(x_7, 0, x_27);
return x_7;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_dec(x_7);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_dec(x_8);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_nat_dec_le(x_30, x_4);
if (x_31 == 0)
{
lean_object* x_32; uint32_t x_33; lean_object* x_34; 
x_32 = lean_nat_sub(x_30, x_4);
lean_dec(x_4);
lean_dec(x_30);
x_33 = lean_uint32_of_nat(x_32);
lean_dec(x_32);
x_34 = l_IO_sleep(x_33, x_28);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_2 = x_35;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_39 = x_34;
} else {
 lean_dec_ref(x_34);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_30);
lean_dec(x_4);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_28);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_3);
if (x_43 == 0)
{
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_3, 0);
x_45 = lean_ctor_get(x_3, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_3);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Task_Priority_default;
x_5 = lean_io_as_task(x_3, x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1;
x_9 = lean_task_map(x_8, x_7, x_4);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1;
x_13 = lean_task_map(x_12, x_10, x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_5);
if (x_15 == 0)
{
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = lean_string_dec_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_string_dec_lt(x_10, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_15);
return x_1;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_12, x_2, x_3);
x_17 = 0;
lean_ctor_set(x_1, 3, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_string_dec_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_string_dec_lt(x_21, x_2);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_21);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set(x_27, 2, x_3);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_26);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_23, x_2, x_3);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_22);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
x_39 = lean_string_dec_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = lean_string_dec_lt(x_36, x_2);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_37);
lean_dec(x_36);
x_41 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_41);
return x_1;
}
else
{
uint8_t x_42; 
x_42 = l_Std_RBNode_isRed___rarg(x_38);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_38, x_2, x_3);
x_44 = 1;
lean_ctor_set(x_1, 3, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_44);
return x_1;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_38, x_2, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_45, 3);
lean_dec(x_49);
x_50 = lean_ctor_get(x_45, 0);
lean_dec(x_50);
x_51 = 0;
lean_ctor_set(x_45, 0, x_47);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_51);
x_52 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_45, 1);
x_54 = lean_ctor_get(x_45, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = 0;
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = 1;
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_57);
return x_1;
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_47, sizeof(void*)*4);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_45);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_45, 1);
x_61 = lean_ctor_get(x_45, 2);
x_62 = lean_ctor_get(x_45, 3);
lean_dec(x_62);
x_63 = lean_ctor_get(x_45, 0);
lean_dec(x_63);
x_64 = !lean_is_exclusive(x_47);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_47, 0);
x_66 = lean_ctor_get(x_47, 1);
x_67 = lean_ctor_get(x_47, 2);
x_68 = lean_ctor_get(x_47, 3);
x_69 = 1;
lean_ctor_set(x_47, 3, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 1, x_36);
lean_ctor_set(x_47, 0, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_69);
lean_ctor_set(x_45, 3, x_68);
lean_ctor_set(x_45, 2, x_67);
lean_ctor_set(x_45, 1, x_66);
lean_ctor_set(x_45, 0, x_65);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_69);
x_70 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_70);
return x_1;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_47, 0);
x_72 = lean_ctor_get(x_47, 1);
x_73 = lean_ctor_get(x_47, 2);
x_74 = lean_ctor_get(x_47, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_47);
x_75 = 1;
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_36);
lean_ctor_set(x_76, 2, x_37);
lean_ctor_set(x_76, 3, x_46);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_75);
lean_ctor_set(x_45, 3, x_74);
lean_ctor_set(x_45, 2, x_73);
lean_ctor_set(x_45, 1, x_72);
lean_ctor_set(x_45, 0, x_71);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_75);
x_77 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_76);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_77);
return x_1;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_78 = lean_ctor_get(x_45, 1);
x_79 = lean_ctor_get(x_45, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_45);
x_80 = lean_ctor_get(x_47, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_47, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_47, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_47, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 x_84 = x_47;
} else {
 lean_dec_ref(x_47);
 x_84 = lean_box(0);
}
x_85 = 1;
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(1, 4, 1);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_35);
lean_ctor_set(x_86, 1, x_36);
lean_ctor_set(x_86, 2, x_37);
lean_ctor_set(x_86, 3, x_46);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
x_87 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_87, 0, x_80);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_82);
lean_ctor_set(x_87, 3, x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_85);
x_88 = 0;
lean_ctor_set(x_1, 3, x_87);
lean_ctor_set(x_1, 2, x_79);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_86);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_88);
return x_1;
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_45);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_45, 3);
lean_dec(x_90);
x_91 = lean_ctor_get(x_45, 0);
lean_dec(x_91);
x_92 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_92);
x_93 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_93);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_45, 1);
x_95 = lean_ctor_get(x_45, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_45);
x_96 = 0;
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_46);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_47);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = 1;
lean_ctor_set(x_1, 3, x_97);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_98);
return x_1;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = lean_ctor_get_uint8(x_46, sizeof(void*)*4);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_45);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_45, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_46);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_46, 0);
x_104 = lean_ctor_get(x_46, 1);
x_105 = lean_ctor_get(x_46, 2);
x_106 = lean_ctor_get(x_46, 3);
x_107 = 1;
lean_ctor_set(x_46, 3, x_103);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_107);
lean_ctor_set(x_45, 0, x_106);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_107);
x_108 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
x_111 = lean_ctor_get(x_46, 2);
x_112 = lean_ctor_get(x_46, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_113 = 1;
x_114 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_114, 0, x_35);
lean_ctor_set(x_114, 1, x_36);
lean_ctor_set(x_114, 2, x_37);
lean_ctor_set(x_114, 3, x_109);
lean_ctor_set_uint8(x_114, sizeof(void*)*4, x_113);
lean_ctor_set(x_45, 0, x_112);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_113);
x_115 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_111);
lean_ctor_set(x_1, 1, x_110);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_115);
return x_1;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_116 = lean_ctor_get(x_45, 1);
x_117 = lean_ctor_get(x_45, 2);
x_118 = lean_ctor_get(x_45, 3);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_45);
x_119 = lean_ctor_get(x_46, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_46, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_46, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_46, 3);
lean_inc(x_122);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_123 = x_46;
} else {
 lean_dec_ref(x_46);
 x_123 = lean_box(0);
}
x_124 = 1;
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(1, 4, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_36);
lean_ctor_set(x_125, 2, x_37);
lean_ctor_set(x_125, 3, x_119);
lean_ctor_set_uint8(x_125, sizeof(void*)*4, x_124);
x_126 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_117);
lean_ctor_set(x_126, 3, x_118);
lean_ctor_set_uint8(x_126, sizeof(void*)*4, x_124);
x_127 = 0;
lean_ctor_set(x_1, 3, x_126);
lean_ctor_set(x_1, 2, x_121);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_125);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_127);
return x_1;
}
}
else
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_45, 3);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_45);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_45, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_45, 0);
lean_dec(x_131);
x_132 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_132);
x_133 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_133);
return x_1;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_45, 1);
x_135 = lean_ctor_get(x_45, 2);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_45);
x_136 = 0;
x_137 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_137, 0, x_46);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_135);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set_uint8(x_137, sizeof(void*)*4, x_136);
x_138 = 1;
lean_ctor_set(x_1, 3, x_137);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_138);
return x_1;
}
}
else
{
uint8_t x_139; 
x_139 = lean_ctor_get_uint8(x_128, sizeof(void*)*4);
if (x_139 == 0)
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_45);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_45, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_45, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_128);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; uint8_t x_149; 
x_144 = lean_ctor_get(x_128, 0);
x_145 = lean_ctor_get(x_128, 1);
x_146 = lean_ctor_get(x_128, 2);
x_147 = lean_ctor_get(x_128, 3);
x_148 = 1;
lean_inc(x_46);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 2, x_37);
lean_ctor_set(x_128, 1, x_36);
lean_ctor_set(x_128, 0, x_35);
x_149 = !lean_is_exclusive(x_46);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_46, 3);
lean_dec(x_150);
x_151 = lean_ctor_get(x_46, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_46, 1);
lean_dec(x_152);
x_153 = lean_ctor_get(x_46, 0);
lean_dec(x_153);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
lean_ctor_set(x_46, 3, x_147);
lean_ctor_set(x_46, 2, x_146);
lean_ctor_set(x_46, 1, x_145);
lean_ctor_set(x_46, 0, x_144);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_148);
x_154 = 0;
lean_ctor_set(x_45, 3, x_46);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_154);
return x_45;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_46);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
x_155 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_155, 0, x_144);
lean_ctor_set(x_155, 1, x_145);
lean_ctor_set(x_155, 2, x_146);
lean_ctor_set(x_155, 3, x_147);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_148);
x_156 = 0;
lean_ctor_set(x_45, 3, x_155);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_156);
return x_45;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_157 = lean_ctor_get(x_128, 0);
x_158 = lean_ctor_get(x_128, 1);
x_159 = lean_ctor_get(x_128, 2);
x_160 = lean_ctor_get(x_128, 3);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_128);
x_161 = 1;
lean_inc(x_46);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_36);
lean_ctor_set(x_162, 2, x_37);
lean_ctor_set(x_162, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_163 = x_46;
} else {
 lean_dec_ref(x_46);
 x_163 = lean_box(0);
}
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_161);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 4, 1);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_157);
lean_ctor_set(x_164, 1, x_158);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*4, x_161);
x_165 = 0;
lean_ctor_set(x_45, 3, x_164);
lean_ctor_set(x_45, 0, x_162);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_165);
return x_45;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_166 = lean_ctor_get(x_45, 1);
x_167 = lean_ctor_get(x_45, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_45);
x_168 = lean_ctor_get(x_128, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_128, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_128, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_128, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 x_172 = x_128;
} else {
 lean_dec_ref(x_128);
 x_172 = lean_box(0);
}
x_173 = 1;
lean_inc(x_46);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(1, 4, 1);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_35);
lean_ctor_set(x_174, 1, x_36);
lean_ctor_set(x_174, 2, x_37);
lean_ctor_set(x_174, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_175 = x_46;
} else {
 lean_dec_ref(x_46);
 x_175 = lean_box(0);
}
lean_ctor_set_uint8(x_174, sizeof(void*)*4, x_173);
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_168);
lean_ctor_set(x_176, 1, x_169);
lean_ctor_set(x_176, 2, x_170);
lean_ctor_set(x_176, 3, x_171);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_173);
x_177 = 0;
x_178 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_166);
lean_ctor_set(x_178, 2, x_167);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_45, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_45, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_46);
if (x_182 == 0)
{
uint8_t x_183; uint8_t x_184; 
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_139);
x_183 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_183);
x_184 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_184);
return x_1;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_185 = lean_ctor_get(x_46, 0);
x_186 = lean_ctor_get(x_46, 1);
x_187 = lean_ctor_get(x_46, 2);
x_188 = lean_ctor_get(x_46, 3);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_46);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_187);
lean_ctor_set(x_189, 3, x_188);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_139);
x_190 = 0;
lean_ctor_set(x_45, 0, x_189);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_190);
x_191 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; uint8_t x_202; 
x_192 = lean_ctor_get(x_45, 1);
x_193 = lean_ctor_get(x_45, 2);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_45);
x_194 = lean_ctor_get(x_46, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_46, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_46, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_46, 3);
lean_inc(x_197);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_198 = x_46;
} else {
 lean_dec_ref(x_46);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 4, 1);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*4, x_139);
x_200 = 0;
x_201 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_128);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = 1;
lean_ctor_set(x_1, 3, x_201);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_202);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_203; 
x_203 = l_Std_RBNode_isRed___rarg(x_35);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_35, x_2, x_3);
x_205 = 1;
lean_ctor_set(x_1, 0, x_204);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_205);
return x_1;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_35, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 3);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; uint8_t x_212; uint8_t x_213; 
x_210 = lean_ctor_get(x_206, 3);
lean_dec(x_210);
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
x_212 = 0;
lean_ctor_set(x_206, 0, x_208);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_212);
x_213 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_213);
return x_1;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
x_214 = lean_ctor_get(x_206, 1);
x_215 = lean_ctor_get(x_206, 2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_206);
x_216 = 0;
x_217 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_214);
lean_ctor_set(x_217, 2, x_215);
lean_ctor_set(x_217, 3, x_208);
lean_ctor_set_uint8(x_217, sizeof(void*)*4, x_216);
x_218 = 1;
lean_ctor_set(x_1, 0, x_217);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_218);
return x_1;
}
}
else
{
uint8_t x_219; 
x_219 = lean_ctor_get_uint8(x_208, sizeof(void*)*4);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_206);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_206, 1);
x_222 = lean_ctor_get(x_206, 2);
x_223 = lean_ctor_get(x_206, 3);
lean_dec(x_223);
x_224 = lean_ctor_get(x_206, 0);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_208);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_208, 0);
x_227 = lean_ctor_get(x_208, 1);
x_228 = lean_ctor_get(x_208, 2);
x_229 = lean_ctor_get(x_208, 3);
x_230 = 1;
lean_ctor_set(x_208, 3, x_226);
lean_ctor_set(x_208, 2, x_222);
lean_ctor_set(x_208, 1, x_221);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set_uint8(x_208, sizeof(void*)*4, x_230);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_229);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_230);
x_231 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_208);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_231);
return x_1;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; uint8_t x_238; 
x_232 = lean_ctor_get(x_208, 0);
x_233 = lean_ctor_get(x_208, 1);
x_234 = lean_ctor_get(x_208, 2);
x_235 = lean_ctor_get(x_208, 3);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_208);
x_236 = 1;
x_237 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_237, 0, x_207);
lean_ctor_set(x_237, 1, x_221);
lean_ctor_set(x_237, 2, x_222);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set_uint8(x_237, sizeof(void*)*4, x_236);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_235);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_236);
x_238 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_234);
lean_ctor_set(x_1, 1, x_233);
lean_ctor_set(x_1, 0, x_237);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_238);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_239 = lean_ctor_get(x_206, 1);
x_240 = lean_ctor_get(x_206, 2);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_206);
x_241 = lean_ctor_get(x_208, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_208, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_208, 2);
lean_inc(x_243);
x_244 = lean_ctor_get(x_208, 3);
lean_inc(x_244);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 lean_ctor_release(x_208, 2);
 lean_ctor_release(x_208, 3);
 x_245 = x_208;
} else {
 lean_dec_ref(x_208);
 x_245 = lean_box(0);
}
x_246 = 1;
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(1, 4, 1);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_207);
lean_ctor_set(x_247, 1, x_239);
lean_ctor_set(x_247, 2, x_240);
lean_ctor_set(x_247, 3, x_241);
lean_ctor_set_uint8(x_247, sizeof(void*)*4, x_246);
x_248 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_36);
lean_ctor_set(x_248, 2, x_37);
lean_ctor_set(x_248, 3, x_38);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_246);
x_249 = 0;
lean_ctor_set(x_1, 3, x_248);
lean_ctor_set(x_1, 2, x_243);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_247);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_249);
return x_1;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_206);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; uint8_t x_254; 
x_251 = lean_ctor_get(x_206, 3);
lean_dec(x_251);
x_252 = lean_ctor_get(x_206, 0);
lean_dec(x_252);
x_253 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_253);
x_254 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_254);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_206, 1);
x_256 = lean_ctor_get(x_206, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_206);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_207);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_208);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
x_259 = 1;
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
else
{
uint8_t x_260; 
x_260 = lean_ctor_get_uint8(x_207, sizeof(void*)*4);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = !lean_is_exclusive(x_206);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_262 = lean_ctor_get(x_206, 1);
x_263 = lean_ctor_get(x_206, 2);
x_264 = lean_ctor_get(x_206, 3);
x_265 = lean_ctor_get(x_206, 0);
lean_dec(x_265);
x_266 = !lean_is_exclusive(x_207);
if (x_266 == 0)
{
uint8_t x_267; uint8_t x_268; 
x_267 = 1;
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_267);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_267);
x_268 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_207);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_268);
return x_1;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_275; 
x_269 = lean_ctor_get(x_207, 0);
x_270 = lean_ctor_get(x_207, 1);
x_271 = lean_ctor_get(x_207, 2);
x_272 = lean_ctor_get(x_207, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_207);
x_273 = 1;
x_274 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_274, 0, x_269);
lean_ctor_set(x_274, 1, x_270);
lean_ctor_set(x_274, 2, x_271);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set_uint8(x_274, sizeof(void*)*4, x_273);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_273);
x_275 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_274);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_275);
return x_1;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_276 = lean_ctor_get(x_206, 1);
x_277 = lean_ctor_get(x_206, 2);
x_278 = lean_ctor_get(x_206, 3);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_206);
x_279 = lean_ctor_get(x_207, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_207, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_207, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_207, 3);
lean_inc(x_282);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_283 = x_207;
} else {
 lean_dec_ref(x_207);
 x_283 = lean_box(0);
}
x_284 = 1;
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(1, 4, 1);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_280);
lean_ctor_set(x_285, 2, x_281);
lean_ctor_set(x_285, 3, x_282);
lean_ctor_set_uint8(x_285, sizeof(void*)*4, x_284);
x_286 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_36);
lean_ctor_set(x_286, 2, x_37);
lean_ctor_set(x_286, 3, x_38);
lean_ctor_set_uint8(x_286, sizeof(void*)*4, x_284);
x_287 = 0;
lean_ctor_set(x_1, 3, x_286);
lean_ctor_set(x_1, 2, x_277);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_285);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_287);
return x_1;
}
}
else
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_206, 3);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_206);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_206, 3);
lean_dec(x_290);
x_291 = lean_ctor_get(x_206, 0);
lean_dec(x_291);
x_292 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_292);
x_293 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_293);
return x_1;
}
else
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_206, 1);
x_295 = lean_ctor_get(x_206, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_206);
x_296 = 0;
x_297 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_297, 0, x_207);
lean_ctor_set(x_297, 1, x_294);
lean_ctor_set(x_297, 2, x_295);
lean_ctor_set(x_297, 3, x_288);
lean_ctor_set_uint8(x_297, sizeof(void*)*4, x_296);
x_298 = 1;
lean_ctor_set(x_1, 0, x_297);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_298);
return x_1;
}
}
else
{
uint8_t x_299; 
x_299 = lean_ctor_get_uint8(x_288, sizeof(void*)*4);
if (x_299 == 0)
{
uint8_t x_300; 
lean_free_object(x_1);
x_300 = !lean_is_exclusive(x_206);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_206, 1);
x_302 = lean_ctor_get(x_206, 2);
x_303 = lean_ctor_get(x_206, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_206, 0);
lean_dec(x_304);
x_305 = !lean_is_exclusive(x_288);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; 
x_306 = lean_ctor_get(x_288, 0);
x_307 = lean_ctor_get(x_288, 1);
x_308 = lean_ctor_get(x_288, 2);
x_309 = lean_ctor_get(x_288, 3);
x_310 = 1;
lean_inc(x_207);
lean_ctor_set(x_288, 3, x_306);
lean_ctor_set(x_288, 2, x_302);
lean_ctor_set(x_288, 1, x_301);
lean_ctor_set(x_288, 0, x_207);
x_311 = !lean_is_exclusive(x_207);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_207, 3);
lean_dec(x_312);
x_313 = lean_ctor_get(x_207, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_207, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_207, 0);
lean_dec(x_315);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
lean_ctor_set(x_207, 3, x_38);
lean_ctor_set(x_207, 2, x_37);
lean_ctor_set(x_207, 1, x_36);
lean_ctor_set(x_207, 0, x_309);
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_310);
x_316 = 0;
lean_ctor_set(x_206, 3, x_207);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_316);
return x_206;
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_dec(x_207);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
x_317 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_36);
lean_ctor_set(x_317, 2, x_37);
lean_ctor_set(x_317, 3, x_38);
lean_ctor_set_uint8(x_317, sizeof(void*)*4, x_310);
x_318 = 0;
lean_ctor_set(x_206, 3, x_317);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_318);
return x_206;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_319 = lean_ctor_get(x_288, 0);
x_320 = lean_ctor_get(x_288, 1);
x_321 = lean_ctor_get(x_288, 2);
x_322 = lean_ctor_get(x_288, 3);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_288);
x_323 = 1;
lean_inc(x_207);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_207);
lean_ctor_set(x_324, 1, x_301);
lean_ctor_set(x_324, 2, x_302);
lean_ctor_set(x_324, 3, x_319);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_325 = x_207;
} else {
 lean_dec_ref(x_207);
 x_325 = lean_box(0);
}
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_323);
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 4, 1);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_322);
lean_ctor_set(x_326, 1, x_36);
lean_ctor_set(x_326, 2, x_37);
lean_ctor_set(x_326, 3, x_38);
lean_ctor_set_uint8(x_326, sizeof(void*)*4, x_323);
x_327 = 0;
lean_ctor_set(x_206, 3, x_326);
lean_ctor_set(x_206, 2, x_321);
lean_ctor_set(x_206, 1, x_320);
lean_ctor_set(x_206, 0, x_324);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_327);
return x_206;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; 
x_328 = lean_ctor_get(x_206, 1);
x_329 = lean_ctor_get(x_206, 2);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_206);
x_330 = lean_ctor_get(x_288, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_288, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_288, 2);
lean_inc(x_332);
x_333 = lean_ctor_get(x_288, 3);
lean_inc(x_333);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 lean_ctor_release(x_288, 2);
 lean_ctor_release(x_288, 3);
 x_334 = x_288;
} else {
 lean_dec_ref(x_288);
 x_334 = lean_box(0);
}
x_335 = 1;
lean_inc(x_207);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 4, 1);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_207);
lean_ctor_set(x_336, 1, x_328);
lean_ctor_set(x_336, 2, x_329);
lean_ctor_set(x_336, 3, x_330);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_337 = x_207;
} else {
 lean_dec_ref(x_207);
 x_337 = lean_box(0);
}
lean_ctor_set_uint8(x_336, sizeof(void*)*4, x_335);
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 4, 1);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_333);
lean_ctor_set(x_338, 1, x_36);
lean_ctor_set(x_338, 2, x_37);
lean_ctor_set(x_338, 3, x_38);
lean_ctor_set_uint8(x_338, sizeof(void*)*4, x_335);
x_339 = 0;
x_340 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_340, 0, x_336);
lean_ctor_set(x_340, 1, x_331);
lean_ctor_set(x_340, 2, x_332);
lean_ctor_set(x_340, 3, x_338);
lean_ctor_set_uint8(x_340, sizeof(void*)*4, x_339);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_206);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = lean_ctor_get(x_206, 3);
lean_dec(x_342);
x_343 = lean_ctor_get(x_206, 0);
lean_dec(x_343);
x_344 = !lean_is_exclusive(x_207);
if (x_344 == 0)
{
uint8_t x_345; uint8_t x_346; 
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_299);
x_345 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_345);
x_346 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_346);
return x_1;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; uint8_t x_353; 
x_347 = lean_ctor_get(x_207, 0);
x_348 = lean_ctor_get(x_207, 1);
x_349 = lean_ctor_get(x_207, 2);
x_350 = lean_ctor_get(x_207, 3);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_207);
x_351 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_348);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set(x_351, 3, x_350);
lean_ctor_set_uint8(x_351, sizeof(void*)*4, x_299);
x_352 = 0;
lean_ctor_set(x_206, 0, x_351);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_352);
x_353 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_353);
return x_1;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; uint8_t x_364; 
x_354 = lean_ctor_get(x_206, 1);
x_355 = lean_ctor_get(x_206, 2);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_206);
x_356 = lean_ctor_get(x_207, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_207, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_207, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_207, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_360 = x_207;
} else {
 lean_dec_ref(x_207);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 4, 1);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_357);
lean_ctor_set(x_361, 2, x_358);
lean_ctor_set(x_361, 3, x_359);
lean_ctor_set_uint8(x_361, sizeof(void*)*4, x_299);
x_362 = 0;
x_363 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_354);
lean_ctor_set(x_363, 2, x_355);
lean_ctor_set(x_363, 3, x_288);
lean_ctor_set_uint8(x_363, sizeof(void*)*4, x_362);
x_364 = 1;
lean_ctor_set(x_1, 0, x_363);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_364);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_365 = lean_ctor_get(x_1, 0);
x_366 = lean_ctor_get(x_1, 1);
x_367 = lean_ctor_get(x_1, 2);
x_368 = lean_ctor_get(x_1, 3);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_1);
x_369 = lean_string_dec_lt(x_2, x_366);
if (x_369 == 0)
{
uint8_t x_370; 
x_370 = lean_string_dec_lt(x_366, x_2);
if (x_370 == 0)
{
uint8_t x_371; lean_object* x_372; 
lean_dec(x_367);
lean_dec(x_366);
x_371 = 1;
x_372 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_2);
lean_ctor_set(x_372, 2, x_3);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_371);
return x_372;
}
else
{
uint8_t x_373; 
x_373 = l_Std_RBNode_isRed___rarg(x_368);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; 
x_374 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_368, x_2, x_3);
x_375 = 1;
x_376 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_367);
lean_ctor_set(x_376, 3, x_374);
lean_ctor_set_uint8(x_376, sizeof(void*)*4, x_375);
return x_376;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_368, x_2, x_3);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 3);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; uint8_t x_385; lean_object* x_386; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_377, 2);
lean_inc(x_381);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_382 = x_377;
} else {
 lean_dec_ref(x_377);
 x_382 = lean_box(0);
}
x_383 = 0;
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_379);
lean_ctor_set(x_384, 1, x_380);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_379);
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_383);
x_385 = 1;
x_386 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_386, 0, x_365);
lean_ctor_set(x_386, 1, x_366);
lean_ctor_set(x_386, 2, x_367);
lean_ctor_set(x_386, 3, x_384);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_385);
return x_386;
}
else
{
uint8_t x_387; 
x_387 = lean_ctor_get_uint8(x_379, sizeof(void*)*4);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; 
x_388 = lean_ctor_get(x_377, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_377, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_390 = x_377;
} else {
 lean_dec_ref(x_377);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_379, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_379, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 lean_ctor_release(x_379, 3);
 x_395 = x_379;
} else {
 lean_dec_ref(x_379);
 x_395 = lean_box(0);
}
x_396 = 1;
if (lean_is_scalar(x_395)) {
 x_397 = lean_alloc_ctor(1, 4, 1);
} else {
 x_397 = x_395;
}
lean_ctor_set(x_397, 0, x_365);
lean_ctor_set(x_397, 1, x_366);
lean_ctor_set(x_397, 2, x_367);
lean_ctor_set(x_397, 3, x_378);
lean_ctor_set_uint8(x_397, sizeof(void*)*4, x_396);
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_392);
lean_ctor_set(x_398, 2, x_393);
lean_ctor_set(x_398, 3, x_394);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_396);
x_399 = 0;
x_400 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_388);
lean_ctor_set(x_400, 2, x_389);
lean_ctor_set(x_400, 3, x_398);
lean_ctor_set_uint8(x_400, sizeof(void*)*4, x_399);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; 
x_401 = lean_ctor_get(x_377, 1);
lean_inc(x_401);
x_402 = lean_ctor_get(x_377, 2);
lean_inc(x_402);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_403 = x_377;
} else {
 lean_dec_ref(x_377);
 x_403 = lean_box(0);
}
x_404 = 0;
if (lean_is_scalar(x_403)) {
 x_405 = lean_alloc_ctor(1, 4, 1);
} else {
 x_405 = x_403;
}
lean_ctor_set(x_405, 0, x_378);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_405, 2, x_402);
lean_ctor_set(x_405, 3, x_379);
lean_ctor_set_uint8(x_405, sizeof(void*)*4, x_404);
x_406 = 1;
x_407 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_407, 0, x_365);
lean_ctor_set(x_407, 1, x_366);
lean_ctor_set(x_407, 2, x_367);
lean_ctor_set(x_407, 3, x_405);
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
return x_407;
}
}
}
else
{
uint8_t x_408; 
x_408 = lean_ctor_get_uint8(x_378, sizeof(void*)*4);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_409 = lean_ctor_get(x_377, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_377, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_377, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_412 = x_377;
} else {
 lean_dec_ref(x_377);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_378, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_378, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_378, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_378, 3);
lean_inc(x_416);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_417 = x_378;
} else {
 lean_dec_ref(x_378);
 x_417 = lean_box(0);
}
x_418 = 1;
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(1, 4, 1);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_365);
lean_ctor_set(x_419, 1, x_366);
lean_ctor_set(x_419, 2, x_367);
lean_ctor_set(x_419, 3, x_413);
lean_ctor_set_uint8(x_419, sizeof(void*)*4, x_418);
if (lean_is_scalar(x_412)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_412;
}
lean_ctor_set(x_420, 0, x_416);
lean_ctor_set(x_420, 1, x_409);
lean_ctor_set(x_420, 2, x_410);
lean_ctor_set(x_420, 3, x_411);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_418);
x_421 = 0;
x_422 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_414);
lean_ctor_set(x_422, 2, x_415);
lean_ctor_set(x_422, 3, x_420);
lean_ctor_set_uint8(x_422, sizeof(void*)*4, x_421);
return x_422;
}
else
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_377, 3);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; 
x_424 = lean_ctor_get(x_377, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_377, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_426 = x_377;
} else {
 lean_dec_ref(x_377);
 x_426 = lean_box(0);
}
x_427 = 0;
if (lean_is_scalar(x_426)) {
 x_428 = lean_alloc_ctor(1, 4, 1);
} else {
 x_428 = x_426;
}
lean_ctor_set(x_428, 0, x_378);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_425);
lean_ctor_set(x_428, 3, x_423);
lean_ctor_set_uint8(x_428, sizeof(void*)*4, x_427);
x_429 = 1;
x_430 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_430, 0, x_365);
lean_ctor_set(x_430, 1, x_366);
lean_ctor_set(x_430, 2, x_367);
lean_ctor_set(x_430, 3, x_428);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
return x_430;
}
else
{
uint8_t x_431; 
x_431 = lean_ctor_get_uint8(x_423, sizeof(void*)*4);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; uint8_t x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; lean_object* x_445; 
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_423, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_423, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_423, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_423, 3);
lean_inc(x_438);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_439 = x_423;
} else {
 lean_dec_ref(x_423);
 x_439 = lean_box(0);
}
x_440 = 1;
lean_inc(x_378);
if (lean_is_scalar(x_439)) {
 x_441 = lean_alloc_ctor(1, 4, 1);
} else {
 x_441 = x_439;
}
lean_ctor_set(x_441, 0, x_365);
lean_ctor_set(x_441, 1, x_366);
lean_ctor_set(x_441, 2, x_367);
lean_ctor_set(x_441, 3, x_378);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_442 = x_378;
} else {
 lean_dec_ref(x_378);
 x_442 = lean_box(0);
}
lean_ctor_set_uint8(x_441, sizeof(void*)*4, x_440);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_435);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_437);
lean_ctor_set(x_443, 3, x_438);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_440);
x_444 = 0;
if (lean_is_scalar(x_434)) {
 x_445 = lean_alloc_ctor(1, 4, 1);
} else {
 x_445 = x_434;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_432);
lean_ctor_set(x_445, 2, x_433);
lean_ctor_set(x_445, 3, x_443);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_444);
return x_445;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; uint8_t x_457; lean_object* x_458; 
x_446 = lean_ctor_get(x_377, 1);
lean_inc(x_446);
x_447 = lean_ctor_get(x_377, 2);
lean_inc(x_447);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_448 = x_377;
} else {
 lean_dec_ref(x_377);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_378, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_378, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = lean_ctor_get(x_378, 3);
lean_inc(x_452);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_453 = x_378;
} else {
 lean_dec_ref(x_378);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_449);
lean_ctor_set(x_454, 1, x_450);
lean_ctor_set(x_454, 2, x_451);
lean_ctor_set(x_454, 3, x_452);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_431);
x_455 = 0;
if (lean_is_scalar(x_448)) {
 x_456 = lean_alloc_ctor(1, 4, 1);
} else {
 x_456 = x_448;
}
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_446);
lean_ctor_set(x_456, 2, x_447);
lean_ctor_set(x_456, 3, x_423);
lean_ctor_set_uint8(x_456, sizeof(void*)*4, x_455);
x_457 = 1;
x_458 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_458, 0, x_365);
lean_ctor_set(x_458, 1, x_366);
lean_ctor_set(x_458, 2, x_367);
lean_ctor_set(x_458, 3, x_456);
lean_ctor_set_uint8(x_458, sizeof(void*)*4, x_457);
return x_458;
}
}
}
}
}
}
}
else
{
uint8_t x_459; 
x_459 = l_Std_RBNode_isRed___rarg(x_365);
if (x_459 == 0)
{
lean_object* x_460; uint8_t x_461; lean_object* x_462; 
x_460 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_365, x_2, x_3);
x_461 = 1;
x_462 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_366);
lean_ctor_set(x_462, 2, x_367);
lean_ctor_set(x_462, 3, x_368);
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_461);
return x_462;
}
else
{
lean_object* x_463; lean_object* x_464; 
x_463 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_365, x_2, x_3);
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; 
x_465 = lean_ctor_get(x_463, 3);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; 
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_463, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_468 = x_463;
} else {
 lean_dec_ref(x_463);
 x_468 = lean_box(0);
}
x_469 = 0;
if (lean_is_scalar(x_468)) {
 x_470 = lean_alloc_ctor(1, 4, 1);
} else {
 x_470 = x_468;
}
lean_ctor_set(x_470, 0, x_465);
lean_ctor_set(x_470, 1, x_466);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_465);
lean_ctor_set_uint8(x_470, sizeof(void*)*4, x_469);
x_471 = 1;
x_472 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_366);
lean_ctor_set(x_472, 2, x_367);
lean_ctor_set(x_472, 3, x_368);
lean_ctor_set_uint8(x_472, sizeof(void*)*4, x_471);
return x_472;
}
else
{
uint8_t x_473; 
x_473 = lean_ctor_get_uint8(x_465, sizeof(void*)*4);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; lean_object* x_486; 
x_474 = lean_ctor_get(x_463, 1);
lean_inc(x_474);
x_475 = lean_ctor_get(x_463, 2);
lean_inc(x_475);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_476 = x_463;
} else {
 lean_dec_ref(x_463);
 x_476 = lean_box(0);
}
x_477 = lean_ctor_get(x_465, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_465, 2);
lean_inc(x_479);
x_480 = lean_ctor_get(x_465, 3);
lean_inc(x_480);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 lean_ctor_release(x_465, 2);
 lean_ctor_release(x_465, 3);
 x_481 = x_465;
} else {
 lean_dec_ref(x_465);
 x_481 = lean_box(0);
}
x_482 = 1;
if (lean_is_scalar(x_481)) {
 x_483 = lean_alloc_ctor(1, 4, 1);
} else {
 x_483 = x_481;
}
lean_ctor_set(x_483, 0, x_464);
lean_ctor_set(x_483, 1, x_474);
lean_ctor_set(x_483, 2, x_475);
lean_ctor_set(x_483, 3, x_477);
lean_ctor_set_uint8(x_483, sizeof(void*)*4, x_482);
if (lean_is_scalar(x_476)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_476;
}
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_366);
lean_ctor_set(x_484, 2, x_367);
lean_ctor_set(x_484, 3, x_368);
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_482);
x_485 = 0;
x_486 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_478);
lean_ctor_set(x_486, 2, x_479);
lean_ctor_set(x_486, 3, x_484);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_485);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_487 = lean_ctor_get(x_463, 1);
lean_inc(x_487);
x_488 = lean_ctor_get(x_463, 2);
lean_inc(x_488);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_489 = x_463;
} else {
 lean_dec_ref(x_463);
 x_489 = lean_box(0);
}
x_490 = 0;
if (lean_is_scalar(x_489)) {
 x_491 = lean_alloc_ctor(1, 4, 1);
} else {
 x_491 = x_489;
}
lean_ctor_set(x_491, 0, x_464);
lean_ctor_set(x_491, 1, x_487);
lean_ctor_set(x_491, 2, x_488);
lean_ctor_set(x_491, 3, x_465);
lean_ctor_set_uint8(x_491, sizeof(void*)*4, x_490);
x_492 = 1;
x_493 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_366);
lean_ctor_set(x_493, 2, x_367);
lean_ctor_set(x_493, 3, x_368);
lean_ctor_set_uint8(x_493, sizeof(void*)*4, x_492);
return x_493;
}
}
}
else
{
uint8_t x_494; 
x_494 = lean_ctor_get_uint8(x_464, sizeof(void*)*4);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; uint8_t x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; 
x_495 = lean_ctor_get(x_463, 1);
lean_inc(x_495);
x_496 = lean_ctor_get(x_463, 2);
lean_inc(x_496);
x_497 = lean_ctor_get(x_463, 3);
lean_inc(x_497);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_498 = x_463;
} else {
 lean_dec_ref(x_463);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_464, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_464, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_464, 2);
lean_inc(x_501);
x_502 = lean_ctor_get(x_464, 3);
lean_inc(x_502);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_503 = x_464;
} else {
 lean_dec_ref(x_464);
 x_503 = lean_box(0);
}
x_504 = 1;
if (lean_is_scalar(x_503)) {
 x_505 = lean_alloc_ctor(1, 4, 1);
} else {
 x_505 = x_503;
}
lean_ctor_set(x_505, 0, x_499);
lean_ctor_set(x_505, 1, x_500);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_502);
lean_ctor_set_uint8(x_505, sizeof(void*)*4, x_504);
if (lean_is_scalar(x_498)) {
 x_506 = lean_alloc_ctor(1, 4, 1);
} else {
 x_506 = x_498;
}
lean_ctor_set(x_506, 0, x_497);
lean_ctor_set(x_506, 1, x_366);
lean_ctor_set(x_506, 2, x_367);
lean_ctor_set(x_506, 3, x_368);
lean_ctor_set_uint8(x_506, sizeof(void*)*4, x_504);
x_507 = 0;
x_508 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_508, 0, x_505);
lean_ctor_set(x_508, 1, x_495);
lean_ctor_set(x_508, 2, x_496);
lean_ctor_set(x_508, 3, x_506);
lean_ctor_set_uint8(x_508, sizeof(void*)*4, x_507);
return x_508;
}
else
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_463, 3);
lean_inc(x_509);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; uint8_t x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_463, 1);
lean_inc(x_510);
x_511 = lean_ctor_get(x_463, 2);
lean_inc(x_511);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_512 = x_463;
} else {
 lean_dec_ref(x_463);
 x_512 = lean_box(0);
}
x_513 = 0;
if (lean_is_scalar(x_512)) {
 x_514 = lean_alloc_ctor(1, 4, 1);
} else {
 x_514 = x_512;
}
lean_ctor_set(x_514, 0, x_464);
lean_ctor_set(x_514, 1, x_510);
lean_ctor_set(x_514, 2, x_511);
lean_ctor_set(x_514, 3, x_509);
lean_ctor_set_uint8(x_514, sizeof(void*)*4, x_513);
x_515 = 1;
x_516 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_366);
lean_ctor_set(x_516, 2, x_367);
lean_ctor_set(x_516, 3, x_368);
lean_ctor_set_uint8(x_516, sizeof(void*)*4, x_515);
return x_516;
}
else
{
uint8_t x_517; 
x_517 = lean_ctor_get_uint8(x_509, sizeof(void*)*4);
if (x_517 == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; lean_object* x_531; 
x_518 = lean_ctor_get(x_463, 1);
lean_inc(x_518);
x_519 = lean_ctor_get(x_463, 2);
lean_inc(x_519);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_520 = x_463;
} else {
 lean_dec_ref(x_463);
 x_520 = lean_box(0);
}
x_521 = lean_ctor_get(x_509, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_509, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_509, 2);
lean_inc(x_523);
x_524 = lean_ctor_get(x_509, 3);
lean_inc(x_524);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 lean_ctor_release(x_509, 2);
 lean_ctor_release(x_509, 3);
 x_525 = x_509;
} else {
 lean_dec_ref(x_509);
 x_525 = lean_box(0);
}
x_526 = 1;
lean_inc(x_464);
if (lean_is_scalar(x_525)) {
 x_527 = lean_alloc_ctor(1, 4, 1);
} else {
 x_527 = x_525;
}
lean_ctor_set(x_527, 0, x_464);
lean_ctor_set(x_527, 1, x_518);
lean_ctor_set(x_527, 2, x_519);
lean_ctor_set(x_527, 3, x_521);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_528 = x_464;
} else {
 lean_dec_ref(x_464);
 x_528 = lean_box(0);
}
lean_ctor_set_uint8(x_527, sizeof(void*)*4, x_526);
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 4, 1);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_524);
lean_ctor_set(x_529, 1, x_366);
lean_ctor_set(x_529, 2, x_367);
lean_ctor_set(x_529, 3, x_368);
lean_ctor_set_uint8(x_529, sizeof(void*)*4, x_526);
x_530 = 0;
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(1, 4, 1);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_522);
lean_ctor_set(x_531, 2, x_523);
lean_ctor_set(x_531, 3, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*4, x_530);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; uint8_t x_541; lean_object* x_542; uint8_t x_543; lean_object* x_544; 
x_532 = lean_ctor_get(x_463, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_463, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_534 = x_463;
} else {
 lean_dec_ref(x_463);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_464, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_464, 1);
lean_inc(x_536);
x_537 = lean_ctor_get(x_464, 2);
lean_inc(x_537);
x_538 = lean_ctor_get(x_464, 3);
lean_inc(x_538);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_539 = x_464;
} else {
 lean_dec_ref(x_464);
 x_539 = lean_box(0);
}
if (lean_is_scalar(x_539)) {
 x_540 = lean_alloc_ctor(1, 4, 1);
} else {
 x_540 = x_539;
}
lean_ctor_set(x_540, 0, x_535);
lean_ctor_set(x_540, 1, x_536);
lean_ctor_set(x_540, 2, x_537);
lean_ctor_set(x_540, 3, x_538);
lean_ctor_set_uint8(x_540, sizeof(void*)*4, x_517);
x_541 = 0;
if (lean_is_scalar(x_534)) {
 x_542 = lean_alloc_ctor(1, 4, 1);
} else {
 x_542 = x_534;
}
lean_ctor_set(x_542, 0, x_540);
lean_ctor_set(x_542, 1, x_532);
lean_ctor_set(x_542, 2, x_533);
lean_ctor_set(x_542, 3, x_509);
lean_ctor_set_uint8(x_542, sizeof(void*)*4, x_541);
x_543 = 1;
x_544 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_366);
lean_ctor_set(x_544, 2, x_367);
lean_ctor_set(x_544, 3, x_368);
lean_ctor_set_uint8(x_544, sizeof(void*)*4, x_543);
return x_544;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Server_Watchdog_updateFileWorkers___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___at_Lean_Server_Watchdog_updateFileWorkers___spec__2(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_updateFileWorkers(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_2, 4);
x_5 = lean_st_ref_take(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_updateFileWorkers___spec__1(x_6, x_10, x_1);
x_12 = lean_st_ref_set(x_4, x_11, x_7);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
lean_object* l_Lean_Server_Watchdog_updateFileWorkers___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_updateFileWorkers(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_findFileWorker_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_findFileWorker_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_findFileWorker_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_string_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_string_dec_lt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_findFileWorker___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Got unknown document URI (");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_findFileWorker(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 4);
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1(x_7, x_1);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_free_object(x_5);
x_10 = l_Lean_Server_Watchdog_findFileWorker___closed__1;
x_11 = lean_string_append(x_10, x_1);
x_12 = l_prec_x28___x29___closed__7;
x_13 = lean_string_append(x_11, x_12);
x_14 = l_IO_throwServerError___rarg(x_13, x_8);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_15);
return x_5;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
x_18 = l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1(x_16, x_1);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = l_Lean_Server_Watchdog_findFileWorker___closed__1;
x_20 = lean_string_append(x_19, x_1);
x_21 = l_prec_x28___x29___closed__7;
x_22 = lean_string_append(x_20, x_21);
x_23 = l_IO_throwServerError___rarg(x_22, x_17);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
return x_25;
}
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_Server_Watchdog_findFileWorker___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_findFileWorker___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_string_dec_lt(x_1, x_6);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = lean_string_dec_lt(x_6, x_1);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_6);
x_11 = l_Std_RBNode_appendTrees___rarg(x_5, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Std_RBNode_isBlack___rarg(x_8);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_8);
x_14 = 0;
lean_ctor_set(x_2, 3, x_13);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_14);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_2);
x_15 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_8);
x_16 = l_Std_RBNode_balRight___rarg(x_5, x_6, x_7, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = l_Std_RBNode_isBlack___rarg(x_5);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_5);
x_19 = 0;
lean_ctor_set(x_2, 0, x_18);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_19);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_2);
x_20 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_5);
x_21 = l_Std_RBNode_balLeft___rarg(x_20, x_6, x_7, x_8);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_26 = lean_string_dec_lt(x_1, x_23);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = lean_string_dec_lt(x_23, x_1);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_23);
x_28 = l_Std_RBNode_appendTrees___rarg(x_22, x_25);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l_Std_RBNode_isBlack___rarg(x_25);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_25);
x_31 = 0;
x_32 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_23);
lean_ctor_set(x_32, 2, x_24);
lean_ctor_set(x_32, 3, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*4, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_25);
x_34 = l_Std_RBNode_balRight___rarg(x_22, x_23, x_24, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = l_Std_RBNode_isBlack___rarg(x_22);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_22);
x_37 = 0;
x_38 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_23);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_25);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_22);
x_40 = l_Std_RBNode_balLeft___rarg(x_39, x_23, x_24, x_25);
return x_40;
}
}
}
}
}
}
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_2);
x_4 = l_Std_RBNode_setBlack___rarg(x_3);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_eraseFileWorker(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 4);
x_5 = lean_st_ref_take(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1(x_1, x_6);
x_9 = lean_st_ref_set(x_4, x_8, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_del___at_Lean_Server_Watchdog_eraseFileWorker___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_erase___at_Lean_Server_Watchdog_eraseFileWorker___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_eraseFileWorker___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint32_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 5);
lean_inc(x_5);
lean_dec(x_1);
x_6 = 10;
x_7 = lean_string_push(x_2, x_6);
x_8 = lean_apply_2(x_5, x_7, x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_log(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_4);
x_5 = l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1(x_4, x_1, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_4);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_log___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop(x_1, x_2, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Server process for ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" crashed, ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("likely due to a stack overflow in user code");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("see stderr for exception");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("The file worker has been terminated. Either the header has changed,");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" or the file was closed, or the server is shutting down.");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5;
x_2 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(1);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_11; lean_object* x_12; lean_object* x_73; 
lean_inc(x_1);
x_73 = l_Lean_Server_Watchdog_FileWorker_readMessage(x_1, x_4);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
lean_inc(x_2);
x_76 = l_IO_FS_Stream_writeLspMessage(x_2, x_74, x_75);
lean_dec(x_74);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_5 = x_80;
x_6 = x_78;
goto block_10;
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_76, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_76, 1);
lean_inc(x_82);
lean_dec(x_76);
x_11 = x_81;
x_12 = x_82;
goto block_72;
}
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_73, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_73, 1);
lean_inc(x_84);
lean_dec(x_73);
x_11 = x_83;
x_12 = x_84;
goto block_72;
}
block_10:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_5);
x_4 = x_6;
goto _start;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
block_72:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = l_Lean_Server_Watchdog_workerCfg;
x_15 = lean_io_process_child_wait(x_14, x_13, x_12);
lean_dec(x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint32_t x_18; uint32_t x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 0;
x_19 = lean_unbox_uint32(x_16);
x_20 = x_19 == x_18;
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint32_t x_28; uint32_t x_29; uint8_t x_30; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2;
x_27 = lean_string_append(x_25, x_26);
x_28 = 1;
x_29 = lean_unbox_uint32(x_16);
lean_dec(x_16);
x_30 = x_29 == x_28;
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_31 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3;
x_32 = lean_string_append(x_27, x_31);
x_33 = l_Lean_Name_toString___closed__1;
x_34 = lean_string_append(x_32, x_33);
x_35 = 4;
lean_inc(x_2);
x_36 = l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(x_1, x_2, x_35, x_34, x_17);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_11);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_5 = x_40;
x_6 = x_37;
goto block_10;
}
else
{
uint8_t x_41; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_36);
if (x_41 == 0)
{
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_45 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4;
x_46 = lean_string_append(x_27, x_45);
x_47 = l_Lean_Name_toString___closed__1;
x_48 = lean_string_append(x_46, x_47);
x_49 = 4;
lean_inc(x_2);
x_50 = l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(x_1, x_2, x_49, x_48, x_17);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_11);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_5 = x_54;
x_6 = x_51;
goto block_10;
}
else
{
uint8_t x_55; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_50);
if (x_55 == 0)
{
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_50, 0);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_50);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
uint8_t x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_16);
lean_dec(x_11);
x_59 = 10;
x_60 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7;
lean_inc(x_2);
x_61 = l_Lean_Server_Watchdog_FileWorker_errorPendingRequests(x_1, x_2, x_59, x_60, x_17);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8;
x_5 = x_63;
x_6 = x_62;
goto block_10;
}
else
{
uint8_t x_64; 
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_61);
if (x_64 == 0)
{
return x_61;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_61, 0);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_61);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_15);
if (x_68 == 0)
{
return x_15;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_15, 0);
x_70 = lean_ctor_get(x_15, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_15);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
x_6 = l_Task_Priority_dedicated;
x_7 = lean_io_as_task(x_5, x_6, x_3);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1;
x_11 = l_Task_Priority_default;
x_12 = lean_task_map(x_10, x_9, x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1;
x_16 = l_Task_Priority_default;
x_17 = lean_task_map(x_15, x_13, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_mk_ref(x_1, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_mk_ref(x_1, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_startFileWorker___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__4(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_toJsonDidOpenTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_64_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_startFileWorker___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_startFileWorker___spec__7(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_7, x_3);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_startFileWorker___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
x_5 = l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_startFileWorker___spec__6(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_startFileWorker___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("--worker");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_startFileWorker___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkOptionalNode___closed__2;
x_2 = l_Lean_Server_Watchdog_startFileWorker___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_startFileWorker___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_task_pure(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_startFileWorker___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_instToJsonTextDocumentSyncKind___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_startFileWorker___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/didOpen");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_startFileWorker(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_7);
x_8 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst(x_7, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 7);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
x_13 = l_List_redLength___rarg(x_12);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_dec(x_13);
x_15 = l_List_toArrayAux___rarg(x_12, x_14);
x_16 = l_Lean_Server_Watchdog_startFileWorker___closed__2;
x_17 = l_Array_append___rarg(x_16, x_15);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = l_Lean_Server_Watchdog_workerCfg;
x_20 = l_Array_empty___closed__1;
x_21 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_11);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set(x_21, 4, x_20);
x_22 = lean_io_process_spawn(x_21, x_10);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
x_26 = l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1(x_25, x_2, x_24);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2(x_18, x_2, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_9);
x_33 = l_Lean_Server_Watchdog_startFileWorker___closed__3;
x_34 = lean_box(1);
lean_inc(x_30);
lean_inc(x_27);
lean_inc(x_23);
lean_inc(x_32);
x_35 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_23);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_34);
lean_ctor_set(x_35, 4, x_27);
lean_ctor_set(x_35, 5, x_30);
lean_inc(x_2);
x_36 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages(x_35, x_2, x_31);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_37);
lean_ctor_set(x_39, 3, x_34);
lean_ctor_set(x_39, 4, x_27);
lean_ctor_set(x_39, 5, x_30);
lean_inc(x_39);
x_40 = l_Lean_Server_Watchdog_FileWorker_stdin(x_39);
x_41 = lean_ctor_get(x_2, 5);
lean_inc(x_41);
x_42 = l_Lean_Server_Watchdog_startFileWorker___closed__4;
x_43 = l_Lean_Parser_Command_initialize___elambda__1___closed__1;
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_41);
x_45 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_startFileWorker___spec__3(x_40, x_44, x_38);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_getBuiltinSearchPath___closed__3;
x_48 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_48, 0, x_4);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_48, 2, x_5);
lean_ctor_set(x_48, 3, x_7);
x_49 = l_Lean_Server_Watchdog_startFileWorker___closed__5;
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
lean_inc(x_39);
x_51 = l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_startFileWorker___spec__5(x_39, x_50, x_46);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_Lean_Server_Watchdog_updateFileWorkers(x_39, x_2, x_52);
lean_dec(x_2);
return x_53;
}
else
{
uint8_t x_54; 
lean_dec(x_39);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_45);
if (x_58 == 0)
{
return x_45;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_45, 0);
x_60 = lean_ctor_get(x_45, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_45);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_36);
if (x_62 == 0)
{
return x_36;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_36, 0);
x_64 = lean_ctor_get(x_36, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_36);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_22);
if (x_66 == 0)
{
return x_22;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_22, 0);
x_68 = lean_ctor_get(x_22, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_22);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_8);
if (x_70 == 0)
{
return x_8;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_8, 0);
x_72 = lean_ctor_get(x_8, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_8);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_mkRef___at_Lean_Server_Watchdog_startFileWorker___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_terminateFileWorker___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Command_exit___elambda__1___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_terminateFileWorker(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Server_Watchdog_terminateFileWorker___closed__1;
x_8 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_5, x_7, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_2, x_11);
return x_12;
}
}
}
lean_object* l_Lean_Server_Watchdog_terminateFileWorker___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_terminateFileWorker(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_handleCrash(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 3);
lean_dec(x_9);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_6, 3, x_10);
x_11 = l_Lean_Server_Watchdog_updateFileWorkers(x_6, x_3, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
x_14 = lean_ctor_get(x_6, 2);
x_15 = lean_ctor_get(x_6, 4);
x_16 = lean_ctor_get(x_6, 5);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_2);
x_18 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set(x_18, 4, x_15);
lean_ctor_set(x_18, 5, x_16);
x_19 = l_Lean_Server_Watchdog_updateFileWorkers(x_18, x_3, x_7);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_5);
if (x_20 == 0)
{
return x_5;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_handleCrash___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Watchdog_handleCrash(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_tryWriteMessage_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = lean_apply_1(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = lean_apply_1(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
static uint8_t _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static size_t _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Server_Watchdog_findFileWorker(x_2, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2(x_6, x_2, x_10, x_13, x_14, x_7, x_12);
lean_dec(x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_apply_1(x_1, x_3);
x_19 = lean_array_push(x_17, x_18);
x_20 = lean_box(0);
x_21 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2(x_6, x_2, x_10, x_19, x_20, x_7, x_16);
lean_dec(x_19);
return x_21;
}
}
else
{
if (x_5 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_dec(x_9);
x_23 = lean_apply_3(x_4, x_10, x_3, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_dec(x_7);
lean_dec(x_1);
return x_23;
}
else
{
lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = 0;
x_26 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_27 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_28 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg(x_1, x_26, x_25, x_27);
x_29 = x_28;
x_30 = l_Lean_Server_Watchdog_handleCrash(x_2, x_29, x_7, x_24);
lean_dec(x_7);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_9, 1);
lean_inc(x_31);
lean_dec(x_9);
x_32 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_3);
x_33 = lean_array_push(x_32, x_3);
x_34 = lean_apply_3(x_4, x_10, x_3, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_dec(x_33);
lean_dec(x_7);
lean_dec(x_1);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_array_get_size(x_33);
x_37 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_38 = 0;
x_39 = x_33;
x_40 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg(x_1, x_37, x_38, x_39);
x_41 = x_40;
x_42 = l_Lean_Server_Watchdog_handleCrash(x_2, x_41, x_7, x_35);
lean_dec(x_7);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_9);
if (x_43 == 0)
{
return x_9;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_9, 0);
x_45 = lean_ctor_get(x_9, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_9);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_tryWriteMessage___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_tryWriteMessage___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__2___rarg(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_tryWriteMessage___spec__3___rarg(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___rarg(x_1, x_2, x_3, x_4, x_9, x_10, x_7, x_8);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Server_Watchdog_handleDidOpen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_FileMap_ofString(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Lean_Server_Watchdog_startFileWorker(x_8, x_2, x_3);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleEdits_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleEdits_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleEdits___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_toJsonDidChangeTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_275_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleEdits___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleEdits___spec__3(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_7, x_3);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleEdits___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
x_5 = l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleEdits___spec__2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleEdits___spec__3(x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = 1;
x_15 = x_2 + x_14;
x_16 = x_13;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleEdits___spec__3(x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_push(x_16, x_20);
x_22 = lean_box(0);
x_23 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2(x_5, x_1, x_9, x_21, x_22, x_6, x_15);
lean_dec(x_21);
return x_23;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_apply_3(x_3, x_9, x_2, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_dec(x_6);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2;
x_28 = l_Lean_Server_Watchdog_handleCrash(x_1, x_27, x_6, x_26);
lean_dec(x_6);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
lean_dec(x_8);
x_30 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_31 = lean_array_push(x_30, x_2);
x_32 = lean_apply_3(x_3, x_9, x_2, x_29);
if (lean_obj_tag(x_32) == 0)
{
lean_dec(x_31);
lean_dec(x_6);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_array_get_size(x_31);
x_35 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_36 = 0;
x_37 = x_31;
x_38 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6(x_35, x_36, x_37);
x_39 = x_38;
x_40 = l_Lean_Server_Watchdog_handleCrash(x_1, x_39, x_6, x_33);
lean_dec(x_6);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_8);
if (x_41 == 0)
{
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_8, 0);
x_43 = lean_ctor_get(x_8, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_8);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/didChange");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleEdits___spec__1), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Server_foldDocumentChanges(x_2, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_19);
lean_inc(x_3);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_4);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst(x_21, x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Syntax_structEq(x_23, x_16);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_1);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = l_Lean_Server_Watchdog_terminateFileWorker(x_3, x_12, x_24);
lean_dec(x_3);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_startFileWorker(x_20, x_12, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
lean_ctor_set(x_1, 0, x_20);
x_29 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_5);
lean_ctor_set(x_29, 2, x_6);
lean_ctor_set(x_29, 3, x_7);
lean_ctor_set(x_29, 4, x_8);
lean_ctor_set(x_29, 5, x_9);
x_30 = l_Lean_Server_Watchdog_updateFileWorkers(x_29, x_12, x_24);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1;
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_10);
x_34 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2;
x_35 = 1;
x_36 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4(x_3, x_33, x_34, x_35, x_35, x_12, x_31);
lean_dec(x_3);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_20);
lean_free_object(x_1);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_22);
if (x_37 == 0)
{
return x_22;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_22, 0);
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_22);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_1, 0);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_1);
x_43 = lean_ctor_get(x_41, 2);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Server_foldDocumentChanges(x_2, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
lean_inc(x_45);
lean_inc(x_3);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_3);
lean_ctor_set(x_46, 1, x_4);
lean_ctor_set(x_46, 2, x_45);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_parseHeaderAst(x_47, x_13);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_Syntax_structEq(x_49, x_42);
lean_dec(x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_42);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_52 = l_Lean_Server_Watchdog_terminateFileWorker(x_3, x_12, x_50);
lean_dec(x_3);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_Server_Watchdog_startFileWorker(x_46, x_12, x_53);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_46);
lean_ctor_set(x_55, 1, x_42);
x_56 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_5);
lean_ctor_set(x_56, 2, x_6);
lean_ctor_set(x_56, 3, x_7);
lean_ctor_set(x_56, 4, x_8);
lean_ctor_set(x_56, 5, x_9);
x_57 = l_Lean_Server_Watchdog_updateFileWorkers(x_56, x_12, x_50);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1;
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_10);
x_61 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2;
x_62 = 1;
x_63 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4(x_3, x_60, x_61, x_62, x_62, x_12, x_58);
lean_dec(x_3);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_46);
lean_dec(x_42);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_64 = lean_ctor_get(x_48, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_48, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_66 = x_48;
} else {
 lean_dec_ref(x_48);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = l_Array_isEmpty___rarg(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Lean_Server_Watchdog_handleEdits___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15, x_12, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleEdits___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Internal error: empty grouped edits reference");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleEdits___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Expected version number");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleEdits___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Got outdated version number");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 5);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_st_ref_take(x_9, x_3);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_st_ref_set(x_9, x_13, x_12);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Server_Watchdog_handleEdits___closed__1;
x_17 = l_IO_throwServerError___rarg(x_16, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Server_Watchdog_handleEdits___closed__2;
x_24 = l_IO_throwServerError___rarg(x_23, x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_ctor_get(x_21, 0);
lean_inc(x_27);
lean_dec(x_21);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_4, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_nat_dec_le(x_27, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(0);
x_33 = l_Lean_Server_Watchdog_handleEdits___lambda__2(x_4, x_28, x_26, x_27, x_5, x_6, x_7, x_8, x_9, x_19, x_32, x_2, x_25);
lean_dec(x_28);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_34 = l_Lean_Server_Watchdog_handleEdits___closed__3;
x_35 = l_IO_throwServerError___rarg(x_34, x_25);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleEdits___spec__5(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleEdits___spec__6(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Server_Watchdog_handleEdits___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Lean_Server_Watchdog_handleEdits___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Server_Watchdog_handleEdits___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Lean_Server_Watchdog_handleDidClose(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_terminateFileWorker(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_handleDidClose___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_handleDidClose(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleCancelRequest_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_handleCancelRequest_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleCancelRequest_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Server_Watchdog_handleCancelRequest___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_2);
x_8 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_4);
lean_inc(x_2);
x_9 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
lean_dec(x_6);
x_1 = x_7;
goto _start;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonCancelParams____x40_Lean_Data_Lsp_Basic___hyg_61_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(x_5);
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_7, x_3);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
x_5 = l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = 1;
x_15 = x_2 + x_14;
x_16 = x_13;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_push(x_16, x_20);
x_22 = lean_box(0);
x_23 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2(x_5, x_1, x_9, x_21, x_22, x_6, x_15);
lean_dec(x_21);
return x_23;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_apply_3(x_3, x_9, x_2, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_dec(x_6);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2;
x_28 = l_Lean_Server_Watchdog_handleCrash(x_1, x_27, x_6, x_26);
lean_dec(x_6);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
lean_dec(x_8);
x_30 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_31 = lean_array_push(x_30, x_2);
x_32 = lean_apply_3(x_3, x_9, x_2, x_29);
if (lean_obj_tag(x_32) == 0)
{
lean_dec(x_31);
lean_dec(x_6);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_array_get_size(x_31);
x_35 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_36 = 0;
x_37 = x_31;
x_38 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7(x_35, x_36, x_37);
x_39 = x_38;
x_40 = l_Lean_Server_Watchdog_handleCrash(x_1, x_39, x_6, x_33);
lean_dec(x_6);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_8);
if (x_41 == 0)
{
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_8, 0);
x_43 = lean_ctor_get(x_8, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_8);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
static lean_object* _init_l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("$/cancelRequest");
return x_1;
}
}
static lean_object* _init_l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 3);
lean_inc(x_4);
lean_inc(x_1);
x_12 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8(x_1, x_8, x_3, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_ctor_get(x_10, 4);
x_20 = lean_st_ref_take(x_19, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_1);
lean_inc(x_21);
x_23 = l_Std_RBNode_find___at_Lean_Server_Watchdog_handleCancelRequest___spec__1(x_21, x_1);
lean_inc(x_1);
x_24 = l_Std_RBNode_erase___at_Lean_Server_Watchdog_FileWorker_readMessage___spec__1(x_1, x_21);
x_25 = lean_st_ref_set(x_19, x_24, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_box(0);
x_2 = x_11;
x_3 = x_27;
x_5 = x_26;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_dec(x_23);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1;
lean_inc(x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_1);
x_32 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2;
x_33 = 0;
lean_inc(x_4);
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5(x_9, x_31, x_32, x_33, x_33, x_4, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_box(0);
x_2 = x_11;
x_3 = x_36;
x_5 = x_35;
goto _start;
}
else
{
uint8_t x_38; 
lean_dec(x_4);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_34);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_4);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_12);
if (x_42 == 0)
{
return x_12;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_12, 0);
x_44 = lean_ctor_get(x_12, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_12);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
lean_object* l_Lean_Server_Watchdog_handleCancelRequest(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 4);
lean_inc(x_4);
x_5 = lean_st_ref_get(x_4, x_3);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8(x_1, x_6, x_8, x_2, x_7);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleCancelRequest___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeLspNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_FileWorker_writeNotification___at_Lean_Server_Watchdog_handleCancelRequest___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleCancelRequest___spec__6(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleCancelRequest___spec__7(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_parseParams_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_parseParams___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Got param with wrong structure: ");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
x_5 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_Lean_Json_compress(x_2);
x_7 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = l_Lean_instInhabitedParserDescr___closed__1;
x_10 = lean_string_append(x_8, x_9);
x_11 = l_IO_throwServerError___rarg(x_10, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_parseParams___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Watchdog_parseParams___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleRequest_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/hover");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/definition");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/typeDefinition");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/documentHighlight");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/documentSymbol");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/semanticTokens/range");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/semanticTokens/full");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("$/lean/plainGoal");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Lsp_Ipc_collectDiagnostics___closed__1;
x_14 = lean_string_dec_eq(x_1, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_2);
x_15 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1;
x_16 = lean_string_dec_eq(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_3);
x_17 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2;
x_18 = lean_string_dec_eq(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_4);
x_19 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3;
x_20 = lean_string_dec_eq(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_5);
x_21 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4;
x_22 = lean_string_dec_eq(x_1, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_6);
x_23 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5;
x_24 = lean_string_dec_eq(x_1, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_7);
x_25 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6;
x_26 = lean_string_dec_eq(x_1, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
lean_dec(x_8);
x_27 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7;
x_28 = lean_string_dec_eq(x_1, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_9);
x_29 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8;
x_30 = lean_string_dec_eq(x_1, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_10);
x_31 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9;
x_32 = lean_string_dec_eq(x_1, x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_11);
x_33 = lean_apply_1(x_12, x_1);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_12);
lean_dec(x_1);
x_34 = lean_box(0);
x_35 = lean_apply_1(x_11, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = lean_apply_1(x_10, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_38 = lean_box(0);
x_39 = lean_apply_1(x_9, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_40 = lean_box(0);
x_41 = lean_apply_1(x_8, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_42 = lean_box(0);
x_43 = lean_apply_1(x_7, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_44 = lean_box(0);
x_45 = lean_apply_1(x_6, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_46 = lean_box(0);
x_47 = lean_apply_1(x_5, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_48 = lean_box(0);
x_49 = lean_apply_1(x_4, x_48);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_50 = lean_box(0);
x_51 = lean_apply_1(x_3, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_52 = lean_box(0);
x_53 = lean_apply_1(x_2, x_52);
return x_53;
}
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleRequest_match__2___rarg), 12, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonPlainGoalParams____x40_Lean_Data_Lsp_Extra___hyg_110_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_toJsonPlainGoalParams____x40_Lean_Data_Lsp_Extra___hyg_155_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__3(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__4(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1046_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1077_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__10(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__11(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1106_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1151_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__17(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__18(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_556_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_587_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__24(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__25(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_416_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_461_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__31(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__32(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_334_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_379_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__38(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__37(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__38(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__39(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_252_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_297_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__45(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__44(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__45(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__46(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_170_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_215_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__52(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__51(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__52(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__53(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_88_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_133_(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__59(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__58(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Server_Watchdog_handleRequest___spec__59(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Server_Watchdog_handleRequest___spec__60(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonWaitForDiagnosticsParams____x40_Lean_Data_Lsp_Extra___hyg_42_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__65(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_Lean_Server_Watchdog_FileWorker_stdin(x_1);
lean_inc(x_2);
x_5 = l_IO_FS_Stream_writeLspRequest___at_Lean_Lsp_Ipc_collectDiagnostics___spec__2(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_st_ref_take(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_Std_RBNode_insert___at_Lean_Server_Watchdog_FileWorker_writeRequest___spec__1(x_9, x_11, x_15);
x_17 = lean_st_ref_set(x_7, x_16, x_10);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
return x_5;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_5, 0);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_11 = l_Lean_Server_Watchdog_FileWorker_writeMessage(x_1, x_10, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_4 = x_14;
x_7 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_array_push(x_5, x_10);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
x_7 = x_16;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = 1;
x_16 = x_2 + x_15;
x_17 = x_14;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_16;
x_3 = x_18;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Server_Watchdog_eraseFileWorker(x_1, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_5);
x_11 = l_Lean_Server_Watchdog_startFileWorker(x_10, x_5, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67(x_14, x_3, x_17, x_18, x_19, x_5, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Array_isEmpty___rarg(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_5);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; 
lean_free_object(x_20);
x_27 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_5);
x_29 = lean_box(0);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; 
lean_free_object(x_20);
x_30 = l_Lean_Server_Watchdog_handleCrash(x_1, x_22, x_5, x_23);
lean_dec(x_5);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = l_Array_isEmpty___rarg(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2;
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_5);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_31, x_5, x_32);
lean_dec(x_5);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1(x_2, x_3, x_4, x_10, x_6, x_7);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2;
x_3 = l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_findFileWorker(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2(x_5, x_1, x_9, x_12, x_13, x_6, x_11);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Json_toStructured_x3f___at_Lean_Lsp_Ipc_collectDiagnostics___spec__3(x_19);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_push(x_16, x_21);
x_23 = lean_box(0);
x_24 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2(x_5, x_1, x_9, x_22, x_23, x_6, x_15);
lean_dec(x_22);
return x_24;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_apply_3(x_3, x_9, x_2, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_1, x_28, x_6, x_27);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_2);
x_32 = lean_array_push(x_31, x_2);
x_33 = lean_apply_3(x_3, x_9, x_2, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_32);
lean_dec(x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = x_32;
x_39 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68(x_36, x_37, x_38);
x_40 = x_39;
x_41 = l_Lean_Server_Watchdog_handleCrash(x_1, x_40, x_6, x_34);
lean_dec(x_6);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__2), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__9), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1;
x_9 = 1;
x_10 = 0;
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12(x_3, x_7, x_8, x_9, x_10, x_5, x_6);
lean_dec(x_3);
return x_11;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__16), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__23), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1;
x_9 = 1;
x_10 = 0;
x_11 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26(x_3, x_7, x_8, x_9, x_10, x_5, x_6);
lean_dec(x_3);
return x_11;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__30), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__37), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__44), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__51), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__58), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_FileWorker_writeRequest___at_Lean_Server_Watchdog_handleRequest___spec__65), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
x_9 = l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1;
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66(x_4, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Unsupported request method: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleRequest___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Cannot process request to closed file '");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Lsp_Ipc_collectDiagnostics___closed__1;
x_7 = lean_string_dec_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1;
x_9 = lean_string_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2;
x_11 = lean_string_dec_eq(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3;
x_13 = lean_string_dec_eq(x_2, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4;
x_15 = lean_string_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5;
x_17 = lean_string_dec_eq(x_2, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6;
x_19 = lean_string_dec_eq(x_2, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7;
x_21 = lean_string_dec_eq(x_2, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8;
x_23 = lean_string_dec_eq(x_2, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9;
x_25 = lean_string_dec_eq(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_3);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_dec(x_4);
x_27 = l_Lean_Server_Watchdog_handleRequest___closed__1;
x_28 = lean_string_append(x_27, x_2);
lean_dec(x_2);
x_29 = l_Lean_instInhabitedParserDescr___closed__1;
x_30 = lean_string_append(x_28, x_29);
x_31 = lean_box(0);
x_32 = 2;
x_33 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*3, x_32);
x_34 = l_IO_FS_Stream_writeLspResponseError(x_26, x_33, x_5);
lean_dec(x_33);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1(x_3, x_4, x_5);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = l_Lean_Server_Watchdog_findFileWorker(x_38, x_4, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Server_Watchdog_handleRequest___lambda__1(x_1, x_2, x_36, x_38, x_40, x_4, x_41);
lean_dec(x_40);
lean_dec(x_38);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_36);
lean_dec(x_2);
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
x_44 = lean_ctor_get(x_4, 1);
lean_inc(x_44);
lean_dec(x_4);
x_45 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_46 = lean_string_append(x_45, x_38);
lean_dec(x_38);
x_47 = l_Char_quote___closed__1;
x_48 = lean_string_append(x_46, x_47);
x_49 = lean_box(0);
x_50 = 10;
x_51 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_48);
lean_ctor_set(x_51, 2, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*3, x_50);
x_52 = l_IO_FS_Stream_writeLspResponseError(x_44, x_51, x_43);
lean_dec(x_51);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_52, 0);
lean_dec(x_54);
x_55 = lean_box(0);
lean_ctor_set(x_52, 0, x_55);
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_52);
if (x_59 == 0)
{
return x_52;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_52, 0);
x_61 = lean_ctor_get(x_52, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_52);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_35);
if (x_63 == 0)
{
return x_35;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_35, 0);
x_65 = lean_ctor_get(x_35, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_35);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
else
{
lean_object* x_67; 
x_67 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8(x_3, x_4, x_5);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Server_Watchdog_findFileWorker(x_68, x_4, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Server_Watchdog_handleRequest___lambda__2(x_1, x_2, x_68, x_71, x_4, x_72);
lean_dec(x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_2);
x_74 = lean_ctor_get(x_70, 1);
lean_inc(x_74);
lean_dec(x_70);
x_75 = lean_ctor_get(x_4, 1);
lean_inc(x_75);
lean_dec(x_4);
x_76 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_77 = lean_string_append(x_76, x_68);
lean_dec(x_68);
x_78 = l_Char_quote___closed__1;
x_79 = lean_string_append(x_77, x_78);
x_80 = lean_box(0);
x_81 = 10;
x_82 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_82, 0, x_1);
lean_ctor_set(x_82, 1, x_79);
lean_ctor_set(x_82, 2, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*3, x_81);
x_83 = l_IO_FS_Stream_writeLspResponseError(x_75, x_82, x_74);
lean_dec(x_82);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_83, 0);
lean_dec(x_85);
x_86 = lean_box(0);
lean_ctor_set(x_83, 0, x_86);
return x_83;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
lean_dec(x_83);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_83);
if (x_90 == 0)
{
return x_83;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_83, 0);
x_92 = lean_ctor_get(x_83, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_83);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_67);
if (x_94 == 0)
{
return x_67;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_67, 0);
x_96 = lean_ctor_get(x_67, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_67);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
else
{
lean_object* x_98; 
x_98 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15(x_3, x_4, x_5);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
x_102 = l_Lean_Server_Watchdog_findFileWorker(x_101, x_4, x_100);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Server_Watchdog_handleRequest___lambda__3(x_1, x_2, x_99, x_101, x_103, x_4, x_104);
lean_dec(x_103);
lean_dec(x_101);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_99);
lean_dec(x_2);
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
lean_dec(x_102);
x_107 = lean_ctor_get(x_4, 1);
lean_inc(x_107);
lean_dec(x_4);
x_108 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_109 = lean_string_append(x_108, x_101);
lean_dec(x_101);
x_110 = l_Char_quote___closed__1;
x_111 = lean_string_append(x_109, x_110);
x_112 = lean_box(0);
x_113 = 10;
x_114 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_114, 0, x_1);
lean_ctor_set(x_114, 1, x_111);
lean_ctor_set(x_114, 2, x_112);
lean_ctor_set_uint8(x_114, sizeof(void*)*3, x_113);
x_115 = l_IO_FS_Stream_writeLspResponseError(x_107, x_114, x_106);
lean_dec(x_114);
if (lean_obj_tag(x_115) == 0)
{
uint8_t x_116; 
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_115, 0);
lean_dec(x_117);
x_118 = lean_box(0);
lean_ctor_set(x_115, 0, x_118);
return x_115;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_115, 1);
lean_inc(x_119);
lean_dec(x_115);
x_120 = lean_box(0);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
uint8_t x_122; 
x_122 = !lean_is_exclusive(x_115);
if (x_122 == 0)
{
return x_115;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_115, 0);
x_124 = lean_ctor_get(x_115, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_115);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
else
{
uint8_t x_126; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_126 = !lean_is_exclusive(x_98);
if (x_126 == 0)
{
return x_98;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_98, 0);
x_128 = lean_ctor_get(x_98, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_98);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
else
{
lean_object* x_130; 
x_130 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22(x_3, x_4, x_5);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_Server_Watchdog_findFileWorker(x_131, x_4, x_132);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec(x_133);
x_136 = l_Lean_Server_Watchdog_handleRequest___lambda__4(x_1, x_2, x_131, x_134, x_4, x_135);
lean_dec(x_134);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_2);
x_137 = lean_ctor_get(x_133, 1);
lean_inc(x_137);
lean_dec(x_133);
x_138 = lean_ctor_get(x_4, 1);
lean_inc(x_138);
lean_dec(x_4);
x_139 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_140 = lean_string_append(x_139, x_131);
lean_dec(x_131);
x_141 = l_Char_quote___closed__1;
x_142 = lean_string_append(x_140, x_141);
x_143 = lean_box(0);
x_144 = 10;
x_145 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_145, 0, x_1);
lean_ctor_set(x_145, 1, x_142);
lean_ctor_set(x_145, 2, x_143);
lean_ctor_set_uint8(x_145, sizeof(void*)*3, x_144);
x_146 = l_IO_FS_Stream_writeLspResponseError(x_138, x_145, x_137);
lean_dec(x_145);
if (lean_obj_tag(x_146) == 0)
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_146);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_146, 0);
lean_dec(x_148);
x_149 = lean_box(0);
lean_ctor_set(x_146, 0, x_149);
return x_146;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_146, 1);
lean_inc(x_150);
lean_dec(x_146);
x_151 = lean_box(0);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_146);
if (x_153 == 0)
{
return x_146;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_146, 0);
x_155 = lean_ctor_get(x_146, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_146);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_130);
if (x_157 == 0)
{
return x_130;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_130, 0);
x_159 = lean_ctor_get(x_130, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_130);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
else
{
lean_object* x_161; 
x_161 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29(x_3, x_4, x_5);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_ctor_get(x_162, 0);
lean_inc(x_164);
x_165 = l_Lean_Server_Watchdog_findFileWorker(x_164, x_4, x_163);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_168 = l_Lean_Server_Watchdog_handleRequest___lambda__5(x_1, x_2, x_162, x_164, x_166, x_4, x_167);
lean_dec(x_166);
lean_dec(x_164);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_162);
lean_dec(x_2);
x_169 = lean_ctor_get(x_165, 1);
lean_inc(x_169);
lean_dec(x_165);
x_170 = lean_ctor_get(x_4, 1);
lean_inc(x_170);
lean_dec(x_4);
x_171 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_172 = lean_string_append(x_171, x_164);
lean_dec(x_164);
x_173 = l_Char_quote___closed__1;
x_174 = lean_string_append(x_172, x_173);
x_175 = lean_box(0);
x_176 = 10;
x_177 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_177, 0, x_1);
lean_ctor_set(x_177, 1, x_174);
lean_ctor_set(x_177, 2, x_175);
lean_ctor_set_uint8(x_177, sizeof(void*)*3, x_176);
x_178 = l_IO_FS_Stream_writeLspResponseError(x_170, x_177, x_169);
lean_dec(x_177);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_178);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_178, 0);
lean_dec(x_180);
x_181 = lean_box(0);
lean_ctor_set(x_178, 0, x_181);
return x_178;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_178, 1);
lean_inc(x_182);
lean_dec(x_178);
x_183 = lean_box(0);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
return x_184;
}
}
else
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_178);
if (x_185 == 0)
{
return x_178;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_178, 0);
x_187 = lean_ctor_get(x_178, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_178);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_189 = !lean_is_exclusive(x_161);
if (x_189 == 0)
{
return x_161;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_161, 0);
x_191 = lean_ctor_get(x_161, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_161);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
}
else
{
lean_object* x_193; 
x_193 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36(x_3, x_4, x_5);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_ctor_get(x_194, 0);
lean_inc(x_196);
x_197 = l_Lean_Server_Watchdog_findFileWorker(x_196, x_4, x_195);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = l_Lean_Server_Watchdog_handleRequest___lambda__6(x_1, x_2, x_194, x_196, x_198, x_4, x_199);
lean_dec(x_198);
lean_dec(x_196);
return x_200;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_194);
lean_dec(x_2);
x_201 = lean_ctor_get(x_197, 1);
lean_inc(x_201);
lean_dec(x_197);
x_202 = lean_ctor_get(x_4, 1);
lean_inc(x_202);
lean_dec(x_4);
x_203 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_204 = lean_string_append(x_203, x_196);
lean_dec(x_196);
x_205 = l_Char_quote___closed__1;
x_206 = lean_string_append(x_204, x_205);
x_207 = lean_box(0);
x_208 = 10;
x_209 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_209, 0, x_1);
lean_ctor_set(x_209, 1, x_206);
lean_ctor_set(x_209, 2, x_207);
lean_ctor_set_uint8(x_209, sizeof(void*)*3, x_208);
x_210 = l_IO_FS_Stream_writeLspResponseError(x_202, x_209, x_201);
lean_dec(x_209);
if (lean_obj_tag(x_210) == 0)
{
uint8_t x_211; 
x_211 = !lean_is_exclusive(x_210);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_210, 0);
lean_dec(x_212);
x_213 = lean_box(0);
lean_ctor_set(x_210, 0, x_213);
return x_210;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_210, 1);
lean_inc(x_214);
lean_dec(x_210);
x_215 = lean_box(0);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
else
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_210);
if (x_217 == 0)
{
return x_210;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_210, 0);
x_219 = lean_ctor_get(x_210, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_210);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
}
else
{
uint8_t x_221; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_221 = !lean_is_exclusive(x_193);
if (x_221 == 0)
{
return x_193;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_193, 0);
x_223 = lean_ctor_get(x_193, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_193);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
}
else
{
lean_object* x_225; 
x_225 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43(x_3, x_4, x_5);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
x_229 = l_Lean_Server_Watchdog_findFileWorker(x_228, x_4, x_227);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = l_Lean_Server_Watchdog_handleRequest___lambda__7(x_1, x_2, x_226, x_228, x_230, x_4, x_231);
lean_dec(x_230);
lean_dec(x_228);
return x_232;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_226);
lean_dec(x_2);
x_233 = lean_ctor_get(x_229, 1);
lean_inc(x_233);
lean_dec(x_229);
x_234 = lean_ctor_get(x_4, 1);
lean_inc(x_234);
lean_dec(x_4);
x_235 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_236 = lean_string_append(x_235, x_228);
lean_dec(x_228);
x_237 = l_Char_quote___closed__1;
x_238 = lean_string_append(x_236, x_237);
x_239 = lean_box(0);
x_240 = 10;
x_241 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_241, 0, x_1);
lean_ctor_set(x_241, 1, x_238);
lean_ctor_set(x_241, 2, x_239);
lean_ctor_set_uint8(x_241, sizeof(void*)*3, x_240);
x_242 = l_IO_FS_Stream_writeLspResponseError(x_234, x_241, x_233);
lean_dec(x_241);
if (lean_obj_tag(x_242) == 0)
{
uint8_t x_243; 
x_243 = !lean_is_exclusive(x_242);
if (x_243 == 0)
{
lean_object* x_244; lean_object* x_245; 
x_244 = lean_ctor_get(x_242, 0);
lean_dec(x_244);
x_245 = lean_box(0);
lean_ctor_set(x_242, 0, x_245);
return x_242;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_246 = lean_ctor_get(x_242, 1);
lean_inc(x_246);
lean_dec(x_242);
x_247 = lean_box(0);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
uint8_t x_249; 
x_249 = !lean_is_exclusive(x_242);
if (x_249 == 0)
{
return x_242;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_242, 0);
x_251 = lean_ctor_get(x_242, 1);
lean_inc(x_251);
lean_inc(x_250);
lean_dec(x_242);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_250);
lean_ctor_set(x_252, 1, x_251);
return x_252;
}
}
}
}
else
{
uint8_t x_253; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_253 = !lean_is_exclusive(x_225);
if (x_253 == 0)
{
return x_225;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_225, 0);
x_255 = lean_ctor_get(x_225, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_225);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
return x_256;
}
}
}
}
else
{
lean_object* x_257; 
x_257 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50(x_3, x_4, x_5);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = lean_ctor_get(x_258, 0);
lean_inc(x_260);
x_261 = l_Lean_Server_Watchdog_findFileWorker(x_260, x_4, x_259);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
x_264 = l_Lean_Server_Watchdog_handleRequest___lambda__8(x_1, x_2, x_258, x_260, x_262, x_4, x_263);
lean_dec(x_262);
lean_dec(x_260);
return x_264;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_258);
lean_dec(x_2);
x_265 = lean_ctor_get(x_261, 1);
lean_inc(x_265);
lean_dec(x_261);
x_266 = lean_ctor_get(x_4, 1);
lean_inc(x_266);
lean_dec(x_4);
x_267 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_268 = lean_string_append(x_267, x_260);
lean_dec(x_260);
x_269 = l_Char_quote___closed__1;
x_270 = lean_string_append(x_268, x_269);
x_271 = lean_box(0);
x_272 = 10;
x_273 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_273, 0, x_1);
lean_ctor_set(x_273, 1, x_270);
lean_ctor_set(x_273, 2, x_271);
lean_ctor_set_uint8(x_273, sizeof(void*)*3, x_272);
x_274 = l_IO_FS_Stream_writeLspResponseError(x_266, x_273, x_265);
lean_dec(x_273);
if (lean_obj_tag(x_274) == 0)
{
uint8_t x_275; 
x_275 = !lean_is_exclusive(x_274);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_274, 0);
lean_dec(x_276);
x_277 = lean_box(0);
lean_ctor_set(x_274, 0, x_277);
return x_274;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_274, 1);
lean_inc(x_278);
lean_dec(x_274);
x_279 = lean_box(0);
x_280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
else
{
uint8_t x_281; 
x_281 = !lean_is_exclusive(x_274);
if (x_281 == 0)
{
return x_274;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_274, 0);
x_283 = lean_ctor_get(x_274, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_274);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
return x_284;
}
}
}
}
else
{
uint8_t x_285; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_285 = !lean_is_exclusive(x_257);
if (x_285 == 0)
{
return x_257;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_286 = lean_ctor_get(x_257, 0);
x_287 = lean_ctor_get(x_257, 1);
lean_inc(x_287);
lean_inc(x_286);
lean_dec(x_257);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
return x_288;
}
}
}
}
else
{
lean_object* x_289; 
x_289 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57(x_3, x_4, x_5);
if (lean_obj_tag(x_289) == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_ctor_get(x_290, 0);
lean_inc(x_292);
x_293 = l_Lean_Server_Watchdog_findFileWorker(x_292, x_4, x_291);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_296 = l_Lean_Server_Watchdog_handleRequest___lambda__9(x_1, x_2, x_290, x_292, x_294, x_4, x_295);
lean_dec(x_294);
lean_dec(x_292);
return x_296;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_290);
lean_dec(x_2);
x_297 = lean_ctor_get(x_293, 1);
lean_inc(x_297);
lean_dec(x_293);
x_298 = lean_ctor_get(x_4, 1);
lean_inc(x_298);
lean_dec(x_4);
x_299 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_300 = lean_string_append(x_299, x_292);
lean_dec(x_292);
x_301 = l_Char_quote___closed__1;
x_302 = lean_string_append(x_300, x_301);
x_303 = lean_box(0);
x_304 = 10;
x_305 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_305, 0, x_1);
lean_ctor_set(x_305, 1, x_302);
lean_ctor_set(x_305, 2, x_303);
lean_ctor_set_uint8(x_305, sizeof(void*)*3, x_304);
x_306 = l_IO_FS_Stream_writeLspResponseError(x_298, x_305, x_297);
lean_dec(x_305);
if (lean_obj_tag(x_306) == 0)
{
uint8_t x_307; 
x_307 = !lean_is_exclusive(x_306);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; 
x_308 = lean_ctor_get(x_306, 0);
lean_dec(x_308);
x_309 = lean_box(0);
lean_ctor_set(x_306, 0, x_309);
return x_306;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_310 = lean_ctor_get(x_306, 1);
lean_inc(x_310);
lean_dec(x_306);
x_311 = lean_box(0);
x_312 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_312, 0, x_311);
lean_ctor_set(x_312, 1, x_310);
return x_312;
}
}
else
{
uint8_t x_313; 
x_313 = !lean_is_exclusive(x_306);
if (x_313 == 0)
{
return x_306;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_ctor_get(x_306, 0);
x_315 = lean_ctor_get(x_306, 1);
lean_inc(x_315);
lean_inc(x_314);
lean_dec(x_306);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_314);
lean_ctor_set(x_316, 1, x_315);
return x_316;
}
}
}
}
else
{
uint8_t x_317; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_317 = !lean_is_exclusive(x_289);
if (x_317 == 0)
{
return x_289;
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_318 = lean_ctor_get(x_289, 0);
x_319 = lean_ctor_get(x_289, 1);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_289);
x_320 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_320, 0, x_318);
lean_ctor_set(x_320, 1, x_319);
return x_320;
}
}
}
}
else
{
lean_object* x_321; 
x_321 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64(x_3, x_4, x_5);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
lean_dec(x_321);
x_324 = lean_ctor_get(x_322, 0);
lean_inc(x_324);
x_325 = l_Lean_Server_Watchdog_findFileWorker(x_324, x_4, x_323);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
lean_dec(x_325);
x_328 = l_Lean_Server_Watchdog_handleRequest___lambda__10(x_1, x_2, x_322, x_324, x_326, x_4, x_327);
lean_dec(x_326);
lean_dec(x_324);
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; uint8_t x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_322);
lean_dec(x_2);
x_329 = lean_ctor_get(x_325, 1);
lean_inc(x_329);
lean_dec(x_325);
x_330 = lean_ctor_get(x_4, 1);
lean_inc(x_330);
lean_dec(x_4);
x_331 = l_Lean_Server_Watchdog_handleRequest___closed__2;
x_332 = lean_string_append(x_331, x_324);
lean_dec(x_324);
x_333 = l_Char_quote___closed__1;
x_334 = lean_string_append(x_332, x_333);
x_335 = lean_box(0);
x_336 = 10;
x_337 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_337, 0, x_1);
lean_ctor_set(x_337, 1, x_334);
lean_ctor_set(x_337, 2, x_335);
lean_ctor_set_uint8(x_337, sizeof(void*)*3, x_336);
x_338 = l_IO_FS_Stream_writeLspResponseError(x_330, x_337, x_329);
lean_dec(x_337);
if (lean_obj_tag(x_338) == 0)
{
uint8_t x_339; 
x_339 = !lean_is_exclusive(x_338);
if (x_339 == 0)
{
lean_object* x_340; lean_object* x_341; 
x_340 = lean_ctor_get(x_338, 0);
lean_dec(x_340);
x_341 = lean_box(0);
lean_ctor_set(x_338, 0, x_341);
return x_338;
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_342 = lean_ctor_get(x_338, 1);
lean_inc(x_342);
lean_dec(x_338);
x_343 = lean_box(0);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_342);
return x_344;
}
}
else
{
uint8_t x_345; 
x_345 = !lean_is_exclusive(x_338);
if (x_345 == 0)
{
return x_338;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_346 = lean_ctor_get(x_338, 0);
x_347 = lean_ctor_get(x_338, 1);
lean_inc(x_347);
lean_inc(x_346);
lean_dec(x_338);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
}
}
}
else
{
uint8_t x_349; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_321);
if (x_349 == 0)
{
return x_321;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_321, 0);
x_351 = lean_ctor_get(x_321, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_321);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__6(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__7(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__8(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__13(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__14(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__15(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__20(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__21(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__22(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__27(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__28(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__29(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__34(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__35(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__36(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__41(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__42(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__43(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__48(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__49(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__50(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__55(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__56(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__57(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__62(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__63(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleRequest___spec__64(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_Watchdog_handleRequest___spec__67(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Watchdog_handleRequest___spec__68(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___lambda__2(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_handleRequest___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Watchdog_handleRequest___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_handleRequest___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_handleRequest___lambda__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("textDocument/didClose");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleNotification_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Server_Watchdog_startFileWorker___closed__5;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
lean_dec(x_2);
x_8 = l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1;
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_3);
x_10 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1;
x_11 = lean_string_dec_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
x_12 = lean_apply_1(x_5, x_1);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = lean_apply_1(x_2, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Server_Watchdog_handleNotification_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_handleNotification_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint32_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 5);
lean_inc(x_5);
lean_dec(x_1);
x_6 = 10;
x_7 = lean_string_push(x_2, x_6);
x_8 = lean_apply_2(x_5, x_7, x_4);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonCancelParams____x40_Lean_Data_Lsp_Basic___hyg_86_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidCloseTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_441_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidOpenTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_89_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_handleNotification___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Got unsupported notification: ");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_handleNotification(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Server_Watchdog_startFileWorker___closed__5;
x_6 = lean_string_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1;
x_8 = lean_string_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1;
x_10 = lean_string_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = l_Lean_Server_Watchdog_handleNotification___closed__1;
x_13 = lean_string_append(x_12, x_1);
x_14 = l_Lean_instInhabitedParserDescr___closed__1;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1(x_11, x_15, x_3, x_4);
lean_dec(x_3);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2(x_2, x_3, x_4);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Server_Watchdog_handleCancelRequest(x_18, x_3, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
else
{
lean_object* x_25; 
x_25 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3(x_2, x_3, x_4);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Server_Watchdog_terminateFileWorker(x_26, x_3, x_27);
lean_dec(x_3);
lean_dec(x_26);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
lean_object* x_33; 
x_33 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4(x_2, x_3, x_4);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Server_Watchdog_handleDidOpen(x_34, x_3, x_35);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_33);
if (x_37 == 0)
{
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 0);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_33);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_handleNotification___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_handleNotification___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_handleNotification___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Watchdog_handleNotification(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1(x_7, x_2, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_io_wait(x_17, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_box(0);
x_1 = x_9;
x_2 = x_20;
x_4 = x_19;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_8);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 3);
x_10 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2(x_7, x_2, x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Server_Watchdog_terminateFileWorker(x_8, x_3, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_1 = x_9;
x_2 = x_14;
x_4 = x_13;
goto _start;
}
}
}
lean_object* l_Lean_Server_Watchdog_shutdown(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_19 = lean_box(0);
x_20 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2(x_5, x_19, x_1, x_6);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_7 = x_21;
goto block_18;
block_18:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1(x_5, x_8, x_1, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_shutdown___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_shutdown___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_Watchdog_shutdown(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_runClientTask_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_runClientTask___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_runClientTask___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_runClientTask___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_runClientTask___lambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_readLspMessage), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_Server_Watchdog_runClientTask___closed__1;
x_6 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
x_7 = l_Task_Priority_default;
x_8 = lean_io_as_task(x_6, x_7, x_2);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Server_Watchdog_runClientTask___closed__2;
x_12 = lean_task_map(x_11, x_10, x_7);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = l_Lean_Server_Watchdog_runClientTask___closed__2;
x_16 = lean_task_map(x_15, x_13, x_7);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_8);
if (x_18 == 0)
{
return x_8;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_8, 0);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_runClientTask___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Watchdog_runClientTask___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("shutdown");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_dec(x_5);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1;
x_11 = lean_string_dec_eq(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_2);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_12 = lean_apply_1(x_6, x_1);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_1);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_apply_3(x_3, x_7, x_8, x_13);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_apply_2(x_2, x_7, x_9);
return x_15;
}
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1;
x_19 = lean_string_dec_eq(x_16, x_18);
if (x_19 == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_5);
x_20 = lean_apply_1(x_6, x_1);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_1);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_apply_2(x_5, x_16, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_16);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_1, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 0);
lean_dec(x_25);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_26; 
lean_dec(x_4);
lean_ctor_set(x_1, 0, x_18);
x_26 = lean_apply_1(x_6, x_1);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_free_object(x_1);
lean_dec(x_6);
x_27 = lean_ctor_get(x_17, 0);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_apply_1(x_4, x_27);
return x_28;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_4);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_17);
x_30 = lean_apply_1(x_6, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_6);
x_31 = lean_ctor_get(x_17, 0);
lean_inc(x_31);
lean_dec(x_17);
x_32 = lean_apply_1(x_4, x_31);
return x_32;
}
}
}
}
default: 
{
lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_apply_1(x_6, x_1);
return x_33;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop_match__3___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_5, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_3, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop_match__4___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_4, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop_match__5___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_IO_FS_Stream_writeLspMessage(x_1, x_6, x_3);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Data_Lsp_TextSync_0__Lean_Lsp_fromJsonDidChangeTextDocumentParams____x40_Lean_Data_Lsp_TextSync___hyg_309_(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_Watchdog_parseParams___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_IO_throwServerError___rarg(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3(x_7, x_2, x_3, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_8);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_1 = x_9;
x_2 = x_14;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
lean_inc(x_8);
x_18 = lean_alloc_closure((void*)(l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3___lambda__1), 2, 1);
lean_closure_set(x_18, 0, x_8);
x_19 = lean_ctor_get(x_8, 2);
lean_inc(x_19);
x_20 = l_Task_Priority_default;
lean_inc(x_18);
x_21 = lean_task_map(x_18, x_19, x_20);
x_22 = lean_array_push(x_17, x_21);
x_23 = lean_ctor_get(x_8, 5);
lean_inc(x_23);
lean_dec(x_8);
x_24 = lean_st_ref_get(x_23, x_16);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec(x_18);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_1 = x_9;
x_2 = x_22;
x_4 = x_26;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_ctor_get(x_29, 2);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_task_map(x_18, x_30, x_20);
x_32 = lean_array_push(x_22, x_31);
x_1 = x_9;
x_2 = x_32;
x_4 = x_28;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = l_Lean_Server_Watchdog_runClientTask(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Server_Watchdog_mainLoop(x_5, x_2, x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Internal server error: got termination event for worker that should have been removed");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("IO error while processing events for ");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Got invalid JSON-RPC message");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_mainLoop___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mainLoop___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_task_pure(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
x_600 = lean_ctor_get(x_2, 4);
lean_inc(x_600);
x_601 = lean_st_ref_get(x_600, x_3);
lean_dec(x_600);
x_602 = lean_ctor_get(x_601, 0);
lean_inc(x_602);
x_603 = lean_ctor_get(x_601, 1);
lean_inc(x_603);
lean_dec(x_601);
x_604 = l_Array_empty___closed__1;
x_605 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3(x_602, x_604, x_2, x_603);
x_606 = lean_ctor_get(x_605, 0);
lean_inc(x_606);
x_607 = lean_ctor_get(x_605, 1);
lean_inc(x_607);
lean_dec(x_605);
x_608 = lean_ctor_get(x_606, 0);
lean_inc(x_608);
lean_dec(x_606);
x_4 = x_608;
x_5 = x_607;
goto block_599;
block_599:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = lean_array_push(x_4, x_1);
x_7 = lean_array_to_list(lean_box(0), x_6);
x_8 = lean_io_wait_any(x_7, x_5);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_2);
x_13 = l_Lean_Server_Watchdog_handleEdits(x_12, x_2, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_3 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_dec(x_8);
x_21 = l_Lean_Server_Watchdog_mainLoop___closed__1;
x_22 = l_IO_throwServerError___rarg(x_21, x_20);
return x_22;
}
case 2:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_10);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_dec(x_8);
x_24 = lean_ctor_get(x_9, 0);
lean_inc(x_24);
lean_dec(x_9);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Array_empty___closed__1;
x_29 = l_Lean_Server_Watchdog_handleCrash(x_27, x_28, x_2, x_23);
lean_dec(x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_3 = x_30;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_ctor_get(x_8, 1);
lean_inc(x_36);
lean_dec(x_8);
x_37 = lean_ctor_get(x_9, 0);
lean_inc(x_37);
lean_dec(x_9);
x_38 = lean_ctor_get(x_10, 0);
lean_inc(x_38);
lean_dec(x_10);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_Server_Watchdog_mainLoop___closed__2;
x_43 = lean_string_append(x_42, x_41);
lean_dec(x_41);
x_44 = l___private_Init_Util_0__mkPanicMessage___closed__2;
x_45 = lean_string_append(x_43, x_44);
x_46 = lean_io_error_to_string(x_38);
x_47 = lean_string_append(x_45, x_46);
lean_dec(x_46);
x_48 = l_Lean_instInhabitedParserDescr___closed__1;
x_49 = lean_string_append(x_47, x_48);
x_50 = l_IO_throwServerError___rarg(x_49, x_36);
return x_50;
}
}
}
case 1:
{
lean_object* x_51; 
lean_dec(x_1);
x_51 = lean_ctor_get(x_9, 0);
lean_inc(x_51);
lean_dec(x_9);
switch (lean_obj_tag(x_51)) {
case 0:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_52 = lean_ctor_get(x_8, 1);
lean_inc(x_52);
lean_dec(x_8);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_51, 2);
lean_inc(x_55);
lean_dec(x_51);
x_56 = l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1;
x_57 = lean_string_dec_eq(x_54, x_56);
if (x_57 == 0)
{
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_2);
x_58 = l_Lean_Server_Watchdog_mainLoop___closed__3;
x_59 = l_IO_throwServerError___rarg(x_58, x_52);
return x_59;
}
else
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
lean_dec(x_55);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_62, 0, x_61);
lean_inc(x_2);
x_63 = l_Lean_Server_Watchdog_handleRequest(x_53, x_54, x_62, x_2, x_52);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
lean_inc(x_2);
x_65 = l_Lean_Server_Watchdog_runClientTask(x_2, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_1 = x_66;
x_3 = x_67;
goto _start;
}
else
{
uint8_t x_69; 
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_65);
if (x_69 == 0)
{
return x_65;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_65, 0);
x_71 = lean_ctor_get(x_65, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_65);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_63);
if (x_73 == 0)
{
return x_63;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_63, 0);
x_75 = lean_ctor_get(x_63, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_63);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_60, 0);
lean_inc(x_77);
lean_dec(x_60);
x_78 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_78, 0, x_77);
lean_inc(x_2);
x_79 = l_Lean_Server_Watchdog_handleRequest(x_53, x_54, x_78, x_2, x_52);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
lean_inc(x_2);
x_81 = l_Lean_Server_Watchdog_runClientTask(x_2, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_1 = x_82;
x_3 = x_83;
goto _start;
}
else
{
uint8_t x_85; 
lean_dec(x_2);
x_85 = !lean_is_exclusive(x_81);
if (x_85 == 0)
{
return x_81;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_81, 0);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_81);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_79);
if (x_89 == 0)
{
return x_79;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_79, 0);
x_91 = lean_ctor_get(x_79, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_79);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
}
else
{
lean_object* x_93; 
lean_dec(x_55);
lean_dec(x_54);
x_93 = l_Lean_Server_Watchdog_shutdown(x_2, x_52);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_ctor_get(x_2, 1);
lean_inc(x_95);
lean_dec(x_2);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_53);
lean_ctor_set(x_97, 1, x_96);
x_98 = l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1(x_95, x_97, x_94);
lean_dec(x_97);
return x_98;
}
else
{
uint8_t x_99; 
lean_dec(x_53);
lean_dec(x_2);
x_99 = !lean_is_exclusive(x_93);
if (x_99 == 0)
{
return x_93;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_93, 0);
x_101 = lean_ctor_get(x_93, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_93);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
case 1:
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_103 = lean_ctor_get(x_8, 1);
lean_inc(x_103);
lean_dec(x_8);
x_104 = lean_ctor_get(x_51, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_51, 1);
lean_inc(x_105);
lean_dec(x_51);
x_106 = l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1;
x_107 = lean_string_dec_eq(x_104, x_106);
if (x_107 == 0)
{
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_104);
lean_dec(x_2);
x_108 = l_Lean_Server_Watchdog_mainLoop___closed__3;
x_109 = l_IO_throwServerError___rarg(x_108, x_103);
return x_109;
}
else
{
lean_object* x_110; 
x_110 = lean_ctor_get(x_105, 0);
lean_inc(x_110);
lean_dec(x_105);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
lean_dec(x_110);
x_112 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_112, 0, x_111);
lean_inc(x_2);
x_113 = l_Lean_Server_Watchdog_handleNotification(x_104, x_112, x_2, x_103);
lean_dec(x_104);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
lean_dec(x_113);
lean_inc(x_2);
x_115 = l_Lean_Server_Watchdog_runClientTask(x_2, x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_1 = x_116;
x_3 = x_117;
goto _start;
}
else
{
uint8_t x_119; 
lean_dec(x_2);
x_119 = !lean_is_exclusive(x_115);
if (x_119 == 0)
{
return x_115;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_115, 0);
x_121 = lean_ctor_get(x_115, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_115);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_113);
if (x_123 == 0)
{
return x_113;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_113, 0);
x_125 = lean_ctor_get(x_113, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_113);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_110, 0);
lean_inc(x_127);
lean_dec(x_110);
x_128 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_128, 0, x_127);
lean_inc(x_2);
x_129 = l_Lean_Server_Watchdog_handleNotification(x_104, x_128, x_2, x_103);
lean_dec(x_104);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
lean_dec(x_129);
lean_inc(x_2);
x_131 = l_Lean_Server_Watchdog_runClientTask(x_2, x_130);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_1 = x_132;
x_3 = x_133;
goto _start;
}
else
{
uint8_t x_135; 
lean_dec(x_2);
x_135 = !lean_is_exclusive(x_131);
if (x_135 == 0)
{
return x_131;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_131, 0);
x_137 = lean_ctor_get(x_131, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_131);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_2);
x_139 = !lean_is_exclusive(x_129);
if (x_139 == 0)
{
return x_129;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_129, 0);
x_141 = lean_ctor_get(x_129, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_129);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
}
}
else
{
lean_dec(x_104);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_2);
x_143 = l_Lean_Server_Watchdog_mainLoop___closed__3;
x_144 = l_IO_throwServerError___rarg(x_143, x_103);
return x_144;
}
else
{
uint8_t x_145; 
x_145 = !lean_is_exclusive(x_105);
if (x_145 == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_105, 0);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
lean_dec(x_146);
x_148 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(x_148, x_2, x_103);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_ctor_get(x_150, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 0);
lean_inc(x_154);
x_155 = l_Lean_Server_Watchdog_findFileWorker(x_154, x_2, x_151);
lean_dec(x_154);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_io_mono_ms_now(x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_212; lean_object* x_213; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
lean_dec(x_158);
x_161 = lean_ctor_get(x_2, 6);
lean_inc(x_161);
x_162 = lean_nat_add(x_159, x_161);
lean_dec(x_161);
lean_dec(x_159);
x_163 = lean_ctor_get(x_156, 5);
lean_inc(x_163);
x_212 = lean_st_ref_take(x_163, x_160);
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
if (lean_obj_tag(x_213) == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
lean_dec(x_153);
lean_dec(x_152);
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
lean_dec(x_212);
x_215 = l_Lean_Server_Watchdog_mainLoop___closed__5;
x_216 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_216, 0, x_162);
lean_ctor_set(x_216, 1, x_150);
lean_ctor_set(x_216, 2, x_215);
lean_ctor_set(x_105, 0, x_216);
x_217 = lean_st_ref_set(x_163, x_105, x_214);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_219 = 1;
x_164 = x_219;
x_165 = x_218;
goto block_211;
}
else
{
uint8_t x_220; 
lean_free_object(x_105);
x_220 = !lean_is_exclusive(x_150);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_221 = lean_ctor_get(x_150, 1);
lean_dec(x_221);
x_222 = lean_ctor_get(x_150, 0);
lean_dec(x_222);
x_223 = !lean_is_exclusive(x_213);
if (x_223 == 0)
{
lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_224 = lean_ctor_get(x_213, 0);
x_225 = lean_ctor_get(x_212, 1);
lean_inc(x_225);
lean_dec(x_212);
x_226 = !lean_is_exclusive(x_224);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_233; 
x_227 = lean_ctor_get(x_224, 1);
x_228 = lean_ctor_get(x_224, 0);
lean_dec(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_230 = l_Array_append___rarg(x_229, x_153);
lean_dec(x_153);
lean_ctor_set(x_150, 1, x_230);
lean_ctor_set(x_224, 1, x_150);
lean_ctor_set(x_224, 0, x_162);
x_231 = lean_st_ref_set(x_163, x_213, x_225);
x_232 = lean_ctor_get(x_231, 1);
lean_inc(x_232);
lean_dec(x_231);
x_233 = 0;
x_164 = x_233;
x_165 = x_232;
goto block_211;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_234 = lean_ctor_get(x_224, 1);
x_235 = lean_ctor_get(x_224, 2);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_224);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = l_Array_append___rarg(x_236, x_153);
lean_dec(x_153);
lean_ctor_set(x_150, 1, x_237);
x_238 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_238, 0, x_162);
lean_ctor_set(x_238, 1, x_150);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_213, 0, x_238);
x_239 = lean_st_ref_set(x_163, x_213, x_225);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
lean_dec(x_239);
x_241 = 0;
x_164 = x_241;
x_165 = x_240;
goto block_211;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_242 = lean_ctor_get(x_213, 0);
lean_inc(x_242);
lean_dec(x_213);
x_243 = lean_ctor_get(x_212, 1);
lean_inc(x_243);
lean_dec(x_212);
x_244 = lean_ctor_get(x_242, 1);
lean_inc(x_244);
x_245 = lean_ctor_get(x_242, 2);
lean_inc(x_245);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 lean_ctor_release(x_242, 2);
 x_246 = x_242;
} else {
 lean_dec_ref(x_242);
 x_246 = lean_box(0);
}
x_247 = lean_ctor_get(x_244, 1);
lean_inc(x_247);
lean_dec(x_244);
x_248 = l_Array_append___rarg(x_247, x_153);
lean_dec(x_153);
lean_ctor_set(x_150, 1, x_248);
if (lean_is_scalar(x_246)) {
 x_249 = lean_alloc_ctor(0, 3, 0);
} else {
 x_249 = x_246;
}
lean_ctor_set(x_249, 0, x_162);
lean_ctor_set(x_249, 1, x_150);
lean_ctor_set(x_249, 2, x_245);
x_250 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_250, 0, x_249);
x_251 = lean_st_ref_set(x_163, x_250, x_243);
x_252 = lean_ctor_get(x_251, 1);
lean_inc(x_252);
lean_dec(x_251);
x_253 = 0;
x_164 = x_253;
x_165 = x_252;
goto block_211;
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; uint8_t x_267; 
lean_dec(x_150);
x_254 = lean_ctor_get(x_213, 0);
lean_inc(x_254);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 x_255 = x_213;
} else {
 lean_dec_ref(x_213);
 x_255 = lean_box(0);
}
x_256 = lean_ctor_get(x_212, 1);
lean_inc(x_256);
lean_dec(x_212);
x_257 = lean_ctor_get(x_254, 1);
lean_inc(x_257);
x_258 = lean_ctor_get(x_254, 2);
lean_inc(x_258);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 lean_ctor_release(x_254, 2);
 x_259 = x_254;
} else {
 lean_dec_ref(x_254);
 x_259 = lean_box(0);
}
x_260 = lean_ctor_get(x_257, 1);
lean_inc(x_260);
lean_dec(x_257);
x_261 = l_Array_append___rarg(x_260, x_153);
lean_dec(x_153);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_152);
lean_ctor_set(x_262, 1, x_261);
if (lean_is_scalar(x_259)) {
 x_263 = lean_alloc_ctor(0, 3, 0);
} else {
 x_263 = x_259;
}
lean_ctor_set(x_263, 0, x_162);
lean_ctor_set(x_263, 1, x_262);
lean_ctor_set(x_263, 2, x_258);
if (lean_is_scalar(x_255)) {
 x_264 = lean_alloc_ctor(1, 1, 0);
} else {
 x_264 = x_255;
}
lean_ctor_set(x_264, 0, x_263);
x_265 = lean_st_ref_set(x_163, x_264, x_256);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
lean_dec(x_265);
x_267 = 0;
x_164 = x_267;
x_165 = x_266;
goto block_211;
}
}
block_211:
{
lean_object* x_166; 
x_166 = l_Lean_Server_Watchdog_mainLoop___closed__4;
if (x_164 == 0)
{
lean_object* x_167; lean_object* x_168; 
lean_dec(x_163);
lean_dec(x_156);
x_167 = lean_box(0);
x_168 = lean_apply_3(x_166, x_167, x_2, x_165);
return x_168;
}
else
{
lean_object* x_169; 
x_169 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(x_156, x_165);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
x_172 = lean_st_ref_take(x_163, x_171);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_170);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_box(0);
x_176 = lean_st_ref_set(x_163, x_175, x_174);
lean_dec(x_163);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = lean_apply_3(x_166, x_177, x_2, x_178);
return x_179;
}
else
{
uint8_t x_180; 
x_180 = !lean_is_exclusive(x_173);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_181 = lean_ctor_get(x_173, 0);
x_182 = lean_ctor_get(x_172, 1);
lean_inc(x_182);
lean_dec(x_172);
x_183 = !lean_is_exclusive(x_181);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_184 = lean_ctor_get(x_181, 2);
lean_dec(x_184);
lean_ctor_set(x_181, 2, x_170);
x_185 = lean_st_ref_set(x_163, x_173, x_182);
lean_dec(x_163);
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = lean_apply_3(x_166, x_186, x_2, x_187);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_189 = lean_ctor_get(x_181, 0);
x_190 = lean_ctor_get(x_181, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_181);
x_191 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
lean_ctor_set(x_191, 2, x_170);
lean_ctor_set(x_173, 0, x_191);
x_192 = lean_st_ref_set(x_163, x_173, x_182);
lean_dec(x_163);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_195 = lean_apply_3(x_166, x_193, x_2, x_194);
return x_195;
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_196 = lean_ctor_get(x_173, 0);
lean_inc(x_196);
lean_dec(x_173);
x_197 = lean_ctor_get(x_172, 1);
lean_inc(x_197);
lean_dec(x_172);
x_198 = lean_ctor_get(x_196, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_196, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 lean_ctor_release(x_196, 2);
 x_200 = x_196;
} else {
 lean_dec_ref(x_196);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(0, 3, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
lean_ctor_set(x_201, 2, x_170);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_201);
x_203 = lean_st_ref_set(x_163, x_202, x_197);
lean_dec(x_163);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_206 = lean_apply_3(x_166, x_204, x_2, x_205);
return x_206;
}
}
}
else
{
uint8_t x_207; 
lean_dec(x_163);
lean_dec(x_2);
x_207 = !lean_is_exclusive(x_169);
if (x_207 == 0)
{
return x_169;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_169, 0);
x_209 = lean_ctor_get(x_169, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_169);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
}
}
}
else
{
uint8_t x_268; 
lean_dec(x_156);
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_150);
lean_free_object(x_105);
lean_dec(x_2);
x_268 = !lean_is_exclusive(x_158);
if (x_268 == 0)
{
return x_158;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_269 = lean_ctor_get(x_158, 0);
x_270 = lean_ctor_get(x_158, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_158);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_269);
lean_ctor_set(x_271, 1, x_270);
return x_271;
}
}
}
else
{
uint8_t x_272; 
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_150);
lean_free_object(x_105);
lean_dec(x_2);
x_272 = !lean_is_exclusive(x_155);
if (x_272 == 0)
{
return x_155;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_155, 0);
x_274 = lean_ctor_get(x_155, 1);
lean_inc(x_274);
lean_inc(x_273);
lean_dec(x_155);
x_275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_275, 0, x_273);
lean_ctor_set(x_275, 1, x_274);
return x_275;
}
}
}
else
{
uint8_t x_276; 
lean_free_object(x_105);
lean_dec(x_2);
x_276 = !lean_is_exclusive(x_149);
if (x_276 == 0)
{
return x_149;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_149, 0);
x_278 = lean_ctor_get(x_149, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_149);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_146, 0);
lean_inc(x_280);
lean_dec(x_146);
x_281 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_281, 0, x_280);
x_282 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(x_281, x_2, x_103);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
x_285 = lean_ctor_get(x_283, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_283, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 0);
lean_inc(x_287);
x_288 = l_Lean_Server_Watchdog_findFileWorker(x_287, x_2, x_284);
lean_dec(x_287);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = lean_io_mono_ms_now(x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; uint8_t x_297; lean_object* x_298; lean_object* x_345; lean_object* x_346; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_294 = lean_ctor_get(x_2, 6);
lean_inc(x_294);
x_295 = lean_nat_add(x_292, x_294);
lean_dec(x_294);
lean_dec(x_292);
x_296 = lean_ctor_get(x_289, 5);
lean_inc(x_296);
x_345 = lean_st_ref_take(x_296, x_293);
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
if (lean_obj_tag(x_346) == 0)
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; 
lean_dec(x_286);
lean_dec(x_285);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
x_348 = l_Lean_Server_Watchdog_mainLoop___closed__5;
x_349 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_349, 0, x_295);
lean_ctor_set(x_349, 1, x_283);
lean_ctor_set(x_349, 2, x_348);
lean_ctor_set(x_105, 0, x_349);
x_350 = lean_st_ref_set(x_296, x_105, x_347);
x_351 = lean_ctor_get(x_350, 1);
lean_inc(x_351);
lean_dec(x_350);
x_352 = 1;
x_297 = x_352;
x_298 = x_351;
goto block_344;
}
else
{
uint8_t x_353; 
lean_free_object(x_105);
x_353 = !lean_is_exclusive(x_283);
if (x_353 == 0)
{
lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_354 = lean_ctor_get(x_283, 1);
lean_dec(x_354);
x_355 = lean_ctor_get(x_283, 0);
lean_dec(x_355);
x_356 = !lean_is_exclusive(x_346);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; uint8_t x_359; 
x_357 = lean_ctor_get(x_346, 0);
x_358 = lean_ctor_get(x_345, 1);
lean_inc(x_358);
lean_dec(x_345);
x_359 = !lean_is_exclusive(x_357);
if (x_359 == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; uint8_t x_366; 
x_360 = lean_ctor_get(x_357, 1);
x_361 = lean_ctor_get(x_357, 0);
lean_dec(x_361);
x_362 = lean_ctor_get(x_360, 1);
lean_inc(x_362);
lean_dec(x_360);
x_363 = l_Array_append___rarg(x_362, x_286);
lean_dec(x_286);
lean_ctor_set(x_283, 1, x_363);
lean_ctor_set(x_357, 1, x_283);
lean_ctor_set(x_357, 0, x_295);
x_364 = lean_st_ref_set(x_296, x_346, x_358);
x_365 = lean_ctor_get(x_364, 1);
lean_inc(x_365);
lean_dec(x_364);
x_366 = 0;
x_297 = x_366;
x_298 = x_365;
goto block_344;
}
else
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_367 = lean_ctor_get(x_357, 1);
x_368 = lean_ctor_get(x_357, 2);
lean_inc(x_368);
lean_inc(x_367);
lean_dec(x_357);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
x_370 = l_Array_append___rarg(x_369, x_286);
lean_dec(x_286);
lean_ctor_set(x_283, 1, x_370);
x_371 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_371, 0, x_295);
lean_ctor_set(x_371, 1, x_283);
lean_ctor_set(x_371, 2, x_368);
lean_ctor_set(x_346, 0, x_371);
x_372 = lean_st_ref_set(x_296, x_346, x_358);
x_373 = lean_ctor_get(x_372, 1);
lean_inc(x_373);
lean_dec(x_372);
x_374 = 0;
x_297 = x_374;
x_298 = x_373;
goto block_344;
}
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; uint8_t x_386; 
x_375 = lean_ctor_get(x_346, 0);
lean_inc(x_375);
lean_dec(x_346);
x_376 = lean_ctor_get(x_345, 1);
lean_inc(x_376);
lean_dec(x_345);
x_377 = lean_ctor_get(x_375, 1);
lean_inc(x_377);
x_378 = lean_ctor_get(x_375, 2);
lean_inc(x_378);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_379 = x_375;
} else {
 lean_dec_ref(x_375);
 x_379 = lean_box(0);
}
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
lean_dec(x_377);
x_381 = l_Array_append___rarg(x_380, x_286);
lean_dec(x_286);
lean_ctor_set(x_283, 1, x_381);
if (lean_is_scalar(x_379)) {
 x_382 = lean_alloc_ctor(0, 3, 0);
} else {
 x_382 = x_379;
}
lean_ctor_set(x_382, 0, x_295);
lean_ctor_set(x_382, 1, x_283);
lean_ctor_set(x_382, 2, x_378);
x_383 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_383, 0, x_382);
x_384 = lean_st_ref_set(x_296, x_383, x_376);
x_385 = lean_ctor_get(x_384, 1);
lean_inc(x_385);
lean_dec(x_384);
x_386 = 0;
x_297 = x_386;
x_298 = x_385;
goto block_344;
}
}
else
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; uint8_t x_400; 
lean_dec(x_283);
x_387 = lean_ctor_get(x_346, 0);
lean_inc(x_387);
if (lean_is_exclusive(x_346)) {
 lean_ctor_release(x_346, 0);
 x_388 = x_346;
} else {
 lean_dec_ref(x_346);
 x_388 = lean_box(0);
}
x_389 = lean_ctor_get(x_345, 1);
lean_inc(x_389);
lean_dec(x_345);
x_390 = lean_ctor_get(x_387, 1);
lean_inc(x_390);
x_391 = lean_ctor_get(x_387, 2);
lean_inc(x_391);
if (lean_is_exclusive(x_387)) {
 lean_ctor_release(x_387, 0);
 lean_ctor_release(x_387, 1);
 lean_ctor_release(x_387, 2);
 x_392 = x_387;
} else {
 lean_dec_ref(x_387);
 x_392 = lean_box(0);
}
x_393 = lean_ctor_get(x_390, 1);
lean_inc(x_393);
lean_dec(x_390);
x_394 = l_Array_append___rarg(x_393, x_286);
lean_dec(x_286);
x_395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_395, 0, x_285);
lean_ctor_set(x_395, 1, x_394);
if (lean_is_scalar(x_392)) {
 x_396 = lean_alloc_ctor(0, 3, 0);
} else {
 x_396 = x_392;
}
lean_ctor_set(x_396, 0, x_295);
lean_ctor_set(x_396, 1, x_395);
lean_ctor_set(x_396, 2, x_391);
if (lean_is_scalar(x_388)) {
 x_397 = lean_alloc_ctor(1, 1, 0);
} else {
 x_397 = x_388;
}
lean_ctor_set(x_397, 0, x_396);
x_398 = lean_st_ref_set(x_296, x_397, x_389);
x_399 = lean_ctor_get(x_398, 1);
lean_inc(x_399);
lean_dec(x_398);
x_400 = 0;
x_297 = x_400;
x_298 = x_399;
goto block_344;
}
}
block_344:
{
lean_object* x_299; 
x_299 = l_Lean_Server_Watchdog_mainLoop___closed__4;
if (x_297 == 0)
{
lean_object* x_300; lean_object* x_301; 
lean_dec(x_296);
lean_dec(x_289);
x_300 = lean_box(0);
x_301 = lean_apply_3(x_299, x_300, x_2, x_298);
return x_301;
}
else
{
lean_object* x_302; 
x_302 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(x_289, x_298);
if (lean_obj_tag(x_302) == 0)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
lean_dec(x_302);
x_305 = lean_st_ref_take(x_296, x_304);
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_303);
x_307 = lean_ctor_get(x_305, 1);
lean_inc(x_307);
lean_dec(x_305);
x_308 = lean_box(0);
x_309 = lean_st_ref_set(x_296, x_308, x_307);
lean_dec(x_296);
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
lean_dec(x_309);
x_312 = lean_apply_3(x_299, x_310, x_2, x_311);
return x_312;
}
else
{
uint8_t x_313; 
x_313 = !lean_is_exclusive(x_306);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_314 = lean_ctor_get(x_306, 0);
x_315 = lean_ctor_get(x_305, 1);
lean_inc(x_315);
lean_dec(x_305);
x_316 = !lean_is_exclusive(x_314);
if (x_316 == 0)
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_317 = lean_ctor_get(x_314, 2);
lean_dec(x_317);
lean_ctor_set(x_314, 2, x_303);
x_318 = lean_st_ref_set(x_296, x_306, x_315);
lean_dec(x_296);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
x_321 = lean_apply_3(x_299, x_319, x_2, x_320);
return x_321;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_322 = lean_ctor_get(x_314, 0);
x_323 = lean_ctor_get(x_314, 1);
lean_inc(x_323);
lean_inc(x_322);
lean_dec(x_314);
x_324 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_324, 0, x_322);
lean_ctor_set(x_324, 1, x_323);
lean_ctor_set(x_324, 2, x_303);
lean_ctor_set(x_306, 0, x_324);
x_325 = lean_st_ref_set(x_296, x_306, x_315);
lean_dec(x_296);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
lean_dec(x_325);
x_328 = lean_apply_3(x_299, x_326, x_2, x_327);
return x_328;
}
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_329 = lean_ctor_get(x_306, 0);
lean_inc(x_329);
lean_dec(x_306);
x_330 = lean_ctor_get(x_305, 1);
lean_inc(x_330);
lean_dec(x_305);
x_331 = lean_ctor_get(x_329, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_329, 1);
lean_inc(x_332);
if (lean_is_exclusive(x_329)) {
 lean_ctor_release(x_329, 0);
 lean_ctor_release(x_329, 1);
 lean_ctor_release(x_329, 2);
 x_333 = x_329;
} else {
 lean_dec_ref(x_329);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(0, 3, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_331);
lean_ctor_set(x_334, 1, x_332);
lean_ctor_set(x_334, 2, x_303);
x_335 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_335, 0, x_334);
x_336 = lean_st_ref_set(x_296, x_335, x_330);
lean_dec(x_296);
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
x_339 = lean_apply_3(x_299, x_337, x_2, x_338);
return x_339;
}
}
}
else
{
uint8_t x_340; 
lean_dec(x_296);
lean_dec(x_2);
x_340 = !lean_is_exclusive(x_302);
if (x_340 == 0)
{
return x_302;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_341 = lean_ctor_get(x_302, 0);
x_342 = lean_ctor_get(x_302, 1);
lean_inc(x_342);
lean_inc(x_341);
lean_dec(x_302);
x_343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_343, 0, x_341);
lean_ctor_set(x_343, 1, x_342);
return x_343;
}
}
}
}
}
else
{
uint8_t x_401; 
lean_dec(x_289);
lean_dec(x_286);
lean_dec(x_285);
lean_dec(x_283);
lean_free_object(x_105);
lean_dec(x_2);
x_401 = !lean_is_exclusive(x_291);
if (x_401 == 0)
{
return x_291;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_291, 0);
x_403 = lean_ctor_get(x_291, 1);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_291);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_402);
lean_ctor_set(x_404, 1, x_403);
return x_404;
}
}
}
else
{
uint8_t x_405; 
lean_dec(x_286);
lean_dec(x_285);
lean_dec(x_283);
lean_free_object(x_105);
lean_dec(x_2);
x_405 = !lean_is_exclusive(x_288);
if (x_405 == 0)
{
return x_288;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_288, 0);
x_407 = lean_ctor_get(x_288, 1);
lean_inc(x_407);
lean_inc(x_406);
lean_dec(x_288);
x_408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_408, 0, x_406);
lean_ctor_set(x_408, 1, x_407);
return x_408;
}
}
}
else
{
uint8_t x_409; 
lean_free_object(x_105);
lean_dec(x_2);
x_409 = !lean_is_exclusive(x_282);
if (x_409 == 0)
{
return x_282;
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_410 = lean_ctor_get(x_282, 0);
x_411 = lean_ctor_get(x_282, 1);
lean_inc(x_411);
lean_inc(x_410);
lean_dec(x_282);
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_411);
return x_412;
}
}
}
}
else
{
lean_object* x_413; 
x_413 = lean_ctor_get(x_105, 0);
lean_inc(x_413);
lean_dec(x_105);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
lean_dec(x_413);
x_415 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_415, 0, x_414);
x_416 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(x_415, x_2, x_103);
if (lean_obj_tag(x_416) == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_417 = lean_ctor_get(x_416, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_416, 1);
lean_inc(x_418);
lean_dec(x_416);
x_419 = lean_ctor_get(x_417, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_417, 1);
lean_inc(x_420);
x_421 = lean_ctor_get(x_419, 0);
lean_inc(x_421);
x_422 = l_Lean_Server_Watchdog_findFileWorker(x_421, x_2, x_418);
lean_dec(x_421);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = lean_io_mono_ms_now(x_424);
if (lean_obj_tag(x_425) == 0)
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; uint8_t x_431; lean_object* x_432; lean_object* x_464; lean_object* x_465; 
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_ctor_get(x_425, 1);
lean_inc(x_427);
lean_dec(x_425);
x_428 = lean_ctor_get(x_2, 6);
lean_inc(x_428);
x_429 = lean_nat_add(x_426, x_428);
lean_dec(x_428);
lean_dec(x_426);
x_430 = lean_ctor_get(x_423, 5);
lean_inc(x_430);
x_464 = lean_st_ref_take(x_430, x_427);
x_465 = lean_ctor_get(x_464, 0);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; uint8_t x_472; 
lean_dec(x_420);
lean_dec(x_419);
x_466 = lean_ctor_get(x_464, 1);
lean_inc(x_466);
lean_dec(x_464);
x_467 = l_Lean_Server_Watchdog_mainLoop___closed__5;
x_468 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_468, 0, x_429);
lean_ctor_set(x_468, 1, x_417);
lean_ctor_set(x_468, 2, x_467);
x_469 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_469, 0, x_468);
x_470 = lean_st_ref_set(x_430, x_469, x_466);
x_471 = lean_ctor_get(x_470, 1);
lean_inc(x_471);
lean_dec(x_470);
x_472 = 1;
x_431 = x_472;
x_432 = x_471;
goto block_463;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; uint8_t x_487; 
if (lean_is_exclusive(x_417)) {
 lean_ctor_release(x_417, 0);
 lean_ctor_release(x_417, 1);
 x_473 = x_417;
} else {
 lean_dec_ref(x_417);
 x_473 = lean_box(0);
}
x_474 = lean_ctor_get(x_465, 0);
lean_inc(x_474);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 x_475 = x_465;
} else {
 lean_dec_ref(x_465);
 x_475 = lean_box(0);
}
x_476 = lean_ctor_get(x_464, 1);
lean_inc(x_476);
lean_dec(x_464);
x_477 = lean_ctor_get(x_474, 1);
lean_inc(x_477);
x_478 = lean_ctor_get(x_474, 2);
lean_inc(x_478);
if (lean_is_exclusive(x_474)) {
 lean_ctor_release(x_474, 0);
 lean_ctor_release(x_474, 1);
 lean_ctor_release(x_474, 2);
 x_479 = x_474;
} else {
 lean_dec_ref(x_474);
 x_479 = lean_box(0);
}
x_480 = lean_ctor_get(x_477, 1);
lean_inc(x_480);
lean_dec(x_477);
x_481 = l_Array_append___rarg(x_480, x_420);
lean_dec(x_420);
if (lean_is_scalar(x_473)) {
 x_482 = lean_alloc_ctor(0, 2, 0);
} else {
 x_482 = x_473;
}
lean_ctor_set(x_482, 0, x_419);
lean_ctor_set(x_482, 1, x_481);
if (lean_is_scalar(x_479)) {
 x_483 = lean_alloc_ctor(0, 3, 0);
} else {
 x_483 = x_479;
}
lean_ctor_set(x_483, 0, x_429);
lean_ctor_set(x_483, 1, x_482);
lean_ctor_set(x_483, 2, x_478);
if (lean_is_scalar(x_475)) {
 x_484 = lean_alloc_ctor(1, 1, 0);
} else {
 x_484 = x_475;
}
lean_ctor_set(x_484, 0, x_483);
x_485 = lean_st_ref_set(x_430, x_484, x_476);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
lean_dec(x_485);
x_487 = 0;
x_431 = x_487;
x_432 = x_486;
goto block_463;
}
block_463:
{
lean_object* x_433; 
x_433 = l_Lean_Server_Watchdog_mainLoop___closed__4;
if (x_431 == 0)
{
lean_object* x_434; lean_object* x_435; 
lean_dec(x_430);
lean_dec(x_423);
x_434 = lean_box(0);
x_435 = lean_apply_3(x_433, x_434, x_2, x_432);
return x_435;
}
else
{
lean_object* x_436; 
x_436 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(x_423, x_432);
if (lean_obj_tag(x_436) == 0)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_437 = lean_ctor_get(x_436, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_436, 1);
lean_inc(x_438);
lean_dec(x_436);
x_439 = lean_st_ref_take(x_430, x_438);
x_440 = lean_ctor_get(x_439, 0);
lean_inc(x_440);
if (lean_obj_tag(x_440) == 0)
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
lean_dec(x_437);
x_441 = lean_ctor_get(x_439, 1);
lean_inc(x_441);
lean_dec(x_439);
x_442 = lean_box(0);
x_443 = lean_st_ref_set(x_430, x_442, x_441);
lean_dec(x_430);
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_443, 1);
lean_inc(x_445);
lean_dec(x_443);
x_446 = lean_apply_3(x_433, x_444, x_2, x_445);
return x_446;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_447 = lean_ctor_get(x_440, 0);
lean_inc(x_447);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 x_448 = x_440;
} else {
 lean_dec_ref(x_440);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_439, 1);
lean_inc(x_449);
lean_dec(x_439);
x_450 = lean_ctor_get(x_447, 0);
lean_inc(x_450);
x_451 = lean_ctor_get(x_447, 1);
lean_inc(x_451);
if (lean_is_exclusive(x_447)) {
 lean_ctor_release(x_447, 0);
 lean_ctor_release(x_447, 1);
 lean_ctor_release(x_447, 2);
 x_452 = x_447;
} else {
 lean_dec_ref(x_447);
 x_452 = lean_box(0);
}
if (lean_is_scalar(x_452)) {
 x_453 = lean_alloc_ctor(0, 3, 0);
} else {
 x_453 = x_452;
}
lean_ctor_set(x_453, 0, x_450);
lean_ctor_set(x_453, 1, x_451);
lean_ctor_set(x_453, 2, x_437);
if (lean_is_scalar(x_448)) {
 x_454 = lean_alloc_ctor(1, 1, 0);
} else {
 x_454 = x_448;
}
lean_ctor_set(x_454, 0, x_453);
x_455 = lean_st_ref_set(x_430, x_454, x_449);
lean_dec(x_430);
x_456 = lean_ctor_get(x_455, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_455, 1);
lean_inc(x_457);
lean_dec(x_455);
x_458 = lean_apply_3(x_433, x_456, x_2, x_457);
return x_458;
}
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; 
lean_dec(x_430);
lean_dec(x_2);
x_459 = lean_ctor_get(x_436, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_436, 1);
lean_inc(x_460);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_461 = x_436;
} else {
 lean_dec_ref(x_436);
 x_461 = lean_box(0);
}
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 2, 0);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_459);
lean_ctor_set(x_462, 1, x_460);
return x_462;
}
}
}
}
else
{
lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; 
lean_dec(x_423);
lean_dec(x_420);
lean_dec(x_419);
lean_dec(x_417);
lean_dec(x_2);
x_488 = lean_ctor_get(x_425, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_425, 1);
lean_inc(x_489);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 x_490 = x_425;
} else {
 lean_dec_ref(x_425);
 x_490 = lean_box(0);
}
if (lean_is_scalar(x_490)) {
 x_491 = lean_alloc_ctor(1, 2, 0);
} else {
 x_491 = x_490;
}
lean_ctor_set(x_491, 0, x_488);
lean_ctor_set(x_491, 1, x_489);
return x_491;
}
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; 
lean_dec(x_420);
lean_dec(x_419);
lean_dec(x_417);
lean_dec(x_2);
x_492 = lean_ctor_get(x_422, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_422, 1);
lean_inc(x_493);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 x_494 = x_422;
} else {
 lean_dec_ref(x_422);
 x_494 = lean_box(0);
}
if (lean_is_scalar(x_494)) {
 x_495 = lean_alloc_ctor(1, 2, 0);
} else {
 x_495 = x_494;
}
lean_ctor_set(x_495, 0, x_492);
lean_ctor_set(x_495, 1, x_493);
return x_495;
}
}
else
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
lean_dec(x_2);
x_496 = lean_ctor_get(x_416, 0);
lean_inc(x_496);
x_497 = lean_ctor_get(x_416, 1);
lean_inc(x_497);
if (lean_is_exclusive(x_416)) {
 lean_ctor_release(x_416, 0);
 lean_ctor_release(x_416, 1);
 x_498 = x_416;
} else {
 lean_dec_ref(x_416);
 x_498 = lean_box(0);
}
if (lean_is_scalar(x_498)) {
 x_499 = lean_alloc_ctor(1, 2, 0);
} else {
 x_499 = x_498;
}
lean_ctor_set(x_499, 0, x_496);
lean_ctor_set(x_499, 1, x_497);
return x_499;
}
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; 
x_500 = lean_ctor_get(x_413, 0);
lean_inc(x_500);
lean_dec(x_413);
x_501 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_501, 0, x_500);
x_502 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(x_501, x_2, x_103);
if (lean_obj_tag(x_502) == 0)
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; 
x_503 = lean_ctor_get(x_502, 0);
lean_inc(x_503);
x_504 = lean_ctor_get(x_502, 1);
lean_inc(x_504);
lean_dec(x_502);
x_505 = lean_ctor_get(x_503, 0);
lean_inc(x_505);
x_506 = lean_ctor_get(x_503, 1);
lean_inc(x_506);
x_507 = lean_ctor_get(x_505, 0);
lean_inc(x_507);
x_508 = l_Lean_Server_Watchdog_findFileWorker(x_507, x_2, x_504);
lean_dec(x_507);
if (lean_obj_tag(x_508) == 0)
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; 
x_509 = lean_ctor_get(x_508, 0);
lean_inc(x_509);
x_510 = lean_ctor_get(x_508, 1);
lean_inc(x_510);
lean_dec(x_508);
x_511 = lean_io_mono_ms_now(x_510);
if (lean_obj_tag(x_511) == 0)
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; uint8_t x_517; lean_object* x_518; lean_object* x_550; lean_object* x_551; 
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_511, 1);
lean_inc(x_513);
lean_dec(x_511);
x_514 = lean_ctor_get(x_2, 6);
lean_inc(x_514);
x_515 = lean_nat_add(x_512, x_514);
lean_dec(x_514);
lean_dec(x_512);
x_516 = lean_ctor_get(x_509, 5);
lean_inc(x_516);
x_550 = lean_st_ref_take(x_516, x_513);
x_551 = lean_ctor_get(x_550, 0);
lean_inc(x_551);
if (lean_obj_tag(x_551) == 0)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; uint8_t x_558; 
lean_dec(x_506);
lean_dec(x_505);
x_552 = lean_ctor_get(x_550, 1);
lean_inc(x_552);
lean_dec(x_550);
x_553 = l_Lean_Server_Watchdog_mainLoop___closed__5;
x_554 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_554, 0, x_515);
lean_ctor_set(x_554, 1, x_503);
lean_ctor_set(x_554, 2, x_553);
x_555 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_555, 0, x_554);
x_556 = lean_st_ref_set(x_516, x_555, x_552);
x_557 = lean_ctor_get(x_556, 1);
lean_inc(x_557);
lean_dec(x_556);
x_558 = 1;
x_517 = x_558;
x_518 = x_557;
goto block_549;
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; uint8_t x_573; 
if (lean_is_exclusive(x_503)) {
 lean_ctor_release(x_503, 0);
 lean_ctor_release(x_503, 1);
 x_559 = x_503;
} else {
 lean_dec_ref(x_503);
 x_559 = lean_box(0);
}
x_560 = lean_ctor_get(x_551, 0);
lean_inc(x_560);
if (lean_is_exclusive(x_551)) {
 lean_ctor_release(x_551, 0);
 x_561 = x_551;
} else {
 lean_dec_ref(x_551);
 x_561 = lean_box(0);
}
x_562 = lean_ctor_get(x_550, 1);
lean_inc(x_562);
lean_dec(x_550);
x_563 = lean_ctor_get(x_560, 1);
lean_inc(x_563);
x_564 = lean_ctor_get(x_560, 2);
lean_inc(x_564);
if (lean_is_exclusive(x_560)) {
 lean_ctor_release(x_560, 0);
 lean_ctor_release(x_560, 1);
 lean_ctor_release(x_560, 2);
 x_565 = x_560;
} else {
 lean_dec_ref(x_560);
 x_565 = lean_box(0);
}
x_566 = lean_ctor_get(x_563, 1);
lean_inc(x_566);
lean_dec(x_563);
x_567 = l_Array_append___rarg(x_566, x_506);
lean_dec(x_506);
if (lean_is_scalar(x_559)) {
 x_568 = lean_alloc_ctor(0, 2, 0);
} else {
 x_568 = x_559;
}
lean_ctor_set(x_568, 0, x_505);
lean_ctor_set(x_568, 1, x_567);
if (lean_is_scalar(x_565)) {
 x_569 = lean_alloc_ctor(0, 3, 0);
} else {
 x_569 = x_565;
}
lean_ctor_set(x_569, 0, x_515);
lean_ctor_set(x_569, 1, x_568);
lean_ctor_set(x_569, 2, x_564);
if (lean_is_scalar(x_561)) {
 x_570 = lean_alloc_ctor(1, 1, 0);
} else {
 x_570 = x_561;
}
lean_ctor_set(x_570, 0, x_569);
x_571 = lean_st_ref_set(x_516, x_570, x_562);
x_572 = lean_ctor_get(x_571, 1);
lean_inc(x_572);
lean_dec(x_571);
x_573 = 0;
x_517 = x_573;
x_518 = x_572;
goto block_549;
}
block_549:
{
lean_object* x_519; 
x_519 = l_Lean_Server_Watchdog_mainLoop___closed__4;
if (x_517 == 0)
{
lean_object* x_520; lean_object* x_521; 
lean_dec(x_516);
lean_dec(x_509);
x_520 = lean_box(0);
x_521 = lean_apply_3(x_519, x_520, x_2, x_518);
return x_521;
}
else
{
lean_object* x_522; 
x_522 = l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask(x_509, x_518);
if (lean_obj_tag(x_522) == 0)
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
x_523 = lean_ctor_get(x_522, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_522, 1);
lean_inc(x_524);
lean_dec(x_522);
x_525 = lean_st_ref_take(x_516, x_524);
x_526 = lean_ctor_get(x_525, 0);
lean_inc(x_526);
if (lean_obj_tag(x_526) == 0)
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; 
lean_dec(x_523);
x_527 = lean_ctor_get(x_525, 1);
lean_inc(x_527);
lean_dec(x_525);
x_528 = lean_box(0);
x_529 = lean_st_ref_set(x_516, x_528, x_527);
lean_dec(x_516);
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
x_531 = lean_ctor_get(x_529, 1);
lean_inc(x_531);
lean_dec(x_529);
x_532 = lean_apply_3(x_519, x_530, x_2, x_531);
return x_532;
}
else
{
lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_533 = lean_ctor_get(x_526, 0);
lean_inc(x_533);
if (lean_is_exclusive(x_526)) {
 lean_ctor_release(x_526, 0);
 x_534 = x_526;
} else {
 lean_dec_ref(x_526);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_525, 1);
lean_inc(x_535);
lean_dec(x_525);
x_536 = lean_ctor_get(x_533, 0);
lean_inc(x_536);
x_537 = lean_ctor_get(x_533, 1);
lean_inc(x_537);
if (lean_is_exclusive(x_533)) {
 lean_ctor_release(x_533, 0);
 lean_ctor_release(x_533, 1);
 lean_ctor_release(x_533, 2);
 x_538 = x_533;
} else {
 lean_dec_ref(x_533);
 x_538 = lean_box(0);
}
if (lean_is_scalar(x_538)) {
 x_539 = lean_alloc_ctor(0, 3, 0);
} else {
 x_539 = x_538;
}
lean_ctor_set(x_539, 0, x_536);
lean_ctor_set(x_539, 1, x_537);
lean_ctor_set(x_539, 2, x_523);
if (lean_is_scalar(x_534)) {
 x_540 = lean_alloc_ctor(1, 1, 0);
} else {
 x_540 = x_534;
}
lean_ctor_set(x_540, 0, x_539);
x_541 = lean_st_ref_set(x_516, x_540, x_535);
lean_dec(x_516);
x_542 = lean_ctor_get(x_541, 0);
lean_inc(x_542);
x_543 = lean_ctor_get(x_541, 1);
lean_inc(x_543);
lean_dec(x_541);
x_544 = lean_apply_3(x_519, x_542, x_2, x_543);
return x_544;
}
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; 
lean_dec(x_516);
lean_dec(x_2);
x_545 = lean_ctor_get(x_522, 0);
lean_inc(x_545);
x_546 = lean_ctor_get(x_522, 1);
lean_inc(x_546);
if (lean_is_exclusive(x_522)) {
 lean_ctor_release(x_522, 0);
 lean_ctor_release(x_522, 1);
 x_547 = x_522;
} else {
 lean_dec_ref(x_522);
 x_547 = lean_box(0);
}
if (lean_is_scalar(x_547)) {
 x_548 = lean_alloc_ctor(1, 2, 0);
} else {
 x_548 = x_547;
}
lean_ctor_set(x_548, 0, x_545);
lean_ctor_set(x_548, 1, x_546);
return x_548;
}
}
}
}
else
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_509);
lean_dec(x_506);
lean_dec(x_505);
lean_dec(x_503);
lean_dec(x_2);
x_574 = lean_ctor_get(x_511, 0);
lean_inc(x_574);
x_575 = lean_ctor_get(x_511, 1);
lean_inc(x_575);
if (lean_is_exclusive(x_511)) {
 lean_ctor_release(x_511, 0);
 lean_ctor_release(x_511, 1);
 x_576 = x_511;
} else {
 lean_dec_ref(x_511);
 x_576 = lean_box(0);
}
if (lean_is_scalar(x_576)) {
 x_577 = lean_alloc_ctor(1, 2, 0);
} else {
 x_577 = x_576;
}
lean_ctor_set(x_577, 0, x_574);
lean_ctor_set(x_577, 1, x_575);
return x_577;
}
}
else
{
lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; 
lean_dec(x_506);
lean_dec(x_505);
lean_dec(x_503);
lean_dec(x_2);
x_578 = lean_ctor_get(x_508, 0);
lean_inc(x_578);
x_579 = lean_ctor_get(x_508, 1);
lean_inc(x_579);
if (lean_is_exclusive(x_508)) {
 lean_ctor_release(x_508, 0);
 lean_ctor_release(x_508, 1);
 x_580 = x_508;
} else {
 lean_dec_ref(x_508);
 x_580 = lean_box(0);
}
if (lean_is_scalar(x_580)) {
 x_581 = lean_alloc_ctor(1, 2, 0);
} else {
 x_581 = x_580;
}
lean_ctor_set(x_581, 0, x_578);
lean_ctor_set(x_581, 1, x_579);
return x_581;
}
}
else
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; 
lean_dec(x_2);
x_582 = lean_ctor_get(x_502, 0);
lean_inc(x_582);
x_583 = lean_ctor_get(x_502, 1);
lean_inc(x_583);
if (lean_is_exclusive(x_502)) {
 lean_ctor_release(x_502, 0);
 lean_ctor_release(x_502, 1);
 x_584 = x_502;
} else {
 lean_dec_ref(x_502);
 x_584 = lean_box(0);
}
if (lean_is_scalar(x_584)) {
 x_585 = lean_alloc_ctor(1, 2, 0);
} else {
 x_585 = x_584;
}
lean_ctor_set(x_585, 0, x_582);
lean_ctor_set(x_585, 1, x_583);
return x_585;
}
}
}
}
}
}
default: 
{
lean_object* x_586; lean_object* x_587; lean_object* x_588; 
lean_dec(x_51);
lean_dec(x_2);
x_586 = lean_ctor_get(x_8, 1);
lean_inc(x_586);
lean_dec(x_8);
x_587 = l_Lean_Server_Watchdog_mainLoop___closed__3;
x_588 = l_IO_throwServerError___rarg(x_587, x_586);
return x_588;
}
}
}
default: 
{
uint8_t x_589; 
lean_dec(x_2);
lean_dec(x_1);
x_589 = !lean_is_exclusive(x_8);
if (x_589 == 0)
{
lean_object* x_590; lean_object* x_591; 
x_590 = lean_ctor_get(x_8, 0);
lean_dec(x_590);
x_591 = lean_ctor_get(x_9, 0);
lean_inc(x_591);
lean_dec(x_9);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_591);
return x_8;
}
else
{
lean_object* x_592; lean_object* x_593; lean_object* x_594; 
x_592 = lean_ctor_get(x_8, 1);
lean_inc(x_592);
lean_dec(x_8);
x_593 = lean_ctor_get(x_9, 0);
lean_inc(x_593);
lean_dec(x_9);
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_593);
lean_ctor_set(x_594, 1, x_592);
return x_594;
}
}
}
}
else
{
uint8_t x_595; 
lean_dec(x_2);
lean_dec(x_1);
x_595 = !lean_is_exclusive(x_8);
if (x_595 == 0)
{
return x_8;
}
else
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; 
x_596 = lean_ctor_get(x_8, 0);
x_597 = lean_ctor_get(x_8, 1);
lean_inc(x_597);
lean_inc(x_596);
lean_dec(x_8);
x_598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_598, 0, x_596);
lean_ctor_set(x_598, 1, x_597);
return x_598;
}
}
}
}
}
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_mainLoop___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_parseParams___at_Lean_Server_Watchdog_mainLoop___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_mainLoop___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_mainLoop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_Watchdog_mainLoop___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = 2;
x_4 = 0;
x_5 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 1, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 2, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_SemanticTokenType_names;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3;
x_2 = 1;
x_3 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2;
x_2 = 1;
x_3 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5;
x_4 = lean_alloc_ctor(0, 2, 6);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2 + 1, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2 + 2, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2 + 3, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2 + 4, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2 + 5, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6;
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = l_Lean_Parser_Command_exit___elambda__1___closed__1;
x_7 = lean_string_dec_eq(x_4, x_6);
lean_dec(x_4);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_free_object(x_1);
lean_dec(x_3);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_2, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_2);
lean_ctor_set(x_1, 0, x_6);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_2, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_5);
x_18 = lean_apply_1(x_3, x_17);
return x_18;
}
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_apply_1(x_3, x_1);
return x_19;
}
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_initAndRunWatchdogAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_readMessage(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 0:
{
uint8_t x_7; 
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_10);
x_13 = l_Lean_JsonRpc_instToJsonMessage___closed__5;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_JsonRpc_instToJsonMessage___closed__6;
x_18 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_17, x_11);
lean_dec(x_11);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
x_24 = l_List_append___rarg(x_23, x_18);
x_25 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Json_mkObj(x_26);
x_28 = l_Lean_Json_compress(x_27);
x_29 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_30 = lean_string_append(x_29, x_28);
lean_dec(x_28);
x_31 = l_Char_quote___closed__1;
x_32 = lean_string_append(x_30, x_31);
x_33 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_33);
return x_5;
}
case 1:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_34 = lean_ctor_get(x_9, 0);
lean_inc(x_34);
lean_dec(x_9);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_16);
x_39 = l_List_append___rarg(x_38, x_18);
x_40 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Lean_Json_mkObj(x_41);
x_43 = l_Lean_Json_compress(x_42);
x_44 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = l_Char_quote___closed__1;
x_47 = lean_string_append(x_45, x_46);
x_48 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_48);
return x_5;
}
default: 
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_49 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_16);
x_51 = l_List_append___rarg(x_50, x_18);
x_52 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Json_mkObj(x_53);
x_55 = l_Lean_Json_compress(x_54);
x_56 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_57 = lean_string_append(x_56, x_55);
lean_dec(x_55);
x_58 = l_Char_quote___closed__1;
x_59 = lean_string_append(x_57, x_58);
x_60 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_60);
return x_5;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_61 = lean_ctor_get(x_5, 1);
lean_inc(x_61);
lean_dec(x_5);
x_62 = lean_ctor_get(x_6, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_6, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_6, 2);
lean_inc(x_64);
lean_dec(x_6);
x_65 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_65, 0, x_63);
x_66 = l_Lean_JsonRpc_instToJsonMessage___closed__5;
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_JsonRpc_instToJsonMessage___closed__6;
x_71 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_70, x_64);
lean_dec(x_64);
switch (lean_obj_tag(x_62)) {
case 0:
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_72 = lean_ctor_get(x_62, 0);
lean_inc(x_72);
lean_dec(x_62);
x_73 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_69);
x_77 = l_List_append___rarg(x_76, x_71);
x_78 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l_Lean_Json_mkObj(x_79);
x_81 = l_Lean_Json_compress(x_80);
x_82 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_83 = lean_string_append(x_82, x_81);
lean_dec(x_81);
x_84 = l_Char_quote___closed__1;
x_85 = lean_string_append(x_83, x_84);
x_86 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_61);
return x_87;
}
case 1:
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_88 = lean_ctor_get(x_62, 0);
lean_inc(x_88);
lean_dec(x_62);
x_89 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_69);
x_93 = l_List_append___rarg(x_92, x_71);
x_94 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
x_96 = l_Lean_Json_mkObj(x_95);
x_97 = l_Lean_Json_compress(x_96);
x_98 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_99 = lean_string_append(x_98, x_97);
lean_dec(x_97);
x_100 = l_Char_quote___closed__1;
x_101 = lean_string_append(x_99, x_100);
x_102 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_61);
return x_103;
}
default: 
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_104 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_69);
x_106 = l_List_append___rarg(x_105, x_71);
x_107 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = l_Lean_Json_mkObj(x_108);
x_110 = l_Lean_Json_compress(x_109);
x_111 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_112 = lean_string_append(x_111, x_110);
lean_dec(x_110);
x_113 = l_Char_quote___closed__1;
x_114 = lean_string_append(x_112, x_113);
x_115 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_115, 0, x_114);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_61);
return x_116;
}
}
}
}
case 1:
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_5);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_118 = lean_ctor_get(x_5, 0);
lean_dec(x_118);
x_119 = lean_ctor_get(x_6, 0);
lean_inc(x_119);
lean_dec(x_6);
x_120 = lean_string_dec_eq(x_119, x_3);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_121 = l_IO_FS_Stream_readRequestAs___closed__1;
x_122 = lean_string_append(x_121, x_3);
lean_dec(x_3);
x_123 = l_IO_FS_Stream_readRequestAs___closed__2;
x_124 = lean_string_append(x_122, x_123);
x_125 = lean_string_append(x_124, x_119);
lean_dec(x_119);
x_126 = l_Char_quote___closed__1;
x_127 = lean_string_append(x_125, x_126);
x_128 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_128);
return x_5;
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_119);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_3);
lean_ctor_set(x_130, 1, x_129);
lean_ctor_set(x_5, 0, x_130);
return x_5;
}
}
else
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_131 = lean_ctor_get(x_5, 1);
lean_inc(x_131);
lean_dec(x_5);
x_132 = lean_ctor_get(x_6, 0);
lean_inc(x_132);
lean_dec(x_6);
x_133 = lean_string_dec_eq(x_132, x_3);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_134 = l_IO_FS_Stream_readRequestAs___closed__1;
x_135 = lean_string_append(x_134, x_3);
lean_dec(x_3);
x_136 = l_IO_FS_Stream_readRequestAs___closed__2;
x_137 = lean_string_append(x_135, x_136);
x_138 = lean_string_append(x_137, x_132);
lean_dec(x_132);
x_139 = l_Char_quote___closed__1;
x_140 = lean_string_append(x_138, x_139);
x_141 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_131);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_132);
x_143 = lean_box(0);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_3);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_131);
return x_145;
}
}
}
case 2:
{
uint8_t x_146; 
lean_dec(x_3);
x_146 = !lean_is_exclusive(x_5);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_147 = lean_ctor_get(x_5, 0);
lean_dec(x_147);
x_148 = lean_ctor_get(x_6, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_6, 1);
lean_inc(x_149);
lean_dec(x_6);
x_150 = l_Lean_JsonRpc_instToJsonMessage___closed__9;
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
x_152 = lean_box(0);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
switch (lean_obj_tag(x_148)) {
case 0:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_154 = lean_ctor_get(x_148, 0);
lean_inc(x_154);
lean_dec(x_148);
x_155 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_155, 0, x_154);
x_156 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_153);
x_159 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_158);
x_161 = l_Lean_Json_mkObj(x_160);
x_162 = l_Lean_Json_compress(x_161);
x_163 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_164 = lean_string_append(x_163, x_162);
lean_dec(x_162);
x_165 = l_Char_quote___closed__1;
x_166 = lean_string_append(x_164, x_165);
x_167 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_167);
return x_5;
}
case 1:
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_168 = lean_ctor_get(x_148, 0);
lean_inc(x_168);
lean_dec(x_148);
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_168);
x_170 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_153);
x_173 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
x_175 = l_Lean_Json_mkObj(x_174);
x_176 = l_Lean_Json_compress(x_175);
x_177 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_178 = lean_string_append(x_177, x_176);
lean_dec(x_176);
x_179 = l_Char_quote___closed__1;
x_180 = lean_string_append(x_178, x_179);
x_181 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_181);
return x_5;
}
default: 
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_182 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_153);
x_184 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_183);
x_186 = l_Lean_Json_mkObj(x_185);
x_187 = l_Lean_Json_compress(x_186);
x_188 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_189 = lean_string_append(x_188, x_187);
lean_dec(x_187);
x_190 = l_Char_quote___closed__1;
x_191 = lean_string_append(x_189, x_190);
x_192 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_192);
return x_5;
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_193 = lean_ctor_get(x_5, 1);
lean_inc(x_193);
lean_dec(x_5);
x_194 = lean_ctor_get(x_6, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_6, 1);
lean_inc(x_195);
lean_dec(x_6);
x_196 = l_Lean_JsonRpc_instToJsonMessage___closed__9;
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
x_198 = lean_box(0);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
switch (lean_obj_tag(x_194)) {
case 0:
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_200 = lean_ctor_get(x_194, 0);
lean_inc(x_200);
lean_dec(x_194);
x_201 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_202 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_199);
x_205 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_204);
x_207 = l_Lean_Json_mkObj(x_206);
x_208 = l_Lean_Json_compress(x_207);
x_209 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_210 = lean_string_append(x_209, x_208);
lean_dec(x_208);
x_211 = l_Char_quote___closed__1;
x_212 = lean_string_append(x_210, x_211);
x_213 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_213, 0, x_212);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_193);
return x_214;
}
case 1:
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_215 = lean_ctor_get(x_194, 0);
lean_inc(x_215);
lean_dec(x_194);
x_216 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_216, 0, x_215);
x_217 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_199);
x_220 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_219);
x_222 = l_Lean_Json_mkObj(x_221);
x_223 = l_Lean_Json_compress(x_222);
x_224 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_225 = lean_string_append(x_224, x_223);
lean_dec(x_223);
x_226 = l_Char_quote___closed__1;
x_227 = lean_string_append(x_225, x_226);
x_228 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_228, 0, x_227);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_193);
return x_229;
}
default: 
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_230 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_199);
x_232 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_231);
x_234 = l_Lean_Json_mkObj(x_233);
x_235 = l_Lean_Json_compress(x_234);
x_236 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_237 = lean_string_append(x_236, x_235);
lean_dec(x_235);
x_238 = l_Char_quote___closed__1;
x_239 = lean_string_append(x_237, x_238);
x_240 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_240, 0, x_239);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_193);
return x_241;
}
}
}
}
default: 
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; uint8_t x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_3);
x_242 = lean_ctor_get(x_5, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_243 = x_5;
} else {
 lean_dec_ref(x_5);
 x_243 = lean_box(0);
}
x_244 = lean_ctor_get(x_6, 0);
lean_inc(x_244);
x_245 = lean_ctor_get_uint8(x_6, sizeof(void*)*3);
x_246 = lean_ctor_get(x_6, 1);
lean_inc(x_246);
x_247 = lean_ctor_get(x_6, 2);
lean_inc(x_247);
lean_dec(x_6);
x_248 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_248, 0, x_246);
x_249 = l_Lean_JsonRpc_instToJsonMessage___closed__10;
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_248);
x_251 = lean_box(0);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_250);
lean_ctor_set(x_252, 1, x_251);
x_253 = l_Lean_JsonRpc_instToJsonMessage___closed__11;
x_254 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_253, x_247);
lean_dec(x_247);
switch (lean_obj_tag(x_244)) {
case 0:
{
lean_object* x_291; lean_object* x_292; 
x_291 = lean_ctor_get(x_244, 0);
lean_inc(x_291);
lean_dec(x_244);
x_292 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_292, 0, x_291);
x_255 = x_292;
goto block_290;
}
case 1:
{
lean_object* x_293; lean_object* x_294; 
x_293 = lean_ctor_get(x_244, 0);
lean_inc(x_293);
lean_dec(x_244);
x_294 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_294, 0, x_293);
x_255 = x_294;
goto block_290;
}
default: 
{
lean_object* x_295; 
x_295 = lean_box(0);
x_255 = x_295;
goto block_290;
}
}
block_290:
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_256 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
switch (x_245) {
case 0:
{
lean_object* x_279; 
x_279 = l_Lean_JsonRpc_instToJsonErrorCode___closed__4;
x_258 = x_279;
goto block_278;
}
case 1:
{
lean_object* x_280; 
x_280 = l_Lean_JsonRpc_instToJsonErrorCode___closed__8;
x_258 = x_280;
goto block_278;
}
case 2:
{
lean_object* x_281; 
x_281 = l_Lean_JsonRpc_instToJsonErrorCode___closed__12;
x_258 = x_281;
goto block_278;
}
case 3:
{
lean_object* x_282; 
x_282 = l_Lean_JsonRpc_instToJsonErrorCode___closed__16;
x_258 = x_282;
goto block_278;
}
case 4:
{
lean_object* x_283; 
x_283 = l_Lean_JsonRpc_instToJsonErrorCode___closed__20;
x_258 = x_283;
goto block_278;
}
case 5:
{
lean_object* x_284; 
x_284 = l_Lean_JsonRpc_instToJsonErrorCode___closed__24;
x_258 = x_284;
goto block_278;
}
case 6:
{
lean_object* x_285; 
x_285 = l_Lean_JsonRpc_instToJsonErrorCode___closed__28;
x_258 = x_285;
goto block_278;
}
case 7:
{
lean_object* x_286; 
x_286 = l_Lean_JsonRpc_instToJsonErrorCode___closed__32;
x_258 = x_286;
goto block_278;
}
case 8:
{
lean_object* x_287; 
x_287 = l_Lean_JsonRpc_instToJsonErrorCode___closed__36;
x_258 = x_287;
goto block_278;
}
case 9:
{
lean_object* x_288; 
x_288 = l_Lean_JsonRpc_instToJsonErrorCode___closed__40;
x_258 = x_288;
goto block_278;
}
default: 
{
lean_object* x_289; 
x_289 = l_Lean_JsonRpc_instToJsonErrorCode___closed__44;
x_258 = x_289;
goto block_278;
}
}
block_278:
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_259 = l_Lean_JsonRpc_instToJsonMessage___closed__12;
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_258);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_252);
x_262 = l_List_append___rarg(x_261, x_254);
x_263 = l_Lean_Json_mkObj(x_262);
x_264 = l_Lean_JsonRpc_instToJsonMessage___closed__13;
x_265 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_263);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_251);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_257);
lean_ctor_set(x_267, 1, x_266);
x_268 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_267);
x_270 = l_Lean_Json_mkObj(x_269);
x_271 = l_Lean_Json_compress(x_270);
x_272 = l_IO_FS_Stream_readNotificationAs___closed__1;
x_273 = lean_string_append(x_272, x_271);
lean_dec(x_271);
x_274 = l_Char_quote___closed__1;
x_275 = lean_string_append(x_273, x_274);
x_276 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_276, 0, x_275);
if (lean_is_scalar(x_243)) {
 x_277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_277 = x_243;
 lean_ctor_set_tag(x_277, 1);
}
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_277, 1, x_242);
return x_277;
}
}
}
}
}
else
{
uint8_t x_296; 
lean_dec(x_3);
x_296 = !lean_is_exclusive(x_5);
if (x_296 == 0)
{
return x_5;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_5, 0);
x_298 = lean_ctor_get(x_5, 1);
lean_inc(x_298);
lean_inc(x_297);
lean_dec(x_5);
x_299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_299, 0, x_297);
lean_ctor_set(x_299, 1, x_298);
return x_299;
}
}
}
}
lean_object* l_IO_FS_Stream_readLspNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2(x_1, x_5, x_2, x_6);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_io_error_to_string(x_9);
x_11 = l_IO_FS_Stream_readLspNotificationAs___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_instInhabitedParserDescr___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_io_error_to_string(x_16);
x_19 = l_IO_FS_Stream_readLspNotificationAs___closed__1;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_Lean_instInhabitedParserDescr___closed__1;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_17);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = lean_io_error_to_string(x_26);
x_28 = l_IO_FS_Stream_readLspNotificationAs___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_Lean_instInhabitedParserDescr___closed__1;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_4, 0, x_32);
return x_4;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_4, 0);
x_34 = lean_ctor_get(x_4, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_4);
x_35 = lean_io_error_to_string(x_33);
x_36 = l_IO_FS_Stream_readLspNotificationAs___closed__1;
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
x_38 = l_Lean_instInhabitedParserDescr___closed__1;
x_39 = lean_string_append(x_37, x_38);
x_40 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_34);
return x_41;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("initialized");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Expected an exit notification");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdogAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_16; lean_object* x_17; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_16 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1;
lean_inc(x_3);
x_17 = l_IO_FS_Stream_readLspNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__1(x_3, x_16, x_2);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_1);
x_19 = l_Lean_Server_Watchdog_runClientTask(x_1, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_1);
x_22 = l_Lean_Server_Watchdog_mainLoop(x_20, x_1, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_IO_FS_Stream_readLspMessage(x_3, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 1)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = l_Lean_Parser_Command_exit___elambda__1___closed__1;
x_32 = lean_string_dec_eq(x_29, x_31);
lean_dec(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_30);
lean_free_object(x_24);
x_33 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
x_34 = l_IO_throwServerError___rarg(x_33, x_27);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_4 = x_35;
x_5 = x_36;
goto block_15;
}
else
{
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_37; 
lean_dec(x_1);
x_37 = lean_box(0);
lean_ctor_set(x_24, 0, x_37);
return x_24;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
lean_free_object(x_24);
x_38 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
x_39 = l_IO_throwServerError___rarg(x_38, x_27);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_4 = x_40;
x_5 = x_41;
goto block_15;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_25, 1);
lean_inc(x_44);
lean_dec(x_25);
x_45 = l_Lean_Parser_Command_exit___elambda__1___closed__1;
x_46 = lean_string_dec_eq(x_43, x_45);
lean_dec(x_43);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_44);
x_47 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
x_48 = l_IO_throwServerError___rarg(x_47, x_42);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_4 = x_49;
x_5 = x_50;
goto block_15;
}
else
{
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_42);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_53 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
x_54 = l_IO_throwServerError___rarg(x_53, x_42);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_4 = x_55;
x_5 = x_56;
goto block_15;
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_25);
x_57 = lean_ctor_get(x_24, 1);
lean_inc(x_57);
lean_dec(x_24);
x_58 = l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2;
x_59 = l_IO_throwServerError___rarg(x_58, x_57);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_4 = x_60;
x_5 = x_61;
goto block_15;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_24, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_24, 1);
lean_inc(x_63);
lean_dec(x_24);
x_4 = x_62;
x_5 = x_63;
goto block_15;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_3);
x_64 = lean_ctor_get(x_22, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_dec(x_22);
x_4 = x_64;
x_5 = x_65;
goto block_15;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_3);
x_66 = lean_ctor_get(x_19, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_19, 1);
lean_inc(x_67);
lean_dec(x_19);
x_4 = x_66;
x_5 = x_67;
goto block_15;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_3);
x_68 = lean_ctor_get(x_17, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_17, 1);
lean_inc(x_69);
lean_dec(x_17);
x_4 = x_68;
x_5 = x_69;
goto block_15;
}
block_15:
{
lean_object* x_6; 
x_6 = l_Lean_Server_Watchdog_shutdown(x_1, x_5);
lean_dec(x_1);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_4);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
lean_object* l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_readNotificationAs___at_Lean_Server_Watchdog_initAndRunWatchdogAux___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_Watchdog_initAndRunWatchdog_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_mkRef___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_readMessage(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_8 = x_5;
} else {
 lean_dec_ref(x_5);
 x_8 = lean_box(0);
}
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_string_dec_eq(x_10, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_11);
lean_dec(x_9);
x_13 = l_IO_FS_Stream_readRequestAs___closed__1;
x_14 = lean_string_append(x_13, x_3);
lean_dec(x_3);
x_15 = l_IO_FS_Stream_readRequestAs___closed__2;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_10);
lean_dec(x_10);
x_18 = l_Char_quote___closed__1;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
if (lean_is_scalar(x_8)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_8;
 lean_ctor_set_tag(x_21, 1);
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_7);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_47; 
x_47 = lean_box(0);
x_22 = x_47;
goto block_46;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_11, 0);
lean_inc(x_48);
lean_dec(x_11);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_22 = x_50;
goto block_46;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_22 = x_52;
goto block_46;
}
}
block_46:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__1;
x_24 = l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__1(x_22, x_23);
x_25 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__2;
x_26 = l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__2(x_22, x_25);
x_27 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__3;
x_28 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_22, x_27);
x_29 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__4;
x_30 = l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__3(x_22, x_29);
x_31 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__9;
x_32 = l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__5(x_22, x_31);
x_33 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeParams____x40_Lean_Data_Lsp_InitShutdown___hyg_222____closed__8;
x_34 = l_Lean_Json_getObjValAs_x3f___at_Lean_Lsp_instFromJsonInitializeParams___spec__6(x_22, x_33);
lean_dec(x_22);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_box(0);
x_36 = 0;
x_37 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_37, 0, x_24);
lean_ctor_set(x_37, 1, x_26);
lean_ctor_set(x_37, 2, x_28);
lean_ctor_set(x_37, 3, x_30);
lean_ctor_set(x_37, 4, x_35);
lean_ctor_set(x_37, 5, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*6, x_36);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_9);
lean_ctor_set(x_38, 1, x_3);
lean_ctor_set(x_38, 2, x_37);
if (lean_is_scalar(x_8)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_8;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_7);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_32, 0);
lean_inc(x_40);
lean_dec(x_32);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_42, 0, x_24);
lean_ctor_set(x_42, 1, x_26);
lean_ctor_set(x_42, 2, x_28);
lean_ctor_set(x_42, 3, x_30);
lean_ctor_set(x_42, 4, x_41);
lean_ctor_set(x_42, 5, x_34);
x_43 = lean_unbox(x_40);
lean_dec(x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*6, x_43);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_9);
lean_ctor_set(x_44, 1, x_3);
lean_ctor_set(x_44, 2, x_42);
if (lean_is_scalar(x_8)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_8;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_7);
return x_45;
}
}
}
}
case 1:
{
uint8_t x_53; 
lean_dec(x_3);
x_53 = !lean_is_exclusive(x_5);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_54 = lean_ctor_get(x_5, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_6, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_6, 1);
lean_inc(x_56);
lean_dec(x_6);
x_57 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = l_Lean_JsonRpc_instToJsonMessage___closed__5;
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_JsonRpc_instToJsonMessage___closed__6;
x_61 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_60, x_56);
lean_dec(x_56);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_Lean_Json_mkObj(x_64);
x_66 = l_Lean_Json_compress(x_65);
x_67 = l_IO_FS_Stream_readRequestAs___closed__5;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = l_Char_quote___closed__1;
x_70 = lean_string_append(x_68, x_69);
x_71 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_71);
return x_5;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_72 = lean_ctor_get(x_5, 1);
lean_inc(x_72);
lean_dec(x_5);
x_73 = lean_ctor_get(x_6, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_6, 1);
lean_inc(x_74);
lean_dec(x_6);
x_75 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_75, 0, x_73);
x_76 = l_Lean_JsonRpc_instToJsonMessage___closed__5;
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_JsonRpc_instToJsonMessage___closed__6;
x_79 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_78, x_74);
lean_dec(x_74);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_Json_mkObj(x_82);
x_84 = l_Lean_Json_compress(x_83);
x_85 = l_IO_FS_Stream_readRequestAs___closed__5;
x_86 = lean_string_append(x_85, x_84);
lean_dec(x_84);
x_87 = l_Char_quote___closed__1;
x_88 = lean_string_append(x_86, x_87);
x_89 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_72);
return x_90;
}
}
case 2:
{
uint8_t x_91; 
lean_dec(x_3);
x_91 = !lean_is_exclusive(x_5);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_5, 0);
lean_dec(x_92);
x_93 = lean_ctor_get(x_6, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_6, 1);
lean_inc(x_94);
lean_dec(x_6);
x_95 = l_Lean_JsonRpc_instToJsonMessage___closed__9;
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
switch (lean_obj_tag(x_93)) {
case 0:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_99 = lean_ctor_get(x_93, 0);
lean_inc(x_99);
lean_dec(x_93);
x_100 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_98);
x_104 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = l_Lean_Json_mkObj(x_105);
x_107 = l_Lean_Json_compress(x_106);
x_108 = l_IO_FS_Stream_readRequestAs___closed__5;
x_109 = lean_string_append(x_108, x_107);
lean_dec(x_107);
x_110 = l_Char_quote___closed__1;
x_111 = lean_string_append(x_109, x_110);
x_112 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_112);
return x_5;
}
case 1:
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_113 = lean_ctor_get(x_93, 0);
lean_inc(x_113);
lean_dec(x_93);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_115 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_98);
x_118 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
x_120 = l_Lean_Json_mkObj(x_119);
x_121 = l_Lean_Json_compress(x_120);
x_122 = l_IO_FS_Stream_readRequestAs___closed__5;
x_123 = lean_string_append(x_122, x_121);
lean_dec(x_121);
x_124 = l_Char_quote___closed__1;
x_125 = lean_string_append(x_123, x_124);
x_126 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_126);
return x_5;
}
default: 
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_127 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_98);
x_129 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
x_131 = l_Lean_Json_mkObj(x_130);
x_132 = l_Lean_Json_compress(x_131);
x_133 = l_IO_FS_Stream_readRequestAs___closed__5;
x_134 = lean_string_append(x_133, x_132);
lean_dec(x_132);
x_135 = l_Char_quote___closed__1;
x_136 = lean_string_append(x_134, x_135);
x_137 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_137);
return x_5;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_138 = lean_ctor_get(x_5, 1);
lean_inc(x_138);
lean_dec(x_5);
x_139 = lean_ctor_get(x_6, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_6, 1);
lean_inc(x_140);
lean_dec(x_6);
x_141 = l_Lean_JsonRpc_instToJsonMessage___closed__9;
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = lean_box(0);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
switch (lean_obj_tag(x_139)) {
case 0:
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_145 = lean_ctor_get(x_139, 0);
lean_inc(x_145);
lean_dec(x_139);
x_146 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_147 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_146);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_144);
x_150 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
x_152 = l_Lean_Json_mkObj(x_151);
x_153 = l_Lean_Json_compress(x_152);
x_154 = l_IO_FS_Stream_readRequestAs___closed__5;
x_155 = lean_string_append(x_154, x_153);
lean_dec(x_153);
x_156 = l_Char_quote___closed__1;
x_157 = lean_string_append(x_155, x_156);
x_158 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_138);
return x_159;
}
case 1:
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_160 = lean_ctor_get(x_139, 0);
lean_inc(x_160);
lean_dec(x_139);
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_160);
x_162 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_144);
x_165 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_164);
x_167 = l_Lean_Json_mkObj(x_166);
x_168 = l_Lean_Json_compress(x_167);
x_169 = l_IO_FS_Stream_readRequestAs___closed__5;
x_170 = lean_string_append(x_169, x_168);
lean_dec(x_168);
x_171 = l_Char_quote___closed__1;
x_172 = lean_string_append(x_170, x_171);
x_173 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_138);
return x_174;
}
default: 
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_175 = l_Lean_JsonRpc_instToJsonMessage___closed__8;
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_144);
x_177 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
x_179 = l_Lean_Json_mkObj(x_178);
x_180 = l_Lean_Json_compress(x_179);
x_181 = l_IO_FS_Stream_readRequestAs___closed__5;
x_182 = lean_string_append(x_181, x_180);
lean_dec(x_180);
x_183 = l_Char_quote___closed__1;
x_184 = lean_string_append(x_182, x_183);
x_185 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_185, 0, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_138);
return x_186;
}
}
}
}
default: 
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_3);
x_187 = lean_ctor_get(x_5, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_188 = x_5;
} else {
 lean_dec_ref(x_5);
 x_188 = lean_box(0);
}
x_189 = lean_ctor_get(x_6, 0);
lean_inc(x_189);
x_190 = lean_ctor_get_uint8(x_6, sizeof(void*)*3);
x_191 = lean_ctor_get(x_6, 1);
lean_inc(x_191);
x_192 = lean_ctor_get(x_6, 2);
lean_inc(x_192);
lean_dec(x_6);
x_193 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_193, 0, x_191);
x_194 = l_Lean_JsonRpc_instToJsonMessage___closed__10;
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_193);
x_196 = lean_box(0);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Lean_JsonRpc_instToJsonMessage___closed__11;
x_199 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_198, x_192);
lean_dec(x_192);
switch (lean_obj_tag(x_189)) {
case 0:
{
lean_object* x_236; lean_object* x_237; 
x_236 = lean_ctor_get(x_189, 0);
lean_inc(x_236);
lean_dec(x_189);
x_237 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_237, 0, x_236);
x_200 = x_237;
goto block_235;
}
case 1:
{
lean_object* x_238; lean_object* x_239; 
x_238 = lean_ctor_get(x_189, 0);
lean_inc(x_238);
lean_dec(x_189);
x_239 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_239, 0, x_238);
x_200 = x_239;
goto block_235;
}
default: 
{
lean_object* x_240; 
x_240 = lean_box(0);
x_200 = x_240;
goto block_235;
}
}
block_235:
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = l_Lean_JsonRpc_instToJsonMessage___closed__7;
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
switch (x_190) {
case 0:
{
lean_object* x_224; 
x_224 = l_Lean_JsonRpc_instToJsonErrorCode___closed__4;
x_203 = x_224;
goto block_223;
}
case 1:
{
lean_object* x_225; 
x_225 = l_Lean_JsonRpc_instToJsonErrorCode___closed__8;
x_203 = x_225;
goto block_223;
}
case 2:
{
lean_object* x_226; 
x_226 = l_Lean_JsonRpc_instToJsonErrorCode___closed__12;
x_203 = x_226;
goto block_223;
}
case 3:
{
lean_object* x_227; 
x_227 = l_Lean_JsonRpc_instToJsonErrorCode___closed__16;
x_203 = x_227;
goto block_223;
}
case 4:
{
lean_object* x_228; 
x_228 = l_Lean_JsonRpc_instToJsonErrorCode___closed__20;
x_203 = x_228;
goto block_223;
}
case 5:
{
lean_object* x_229; 
x_229 = l_Lean_JsonRpc_instToJsonErrorCode___closed__24;
x_203 = x_229;
goto block_223;
}
case 6:
{
lean_object* x_230; 
x_230 = l_Lean_JsonRpc_instToJsonErrorCode___closed__28;
x_203 = x_230;
goto block_223;
}
case 7:
{
lean_object* x_231; 
x_231 = l_Lean_JsonRpc_instToJsonErrorCode___closed__32;
x_203 = x_231;
goto block_223;
}
case 8:
{
lean_object* x_232; 
x_232 = l_Lean_JsonRpc_instToJsonErrorCode___closed__36;
x_203 = x_232;
goto block_223;
}
case 9:
{
lean_object* x_233; 
x_233 = l_Lean_JsonRpc_instToJsonErrorCode___closed__40;
x_203 = x_233;
goto block_223;
}
default: 
{
lean_object* x_234; 
x_234 = l_Lean_JsonRpc_instToJsonErrorCode___closed__44;
x_203 = x_234;
goto block_223;
}
}
block_223:
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_204 = l_Lean_JsonRpc_instToJsonMessage___closed__12;
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_203);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_197);
x_207 = l_List_append___rarg(x_206, x_199);
x_208 = l_Lean_Json_mkObj(x_207);
x_209 = l_Lean_JsonRpc_instToJsonMessage___closed__13;
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_208);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_196);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_202);
lean_ctor_set(x_212, 1, x_211);
x_213 = l_Lean_JsonRpc_instToJsonMessage___closed__4;
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
x_215 = l_Lean_Json_mkObj(x_214);
x_216 = l_Lean_Json_compress(x_215);
x_217 = l_IO_FS_Stream_readRequestAs___closed__5;
x_218 = lean_string_append(x_217, x_216);
lean_dec(x_216);
x_219 = l_Char_quote___closed__1;
x_220 = lean_string_append(x_218, x_219);
x_221 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_221, 0, x_220);
if (lean_is_scalar(x_188)) {
 x_222 = lean_alloc_ctor(1, 2, 0);
} else {
 x_222 = x_188;
 lean_ctor_set_tag(x_222, 1);
}
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_187);
return x_222;
}
}
}
}
}
else
{
uint8_t x_241; 
lean_dec(x_3);
x_241 = !lean_is_exclusive(x_5);
if (x_241 == 0)
{
return x_5;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_5, 0);
x_243 = lean_ctor_get(x_5, 1);
lean_inc(x_243);
lean_inc(x_242);
lean_dec(x_5);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
return x_244;
}
}
}
}
lean_object* l_IO_FS_Stream_readLspRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3(x_1, x_5, x_2, x_6);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_io_error_to_string(x_9);
x_11 = l_IO_FS_Stream_readLspRequestAs___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_instInhabitedParserDescr___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_io_error_to_string(x_16);
x_19 = l_IO_FS_Stream_readLspRequestAs___closed__1;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_Lean_instInhabitedParserDescr___closed__1;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_17);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = lean_io_error_to_string(x_26);
x_28 = l_IO_FS_Stream_readLspRequestAs___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_Lean_instInhabitedParserDescr___closed__1;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_4, 0, x_32);
return x_4;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_4, 0);
x_34 = lean_ctor_get(x_4, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_4);
x_35 = lean_io_error_to_string(x_33);
x_36 = l_IO_FS_Stream_readLspRequestAs___closed__1;
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
x_38 = l_Lean_instInhabitedParserDescr___closed__1;
x_39 = lean_string_append(x_37, x_38);
x_40 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_34);
return x_41;
}
}
}
}
lean_object* l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l___private_Lean_Data_Lsp_InitShutdown_0__Lean_Lsp_toJsonInitializeResult____x40_Lean_Data_Lsp_InitShutdown___hyg_454_(x_5);
x_7 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_IO_FS_Stream_writeLspMessage(x_1, x_7, x_3);
lean_dec(x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("wdIn.txt");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("wdOut.txt");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("wdErr.txt");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("0.0.1");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_msgToDiagnostic___closed__1;
x_2 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Watchdog_mkLeanServerCapabilities;
x_2 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = l_IO_mkRef___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__1(x_8, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1;
x_13 = 0;
x_14 = l_Lean_Server_maybeTee(x_12, x_13, x_1, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2;
x_18 = 1;
x_19 = l_Lean_Server_maybeTee(x_17, x_18, x_2, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3;
x_23 = l_Lean_Server_maybeTee(x_22, x_18, x_3, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Parser_Command_initialize___elambda__1___closed__1;
lean_inc(x_15);
x_27 = l_IO_FS_Stream_readLspRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__2(x_15, x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 2);
lean_inc(x_31);
lean_dec(x_28);
x_32 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8;
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_20);
x_34 = l_IO_FS_Stream_writeLspResponse___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__4(x_20, x_33, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_31, 3);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(200u);
x_38 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_20);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_4);
lean_ctor_set(x_38, 4, x_10);
lean_ctor_set(x_38, 5, x_31);
lean_ctor_set(x_38, 6, x_37);
lean_ctor_set(x_38, 7, x_5);
x_39 = l_Lean_Server_Watchdog_initAndRunWatchdogAux(x_38, x_36);
return x_39;
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_dec(x_34);
x_42 = lean_unsigned_to_nat(200u);
x_43 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_43, 0, x_15);
lean_ctor_set(x_43, 1, x_20);
lean_ctor_set(x_43, 2, x_24);
lean_ctor_set(x_43, 3, x_4);
lean_ctor_set(x_43, 4, x_10);
lean_ctor_set(x_43, 5, x_31);
lean_ctor_set(x_43, 6, x_42);
lean_ctor_set(x_43, 7, x_5);
x_44 = l_Lean_Server_Watchdog_initAndRunWatchdogAux(x_43, x_41);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_34, 1);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_ctor_get(x_40, 0);
lean_inc(x_46);
lean_dec(x_40);
x_47 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_20);
lean_ctor_set(x_47, 2, x_24);
lean_ctor_set(x_47, 3, x_4);
lean_ctor_set(x_47, 4, x_10);
lean_ctor_set(x_47, 5, x_31);
lean_ctor_set(x_47, 6, x_46);
lean_ctor_set(x_47, 7, x_5);
x_48 = l_Lean_Server_Watchdog_initAndRunWatchdogAux(x_47, x_45);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_31);
lean_dec(x_24);
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_49 = !lean_is_exclusive(x_34);
if (x_49 == 0)
{
return x_34;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_34, 0);
x_51 = lean_ctor_get(x_34, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_34);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_24);
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_53 = !lean_is_exclusive(x_27);
if (x_53 == 0)
{
return x_27;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_27, 0);
x_55 = lean_ctor_get(x_27, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_27);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_23);
if (x_57 == 0)
{
return x_23;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_23, 0);
x_59 = lean_ctor_get(x_23, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_23);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = !lean_is_exclusive(x_19);
if (x_61 == 0)
{
return x_19;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_19, 0);
x_63 = lean_ctor_get(x_19, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_19);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_14);
if (x_65 == 0)
{
return x_14;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_14, 0);
x_67 = lean_ctor_get(x_14, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_14);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("LEAN_WORKER_PATH");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1;
x_9 = lean_io_getenv(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1(x_1, x_2, x_3, x_4, x_5, x_12, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1(x_1, x_2, x_3, x_4, x_15, x_16, x_14);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("LEAN_SYSROOT");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/bin/lean");
return x_1;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_io_app_dir(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1;
x_10 = lean_io_getenv(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2(x_2, x_3, x_4, x_1, x_7, x_13, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = l_Lean_instInhabitedParserDescr___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2;
x_20 = lean_string_append(x_18, x_19);
x_21 = l_System_FilePath_exeSuffix;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_string_append(x_22, x_17);
x_24 = lean_box(0);
x_25 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2(x_2, x_3, x_4, x_1, x_23, x_24, x_15);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_6);
if (x_30 == 0)
{
return x_6;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_6, 0);
x_32 = lean_ctor_get(x_6, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_6);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_readRequestAs___at_Lean_Server_Watchdog_initAndRunWatchdog___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_IO_getStdin___at_Lean_Server_Watchdog_watchdogMain___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stdin(x_1);
return x_2;
}
}
lean_object* l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_watchdogMain___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 10;
x_6 = lean_string_push(x_2, x_5);
x_7 = lean_apply_2(x_4, x_6, x_3);
return x_7;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_watchdogMain___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Watchdog error: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_watchdogMain___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Watchdog_watchdogMain___boxed__const__2() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
lean_object* lean_server_watchdog_main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_stdin(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_get_stdout(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_get_stderr(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = l_Lean_Server_Watchdog_initAndRunWatchdog(x_1, x_4, x_7, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = l_Lean_Server_Watchdog_watchdogMain___boxed__const__1;
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = l_Lean_Server_Watchdog_watchdogMain___boxed__const__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_io_error_to_string(x_19);
x_22 = l_Lean_Server_Watchdog_watchdogMain___closed__1;
x_23 = lean_string_append(x_22, x_21);
lean_dec(x_21);
x_24 = l_Lean_instInhabitedParserDescr___closed__1;
x_25 = lean_string_append(x_23, x_24);
x_26 = l_IO_FS_Stream_putStrLn___at_Lean_Server_Watchdog_watchdogMain___spec__2(x_10, x_25, x_20);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = l_Lean_Server_Watchdog_watchdogMain___boxed__const__2;
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = l_Lean_Server_Watchdog_watchdogMain___boxed__const__2;
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
return x_9;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_9, 0);
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_9);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_4);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_6);
if (x_41 == 0)
{
return x_6;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_6, 0);
x_43 = lean_ctor_get(x_6, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_6);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_3);
if (x_45 == 0)
{
return x_3;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_3, 0);
x_47 = lean_ctor_get(x_3, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_3);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Init_System_IO(lean_object*);
lean_object* initialize_Init_Data_ByteArray(lean_object*);
lean_object* initialize_Std_Data_RBMap(lean_object*);
lean_object* initialize_Lean_Elab_Import(lean_object*);
lean_object* initialize_Lean_Data_Lsp(lean_object*);
lean_object* initialize_Lean_Server_FileSource(lean_object*);
lean_object* initialize_Lean_Server_Utils(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Server_Watchdog(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_RBMap(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileSource(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Utils(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_Watchdog_workerCfg = _init_l_Lean_Server_Watchdog_workerCfg();
lean_mark_persistent(l_Lean_Server_Watchdog_workerCfg);
l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1 = _init_l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask_loopAction___closed__1);
l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1 = _init_l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_FileWorker_runEditsSignalTask___closed__1);
l_Lean_Server_Watchdog_findFileWorker___closed__1 = _init_l_Lean_Server_Watchdog_findFileWorker___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_findFileWorker___closed__1);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__1);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__2);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__3);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__4);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__5);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__6);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__7);
l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8 = _init_l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8();
lean_mark_persistent(l___private_Lean_Server_Watchdog_0__Lean_Server_Watchdog_forwardMessages_loop___closed__8);
l_Lean_Server_Watchdog_startFileWorker___closed__1 = _init_l_Lean_Server_Watchdog_startFileWorker___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_startFileWorker___closed__1);
l_Lean_Server_Watchdog_startFileWorker___closed__2 = _init_l_Lean_Server_Watchdog_startFileWorker___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_startFileWorker___closed__2);
l_Lean_Server_Watchdog_startFileWorker___closed__3 = _init_l_Lean_Server_Watchdog_startFileWorker___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_startFileWorker___closed__3);
l_Lean_Server_Watchdog_startFileWorker___closed__4 = _init_l_Lean_Server_Watchdog_startFileWorker___closed__4();
lean_mark_persistent(l_Lean_Server_Watchdog_startFileWorker___closed__4);
l_Lean_Server_Watchdog_startFileWorker___closed__5 = _init_l_Lean_Server_Watchdog_startFileWorker___closed__5();
lean_mark_persistent(l_Lean_Server_Watchdog_startFileWorker___closed__5);
l_Lean_Server_Watchdog_terminateFileWorker___closed__1 = _init_l_Lean_Server_Watchdog_terminateFileWorker___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_terminateFileWorker___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__1();
l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___lambda__1___closed__2();
l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__2();
l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3 = _init_l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___rarg___closed__3);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleEdits___spec__4___closed__2);
l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1 = _init_l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__1);
l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2 = _init_l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_handleEdits___lambda__1___closed__2);
l_Lean_Server_Watchdog_handleEdits___closed__1 = _init_l_Lean_Server_Watchdog_handleEdits___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleEdits___closed__1);
l_Lean_Server_Watchdog_handleEdits___closed__2 = _init_l_Lean_Server_Watchdog_handleEdits___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_handleEdits___closed__2);
l_Lean_Server_Watchdog_handleEdits___closed__3 = _init_l_Lean_Server_Watchdog_handleEdits___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_handleEdits___closed__3);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleCancelRequest___spec__5___closed__2);
l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1 = _init_l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1();
lean_mark_persistent(l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__1);
l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2 = _init_l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2();
lean_mark_persistent(l_Std_RBNode_forIn_visit___at_Lean_Server_Watchdog_handleCancelRequest___spec__8___closed__2);
l_Lean_Server_Watchdog_parseParams___rarg___closed__1 = _init_l_Lean_Server_Watchdog_parseParams___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_parseParams___rarg___closed__1);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__1);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__2);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__3);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__4);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__5);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__6);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__7);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__8);
l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9 = _init_l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest_match__2___rarg___closed__9);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__5___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__12___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__19___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__26___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__33___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__40___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__47___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__54___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__61___closed__2);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__1);
l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2 = _init_l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_tryWriteMessage___at_Lean_Server_Watchdog_handleRequest___spec__66___closed__2);
l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__1___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__2___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__3___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__4___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__5___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__6___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__7___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__8___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__9___closed__1);
l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___lambda__10___closed__1);
l_Lean_Server_Watchdog_handleRequest___closed__1 = _init_l_Lean_Server_Watchdog_handleRequest___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___closed__1);
l_Lean_Server_Watchdog_handleRequest___closed__2 = _init_l_Lean_Server_Watchdog_handleRequest___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_handleRequest___closed__2);
l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1 = _init_l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleNotification_match__1___rarg___closed__1);
l_Lean_Server_Watchdog_handleNotification___closed__1 = _init_l_Lean_Server_Watchdog_handleNotification___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_handleNotification___closed__1);
l_Lean_Server_Watchdog_runClientTask___closed__1 = _init_l_Lean_Server_Watchdog_runClientTask___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_runClientTask___closed__1);
l_Lean_Server_Watchdog_runClientTask___closed__2 = _init_l_Lean_Server_Watchdog_runClientTask___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_runClientTask___closed__2);
l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1 = _init_l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop_match__3___rarg___closed__1);
l_Lean_Server_Watchdog_mainLoop___closed__1 = _init_l_Lean_Server_Watchdog_mainLoop___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop___closed__1);
l_Lean_Server_Watchdog_mainLoop___closed__2 = _init_l_Lean_Server_Watchdog_mainLoop___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop___closed__2);
l_Lean_Server_Watchdog_mainLoop___closed__3 = _init_l_Lean_Server_Watchdog_mainLoop___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop___closed__3);
l_Lean_Server_Watchdog_mainLoop___closed__4 = _init_l_Lean_Server_Watchdog_mainLoop___closed__4();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop___closed__4);
l_Lean_Server_Watchdog_mainLoop___closed__5 = _init_l_Lean_Server_Watchdog_mainLoop___closed__5();
lean_mark_persistent(l_Lean_Server_Watchdog_mainLoop___closed__5);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__1);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__2);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__3);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__4);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__5);
l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6 = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities___closed__6);
l_Lean_Server_Watchdog_mkLeanServerCapabilities = _init_l_Lean_Server_Watchdog_mkLeanServerCapabilities();
lean_mark_persistent(l_Lean_Server_Watchdog_mkLeanServerCapabilities);
l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1 = _init_l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__1);
l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2 = _init_l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdogAux___closed__2);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__1);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__2);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__3);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__4);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__5);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__6);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__7);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__1___closed__8);
l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___lambda__2___closed__1);
l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___closed__1);
l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2 = _init_l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2();
lean_mark_persistent(l_Lean_Server_Watchdog_initAndRunWatchdog___closed__2);
l_Lean_Server_Watchdog_watchdogMain___closed__1 = _init_l_Lean_Server_Watchdog_watchdogMain___closed__1();
lean_mark_persistent(l_Lean_Server_Watchdog_watchdogMain___closed__1);
l_Lean_Server_Watchdog_watchdogMain___boxed__const__1 = _init_l_Lean_Server_Watchdog_watchdogMain___boxed__const__1();
lean_mark_persistent(l_Lean_Server_Watchdog_watchdogMain___boxed__const__1);
l_Lean_Server_Watchdog_watchdogMain___boxed__const__2 = _init_l_Lean_Server_Watchdog_watchdogMain___boxed__const__2();
lean_mark_persistent(l_Lean_Server_Watchdog_watchdogMain___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
