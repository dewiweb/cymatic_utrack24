// rea decompile_all
// name: FUN_00625a40
// address: 0x625a40
// body: available
// range: 0x625a40-0x625cae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00625a40(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *local_34 [6];
  int local_1c;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d6e9;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == param_1) {
    uVar3 = FUN_006375e0(param_1);
    local_8 = 0;
    FUN_00625a40(uVar3,param_2);
    FID_conflict__free(local_34[0]);
  }
  else {
    puVar4 = (undefined4 *)*param_1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = param_1 + 1;
    }
    iVar6 = (int)param_1[6] >> 5;
    if (-1 < iVar6) {
LAB_00625ac0:
      uVar9 = puVar4[iVar6];
      if (uVar9 == 0) goto code_r0x00625acb;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = iVar6 * 0x20 + iVar7;
      goto LAB_00625ad3;
    }
LAB_00625ad0:
    iVar7 = -1;
LAB_00625ad3:
    puVar4 = (undefined4 *)*in_ECX;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = in_ECX + 1;
    }
    iVar6 = (int)in_ECX[6] >> 5;
    if (-1 < iVar6) {
LAB_00625ae6:
      uVar9 = puVar4[iVar6];
      if (uVar9 == 0) goto code_r0x00625aed;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = iVar6 * 0x20 + iVar8;
      goto LAB_00625af5;
    }
LAB_00625af2:
    iVar8 = -1;
LAB_00625af5:
    if ((iVar7 < 0) || (iVar8 < 0)) {
      FID_conflict__free((void *)*param_2);
      *param_2 = 0;
      param_2[5] = 4;
      param_2[6] = 0xffffffff;
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
      in_ECX[5] = 4;
      in_ECX[6] = 0xffffffff;
      *(undefined1 *)(in_ECX + 7) = 0;
      in_ECX[1] = 0;
      in_ECX[2] = 0;
      in_ECX[3] = 0;
      in_ECX[4] = 0;
    }
    else {
      bVar1 = FUN_006263f0(local_14);
      FUN_00626540(param_2);
      *(undefined1 *)(param_2 + 7) = 0;
      FUN_0062ca00();
      FUN_006375e0(param_1);
      local_8 = 1;
      uVar9 = iVar8 - iVar7;
      local_18 = 0;
      if (-1 < local_1c) {
        if ((int)uVar9 < 0) {
          FUN_00625540(-uVar9,extraout_ECX);
        }
        else if (0 < (int)uVar9) {
          FUN_006256b0(uVar9,extraout_ECX);
        }
      }
      if (-1 < (int)uVar9) {
        while( true ) {
          iVar6 = FUN_006257b0(local_34);
          uVar5 = extraout_ECX_00;
          if (-1 < iVar6) {
            FUN_00625fb0(local_34);
            if ((int)in_ECX[6] < (int)uVar9) {
              FUN_006264b0(((int)uVar9 >> 5) + 1);
              in_ECX[6] = uVar9;
            }
            puVar4 = (undefined4 *)*in_ECX;
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = in_ECX + 1;
            }
            uVar5 = uVar9 & 0x1f;
            puVar4[(int)uVar9 >> 5] = puVar4[(int)uVar9 >> 5] | 1 << uVar5;
          }
          uVar9 = uVar9 - 1;
          if ((int)uVar9 < 0) break;
          if (-1 < local_1c) {
            FUN_00625540(1,uVar5);
          }
        }
      }
      bVar2 = FUN_006263f0();
      *(byte *)(in_ECX + 7) = bVar2 ^ bVar1;
      *(byte *)(param_2 + 7) = bVar1;
      FID_conflict__free(local_34[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00625acb:
  iVar6 = iVar6 + -1;
  if (iVar6 < 0) goto LAB_00625ad0;
  goto LAB_00625ac0;
code_r0x00625aed:
  iVar6 = iVar6 + -1;
  if (iVar6 < 0) goto LAB_00625af2;
  goto LAB_00625ae6;
}

