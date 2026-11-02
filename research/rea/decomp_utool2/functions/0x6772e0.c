// rea decompile_all
// name: FUN_006772e0
// address: 0x6772e0
// body: available
// range: 0x6772e0-0x6773c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006772e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  undefined4 local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072083c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 2) != '\0') {
    *(undefined1 *)(in_ECX + 2) = 0;
    (**(code **)(*(int *)*in_ECX + 0x34))(uVar3);
  }
  local_34 = 0xff000000;
  local_30 = 0;
  local_2c = (undefined4 *)*param_1;
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    local_2c[1] = local_2c[1] + 1;
    UNLOCK();
  }
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_8 = 0;
  (**(code **)(*(int *)*in_ECX + 0x44))(&local_34);
  local_8 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_2c + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_2c)(1);
    }
  }
  iVar2 = local_30;
  if (local_30 != 0) {
    FID_conflict__free(*(void **)(local_30 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  (**(code **)(*(int *)*in_ECX + 0x48))(param_4);
  ExceptionList = local_10;
  return;
}

