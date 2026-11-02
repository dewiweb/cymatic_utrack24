// rea decompile_all
// name: FUN_004485c0
// address: 0x4485c0
// body: available
// range: 0x4485c0-0x44867b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004485c0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,double param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (((param_7 != 0.0) && (0 < param_6)) && (*(char *)(param_3 + 0x94) == '\0')) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + param_1 * 4);
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0xc) + param_4 * 4);
    if (*(char *)(in_ECX + 0x94) != '\0') {
      *(undefined1 *)(in_ECX + 0x94) = 0;
      if (param_7 != 1.0) {
        FUN_005c6a50(param_6);
        return;
      }
      FUN_004c2c30(uVar1,uVar2,param_6 * 8);
      return;
    }
    if (param_7 != 1.0) {
      FUN_005c6710(param_6);
      return;
    }
    FUN_005c68d0(param_6);
  }
  return;
}

