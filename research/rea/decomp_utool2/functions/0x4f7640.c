// rea decompile_all
// name: FUN_004f7640
// address: 0x4f7640
// body: available
// range: 0x4f7640-0x4f7749 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7640(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 extraout_EDX;
  int iVar5;
  float in_XMM0_Da;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706471;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0xe0) = 0x41700000;
  *(undefined4 *)(in_ECX + 0xe4) = 0x41840000;
  FUN_0057f4a0(uVar3);
  local_8 = extraout_EDX;
  puVar4 = (undefined4 *)FUN_00683640(&local_14);
  uVar2 = *(undefined4 *)(in_ECX + 0xe8);
  *(undefined4 *)(in_ECX + 0xe8) = *puVar4;
  *puVar4 = uVar2;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  local_8 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  iVar5 = 0;
  if (**(char **)(in_ECX + 0x88) != '\0') {
    FUN_006831f0(in_ECX + 0x88);
    FUN_004363b0();
    iVar5 = (int)in_XMM0_Da + 7;
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
               (int)((float)iVar5 + *(float *)(in_ECX + 0xe4)),0x14);
  ExceptionList = local_10;
  return;
}

