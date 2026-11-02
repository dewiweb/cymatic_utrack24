// rea decompile_all
// name: FUN_004a6890
// address: 0x4a6890
// body: available
// range: 0x4a6890-0x4a69da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a6890(undefined4 param_1)

{
  int *_Memory;
  int iVar1;
  int in_ECX;
  int local_44;
  HGLOBAL local_3c;
  int local_34;
  int local_30;
  int local_2c;
  HGLOBAL local_24;
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007038e0;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 8) == 0) {
    return 1;
  }
  ExceptionList = &local_10;
  FUN_0048cc90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_004a67f0(param_1,0xf);
  local_8 = 0;
  if (-1 < local_2c) {
    if (*(int *)(local_1c + 0x10) == 0) {
      FUN_004b2540(local_1c + 0x14,local_18);
    }
    else {
      FUN_004b2430(local_1c + 0x14,local_18);
    }
    if (local_1c != 0) {
      GlobalUnlock(local_24);
    }
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0xffffffff;
  if (local_1c != 0) {
    GlobalUnlock(local_24);
  }
  FUN_004a67f0(param_1,0xd);
  local_8 = 1;
  if (-1 < local_44) {
    FUN_0045ced0(local_34,local_30 + local_34);
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10);
    *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10) = param_1;
    _Memory = (int *)(iVar1 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    local_44 = 0;
  }
  if (local_34 != 0) {
    GlobalUnlock(local_3c);
  }
  ExceptionList = local_10;
  return local_44;
}

