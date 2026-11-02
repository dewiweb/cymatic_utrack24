// rea decompile_all
// name: FUN_000121b4
// address: 0x121b4
// body: available
// range: 0x121b4-0x1229f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1229b to 0x11d24 FUN_00011d24 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000121b4(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_00027cc0;
  while (plVar1 = (longlong *)param_1[0x14], plVar1 != param_1 + 0x14) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    puVar2 = (undefined8 *)((longlong)plVar1 - param_1[0x16]);
    if (puVar2 == (undefined8 *)0x0) break;
    *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
    FUN_00011d54((longlong)puVar2);
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1[0x10] != 0) {
    RtlFreeUnicodeString(param_1 + 0xf);
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (param_1[0x12] != 0) {
    RtlFreeUnicodeString(param_1 + 0x11);
    param_1[0x12] = 0;
    *(undefined1 *)((longlong)param_1 + 0x99) = 0;
  }
  if (param_1[0xd] != 0) {
    IoDetachDevice();
    param_1[0xd] = 0;
  }
  FUN_00011d54((longlong)param_1);
  DAT_00029264 = DAT_00029264 + -1;
  FUN_00011d24(param_1);
  return;
}

