// rea decompile_all
// name: FUN_005dd2e0
// address: 0x5dd2e0
// body: available
// range: 0x5dd2e0-0x5dd483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005dd2e0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int in_EDX;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float afStack_3c [2];
  int local_1c;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  afStack_3c[1] = 8.616408e-39;
  afStack_3c[1 - param_1] = 8.616425e-39;
  iVar6 = 0;
  iVar10 = 0;
  local_1c = 0;
  if (0 < param_1) {
    do {
      if ((1 < iVar6) &&
         (fVar2 = *(float *)(in_ECX + iVar10 * 4), afStack_3c[param_1 * -2 + iVar6 + 1] <= fVar2)) {
        pfVar7 = afStack_3c + (iVar6 - param_1);
        do {
          if (((((int)afStack_3c[(iVar6 + 1) - param_1] + in_EDX <= iVar10) || (iVar6 < 2)) ||
              (pfVar7[-param_1] < afStack_3c[param_1 * -2 + iVar6 + 1])) ||
             ((int)*pfVar7 + in_EDX <= iVar10)) break;
          iVar8 = param_1 * -2 + iVar6;
          iVar6 = iVar6 + -1;
          pfVar7 = pfVar7 + -1;
        } while (afStack_3c[iVar8] <= fVar2);
      }
      *(int *)(&stack0xffffffcc + iVar6 * 4 + param_1 * -4) = iVar10;
      iVar8 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(&stack0xffffffcc + iVar6 * 4 + param_1 * -8) = *(undefined4 *)(in_ECX + iVar8)
      ;
      iVar6 = iVar6 + 1;
      local_1c = iVar6;
    } while (iVar10 < param_1);
  }
  iVar6 = 0;
  iVar10 = 0;
  if (0 < local_1c) {
    piVar4 = (int *)(&stack0xffffffd0 + param_1 * -4);
    do {
      if ((local_1c + -1 <= iVar10) ||
         ((float)piVar4[-param_1] < *(float *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8) ||
          (float)piVar4[-param_1] == *(float *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8))) {
        iVar8 = in_EDX + 1 + piVar4[-1];
      }
      else {
        iVar8 = *piVar4;
      }
      if (param_1 < iVar8) {
        iVar8 = param_1;
      }
      if (iVar6 < iVar8) {
        if (3 < iVar8 - iVar6) {
          iVar1 = iVar6 * 4;
          iVar5 = ((iVar8 - iVar6) - 4U >> 2) + 1;
          iVar6 = iVar6 + iVar5 * 4;
          puVar9 = (undefined4 *)(in_ECX + iVar1 + 8);
          do {
            puVar9[-2] = *(undefined4 *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8);
            puVar9[-1] = *(undefined4 *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8);
            *puVar9 = *(undefined4 *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8);
            puVar9[1] = *(undefined4 *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8);
            iVar5 = iVar5 + -1;
            puVar9 = puVar9 + 4;
          } while (iVar5 != 0);
        }
        for (; iVar6 < iVar8; iVar6 = iVar6 + 1) {
          *(undefined4 *)(in_ECX + iVar6 * 4) =
               *(undefined4 *)(&stack0xffffffcc + iVar10 * 4 + param_1 * -8);
        }
      }
      iVar10 = iVar10 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar10 < local_1c);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

