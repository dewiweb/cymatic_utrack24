// rea decompile_all
// name: FUN_0041cbc9
// address: 0x41cbc9
// body: available
// range: 0x41cbc9-0x41cd05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cbc9(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint local_20;
  int *local_1c;
  uint local_14;
  int local_c;
  
  local_14 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar4 = false;
      piVar7 = (int *)(*(int *)(param_1 + 0xc) + local_14 * 8);
      if (3 < (uint)piVar7[1]) {
        piVar7 = (int *)*piVar7;
        piVar5 = piVar7;
        do {
          piVar5 = (int *)piVar5[1];
          if (piVar5 == piVar7) goto LAB_0041ccf2;
          iVar1 = piVar5[9];
          iVar2 = piVar7[9];
          piVar3 = piVar7;
        } while ((iVar1 - iVar2 == 0) && (piVar5[10] == piVar7[10]));
        do {
          local_1c = piVar3;
          piVar3 = (int *)*local_1c;
          if (piVar3 == piVar7) goto LAB_0041ccf2;
          local_c = local_1c[9] - piVar3[9];
        } while (((local_c == 0) && (local_1c[10] == piVar3[10])) ||
                (local_20 = FUN_0040d4f6(iVar1 - iVar2), piVar8 = local_1c, local_20 == 0));
        do {
          do {
            piVar7 = piVar5;
            piVar5 = (int *)piVar7[1];
            if (piVar5 == local_1c) {
              bVar4 = true;
            }
            iVar1 = piVar5[9];
            iVar2 = piVar7[9];
          } while (((iVar1 - iVar2 == 0) && (piVar5[10] == piVar7[10])) ||
                  (uVar6 = FUN_0040d4f6(local_c), uVar6 == 0));
          if ((int)(uVar6 ^ local_20) < 0) {
            do {
              piVar8[3] = piVar8[3] | 4;
              piVar8 = (int *)piVar8[1];
            } while (piVar8 != piVar7);
            piVar8[3] = piVar8[3] | 4;
          }
          local_c = iVar1 - iVar2;
          local_20 = uVar6;
          piVar8 = piVar7;
        } while (!bVar4);
      }
LAB_0041ccf2:
      local_14 = local_14 + 1;
    } while (local_14 < *(uint *)(param_1 + 4));
  }
  return;
}

