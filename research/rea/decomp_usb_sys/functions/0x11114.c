// rea decompile_all
// name: FUN_00011114
// address: 0x11114
// body: available
// range: 0x11114-0x11173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00011114(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong local_20;
  char local_17;
  
  uVar2 = FUN_00011008((longlong)local_38);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_0001104c(param_1,param_2,local_20,0x101);
    uVar2 = (ulonglong)uVar1;
    if ((local_17 != '\0') && (local_20 != 0)) {
      RtlFreeUnicodeString(local_28);
    }
  }
  return uVar2;
}

