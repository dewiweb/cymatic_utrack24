// rea decompile_all
// name: FUN_00024bd0
// address: 0x24bd0
// body: available
// range: 0x24bd0-0x24ca5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24ca1 to 0x24920 FUN_00024920 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024bd0(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  *param_1 = &PTR_FUN_00028150;
  if (*(char *)(param_1 + 5) == '\0') {
    KeWaitForSingleObject(param_1 + 0xe,0,0,0,0);
    *(undefined1 *)(param_1 + 5) = 1;
    KeReleaseMutex(param_1 + 0xe,0);
    FUN_00024cac((longlong)param_1);
    KeClearEvent(param_1 + 10);
    if (0 < *(int *)(param_1 + 9)) {
      do {
        local_res8 = 0xffffffffffb3b4c0;
        iVar1 = KeWaitForSingleObject(param_1 + 10,0,0,0,&local_res8);
      } while (iVar1 == 0x102);
    }
    FUN_00013b58((longlong)(param_1 + 0x15));
    FUN_00013b58((longlong)(param_1 + 0x1f));
  }
  FUN_00024920((uint *)(param_1 + 0x2a));
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00024920((uint *)(param_1 + 0x2a));
  return;
}

