// rea decompile_all
// name: FUN_004b4110
// address: 0x4b4110
// body: available
// range: 0x4b4110-0x4b432a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4110(byte *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *in_ECX;
  uint uVar12;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703e0f;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = param_1;
  local_1c = 0;
  bVar4 = false;
LAB_004b4150:
  pbVar5 = local_18;
  iVar11 = local_1c;
  if (*local_18 == 0) {
    ExceptionList = local_10;
    return;
  }
  local_20 = 0;
  iVar7 = FUN_00443260(uVar6);
  iVar9 = 0;
  iVar3 = local_1c;
  while (iVar7 != 0) {
    local_1c = iVar3 + 1;
    local_24 = iVar9 + 1;
    if (iVar7 == 0xd) {
      local_20 = 1;
      iVar7 = FUN_00426f70();
      if (iVar7 != 10) goto LAB_004b41a2;
      bVar2 = *local_18;
      local_18 = local_18 + 1;
      if (-1 < (char)bVar2) goto LAB_004b4267;
      uVar12 = 0x40;
      if ((bVar2 & 0x40) == 0) goto LAB_004b4267;
      goto LAB_004b4258;
    }
    if (iVar7 == 10) {
      local_20 = 1;
      goto LAB_004b41a2;
    }
    iVar7 = FUN_00443260(uVar6);
    iVar9 = local_24;
    iVar3 = local_1c;
  }
  bVar4 = true;
  local_24 = iVar9;
  local_1c = iVar3;
  goto LAB_004b41a2;
  while( true ) {
    uVar12 = uVar12 >> 1;
    local_18 = local_18 + 1;
    if ((uVar12 & (int)(char)bVar2) == 0) break;
LAB_004b4258:
    if (uVar12 < 9) break;
  }
LAB_004b4267:
  local_20 = 2;
  local_24 = iVar9 + 2;
  local_1c = iVar3 + 2;
LAB_004b41a2:
  puVar8 = operator_new(0x10);
  local_8 = 0;
  if ((pbVar5 == (byte *)0x0) || (*pbVar5 == 0)) {
    *puVar8 = &DAT_00bfe12c;
  }
  else {
    iVar9 = (int)local_18 - (int)pbVar5;
    uVar12 = iVar9 + 4U & 0xfffffffc;
    puVar10 = (undefined4 *)FUN_004bfe22(uVar12 + 0xb);
    puVar10[1] = uVar12;
    puVar1 = puVar10 + 2;
    *puVar10 = 0;
    FUN_004c2c30(puVar1,pbVar5,iVar9);
    *(undefined1 *)((int)puVar1 + iVar9) = 0;
    *puVar8 = puVar1;
  }
  puVar8[2] = local_24;
  puVar8[1] = iVar11;
  puVar8[3] = local_24 - local_20;
  local_8 = 0xffffffff;
  iVar11 = in_ECX[2];
  iVar9 = iVar11 + 1;
  if (in_ECX[1] < iVar9) {
    if (iVar9 < 0) {
      iVar9 = iVar11 + 2;
    }
    uVar12 = iVar11 + 9 + (iVar9 >> 1) & 0xfffffff8;
    if (in_ECX[1] != uVar12) {
      if ((int)uVar12 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else if (*in_ECX == 0) {
        iVar11 = FUN_004c554b();
        *in_ECX = iVar11;
      }
      else {
        iVar11 = FUN_004c553b(*in_ECX,uVar12 * 4);
        *in_ECX = iVar11;
      }
      in_ECX[1] = uVar12;
    }
  }
  iVar11 = in_ECX[2];
  in_ECX[2] = iVar11 + 1;
  puVar1 = (undefined4 *)(*in_ECX + iVar11 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar8;
  }
  if (bVar4) {
    ExceptionList = local_10;
    return;
  }
  goto LAB_004b4150;
}

