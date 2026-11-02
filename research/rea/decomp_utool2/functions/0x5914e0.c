// rea decompile_all
// name: FUN_005914e0
// address: 0x5914e0
// body: available
// range: 0x5914e0-0x59165e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005914e0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071462f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(*(undefined4 *)(in_ECX + 0x1c)) {
  case 0:
    if (*(char *)(*(int *)(in_ECX + 0x18) + 0xe8) == '\0') {
      uVar3 = FUN_00591240();
      ExceptionList = local_10;
      return uVar3;
    }
    uVar3 = FUN_00590d10();
    ExceptionList = local_10;
    return uVar3;
  case 1:
    FUN_0058e340(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    ExceptionList = local_10;
    return 0;
  case 2:
    cVar2 = FUN_00590260(in_ECX + 0x30,in_ECX + 0x34,0);
    if (cVar2 == '\0') {
      FUN_0058e710(0xc,*(undefined4 *)(in_ECX + 0x38),in_ECX + 0x34);
    }
    break;
  case 3:
    FUN_00636040(&local_18);
    local_8 = 0;
    FUN_00634890(&local_14);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    cVar2 = FUN_00634df0(in_ECX + 0x34,PTR_DAT_00c7ed68,"utf-8",0x78);
    if (cVar2 == '\0') {
      FUN_0058e710(0xc,*(undefined4 *)(in_ECX + 0x38),in_ECX + 0x34);
    }
    break;
  default:
    goto switchD_00591516_default;
  }
  FUN_0058a440(in_ECX + 0x34);
switchD_00591516_default:
  ExceptionList = local_10;
  return 0;
}

