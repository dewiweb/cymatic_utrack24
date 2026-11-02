// rea decompile_all
// name: FUN_00025d38
// address: 0x25d38
// body: available
// range: 0x25d38-0x25dea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00025d38(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_3 + 0x34);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  KeWaitForSingleObject(param_1 + 0x70,0,0,0,0);
  *(longlong *)(param_1 + 0x1a8) = param_1 + 0x1d8;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(longlong *)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x10) = param_3;
  FUN_00024920((uint *)(param_1 + 0x150));
  uVar3 = FUN_000246b4((uint *)(param_1 + 0x150),1,uVar1,
                       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x4c));
  KeReleaseMutex(param_1 + 0x70,0);
  return uVar3 & 0xffffffff;
}

