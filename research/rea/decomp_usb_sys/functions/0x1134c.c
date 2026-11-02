// rea decompile_all
// name: FUN_0001134c
// address: 0x1134c
// body: available
// range: 0x1134c-0x1140e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001134c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [2];
  undefined2 local_26;
  longlong local_20;
  char local_17;
  
  RtlInitUnicodeString(local_48);
  if (param_3 < 3) {
    iVar1 = FUN_00011008((longlong)local_38);
    if (iVar1 == 0) {
      iVar1 = ZwSetValueKey(param_1,local_48,0,param_3,local_20,local_26);
      if ((local_17 != '\0') && (local_20 != 0)) {
        RtlFreeUnicodeString(local_28);
      }
    }
  }
  else if (param_3 == 4) {
    iVar1 = ZwSetValueKey(param_1,local_48,0,4,param_4,4);
  }
  else {
    iVar1 = -0x3ffffff3;
  }
  return iVar1;
}

