// rea decompile_all
// name: FUN_00429a60
// address: 0x429a60
// body: available
// range: 0x429a60-0x429c68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429a60(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int local_48;
  uint local_40;
  int local_3c [8];
  char acStack_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006fd961;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  local_14 = uVar2;
  if ((*(int *)(in_ECX + 100) != 0) && (local_40 = 1, 0 < *(int *)(*(int *)(in_ECX + 100) + 0x24)))
  {
    do {
      acStack_1b[2] = 0;
      pcVar8 = acStack_1b + 2;
      uVar10 = local_40;
      if ((int)local_40 < 0) {
        uVar10 = -local_40;
        do {
          pcVar9 = pcVar8;
          pcVar8 = pcVar9 + -1;
          uVar7 = uVar10 / 10;
          *pcVar8 = (char)uVar10 + (char)uVar7 * -10 + '0';
          uVar10 = uVar7;
        } while (uVar7 != 0);
        pcVar8 = pcVar9 + -2;
        *pcVar8 = '-';
      }
      else {
        do {
          pcVar8 = pcVar8 + -1;
          uVar7 = uVar10 / 10;
          *pcVar8 = (char)uVar10 + (char)uVar7 * -10 + '0';
          uVar10 = uVar7;
        } while (uVar7 != 0);
      }
      FUN_004557e0(acStack_1b + (2 - (int)pcVar8),uVar2);
      local_8 = 1;
      puVar3 = (undefined4 *)FUN_00637690(local_3c);
      iVar4 = param_1[2];
      iVar5 = iVar4 + 1;
      if (param_1[1] < iVar5) {
        if (iVar5 < 0) {
          iVar5 = iVar4 + 2;
        }
        uVar10 = iVar4 + 9 + (iVar5 >> 1) & 0xfffffff8;
        if (param_1[1] != uVar10) {
          if ((int)uVar10 < 1) {
            FID_conflict__free((void *)*param_1);
            *param_1 = 0;
          }
          else if (*param_1 == 0) {
            iVar4 = FUN_004c554b();
            *param_1 = iVar4;
          }
          else {
            iVar4 = FUN_004c553b(*param_1,uVar10 * 4);
            *param_1 = iVar4;
          }
          param_1[1] = uVar10;
        }
      }
      iVar4 = param_1[2];
      param_1[2] = iVar4 + 1;
      puVar1 = (undefined4 *)(*param_1 + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar3;
        *puVar3 = &DAT_00bfe12c;
      }
      piVar6 = (int *)(local_48 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar6 = (int *)(local_3c[0] + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_40 = local_40 + 1;
    } while ((int)local_40 <= *(int *)(*(int *)(in_ECX + 100) + 0x24));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

