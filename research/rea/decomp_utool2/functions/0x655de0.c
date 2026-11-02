// rea decompile_all
// name: FUN_00655de0
// address: 0x655de0
// body: available
// range: 0x655de0-0x655e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00655de0(undefined4 *param_1,undefined4 *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  undefined4 *in_EDX;
  
  if ((((in_ECX != 0) && (in_EDX != (undefined4 *)0x0)) && (param_1 != (undefined4 *)0x0)) &&
     (((param_2 != (undefined4 *)0x0 && (param_3 != (uint *)0x0)) && (param_4 != (uint *)0x0)))) {
    *param_1 = *in_EDX;
    *param_2 = in_EDX[1];
    bVar1 = *(byte *)(in_EDX + 6);
    *param_3 = (uint)bVar1;
    bVar2 = *(byte *)((int)in_EDX + 0x19);
    *param_4 = (uint)bVar2;
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(in_EDX + 7);
    }
    FUN_00657460(in_EDX[1],(uint)bVar1,(uint)bVar2,*(undefined1 *)(in_EDX + 7),
                 *(undefined1 *)((int)in_EDX + 0x1a),*(undefined1 *)((int)in_EDX + 0x1b));
    return 1;
  }
  return 0;
}

