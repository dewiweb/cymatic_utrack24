// rea decompile_all
// name: FUN_00664680
// address: 0x664680
// body: available
// range: 0x664680-0x66470c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00664680(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x5f] == 0) {
    uVar1 = FUN_00664aa0();
    if ((char)uVar1 == '\0') goto LAB_0066469b;
  }
  if (param_1[0x5f] == *(int *)(param_1[0x65] + 0x10) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x10);
    (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x5f] = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[6] + 0x14))(param_1,*(int *)(param_1[0x65] + 0x10));
    if ((char)uVar1 == '\0') {
LAB_0066469b:
      return uVar1 & 0xffffff00;
    }
  }
  *(uint *)(param_1[0x65] + 0x10) = *(int *)(param_1[0x65] + 0x10) + 1U & 7;
  return 1;
}

