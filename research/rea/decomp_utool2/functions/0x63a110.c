// rea decompile_all
// name: FUN_0063a110
// address: 0x63a110
// body: available
// range: 0x63a110-0x63a37d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063a110(undefined4 *param_1,void *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  int *in_EDX;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *local_2c;
  void *local_28;
  int local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071f308;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_1c = in_ECX;
  if (param_1 != (undefined4 *)*in_ECX) {
    do {
      FUN_0063b1b0(&local_2c);
      local_8 = 1;
      if (local_2c == (undefined4 *)0x0) {
        FUN_0063b3e0();
        break;
      }
      if (local_2c != (undefined4 *)0x0) {
        piVar1 = (int *)local_2c[6];
        for (piVar8 = piVar1; piVar8 != piVar1 + local_2c[8]; piVar8 = piVar8 + 1) {
          if (param_1 == (undefined4 *)*piVar8) {
            iVar9 = (int)piVar8 - (int)piVar1 >> 2;
            goto LAB_0063a1a4;
          }
        }
      }
      iVar9 = -1;
LAB_0063a1a4:
      iVar4 = in_EDX[2];
      iVar6 = iVar4 + 1;
      if (in_EDX[1] < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar4 + 2;
        }
        uVar11 = iVar4 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (in_EDX[1] != uVar11) {
          if ((int)uVar11 < 1) {
            FID_conflict__free((void *)*in_EDX);
            *in_EDX = 0;
          }
          else if (*in_EDX == 0) {
            iVar4 = FUN_004c554b();
            *in_EDX = iVar4;
          }
          else {
            iVar4 = FUN_004c553b(*in_EDX,uVar11 * 4);
            *in_EDX = iVar4;
          }
          in_EDX[1] = uVar11;
        }
      }
      iVar4 = in_EDX[2];
      in_EDX[2] = iVar4 + 1;
      piVar1 = (int *)(*in_EDX + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar9;
      }
      FUN_0063b440(&local_2c);
      puVar2 = local_2c;
      local_8 = 0;
      if ((0 < local_20) && (local_2c != (undefined4 *)0x0)) {
        local_14 = local_2c[0xb];
        local_18 = local_2c + 9;
        if (0 < (int)local_14) {
          uVar11 = 0;
          uVar10 = local_14;
          do {
            if (&local_2c == *(undefined4 ***)(local_2c[9] + uVar11 * 4)) goto LAB_0063a289;
            uVar5 = (int)(uVar10 + uVar11) / 2;
            if (uVar5 == uVar11) break;
            uVar7 = uVar5;
            if (&local_2c < *(undefined4 ***)(local_2c[9] + uVar5 * 4)) {
              uVar7 = uVar11;
              uVar10 = uVar5;
            }
            uVar11 = uVar7;
          } while ((int)uVar7 < (int)uVar10);
        }
        uVar11 = 0xffffffff;
LAB_0063a289:
        if (uVar11 < local_14) {
          local_2c[0xb] = local_14 - 1;
          iVar4 = (local_14 - 1) - uVar11;
          iVar9 = *local_18 + uVar11 * 4;
          if (0 < iVar4) {
            FUN_004c1df0(iVar9,iVar9 + 4,iVar4 * 4);
          }
          iVar9 = puVar2[0xb];
          iVar4 = puVar2[10];
          iVar6 = 0;
          if (0 < iVar9 * 2) {
            iVar6 = iVar9 * 2;
          }
          if (iVar6 < iVar4) {
            if (iVar9 < 0x10) {
              iVar9 = 0x10;
            }
            if (iVar9 < iVar4) {
              FUN_00409cf0(iVar9);
            }
          }
        }
      }
      FID_conflict__free(local_28);
      if (local_2c != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_2c + 1;
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)*local_2c)(1);
        }
      }
    } while (param_1 != (undefined4 *)*local_1c);
  }
  puVar2 = param_1;
  if ((0 < param_4) && (param_1 != (undefined4 *)0x0)) {
    local_1c = (int *)&param_1;
    uVar11 = FUN_00447770(&local_1c);
    if (uVar11 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar11);
    }
  }
  FID_conflict__free(param_2);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_1 + 1;
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*param_1)(1,uVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

