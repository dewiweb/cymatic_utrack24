// rea decompile_all
// name: FUN_006cf380
// address: 0x6cf380
// body: available
// range: 0x6cf380-0x6cf441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006cf380(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  undefined3 uVar3;
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = CONCAT31(uVar3,param_1 < (uint)in_ECX[6]);
  if (param_1 < (uint)in_ECX[6]) {
    uVar1 = CONCAT31(uVar3,param_2 < (uint)in_ECX[7]);
    if (param_2 < (uint)in_ECX[7]) {
      uVar1 = (**(code **)(*in_ECX + 0x48))(param_1,param_2);
      if ((char)uVar1 != '\0') {
        if (in_ECX[3] != 0) {
          FUN_004b1190(param_1,param_2);
          uVar1 = FUN_006cf380();
          return uVar1;
        }
        if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
          piVar2 = (int *)FUN_006d1d80();
          uVar1 = 0;
          if (piVar2 != (int *)0x0) {
            FUN_004b12f0(param_1,param_2);
            uVar1 = (**(code **)(*piVar2 + 0x48))();
            return uVar1;
          }
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}

