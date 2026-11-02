// rea decompile_all
// name: FUN_00469900
// address: 0x469900
// body: available
// range: 0x469900-0x469b88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469900(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  _locale_t _Locale;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *in_ECX;
  int iVar8;
  uint uVar9;
  int local_34 [3];
  undefined4 local_28;
  void *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar6 = (undefined4 *)param_1;
  puStack_c = &LAB_00701356;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  param_1 = "";
  local_18 = *puVar6;
  local_8 = 0;
  local_1c = 0;
  iVar3 = FUN_00443260();
  if (iVar3 != 0) {
    do {
      if ((iVar3 == 0xd) || (iVar3 == 10)) {
        iVar4 = 0;
LAB_004699a0:
        if (*param_1 != '\0') {
          local_24 = operator_new(0x28);
          local_8._0_1_ = 1;
          if ((local_1c == 2) || (local_1c == 0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
          local_1c = FUN_00468f90(&param_1,param_2,param_3,uVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          iVar1 = in_ECX[2];
          iVar8 = iVar1 + 1;
          if (in_ECX[1] < iVar8) {
            if (iVar8 < 0) {
              iVar8 = iVar1 + 2;
            }
            FUN_00409cf0(iVar1 + 9 + (iVar8 >> 1) & 0xfffffff8);
          }
          iVar1 = in_ECX[2];
          in_ECX[2] = iVar1 + 1;
          *(int *)(*in_ECX + iVar1 * 4) = local_1c;
        }
        puVar6 = (undefined4 *)FUN_00622070();
        pcVar2 = (char *)*puVar6;
        *puVar6 = param_1;
        piVar7 = (int *)(local_20 + -8);
        param_1 = pcVar2;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        if ((iVar3 == 0xd) && (iVar3 = FUN_00426f70(), iVar3 == 10)) {
          local_34[0] = FUN_00443260();
          piVar7 = local_34;
          local_34[1] = 0;
          goto LAB_00469a82;
        }
      }
      else {
        iVar4 = FID_conflict___iswspace_l((wint_t)iVar3,_Locale);
        iVar4 = (iVar4 != 0) + 1;
        if ((iVar4 == 0) || (iVar4 != local_1c)) goto LAB_004699a0;
        piVar7 = local_34 + 2;
        local_28 = 0;
        local_34[2] = iVar3;
LAB_00469a82:
        FUN_0045dfc0(piVar7,0xffffffff);
      }
      local_1c = iVar4;
      iVar3 = FUN_00443260();
    } while (iVar3 != 0);
    if (*param_1 != '\0') {
      local_24 = operator_new(0x28);
      local_8 = CONCAT31(local_8._1_3_,2);
      param_2 = FUN_00468f90(&param_1,param_2,param_3,iVar4 == 2);
      iVar3 = in_ECX[2] + 1;
      if ((in_ECX[1] < iVar3) &&
         (uVar9 = in_ECX[2] + 9 + iVar3 / 2 & 0xfffffff8, in_ECX[1] != uVar9)) {
        if ((int)uVar9 < 1) {
          FID_conflict__free((void *)*in_ECX);
          *in_ECX = 0;
        }
        else if (*in_ECX == 0) {
          iVar3 = FUN_004c554b();
          *in_ECX = iVar3;
        }
        else {
          iVar3 = FUN_004c553b(*in_ECX,uVar9 * 4);
          *in_ECX = iVar3;
        }
        in_ECX[1] = uVar9;
      }
      iVar3 = in_ECX[2];
      in_ECX[2] = iVar3 + 1;
      *(undefined4 *)(*in_ECX + iVar3 * 4) = param_2;
    }
  }
  piVar7 = (int *)(param_1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

