// rea decompile_all
// name: FUN_0001bed0
// address: 0x1bed0
// body: available
// range: 0x1bed0-0x1bf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0001bed0(longlong param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                   uint param_6)

{
  if (param_2 == (byte *)0x0) {
    param_2 = *(byte **)(param_1 + 0x1b70);
  }
  while( true ) {
    if ((byte *)(*(longlong *)(param_1 + 0x1b78) + -2) <= param_2) {
      return (byte *)0x0;
    }
    if ((((param_2[1] == 4) && ((param_3 == 0xffffffff || (param_3 == param_2[2])))) &&
        ((param_4 == 0xffffffff || (param_4 == param_2[3])))) &&
       (((param_5 == 0xffffffff || (param_5 == param_2[5])) &&
        ((param_6 == 0xffffffff || (param_6 == param_2[6])))))) break;
    param_2 = param_2 + *param_2;
    if (*param_2 == 0) {
      return (byte *)0x0;
    }
  }
  return param_2;
}

