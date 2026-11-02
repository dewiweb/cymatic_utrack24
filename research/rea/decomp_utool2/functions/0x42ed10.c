// rea decompile_all
// name: FUN_0042ed10
// address: 0x42ed10
// body: available
// range: 0x42ed10-0x42ee19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ed10(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint *in_ECX;
  int *piVar2;
  int *piVar3;
  float *in_EDX;
  int iVar4;
  
  if (param_3 == '\0') {
    while (param_2 = param_2 - 1, -1 < (int)param_2) {
      uVar1 = *in_ECX;
      in_ECX = (uint *)((int)in_ECX + param_1);
      *in_EDX = (float)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18) * 4.656613e-10;
      in_EDX = in_EDX + 1;
    }
  }
  else {
    iVar4 = param_2 - 1;
    if (-1 < iVar4) {
      if (3 < (int)param_2) {
        param_2 = param_2 >> 2;
        iVar4 = iVar4 + param_2 * -4;
        do {
          *in_EDX = (float)(int)*in_ECX * 4.656613e-10;
          piVar2 = (int *)((int)in_ECX + param_1 + param_1);
          in_EDX[1] = (float)*(int *)((int)in_ECX + param_1) * 4.656613e-10;
          piVar3 = (int *)((int)piVar2 + param_1);
          in_EDX[2] = (float)*piVar2 * 4.656613e-10;
          in_ECX = (uint *)((int)piVar3 + param_1);
          in_EDX[3] = (float)*piVar3 * 4.656613e-10;
          in_EDX = in_EDX + 4;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      if (-1 < iVar4) {
        do {
          uVar1 = *in_ECX;
          in_ECX = (uint *)((int)in_ECX + param_1);
          iVar4 = iVar4 + -1;
          *in_EDX = (float)(int)uVar1 * 4.656613e-10;
          in_EDX = in_EDX + 1;
        } while (-1 < iVar4);
        return;
      }
    }
  }
  return;
}

