// rea decompile_all
// name: FUN_00472a40
// address: 0x472a40
// body: available
// range: 0x472a40-0x472ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00472a40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)*in_ECX;
  piVar2 = piVar4 + in_ECX[2] * 4;
  piVar3 = piVar2;
  if (piVar4 != piVar2) {
    piVar1 = (int *)*param_1;
    do {
      piVar3 = piVar1;
      if (piVar1 != piVar1 + param_1[2] * 4) {
        iVar5 = *piVar4;
        do {
          if (iVar5 < piVar3[2] + *piVar3) {
            if ((((piVar4[1] < piVar3[1] + piVar3[3]) && (*piVar3 < piVar4[2] + *piVar4)) &&
                (piVar3[1] < piVar4[1] + piVar4[3])) &&
               (((0 < piVar3[2] && (0 < piVar3[3])) && ((0 < piVar4[2] && (0 < piVar4[3])))))) {
              return CONCAT31((int3)((uint)piVar3 >> 8),1);
            }
            iVar5 = *piVar4;
          }
          piVar3 = piVar3 + 4;
        } while (piVar3 != piVar1 + param_1[2] * 4);
      }
      piVar4 = piVar4 + 4;
    } while (piVar4 != piVar2);
  }
  return (uint)piVar3 & 0xffffff00;
}

