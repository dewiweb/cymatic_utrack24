// rea decompile_all
// name: FUN_0062b890
// address: 0x62b890
// body: available
// range: 0x62b890-0x62bb32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b890(undefined4 *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  int *in_ECX;
  uint uVar8;
  uint extraout_ECX;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int local_4c;
  uint local_48;
  undefined4 *local_44;
  int *local_40;
  undefined1 *local_3c;
  uint *local_38;
  uint local_34 [5];
  int local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071df43;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_1;
  local_3c = &DAT_00bfe12c;
  local_8 = 0;
  local_40 = in_ECX;
  local_18 = uVar4;
  FUN_006375e0(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar12 = &DAT_00bfe12c;
LAB_0062b8f0:
  uVar8 = local_20 + 1;
  uVar11 = 1;
  if ((int)uVar8 < 1) {
    uVar11 = uVar8;
  }
  if ((int)uVar11 < 1) {
    uVar11 = 0;
  }
  else {
    uVar8 = 0x20 - uVar11;
    puVar10 = local_34;
    if (local_38 != (uint *)0x0) {
      puVar10 = local_38;
    }
    uVar11 = 0xffffffffU >> ((byte)uVar8 & 0x1f) & *puVar10;
  }
  if (-1 < local_20) {
    FUN_00625540(1,uVar8);
    uVar8 = extraout_ECX;
  }
  if (uVar11 == 0) {
    uVar8 = (uint)(local_38 != (uint *)0x0);
    puVar10 = local_34;
    if (local_38 != (uint *)0x0) {
      puVar10 = local_38;
    }
    iVar5 = local_20 >> 5;
    if (-1 < iVar5) {
LAB_0062b955:
      uVar11 = puVar10[iVar5];
      if (uVar11 == 0) goto code_r0x0062b95c;
      uVar8 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      iVar5 = iVar5 * 0x20 + uVar8;
      local_48 = uVar8;
      goto LAB_0062b964;
    }
LAB_0062b961:
    iVar5 = -1;
LAB_0062b964:
    if (iVar5 < 0) goto LAB_0062b9d0;
  }
  FUN_00622070(uVar8,uVar4);
  puVar6 = (undefined4 *)FUN_00637730(uVar8);
  local_3c = (undefined1 *)*puVar6;
  *puVar6 = puVar12;
  piVar9 = (int *)(local_4c + -8);
  puVar12 = local_3c;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  goto LAB_0062b8f0;
code_r0x0062b95c:
  iVar5 = iVar5 + -1;
  uVar8 = 0;
  if (iVar5 < 0) goto LAB_0062b961;
  goto LAB_0062b955;
code_r0x0062ba3b:
  iVar5 = iVar5 + -1;
  if (iVar5 < 0) goto LAB_0062ba40;
  goto LAB_0062ba30;
LAB_0062b9d0:
  piVar9 = (int *)FUN_00633d10(&local_4c,uVar8,1);
  puVar1 = (undefined1 *)*piVar9;
  *piVar9 = (int)puVar12;
  piVar9 = (int *)(local_4c + -8);
  local_3c = puVar1;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if ((char)local_40[7] != '\0') {
    piVar9 = (int *)*local_40;
    if (piVar9 == (int *)0x0) {
      piVar9 = local_40 + 1;
    }
    iVar5 = local_40[6] >> 5;
    if (-1 < iVar5) {
LAB_0062ba30:
      uVar4 = piVar9[iVar5];
      if (uVar4 == 0) goto code_r0x0062ba3b;
      local_40 = (int *)0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> (int)local_40 == 0; local_40 = (int *)((int)local_40 + -1)) {
        }
      }
      if (-1 < (int)(local_40 + iVar5 * 8)) {
        ppuVar7 = (undefined1 **)FUN_00637690(&local_3c);
        bVar3 = true;
        bVar2 = false;
        goto LAB_0062ba58;
      }
    }
  }
LAB_0062ba40:
  piVar9 = (int *)(puVar1 + -8);
  local_3c = puVar1;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  ppuVar7 = &local_3c;
  bVar3 = false;
  bVar2 = true;
LAB_0062ba58:
  *local_44 = *ppuVar7;
  *ppuVar7 = &DAT_00bfe12c;
  if ((bVar2) && (piVar9 = (int *)(local_3c + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if ((bVar3) && (piVar9 = local_40 + -2, piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FID_conflict__free(local_38);
  piVar9 = (int *)(puVar1 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

