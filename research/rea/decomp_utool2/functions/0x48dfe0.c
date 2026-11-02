// rea decompile_all
// name: FUN_0048dfe0
// address: 0x48dfe0
// body: available
// range: 0x48dfe0-0x48e0be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dfe0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EDX;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((*(byte *)(in_EDX + 0x68) & 1) == 0) {
    if (*(int *)(in_EDX + 0xc) != 0) {
      piVar1 = (int *)FUN_006d1d80();
      goto LAB_0048e00b;
    }
  }
  else {
    piVar1 = (int *)FUN_0068db10();
LAB_0048e00b:
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))(&local_10,param_1,param_2);
      iVar3 = piVar1[1];
      FUN_004b1510(*puVar2,puVar2[1]);
      goto LAB_0048e095;
    }
  }
  FUN_004b1510(param_1,param_2);
  iVar3 = 0;
LAB_0048e095:
  FUN_004b0c70(iVar3,local_10,local_c);
  return;
}

