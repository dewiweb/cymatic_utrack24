// rea decompile_all
// name: FUN_006bbcd0
// address: 0x6bbcd0
// body: available
// range: 0x6bbcd0-0x6bbd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bbcd0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 **extraout_ECX;
  undefined4 **ppuVar4;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072493d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = FUN_006f6dd6();
  ppuVar4 = &local_14;
  if (iVar3 == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_0040de70(iVar3);
    ppuVar4 = extraout_ECX;
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_004b1850(&local_14,ppuVar4);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_14)(1,uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

