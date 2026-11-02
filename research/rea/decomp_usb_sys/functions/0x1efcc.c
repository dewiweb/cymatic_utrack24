// rea decompile_all
// name: FUN_0001efcc
// address: 0x1efcc
// body: available
// range: 0x1efcc-0x1f079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001efcc(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_00029268;
  uVar3 = 0;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  lVar2 = DAT_00029268;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar2 = FUN_00024054((longlong *)(lVar2 + 0x120),*param_2);
  if (lVar2 == 0) {
    uVar3 = 0xe0000040;
  }
  else {
    *param_3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0xe0);
    param_3[1] = *(undefined4 *)(lVar2 + 0x1c);
    param_3[2] = (uint)(*(char *)(lVar2 + 0x114) == '\0');
  }
  KeReleaseMutex(lVar1 + 0x18,0);
  return uVar3;
}

