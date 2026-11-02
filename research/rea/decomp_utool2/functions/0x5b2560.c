// rea decompile_all
// name: FUN_005b2560
// address: 0x5b2560
// body: available
// range: 0x5b2560-0x5b2645 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b2560(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718e71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005b2660(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  switch(param_1) {
  case 1:
    FUN_005b2100();
    break;
  case 2:
    FUN_00635a10(in_ECX,"Multitrack Songs");
    break;
  case 3:
    FUN_00635a10(in_ECX,"Stereo Playlists");
    break;
  case 4:
    FUN_00635a10(in_ECX,"Multitrack Playlists");
    break;
  case 5:
    FUN_00635a10(in_ECX,"Playlists");
    break;
  default:
    *in_ECX = &DAT_00bfe12c;
  }
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

