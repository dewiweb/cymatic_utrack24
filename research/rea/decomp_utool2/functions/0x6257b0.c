// rea decompile_all
// name: FUN_006257b0
// address: 0x6257b0
// body: available
// range: 0x6257b0-0x62589e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006257b0(int *param_1)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)*in_ECX;
  piVar5 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar5 = in_ECX + 1;
  }
  iVar2 = in_ECX[6] >> 5;
  if (-1 < iVar2) {
LAB_006257d3:
    uVar1 = piVar5[iVar2];
    if (uVar1 == 0) goto code_r0x006257da;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = iVar2 * 0x20 + iVar3;
    goto LAB_006257e2;
  }
LAB_006257df:
  iVar3 = -1;
LAB_006257e2:
  piVar6 = (int *)*param_1;
  piVar5 = piVar6;
  if (piVar6 == (int *)0x0) {
    piVar5 = param_1 + 1;
  }
  iVar2 = param_1[6] >> 5;
  do {
    if (iVar2 < 0) {
      iVar4 = -1;
LAB_0062580f:
      if (iVar4 < iVar3) {
        return 1;
      }
      if (iVar3 < iVar4) {
        return -1;
      }
      if (piVar7 == (int *)0x0) {
        piVar7 = in_ECX + 1;
      }
      if (piVar6 == (int *)0x0) {
        piVar6 = param_1 + 1;
      }
      iVar3 = iVar3 >> 5;
      if (-1 < iVar3) {
        piVar5 = piVar7 + iVar3;
        do {
          if (*piVar5 != *(int *)(((int)piVar6 - (int)piVar7) + (int)piVar5)) {
            return (-(uint)((uint)piVar6[iVar3] < (uint)piVar7[iVar3]) & 2) - 1;
          }
          piVar5 = piVar5 + -1;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      return 0;
    }
    uVar1 = piVar5[iVar2];
    if (uVar1 != 0) {
      iVar4 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = iVar2 * 0x20 + iVar4;
      goto LAB_0062580f;
    }
    iVar2 = iVar2 + -1;
  } while( true );
code_r0x006257da:
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) goto LAB_006257df;
  goto LAB_006257d3;
}

