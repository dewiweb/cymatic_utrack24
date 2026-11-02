// rea decompile_all
// name: FUN_004a4580
// address: 0x4a4580
// body: available
// range: 0x4a4580-0x4a4709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4580(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00703698;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = &DAT_00bfe12c;
  local_4c = 0;
  local_44 = 1;
  uStack_40 = 0;
  pvStack_3c = (void *)0x0;
  uStack_38 = 0;
  local_34 = 0;
  local_8 = 0;
  local_48 = 9;
  uVar2 = FUN_006e50e0(local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00636ec0(uVar2);
  FUN_0044ec90(uVar1);
  FUN_00644f50(in_ECX + 0x108,0);
  piVar4 = (int *)(local_18[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0.0;
  local_1c = 9;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00641960(&local_50);
  iVar5 = (int)(*(float *)(*(int *)(in_ECX + 0x108) + 0x14) + local_20);
  iVar3 = param_1;
  if (iVar5 < param_1) {
    iVar3 = iVar5;
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),param_1,iVar3);
  FUN_00471a50();
  FID_conflict__free(local_30);
  FUN_00471bf0();
  FID_conflict__free(pvStack_3c);
  piVar4 = (int *)(local_50 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

