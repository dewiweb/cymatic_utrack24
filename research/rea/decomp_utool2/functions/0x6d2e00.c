// rea decompile_all
// name: FUN_006d2e00
// address: 0x6d2e00
// body: available
// range: 0x6d2e00-0x6d2f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d2e00(undefined4 param_1,double param_2)

{
  int *_Memory;
  int iVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 uVar2;
  int local_48;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072704d;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(in_ECX + 0x78) + 0x124) < 1) {
    FUN_00699420(local_38);
    local_8 = 1;
    local_48 = SUB84(param_2 + 6755399441055744.0,0);
    uVar2 = extraout_ECX_00;
    if (local_48 < 0) {
      iVar1 = FUN_006104a0(extraout_ECX_00);
      *(undefined1 *)(iVar1 + -1) = 0x2d;
      iVar1 = iVar1 + -1;
    }
    else {
      iVar1 = FUN_006104a0(extraout_ECX_00);
    }
    FUN_004557e0(&local_15 + -iVar1);
    FUN_00637730(uVar2);
    _Memory = (int *)(local_38[0] + -8);
    if (_Memory == &DAT_00bfe124) goto LAB_006d2f14;
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
  }
  else {
    FUN_00699420(local_38);
    local_8 = 0;
    uVar2 = extraout_ECX;
    FUN_00637cf0(*(undefined4 *)(*(int *)(extraout_EDX + 0x78) + 0x124));
    FUN_00637730(uVar2);
    _Memory = (int *)(local_38[0] + -8);
    if (_Memory == &DAT_00bfe124) goto LAB_006d2f14;
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
  }
  if (iVar1 == 0) {
    FID_conflict__free(_Memory);
  }
LAB_006d2f14:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

