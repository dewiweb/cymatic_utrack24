// rea decompile_all
// name: FUN_00632020
// address: 0x632020
// body: available
// range: 0x632020-0x6320ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00632020(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int *piVar7;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e6c5;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = &PTR_vftable_00c7ed38;
  local_8 = 0;
  local_14 = uVar5;
  puVar6 = (undefined4 *)FUN_00627030();
  piVar7 = in_ECX + -2;
  cVar2 = *(char *)*puVar6;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (cVar2 != '\0') {
    piVar7 = (int *)*in_ECX;
    *in_ECX = &PTR_vftable_00c7ed38;
    uVar3 = in_ECX[2];
    uVar4 = in_ECX[3];
    in_ECX[2] = local_1c;
    in_ECX[3] = local_18;
    local_1c = uVar3;
    local_18 = uVar4;
    (**(code **)(*piVar7 + 0x54))(&local_1c,uVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

