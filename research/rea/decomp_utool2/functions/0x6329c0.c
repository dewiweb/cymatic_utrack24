// rea decompile_all
// name: FUN_006329c0
// address: 0x6329c0
// body: available
// range: 0x6329c0-0x632acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006329c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e79c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00455850(&DAT_00bfe12c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  do {
    iVar1 = FUN_00443260();
    iVar2 = FUN_0045c230(param_2);
    if (-1 < iVar2) {
      FUN_0044ebd0(iVar2);
      iVar1 = FUN_00426f70();
    }
    FUN_00455c30(iVar1);
  } while (iVar1 != 0);
  *param_1 = local_14;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

