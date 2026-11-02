// rea decompile_all
// name: FUN_00024d74
// address: 0x24d74
// body: available
// range: 0x24d74-0x24de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024d74(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  KeWaitForSingleObject(param_2 + 0xe,0,0,0,0);
  if ((char)param_2[5] == '\0') {
    FUN_00024cac((longlong)param_2);
    *(undefined1 *)(param_2 + 0x29) = 0;
    (**(code **)(*param_2 + 8))(param_2);
  }
  KeReleaseMutex(param_2 + 0xe,0);
  LOCK();
  plVar1 = param_2 + 9;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    KeSetEvent(param_2 + 10,0,0);
  }
  return;
}

