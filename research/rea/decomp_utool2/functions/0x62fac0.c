// rea decompile_all
// name: FUN_0062fac0
// address: 0x62fac0
// body: available
// range: 0x62fac0-0x62fc34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062fac0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e428;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[10] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  local_8 = 0;
  in_ECX[0xc] = 100000;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  iVar1 = *param_3;
  in_ECX[0x10] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = (int *)(*param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *in_ECX;
  *in_ECX = *param_1;
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
      piVar3 = extraout_ECX;
    }
  }
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 1;
  uVar5 = 1;
  piVar4 = local_18;
  FUN_00633420(piVar3,piVar4,1,1,1,0,uVar2);
  FUN_00636ad0(piVar4,uVar5,uVar6,uVar7,uVar8);
  local_8._0_1_ = 2;
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_ECX_00;
  FUN_00637690(param_1);
  FUN_006377c0(uVar5);
  FUN_00637730(uVar6);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0061e6b0();
  param_3 = param_3 + -2;
  if (param_3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *param_3;
    *param_3 = *param_3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(param_3);
    }
  }
  piVar3 = (int *)(local_18[0] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

