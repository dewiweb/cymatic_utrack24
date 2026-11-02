// rea decompile_all
// name: FUN_00625cb0
// address: 0x625cb0
// body: available
// range: 0x625cb0-0x625faa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00625e81) */

void FUN_00625cb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Memory;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *in_ECX;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *local_6c;
  uint local_50 [6];
  undefined1 local_38;
  undefined1 *local_34;
  undefined1 local_30 [24];
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d716;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == param_1) {
    uVar7 = FUN_006375e0(param_1);
    local_8 = 0;
    FUN_00625cb0(uVar7);
    FID_conflict__free(local_34);
  }
  else {
    puVar12 = (undefined4 *)*in_ECX;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = in_ECX + 1;
    }
    iVar17 = (int)in_ECX[6] >> 5;
    if (-1 < iVar17) {
LAB_00625d30:
      uVar15 = puVar12[iVar17];
      if (uVar15 == 0) goto code_r0x00625d3b;
      iVar18 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      iVar18 = iVar17 * 0x20 + iVar18;
      goto LAB_00625d43;
    }
LAB_00625d40:
    iVar18 = -1;
LAB_00625d43:
    puVar12 = (undefined4 *)*param_1;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = param_1 + 1;
    }
    iVar17 = (int)param_1[6] >> 5;
    if (-1 < iVar17) {
LAB_00625d60:
      uVar15 = puVar12[iVar17];
      if (uVar15 == 0) goto code_r0x00625d6b;
      iVar16 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      iVar16 = iVar17 * 0x20 + iVar16;
      goto LAB_00625d73;
    }
LAB_00625d70:
    iVar16 = -1;
LAB_00625d73:
    bVar5 = FUN_006263f0(local_14);
    local_50[4] = 4;
    local_38 = 0;
    *(undefined1 *)(in_ECX + 7) = 0;
    local_50[5] = iVar18 + 1 + iVar16;
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    puVar8 = (uint *)FUN_006264b0(((int)local_50[5] >> 5) + 2);
    iVar18 = iVar18 >> 5;
    FUN_006375e0(param_1);
    local_18 = 0;
    puVar9 = local_30;
    if (local_34 != (undefined1 *)0x0) {
      puVar9 = local_34;
    }
    local_6c = (undefined4 *)*in_ECX;
    if (local_6c == (undefined4 *)0x0) {
      local_6c = in_ECX + 1;
    }
    if (-1 < iVar16 >> 5) {
      iVar10 = (int)puVar9 - (int)puVar8;
      iVar17 = (iVar16 >> 5) + 1;
      puVar13 = puVar8 + iVar18 + 1;
      do {
        uVar15 = 0;
        iVar16 = 0;
        puVar14 = puVar8;
        if (-1 < iVar18) {
          do {
            lVar4 = (ulonglong)(uint)local_6c[iVar16] * (ulonglong)*(uint *)(iVar10 + (int)puVar8) +
                    (ulonglong)uVar15;
            uVar11 = (uint)lVar4;
            uVar15 = *puVar14;
            *puVar14 = *puVar14 + uVar11;
            uVar15 = (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar15,uVar11);
            iVar16 = iVar16 + 1;
            puVar14 = puVar14 + 1;
          } while (iVar16 <= iVar18);
        }
        *puVar13 = uVar15;
        puVar8 = puVar8 + 1;
        puVar13 = puVar13 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    iVar17 = (int)local_50[5] >> 5;
    if (-1 < iVar17) {
LAB_00625e90:
      uVar15 = local_50[iVar17];
      if (uVar15 == 0) goto code_r0x00625e9b;
      iVar18 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      iVar18 = iVar17 * 0x20 + iVar18;
      goto LAB_00625ea3;
    }
LAB_00625ea0:
    iVar18 = -1;
LAB_00625ea3:
    if (*(char *)(param_1 + 7) != '\0') {
      puVar12 = (undefined4 *)*param_1;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = param_1 + 1;
      }
      iVar17 = (int)param_1[6] >> 5;
      if (-1 < iVar17) {
LAB_00625ec0:
        uVar15 = puVar12[iVar17];
        if (uVar15 == 0) goto code_r0x00625ecb;
        iVar16 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (iVar17 * 0x20 + iVar16 < 0) goto LAB_00625ed0;
        bVar6 = 1;
        goto LAB_00625ed2;
      }
    }
LAB_00625ed0:
    bVar6 = 0;
LAB_00625ed2:
    uVar15 = in_ECX[1];
    in_ECX[1] = local_50[0];
    uVar7 = in_ECX[2];
    in_ECX[2] = local_50[1];
    uVar1 = in_ECX[3];
    in_ECX[3] = local_50[2];
    uVar2 = in_ECX[4];
    in_ECX[4] = local_50[3];
    _Memory = (void *)*in_ECX;
    *in_ECX = 0;
    uVar3 = in_ECX[5];
    in_ECX[5] = local_50[4];
    local_50[5] = in_ECX[6];
    in_ECX[6] = iVar18;
    local_38 = *(undefined1 *)(in_ECX + 7);
    *(byte *)(in_ECX + 7) = bVar5 ^ bVar6;
    local_50[0] = uVar15;
    local_50[1] = uVar7;
    local_50[2] = uVar1;
    local_50[3] = uVar2;
    local_50[4] = uVar3;
    FID_conflict__free(local_34);
    FID_conflict__free(_Memory);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00625d3b:
  iVar17 = iVar17 + -1;
  if (iVar17 < 0) goto LAB_00625d40;
  goto LAB_00625d30;
code_r0x00625d6b:
  iVar17 = iVar17 + -1;
  if (iVar17 < 0) goto LAB_00625d70;
  goto LAB_00625d60;
code_r0x00625e9b:
  iVar17 = iVar17 + -1;
  if (iVar17 < 0) goto LAB_00625ea0;
  goto LAB_00625e90;
code_r0x00625ecb:
  iVar17 = iVar17 + -1;
  if (iVar17 < 0) goto LAB_00625ed0;
  goto LAB_00625ec0;
}

