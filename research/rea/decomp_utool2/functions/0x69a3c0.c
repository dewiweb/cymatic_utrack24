// rea decompile_all
// name: FUN_0069a3c0
// address: 0x69a3c0
// body: available
// range: 0x69a3c0-0x69a452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a3c0(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  undefined1 local_44 [64];
  
  if ((((*(char *)(in_ECX + 0xaa) == '\0') && (*(char *)(in_ECX + 0xab) != '\0')) &&
      (*(int *)(param_1 + 0x18) == in_ECX)) && (*(float *)(param_2 + 4) != (float)(undefined *)0x0))
  {
    fVar1 = *(float *)(in_ECX + 0xac);
    fVar5 = *(float *)(param_2 + 4) * 5.0 + fVar1;
    *(float *)(in_ECX + 0xac) = fVar5;
    iVar4 = (int)fVar1 - (int)fVar5;
    if (iVar4 != 0) {
      FUN_0069b230(iVar4);
      return;
    }
  }
  else {
    piVar2 = *(int **)(in_ECX + 0xc);
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      uVar3 = FUN_006cff90(local_44,piVar2);
      (**(code **)(iVar4 + 0x20))(uVar3,param_2);
    }
  }
  return;
}

