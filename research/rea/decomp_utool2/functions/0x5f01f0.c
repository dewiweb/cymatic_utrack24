// rea decompile_all
// name: FUN_005f01f0
// address: 0x5f01f0
// body: available
// range: 0x5f01f0-0x5f0449 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005f01f0(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *in_ECX;
  uint uVar9;
  byte *in_EDX;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  if ((*(code **)(in_ECX[1] + 0x1c64) != (code *)0x0) &&
     (iVar7 = (**(code **)(in_ECX[1] + 0x1c64))(), iVar7 == 1)) {
    *(undefined4 *)*in_ECX = 5;
    return 1;
  }
  if (param_2 == 0) {
    if ((*in_EDX & 0x7f) == 0) {
      iVar7 = *in_ECX;
      *(undefined4 *)(iVar7 + 0x260) = 0;
      *(undefined4 *)(iVar7 + 0x264) = 0;
    }
    else if (((*in_EDX & 0x7f) == 3) &&
            (iVar7 = *in_ECX, *(int *)(iVar7 + 0x268) == 0 && *(int *)(iVar7 + 0x26c) == 0)) {
      *(undefined4 *)(iVar7 + 0x268) = 0;
      *(undefined4 *)(iVar7 + 0x26c) = 0;
    }
  }
  iVar7 = in_ECX[1];
  puVar10 = *(uint **)(iVar7 + 0x1b88);
  if ((puVar10 != (uint *)0x0) &&
     (((iVar13 = *in_ECX, *(int *)(iVar13 + 0x274) != 0 || (*(int *)(iVar13 + 0x270) != 0)) &&
      (*puVar10 != 0)))) {
    uVar8 = *(uint *)(iVar13 + 0x24);
    uVar9 = *(uint *)(iVar7 + 0x1c88);
    uVar2 = *(uint *)(iVar7 + 0x1c8c);
    uVar11 = uVar2 + CARRY4(uVar8,uVar9) + -1 + (uint)(uVar8 + uVar9 != 0);
    uVar12 = *(uint *)(iVar7 + 0x1c78);
    if (uVar12 < *puVar10) {
      iVar13 = uVar12 * 0x18;
      do {
        uVar3 = *(uint *)(puVar10[1] + iVar13);
        puVar10 = (uint *)(puVar10[1] + iVar13);
        uVar4 = puVar10[1];
        if ((uVar11 < uVar4) || ((uVar11 <= uVar4 && ((uVar8 + uVar9) - 1 < uVar3)))) break;
        if ((uVar4 < uVar2) || ((uVar4 == uVar2 && (uVar3 < uVar9)))) {
          *(int *)(iVar7 + 0x1c78) = *(int *)(iVar7 + 0x1c78) + 1;
        }
        else {
          *puVar10 = uVar9;
          puVar10[1] = uVar2;
          piVar1 = (int *)(*in_ECX + 0x270);
          iVar7 = *piVar1;
          iVar5 = *(int *)(*in_ECX + 0x274);
          iVar6 = *(int *)(*(int *)(in_ECX[1] + 0x1b88) + 4);
          *(int *)(iVar6 + 8 + iVar13) = -*piVar1;
          *(uint *)(iVar6 + 0xc + iVar13) = -(uint)(iVar7 != 0) - iVar5;
          *(uint *)(*(int *)(*(int *)(in_ECX[1] + 0x1b88) + 4) + 0x10 + iVar13) = uVar8;
          *(int *)(in_ECX[1] + 0x1c78) = *(int *)(in_ECX[1] + 0x1c78) + 1;
        }
        iVar7 = in_ECX[1];
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 0x18;
        puVar10 = *(uint **)(iVar7 + 0x1b88);
      } while (uVar12 < *puVar10);
    }
  }
  iVar7 = (**(code **)(in_ECX[1] + 0x1c68))();
  if (iVar7 != 0) {
    *(undefined4 *)*in_ECX = 5;
    return iVar7;
  }
  iVar7 = in_ECX[1];
  puVar10 = (uint *)(iVar7 + 0x1c80);
  uVar8 = *puVar10;
  *puVar10 = *puVar10 + param_1;
  piVar1 = (int *)(iVar7 + 0x1c84);
  *piVar1 = *piVar1 + (uint)CARRY4(uVar8,param_1);
  iVar7 = in_ECX[1];
  puVar10 = (uint *)(iVar7 + 0x1c88);
  uVar8 = *puVar10;
  *puVar10 = *puVar10 + param_2;
  piVar1 = (int *)(iVar7 + 0x1c8c);
  *piVar1 = *piVar1 + (uint)CARRY4(uVar8,param_2);
  iVar7 = in_ECX[1];
  uVar9 = *(int *)(iVar7 + 0x1b90) + 1;
  uVar8 = *(uint *)(iVar7 + 0x1c90);
  if (*(uint *)(iVar7 + 0x1c90) < uVar9) {
    uVar8 = uVar9;
  }
  *(uint *)(iVar7 + 0x1c90) = uVar8;
  return 0;
}

