// rea decompile_all
// name: FUN_004ab1be
// address: 0x4ab1be
// body: available
// range: 0x4ab1be-0x4ab32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab1be(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *in_EDX;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  piVar9 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar9 + -1;
      if (0 < local_10) {
        iVar7 = 0;
        puVar10 = (uint *)(piVar9 + 1);
        uVar5 = *puVar10;
        in_EDX[1] = (param_1[2] + local_14) * ((int *)*in_EDX)[2] + *(int *)*in_EDX;
        while( true ) {
          local_10 = local_10 + -1;
          iVar6 = (int)uVar5 >> 8;
          if (local_10 < 0) break;
          uVar2 = puVar10[1];
          puVar10 = puVar10 + 2;
          uVar3 = *puVar10;
          if ((int)uVar3 >> 8 == iVar6) {
            iVar7 = iVar7 + (uVar3 - uVar5) * uVar2;
            uVar5 = uVar3;
          }
          else {
            if (0 < (int)((0x100 - (uVar5 & 0xff)) * uVar2 + iVar7) >> 8) {
              *(int *)(*(int *)(*in_EDX + 0xc) * iVar6 + in_EDX[1]) = in_EDX[2];
            }
            if (0 < (int)uVar2) {
              local_18 = ((int)uVar3 >> 8) - (iVar6 + 1);
              if (0 < local_18) {
                uVar5 = in_EDX[2];
                iVar8 = uVar2 + 1;
                iVar7 = *(int *)(*in_EDX + 0xc);
                puVar4 = (uint *)(iVar7 * (iVar6 + 1) + in_EDX[1]);
                do {
                  *puVar4 = ((uVar5 & 0xff00ff) * iVar8 >> 8 ^ (uVar5 >> 8 & 0xffff00ff) * iVar8) &
                            0xff00ff ^ (uVar5 >> 8 & 0xff00ff) * iVar8;
                  puVar4 = (uint *)((int)puVar4 + iVar7);
                  local_18 = local_18 + -1;
                } while (0 < local_18);
              }
            }
            iVar7 = (uVar3 & 0xff) * uVar2;
            uVar5 = uVar3;
          }
        }
        if (0 < iVar7 >> 8) {
          *(int *)(*(int *)(*in_EDX + 0xc) * iVar6 + in_EDX[1]) = in_EDX[2];
        }
      }
      local_14 = local_14 + 1;
      piVar9 = piVar9 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

