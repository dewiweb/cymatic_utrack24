// rea decompile_all
// name: FUN_0060c870
// address: 0x60c870
// body: available
// range: 0x60c870-0x60cbf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060c870(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,char *param_7,undefined4 *param_8,int param_9,undefined4 *param_10)

{
  undefined4 *puVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c5a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)param_7 != '\0') {
    FUN_006e8e70();
  }
  if ((char)param_8 != '\0') {
    FUN_006e8e70();
    FUN_00680d30();
  }
  FUN_00684c50();
  iVar3 = *(int *)*param_2;
  FUN_00472d90();
  (**(code **)(iVar3 + 0x54))();
  (**(code **)(*in_ECX + 0xb8))();
  local_8 = 0;
  if (*param_7 != '\0') {
    param_8 = (undefined4 *)((float)in_ECX[0x2c] * 0.9);
    if (12.0 <= (float)param_8) {
      param_8 = (undefined4 *)0x41400000;
    }
    iStack_4c = 0x60c967;
    FUN_00684c50();
    iStack_4c = 0x60c96e;
    operator_new(0x28);
    iStack_4c = 0x60c998;
    puVar1 = (undefined4 *)FUN_00468a40();
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      puVar1[1] = puVar1[1] + 1;
      UNLOCK();
    }
    local_8._0_1_ = 1;
    iStack_4c = 0x60c9bd;
    param_8 = puVar1;
    FUN_0067fad0();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(char *)(param_2 + 2) != '\0') {
      *(undefined1 *)(param_2 + 2) = 0;
      (**(code **)(*(int *)*param_2 + 0x34))();
    }
    iStack_4c = 0x60c9df;
    (**(code **)(*(int *)*param_2 + 0x68))();
    if (param_10 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = param_10 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        iStack_4c = 0x60c9fc;
        (**(code **)*param_10)();
      }
    }
    local_8 = local_8 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar1 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        iStack_4c = 0x60ca1c;
        (**(code **)*puVar1)();
      }
    }
    iVar3 = in_ECX[0x2d];
    if (iVar3 == 0) {
      iStack_4c = param_5 + -1;
      iStack_50 = param_4;
      iStack_54 = 0x60cab8;
      FUN_00472d90();
      iStack_4c = 0x14;
    }
    else if (iVar3 == 1) {
      iStack_4c = param_5 + -4;
      iStack_50 = param_4 + 2;
      iStack_54 = 0x60ca8b;
      FUN_00472d90();
      iStack_4c = 0x21;
    }
    else {
      if (iVar3 != 2) goto LAB_0060cadd;
      iStack_4c = param_5 + -4;
      iStack_50 = param_4 + 2;
      iStack_54 = 0x60ca58;
      FUN_00472d90();
      iStack_4c = 0x22;
    }
    FUN_0040e4d0(auStack_5c);
    FUN_006830c0(&param_7);
  }
LAB_0060cadd:
  if (*(char *)(param_9 + 3) == '\0') goto LAB_0060cbc3;
  iStack_4c = 0x60caf8;
  FUN_00684c50();
  iVar3 = in_ECX[0x2d];
  if (iVar3 == 0) {
    iStack_4c = param_6;
    iStack_50 = 1;
LAB_0060cb34:
    iStack_54 = param_4;
    iVar3 = *(int *)*param_2;
LAB_0060cb3b:
    uStack_58 = 0x60cb46;
    iStack_4c = FUN_00472d90();
    iStack_50 = 0x60cb4f;
    (**(code **)(iVar3 + 0x54))();
  }
  else {
    if (iVar3 == 1) {
      iStack_4c = 1;
      iStack_50 = param_5;
      goto LAB_0060cb34;
    }
    if (iVar3 == 2) {
      iStack_4c = 1;
      iVar3 = *(int *)*param_2;
      iStack_50 = param_5;
      iStack_54 = param_4 + param_6 + -1;
      goto LAB_0060cb3b;
    }
  }
  if (param_1 == in_ECX[0x49]) {
    iVar3 = in_ECX[0x2d];
    if (iVar3 == 0) {
      iStack_4c = param_6;
      iVar3 = *(int *)*param_2;
      iStack_50 = 1;
      iStack_54 = param_4;
    }
    else if (iVar3 == 1) {
      iStack_4c = 1;
      iVar3 = *(int *)*param_2;
      iStack_50 = param_5;
      iStack_54 = param_4 + param_6;
    }
    else {
      if (iVar3 != 2) goto LAB_0060cbc3;
      iStack_4c = 1;
      iVar3 = *(int *)*param_2;
      iStack_50 = param_5;
      iStack_54 = param_4 + -1;
    }
    uStack_58 = 0x60cbba;
    iStack_4c = FUN_00472d90();
    iStack_50 = 0x60cbc3;
    (**(code **)(iVar3 + 0x54))();
  }
LAB_0060cbc3:
  piVar2 = (int *)(param_7 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      iStack_4c = 0x60cbe3;
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

