// rea decompile_all
// name: FUN_00012d28
// address: 0x12d28
// body: available
// range: 0x12d28-0x12dc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00012d28(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  void *_Src;
  longlong lVar1;
  
  if (param_3 == 0) {
    PoStartNextPowerIrp(param_2);
    *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
    *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
  }
  else {
    _Src = *(void **)(param_2 + 0xb8);
    memcpy((void *)((longlong)_Src + -0x48),_Src,0x38);
    *(undefined1 *)((longlong)_Src + -0x45) = 0;
    lVar1 = *(longlong *)(param_2 + 0xb8);
    *(longlong *)(lVar1 + -0x10) = param_3;
    *(undefined8 *)(lVar1 + -8) = param_4;
    *(undefined1 *)(lVar1 + -0x45) = 0xe0;
  }
                    /* WARNING: Could not recover jumptable at 0x00012dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PoCallDriver(*(undefined8 *)(param_1 + 0x68),param_2);
  return;
}

