// rea decompile_all
// name: FUN_00443b70
// address: 0x443b70
// body: available
// range: 0x443b70-0x443bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00443b70(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = *in_ECX;
  uVar2 = *(uint *)(iVar6 + 0xb4);
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      return iVar7;
    }
    if (uVar2 < *(uint *)(iVar6 + 0xb4)) {
      piVar3 = *(int **)(*(int *)(iVar6 + 0xac) + uVar2 * 4);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (piVar3[2] == param_1) {
      piVar4 = (int *)in_ECX[0xb];
      piVar1 = piVar4 + in_ECX[0xd];
      for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
        if (*piVar3 == *piVar4) {
          uVar5 = (int)piVar4 - in_ECX[0xb] >> 2;
          goto LAB_00443bc1;
        }
      }
      uVar5 = 0xffffffff;
LAB_00443bc1:
      if (uVar5 < (uint)in_ECX[0x10]) {
        iVar6 = *(int *)(in_ECX[0xe] + uVar5 * 4);
      }
      else {
        iVar6 = 0;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
    }
    iVar6 = *in_ECX;
  } while( true );
}

