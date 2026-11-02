// rea decompile_all
// name: FUN_00019450
// address: 0x19450
// body: available
// range: 0x19450-0x1950d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00019450(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  
  puVar2 = (ulonglong *)ExAllocatePoolWithTag(0,0x1000,0x42737661);
  *(ulonglong **)(param_1 + 0x1d8) = puVar2;
  if (puVar2 == (ulonglong *)0x0) {
    uVar3 = 0xc000009a;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  else {
    FUN_0001cf40(puVar2,0,0x1000);
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = 0x1000;
    *(longlong *)(param_1 + 0x1e8) = lVar1;
    *(longlong *)(param_1 + 0x1f0) = lVar1 + 0x1000;
    *(longlong *)(param_1 + 0x1f8) = lVar1;
    *(longlong *)(param_1 + 0x200) = lVar1;
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  return uVar3;
}

