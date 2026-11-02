// rea decompile_all
// name: FUN_006f42b0
// address: 0x6f42b0
// body: available
// range: 0x6f42b0-0x6f43c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_006f42b0(void)

{
  int *_Memory;
  int iVar1;
  int *in_ECX;
  int local_4020;
  undefined4 local_401c;
  int local_4018;
  undefined1 local_4014 [16384];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00729b33;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    iVar1 = (**(code **)(*in_ECX + 0x18))(local_14);
    in_ECX[1] = iVar1;
  }
  iVar1 = in_ECX[1];
  local_8 = 0xffffffff;
  (**(code **)(*in_ECX + 0x34))(iVar1);
  local_4018 = 0;
  (**(code **)(*in_ECX + 0x48))(iVar1,0x8b82,&local_4018);
  if (local_4018 == 0) {
    local_401c = 0;
    (**(code **)(*in_ECX + 0x44))(iVar1,0x4000,&local_401c,local_4014);
    FUN_0045ca20(local_4014);
    iVar1 = in_ECX[2];
    in_ECX[2] = local_4020;
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
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

