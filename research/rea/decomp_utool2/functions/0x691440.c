// rea decompile_all
// name: FUN_00691440
// address: 0x691440
// body: available
// range: 0x691440-0x6914e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691440(int param_1)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)in_ECX[0xe6];
  piVar2 = piVar1;
  do {
    if (piVar2 == piVar1 + in_ECX[0xe8]) {
      iVar3 = -1;
LAB_00691471:
      FUN_0040e370(param_1,in_ECX + 0xe6);
      piVar1 = (int *)FUN_00692320();
      if (piVar1 != (int *)0x0) {
        FUN_00411110(iVar3,piVar1);
        (**(code **)(*piVar1 + 0x28))(1);
        FUN_006e5050(piVar1,iVar3);
        FUN_00692570(2);
      }
      (**(code **)(*in_ECX + 0x84))();
      return;
    }
    if (param_1 == *piVar2) {
      iVar3 = (int)piVar2 - (int)piVar1 >> 2;
      goto LAB_00691471;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

