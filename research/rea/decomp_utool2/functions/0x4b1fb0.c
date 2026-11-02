// rea decompile_all
// name: FUN_004b1fb0
// address: 0x4b1fb0
// body: available
// range: 0x4b1fb0-0x4b2057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1fb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = param_1[2];
  iVar7 = in_ECX[2] + iVar5;
  if (in_ECX[1] < iVar7) {
    FUN_00409cf0(iVar7 / 2 + 8 + iVar7 & 0xfffffff8);
  }
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(iVar7 + *param_1);
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      if (piVar1 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = operator_new(0xc);
        iVar3 = *piVar1;
        *piVar4 = iVar3;
        piVar6 = (int *)(iVar3 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        piVar4[1] = piVar1[1];
        piVar4[2] = piVar1[2];
      }
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + -1;
      *(int **)(*in_ECX + iVar2 * 4) = piVar4;
    } while (-1 < iVar5);
  }
  return;
}

