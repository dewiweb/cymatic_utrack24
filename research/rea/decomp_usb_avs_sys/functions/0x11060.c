// rea decompile_all
// name: FUN_00011060
// address: 0x11060
// body: available
// range: 0x11060-0x11145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00011060(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  DAT_000201b0 = 0x719b3800aa000080;
  DAT_000201a8 = 0x10000000000092;
  puVar2 = (undefined8 *)ExAllocatePoolWithTag(0,0x30,0x42737661);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    DAT_000201c0 = puVar2;
    *puVar2 = &PTR_FUN_0001f078;
    puVar1 = puVar2 + 1;
    puVar2[2] = puVar1;
    *puVar1 = puVar1;
    puVar2[3] = 8;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    uVar3 = KsInitializeDriver(param_1,param_2,&PTR_PTR_0001e870);
    DAT_000201b8 = *(undefined8 *)(param_1 + 0x68);
    *(code **)(param_1 + 0x68) = FUN_00011010;
    return uVar3;
  }
  DAT_000201c0 = (undefined8 *)0x0;
  return 0xc000009a;
}

