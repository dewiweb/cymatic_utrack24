// rea decompile_all
// name: FUN_00408470
// address: 0x408470
// body: available
// range: 0x408470-0x4086ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408470(int param_1)

{
  double dVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar7;
  double dVar6;
  double dVar8;
  double *local_18;
  double *local_14;
  
  iVar2 = 1;
  local_18 = (double *)(param_1 + *(int *)(in_ECX + 0xc) * 8);
  dVar8 = *(double *)(in_ECX + 0x30);
  *(double *)(in_ECX + 0x30) = *(double *)(in_ECX + 0x28);
  *(double *)(in_ECX + 0x28) = *(double *)(in_ECX + 0x38) * *(double *)(in_ECX + 0x28) - dVar8;
  dVar8 = *(double *)(in_ECX + 0x48);
  *(double *)(in_ECX + 0x48) = *(double *)(in_ECX + 0x40);
  *(double *)(in_ECX + 0x40) = *(double *)(in_ECX + 0x50) * *(double *)(in_ECX + 0x40) - dVar8;
  local_14 = local_18;
  if (0.0 < *(double *)(in_ECX + 0x20) || *(double *)(in_ECX + 0x20) == 0.0) {
    fVar4 = (float10)FUN_004038a0();
    dVar8 = (double)fVar4;
    if (0.0 <= dVar8) {
      FUN_006f8700();
    }
    else {
      uVar5 = SUB84(dVar8,0);
      uVar7 = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
      FUN_006f8700();
      dVar8 = -(double)CONCAT44(uVar7,uVar5);
    }
    *local_18 = ((*(double *)(in_ECX + 0x18) - *(double *)(in_ECX + 0x10)) * dVar8) /
                3.141592653589793;
    if (0 < *(int *)(in_ECX + 0xc)) {
      do {
        dVar8 = *(double *)(in_ECX + 0x40);
        dVar1 = *(double *)(in_ECX + 0x48);
        *(double *)(in_ECX + 0x48) = dVar8;
        *(double *)(in_ECX + 0x40) = *(double *)(in_ECX + 0x50) * dVar8 - dVar1;
        dVar1 = *(double *)(in_ECX + 0x28);
        dVar6 = *(double *)(in_ECX + 0x30);
        *(double *)(in_ECX + 0x30) = dVar1;
        *(double *)(in_ECX + 0x28) = dVar1 * *(double *)(in_ECX + 0x38) - dVar6;
        fVar4 = (float10)FUN_004038a0();
        dVar6 = (double)fVar4;
        if (0.0 <= dVar6) {
          FUN_006f8700();
        }
        else {
          uVar5 = SUB84(dVar6,0);
          uVar7 = (uint)((ulonglong)dVar6 >> 0x20) ^ 0x80000000;
          FUN_006f8700();
          dVar6 = -(double)CONCAT44(uVar7,uVar5);
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
        iVar3 = iVar2 + 1;
        dVar8 = (((dVar8 - dVar1) * dVar6) / (double)iVar2) / 3.141592653589793;
        *local_14 = dVar8;
        *local_18 = dVar8;
        iVar2 = iVar3;
      } while (iVar3 <= *(int *)(in_ECX + 0xc));
    }
  }
  else {
    fVar4 = (float10)FUN_004038a0();
    *local_18 = (double)((fVar4 * (float10)(*(double *)(in_ECX + 0x18) - *(double *)(in_ECX + 0x10))
                         ) / (float10)3.141592653589793);
    if (0 < *(int *)(in_ECX + 0xc)) {
      do {
        dVar8 = *(double *)(in_ECX + 0x40);
        dVar1 = *(double *)(in_ECX + 0x48);
        *(double *)(in_ECX + 0x48) = dVar8;
        *(double *)(in_ECX + 0x40) = dVar8 * *(double *)(in_ECX + 0x50) - dVar1;
        dVar1 = *(double *)(in_ECX + 0x28);
        dVar6 = *(double *)(in_ECX + 0x30);
        *(double *)(in_ECX + 0x30) = dVar1;
        *(double *)(in_ECX + 0x28) = *(double *)(in_ECX + 0x38) * dVar1 - dVar6;
        fVar4 = (float10)FUN_004038a0();
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
        iVar3 = iVar2 + 1;
        dVar8 = (((double)fVar4 * (dVar8 - dVar1)) / (double)iVar2) / 3.141592653589793;
        *local_14 = dVar8;
        *local_18 = dVar8;
        iVar2 = iVar3;
      } while (iVar3 <= *(int *)(in_ECX + 0xc));
      return;
    }
  }
  return;
}

