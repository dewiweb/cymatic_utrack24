// rea decompile_all
// name: FUN_0062a4d0
// address: 0x62a4d0
// body: available
// range: 0x62a4d0-0x62a635 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0062a4d0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dd8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piStack_3c = &local_1c;
  uStack_40 = 0x62a50a;
  piStack_3c = (int *)FUN_006360d0();
  local_8 = 0;
  uStack_40 = 0x62a517;
  puVar2 = (undefined4 *)FUN_0062f700();
  uStack_40 = 5;
  puStack_44 = (undefined4 *)0xdeece66d;
  iStack_48 = puVar2[1];
  lVar4 = __allmul(*puVar2);
  *puVar2 = (int)(lVar4 + 0xb);
  puVar2[1] = (uint)((ulonglong)(lVar4 + 0xb) >> 0x20) & 0xffff;
  uStack_40 = 0x62a54f;
  FUN_00631190();
  local_8._0_1_ = 1;
  FUN_006369b0(&iStack_48);
  FUN_006377c0();
  iStack_48 = 0x62a57d;
  FUN_00637730();
  puStack_44 = &param_2;
  local_8._0_1_ = 2;
  iStack_48 = 0x62a58f;
  FUN_00636040();
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_44 = (undefined4 *)0x62a5a3;
  FUN_00627090();
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_3c = (int *)0x62a5c8;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_3c = (int *)0x62a5eb;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_3c = (int *)0x62a60b;
      FID_conflict__free(piVar3);
    }
  }
  iVar1 = *param_1;
  *(int *)(local_14 + 4) = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return local_14;
}

