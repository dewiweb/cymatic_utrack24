// rea decompile_all
// name: FUN_0067d1f0
// address: 0x67d1f0
// body: available
// range: 0x67d1f0-0x67d454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067d1f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  int local_20;
  int iStack_18;
  int local_10;
  
  *in_ECX = 0;
  fVar1 = param_1[3];
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar10 = *param_1;
  FUN_00436410();
  in_ECX[1] = (int)fVar10;
  local_10 = SUB84((double)(fVar3 * 256.0) + 6755399441055744.0,0);
  in_ECX[2] = local_10 >> 8;
  in_ECX[3] = (int)fVar2 + 2;
  iVar4 = (int)fVar1 + 2;
  in_ECX[4] = iVar4;
  in_ECX[5] = 0x20;
  in_ECX[6] = 0x41;
  *(undefined1 *)(in_ECX + 7) = 1;
  FID_conflict__free((void *)*in_ECX);
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  puVar5 = (undefined4 *)FUN_004c554b((iVar6 + 2) * 0x104);
  *in_ECX = puVar5;
  *puVar5 = 0;
  local_20 = SUB84((double)((*param_1 + param_1[2]) * 256.0) + 6755399441055744.0,0);
  iStack_18 = SUB84((double)(param_1[1] * 256.0) + 6755399441055744.0,0);
  uVar7 = iStack_18 + in_ECX[2] * -0x100;
  local_10 = SUB84((double)(*param_1 * 256.0) + 6755399441055744.0,0);
  iStack_18 = SUB84((double)((param_1[1] + param_1[3]) * 256.0) + 6755399441055744.0,0);
  uVar8 = iStack_18 + in_ECX[2] * -0x100;
  if ((local_10 < local_20) && ((int)uVar7 < (int)uVar8)) {
    puVar5 = (undefined4 *)*in_ECX;
    iVar6 = (int)uVar8 >> 8;
    *puVar5 = 2;
    puVar5[1] = local_10;
    puVar5[3] = local_20;
    puVar5[4] = 0;
    if ((int)uVar7 >> 8 == iVar6) {
      puVar5[2] = uVar8 - uVar7;
      iVar4 = 1;
      puVar5 = puVar5 + in_ECX[6];
    }
    else {
      puVar5[2] = 0xff - (uVar7 & 0xff);
      puVar5 = puVar5 + in_ECX[6];
      iVar4 = 1;
      if (1 < iVar6) {
        iVar9 = iVar6 + -1;
        do {
          *puVar5 = 2;
          puVar5[1] = local_10;
          puVar5[2] = 0xff;
          puVar5[3] = local_20;
          puVar5[4] = 0;
          puVar5 = puVar5 + in_ECX[6];
          iVar9 = iVar9 + -1;
          iVar4 = iVar6;
        } while (iVar9 != 0);
      }
      iVar4 = iVar4 + 1;
      puVar5[1] = local_10;
      *puVar5 = 2;
      puVar5[2] = uVar8 & 0xff;
      puVar5[3] = local_20;
      puVar5[4] = 0;
      puVar5 = puVar5 + in_ECX[6];
    }
    if (iVar4 < (int)in_ECX[4]) {
      do {
        *puVar5 = 0;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + in_ECX[6];
      } while (iVar4 < (int)in_ECX[4]);
      return;
    }
  }
  else {
    in_ECX[4] = 0;
  }
  return;
}

