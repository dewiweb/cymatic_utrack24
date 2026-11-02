// rea decompile_all
// name: FUN_006cc060
// address: 0x6cc060
// body: available
// range: 0x6cc060-0x6cc236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006cc060(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  double dVar12;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_44;
  undefined4 local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  uint *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072650a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if (DAT_00c8a67c == 0) {
    local_64 = 0x6cc09e;
    local_1c = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  puVar9 = *(uint **)(*(int *)(DAT_00c8a67c + 0x20) + 0x20);
  uVar7 = *(uint *)(*(int *)(DAT_00c8a67c + 0x20) + 0x28);
  puVar10 = puVar9 + uVar7;
  iVar8 = local_14;
  local_18 = puVar10;
  if (puVar9 != puVar10) {
    do {
      uVar7 = *puVar9;
      if (*(int *)(uVar7 + 0x2c) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(uVar7 + 0x2c) + 8);
      }
      if (iVar11 == iVar8) {
LAB_006cc110:
        local_1c = &local_68;
        FUN_0048e190(&local_34);
        local_24 = local_34;
        local_20 = local_30;
        if (iVar11 == 0) {
          local_2c = local_34;
          local_28 = local_30;
          fVar3 = local_2c;
          fVar4 = local_28;
        }
        else {
          iVar5 = *(int *)(iVar11 + 0xc);
          iVar8 = iVar11;
          while (iVar1 = iVar5, iVar1 != 0) {
            iVar8 = iVar1;
            iVar5 = *(int *)(iVar1 + 0xc);
          }
          pfVar6 = (float *)FUN_004b2b30(local_34,local_30);
          local_24 = *pfVar6;
          local_20 = pfVar6[1];
          puVar10 = local_18;
          fVar3 = local_24;
          fVar4 = local_20;
          if (iVar8 != iVar11) {
            FUN_004b2980(iVar11,&local_24);
            puVar10 = local_18;
            fVar3 = local_2c;
            fVar4 = local_28;
          }
        }
        local_28 = fVar4;
        local_2c = fVar3;
        puVar2 = local_1c;
        dVar12 = (double)local_28;
        local_3c = SUB84((double)local_2c + 6755399441055744.0,0);
        *local_1c = local_3c;
        local_44 = SUB84(dVar12 + 6755399441055744.0,0);
        puVar2[1] = local_44;
        uVar7 = FUN_006d01e0();
        iVar8 = local_14;
        if (((char)uVar7 != '\0') &&
           ((uVar7 = *puVar9, *(char *)(uVar7 + 0xc) != '\0' ||
            ((*(byte *)(uVar7 + 0x20) & 0x70) != 0)))) {
          ExceptionList = local_10;
          return CONCAT31((int3)(uVar7 >> 8),1);
        }
      }
      else if ((param_1 != '\0') && (uVar7 = 0, iVar5 = iVar11, iVar11 != 0)) {
        do {
          iVar5 = *(int *)(iVar5 + 0xc);
          if (iVar5 == iVar8) goto LAB_006cc110;
        } while (iVar5 != 0);
        uVar7 = 0;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
  ExceptionList = local_10;
  return uVar7 & 0xffffff00;
}

