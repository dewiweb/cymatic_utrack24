// rea decompile_all
// name: FUN_10004480
// address: 0x10004480
// body: available
// range: 0x10004480-0x10004540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_10004480(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e709;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10001070(param_1);
  local_8 = 0;
  *param_1 = CUsbDriver::vftable;
  CPtrArray::CPtrArray((CPtrArray *)(param_1 + 0xc));
  param_1[0xc] = CTypedPtrArray<CPtrArray,_BCO_USB_DEVICE_PROPERTIES*>::vftable;
  local_8._0_1_ = 1;
  CPtrArray::CPtrArray((CPtrArray *)(param_1 + 0x11));
  param_1[0x11] = CTypedPtrArray<CPtrArray,_BCO_USB_DEVICE_SYNCH_MODE_INFO*>::vftable;
  local_8._0_1_ = 2;
  CPtrArray::CPtrArray((CPtrArray *)(param_1 + 0x16));
  param_1[0x16] = CTypedPtrArray<CPtrArray,_BCO_USB_CHANNEL_PROPERTIES*>::vftable;
  local_8 = CONCAT31(local_8._1_3_,3);
  CPtrArray::CPtrArray((CPtrArray *)(param_1 + 0x1b));
  param_1[0x1b] = CTypedPtrArray<CPtrArray,_BCO_USB_CHANNEL_PROPERTIES*>::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x20] = 0;
  _memset(param_1 + 0x21,0,0x2c);
  ExceptionList = local_10;
  return param_1;
}

