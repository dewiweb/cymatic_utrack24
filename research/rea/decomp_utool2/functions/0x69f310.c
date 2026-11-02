// rea decompile_all
// name: FUN_0069f310
// address: 0x69f310
// body: available
// range: 0x69f310-0x69f35a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069f310(int *param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  uint uVar3;
  bool bVar4;
  
  uVar2 = 0;
  if (*in_ECX != 0) {
    FUN_00461a50(*in_ECX);
    uVar2 = extraout_ECX;
  }
  uVar3 = 0;
  if (0 < param_1[2]) {
    bVar4 = param_1[2] != 0;
    do {
      if (bVar4) {
        uVar1 = *(undefined4 *)(*param_1 + uVar3 * 4);
      }
      else {
        uVar1 = 0;
      }
      FUN_0069f700(uVar1,uVar2);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < (uint)param_1[2];
      uVar2 = extraout_ECX_00;
    } while ((int)uVar3 < param_1[2]);
  }
  return;
}

