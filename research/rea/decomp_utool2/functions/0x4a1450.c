// rea decompile_all
// name: FUN_004a1450
// address: 0x4a1450
// body: available
// range: 0x4a1450-0x4a1638 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1450(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 **ppuVar13;
  int *piVar14;
  undefined4 *local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_c = *(int *)(in_ECX + 0x28);
  iVar5 = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(float *)(in_ECX + 4) = *(float *)(in_ECX + 8) + *(float *)(in_ECX + 4);
  piVar4 = *(int **)(**(int **)(in_ECX + 0x20) + iVar5 * 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*piVar4 + 0x14);
  fVar8 = *(float *)(*piVar4 + 0x14);
  local_14 = fVar8;
  local_10 = iVar5;
  FUN_006823f0();
  fVar12 = 0.0;
  *(float *)(in_ECX + 0xc) = local_14 - fVar8;
  if (*(int *)(in_ECX + 0x18) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(int *)(in_ECX + 0x18) + 4);
  }
  fVar11 = 0.0001;
  if (fVar8 - 0.0001 < *(float *)(in_ECX + 0x2c)) {
    while( true ) {
      iVar2 = (*(int **)(in_ECX + 0x20))[2];
      if (iVar2 <= iVar5) break;
      local_5 = '\0';
      if (piVar4[4] <= local_c) {
        iVar5 = iVar5 + 1;
        if (iVar2 <= iVar5) {
          return;
        }
        local_c = 0;
        local_5 = '\x01';
        piVar4 = *(int **)(**(int **)(in_ECX + 0x20) + iVar5 * 4);
        local_10 = iVar5;
      }
      puVar3 = *(undefined4 **)(piVar4[2] + local_c * 4);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      fVar7 = fVar8 + (float)puVar3[1];
      fVar9 = fVar7 - fVar11;
      if (*(float *)(in_ECX + 0x2c) <= fVar9) {
        return;
      }
      local_18 = *puVar3;
      fVar8 = fVar7;
      fVar10 = fVar9;
      local_14 = (float)local_18;
      iVar2 = FUN_00426f70();
      if (iVar2 == 0xd) {
        return;
      }
      iVar2 = FUN_00426f70();
      if (iVar2 == 10) {
        return;
      }
      if (local_5 != '\0') {
        fVar8 = *(float *)(*piVar4 + 0x14);
        if (*(float *)(*piVar4 + 0x14) <= *(float *)(in_ECX + 8)) {
          fVar8 = *(float *)(in_ECX + 8);
        }
        *(float *)(in_ECX + 8) = fVar8;
        local_18 = *piVar4;
        if (*(float *)(local_18 + 0x20) == fVar12) {
          if (*(int *)(local_18 + 8) == 0) {
            ppuVar13 = &local_1c;
            piVar14 = piVar4;
            FUN_004681b0(ppuVar13,piVar4);
            puVar3 = (undefined4 *)FUN_004682f0(ppuVar13,piVar14);
            uVar1 = *(undefined4 *)(*piVar4 + 8);
            *(undefined4 *)(*piVar4 + 8) = *puVar3;
            *puVar3 = uVar1;
            if (local_1c != (undefined4 *)0x0) {
              LOCK();
              piVar14 = local_1c + 1;
              iVar5 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*local_1c)(1);
              }
            }
          }
          iVar5 = *piVar4;
          fVar6 = (float10)(**(code **)(**(int **)(iVar5 + 8) + 8))();
          fVar12 = 0.0;
          fVar11 = 0.0001;
          *(float *)(iVar5 + 0x20) = (float)fVar6;
          iVar5 = local_10;
          fVar10 = fVar9;
        }
        fVar8 = *(float *)(local_18 + 0x14) -
                *(float *)(*piVar4 + 0x20) * *(float *)(*piVar4 + 0x14);
        if (fVar8 <= *(float *)(in_ECX + 0xc)) {
          fVar8 = *(float *)(in_ECX + 0xc);
        }
        *(float *)(in_ECX + 0xc) = fVar8;
        fVar8 = fVar7;
      }
      local_c = local_c + 1;
      if (*(float *)(in_ECX + 0x2c) <= fVar10) {
        return;
      }
    }
  }
  return;
}

