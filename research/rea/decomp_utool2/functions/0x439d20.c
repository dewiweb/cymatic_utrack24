// rea decompile_all
// name: FUN_00439d20
// address: 0x439d20
// body: available
// range: 0x439d20-0x439e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439d20(int param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  int local_c;
  
  if (*(char *)(in_ECX + 0xf5) != '\0') {
    puVar1 = (uint *)(in_ECX + 0x18);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + param_2;
    *(int *)(in_ECX + 0x1c) =
         *(int *)(in_ECX + 0x1c) + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar7,param_2);
    return;
  }
  if (*(int *)(in_ECX + 0x58) < (int)param_2) {
    FUN_00403320(*(undefined4 *)(in_ECX + 0x20),param_2,0,0,1);
  }
  uVar7 = 0x20 - *(int *)(in_ECX + 0x10);
  local_c = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      uVar3 = *(uint *)(local_c * 4 + param_1);
      iVar8 = local_c;
      while (uVar3 == 0) {
        if (iVar8 < 1) goto LAB_00439e4d;
        iVar11 = iVar8 * 4;
        iVar8 = iVar8 + -1;
        uVar3 = *(uint *)(param_1 + -4 + iVar11);
      }
      iVar8 = 0;
      *(undefined1 *)(in_ECX + 0xe8) = 0;
      uVar4 = *(uint *)(local_c * 4 + *(int *)(in_ECX + 0x60));
      if (0 < (int)param_2) {
        if ((7 < param_2) &&
           ((uVar3 + (param_2 - 1) * 4 < uVar4 || ((uVar4 - 4) + param_2 * 4 < uVar3)))) {
          uVar9 = param_2 & 0x80000007;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
          }
          piVar10 = (int *)(uVar4 + 0x10);
          do {
            piVar2 = (int *)(uVar3 + iVar8 * 4);
            iVar11 = piVar2[1];
            iVar5 = piVar2[2];
            iVar6 = piVar2[3];
            iVar8 = iVar8 + 8;
            uVar12 = (ulonglong)uVar7;
            piVar10[-4] = *piVar2 << uVar12;
            piVar10[-3] = iVar11 << uVar12;
            piVar10[-2] = iVar5 << uVar12;
            piVar10[-1] = iVar6 << uVar12;
            piVar2 = (int *)((uVar3 - uVar4) + -0x20 + (int)(piVar10 + 8));
            iVar11 = piVar2[1];
            iVar5 = piVar2[2];
            iVar6 = piVar2[3];
            *piVar10 = *piVar2 << uVar12;
            piVar10[1] = iVar11 << uVar12;
            piVar10[2] = iVar5 << uVar12;
            piVar10[3] = iVar6 << uVar12;
            piVar10 = piVar10 + 8;
          } while (iVar8 < (int)(param_2 - uVar9));
        }
        if (iVar8 < (int)param_2) {
          iVar11 = param_2 - iVar8;
          piVar10 = (int *)(uVar4 + iVar8 * 4);
          do {
            *piVar10 = *(int *)((int)piVar10 + (uVar3 - uVar4)) << ((byte)uVar7 & 0x1f);
            iVar11 = iVar11 + -1;
            piVar10 = piVar10 + 1;
          } while (iVar11 != 0);
        }
      }
LAB_00439e4d:
      local_c = local_c + 1;
    } while (local_c < *(int *)(in_ECX + 0x20));
  }
  *(uint *)(in_ECX + 0xf0) = param_2;
  return;
}

