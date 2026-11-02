// rea decompile_all
// name: FUN_00012dc8
// address: 0x12dc8
// body: available
// range: 0x12dc8-0x12e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12e8f to 0x12d28 FUN_00012d28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00012dc8(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined8 local_18;
  
  if (param_3 == 1) {
    iVar1 = 1;
  }
  else if (param_3 < 7) {
    iVar1 = *(int *)(param_1 + 0x34 + (longlong)(int)param_3 * 4);
  }
  else {
    iVar1 = 4;
  }
  if (((iVar1 - 1U < 4) && (iVar1 != *(int *)(param_1 + 0x20))) &&
     ((iVar1 == 1 || (*(int *)(param_1 + 0x20) == 1)))) {
    KeInitializeEvent(local_38,0,0);
    local_18 = 0;
    local_20 = 0xc0000001;
    PoRequestPowerIrp(*(undefined8 *)(param_1 + 0x68),2,iVar1,&LAB_00012e9c,local_38,0);
    KeWaitForSingleObject(local_38,5,0,0,0);
  }
  FUN_00012d28(param_1,param_2,0,0);
  return;
}

