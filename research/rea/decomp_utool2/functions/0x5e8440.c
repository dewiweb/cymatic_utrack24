// rea decompile_all
// name: FUN_005e8440
// address: 0x5e8440
// body: available
// range: 0x5e8440-0x5e8738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e8440(void)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *in_EDX;
  uint uVar11;
  int iVar12;
  float fVar13;
  
  iVar9 = *(int *)(in_ECX + 4);
  piVar4 = *(int **)(iVar9 + 0x1c);
  pfVar5 = *(float **)(*(int *)(in_ECX + 0x68) + 0x3c);
  iVar10 = *(int *)(in_ECX + 0x30) - piVar4[*(int *)(in_ECX + 0x28)] / 2;
  piVar6 = (int *)in_EDX[0x1a];
  if (*(int *)(in_ECX + 0x1c) == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x20) == -1) {
    return 0;
  }
  iVar7 = FUN_005e60b0();
  if (iVar7 == -1) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      return 0;
    }
  }
  else if (*piVar4 != piVar4[1]) {
    *(int *)(in_ECX + 0x2c) = iVar7;
    goto LAB_005e84ba;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
LAB_005e84ba:
  iVar7 = piVar4[*(int *)(in_ECX + 0x2c)];
  iVar12 = ((int)((piVar4[*(int *)(in_ECX + 0x28)] >> 0x1f & 3U) + piVar4[*(int *)(in_ECX + 0x28)])
           >> 2) + ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) + *(int *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x14) < iVar7 / 2 + iVar12) {
    return 0;
  }
  FUN_005e92f0();
  in_EDX[6] = *(int *)(in_ECX + 0x24);
  in_EDX[7] = *(int *)(in_ECX + 0x28);
  in_EDX[8] = *(int *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar7 = FUN_005e5fe0();
    piVar6[2] = (uint)(iVar7 == 0);
  }
  else if ((*(int *)(in_ECX + 0x24) == 0) || (*(int *)(in_ECX + 0x2c) == 0)) {
    piVar6[2] = 0;
  }
  else {
    piVar6[2] = 1;
  }
  in_EDX[0x10] = in_ECX;
  in_EDX[0xe] = *(int *)(in_ECX + 0x40);
  in_EDX[0xf] = *(int *)(in_ECX + 0x44);
  puVar1 = (uint *)(in_ECX + 0x40);
  uVar11 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + (uint)(0xfffffffe < uVar11);
  in_EDX[0xc] = *(int *)(in_ECX + 0x38);
  in_EDX[0xd] = *(int *)(in_ECX + 0x3c);
  in_EDX[9] = piVar4[*(int *)(in_ECX + 0x28)];
  fVar2 = (float)piVar6[1];
  if (*pfVar5 <= fVar2 && fVar2 != *pfVar5) {
    *pfVar5 = fVar2;
  }
  iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
  fVar13 = ((float)(*(int *)(iVar7 + *(int *)(in_ECX + 0x28) * 4) / 2) /
           (float)*(int *)(*(int *)(in_ECX + 4) + 8)) * *(float *)(iVar7 + 0xb78) + *pfVar5;
  fVar2 = -9999.0;
  if (-9999.0 <= fVar13) {
    fVar2 = fVar13;
  }
  *pfVar5 = fVar2;
  piVar6[1] = (int)fVar2;
  iVar7 = FUN_005e9360();
  *in_EDX = iVar7;
  iVar7 = FUN_005e9360();
  *piVar6 = iVar7;
  iVar7 = 0;
  if (0 < *(int *)(iVar9 + 4)) {
    do {
      uVar8 = FUN_005e9360();
      *(undefined4 *)(*piVar6 + iVar7 * 4) = uVar8;
      FUN_004c2c30(*(undefined4 *)(*piVar6 + iVar7 * 4),
                   *(undefined4 *)(*(int *)(in_ECX + 8) + iVar7 * 4),(in_EDX[9] + iVar10) * 4);
      *(int *)(*in_EDX + iVar7 * 4) = *(int *)(*piVar6 + iVar7 * 4) + iVar10 * 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar9 + 4));
  }
  if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(in_ECX + 0x20) <= *(int *)(in_ECX + 0x30))) {
    *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
    in_EDX[0xb] = 1;
    return 1;
  }
  iVar10 = piVar4[1] / 2;
  uVar11 = iVar12 - iVar10;
  if (0 < (int)uVar11) {
    FUN_005e5f70();
    iVar7 = 0;
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) - uVar11;
    if (0 < *(int *)(iVar9 + 4)) {
      do {
        iVar12 = *(int *)(*(int *)(in_ECX + 8) + iVar7 * 4);
        FUN_004c1df0(iVar12,iVar12 + uVar11 * 4,*(int *)(in_ECX + 0x14) << 2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar9 + 4));
    }
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x28);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x30) = iVar10;
    if (*(int *)(in_ECX + 0x20) != 0) {
      iVar9 = *(int *)(in_ECX + 0x20) - uVar11;
      if (iVar9 < 1) {
        iVar9 = -1;
      }
      *(int *)(in_ECX + 0x20) = iVar9;
      if (iVar9 <= iVar10) {
        uVar11 = (iVar9 - iVar10) + uVar11;
        puVar1 = (uint *)(in_ECX + 0x38);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar11;
        *(int *)(in_ECX + 0x3c) =
             *(int *)(in_ECX + 0x3c) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar3,uVar11);
        return 1;
      }
    }
    puVar1 = (uint *)(in_ECX + 0x38);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar11;
    *(int *)(in_ECX + 0x3c) =
         *(int *)(in_ECX + 0x3c) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar3,uVar11);
  }
  return 1;
}

