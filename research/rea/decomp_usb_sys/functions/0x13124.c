// rea decompile_all
// name: FUN_00013124
// address: 0x13124
// body: available
// range: 0x13124-0x13231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00013124(longlong param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong local_res8;
  
  FUN_0001303c(param_1);
  uVar2 = FUN_00013094((undefined8 *)(param_1 + 0x38),param_2);
  if (((-1 < (int)uVar2) &&
      (uVar2 = FUN_00013094((undefined8 *)(param_1 + 0x40),param_3), -1 < (int)uVar2)) &&
     (uVar2 = FUN_00013094((undefined8 *)(param_1 + 0x48),param_4), -1 < (int)uVar2)) {
    local_res8 = 0;
    uVar1 = IoCreateDevice(*(undefined8 *)(DAT_00029268 + 0x10),0,0,0x22,0x180,0,&local_res8);
    uVar2 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
      FUN_000118cc(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10),0xe0070003,
                   "Unable to create child device.");
    }
    else {
      *(longlong *)(local_res8 + 0x40) = param_1;
      *(longlong *)(param_1 + 0x10) = local_res8;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(local_res8 + 0x4c) =
           *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x4c);
      *(uint *)(local_res8 + 0x30) = *(uint *)(local_res8 + 0x30) | 0x2000;
      *(uint *)(local_res8 + 0x30) = *(uint *)(local_res8 + 0x30) & 0xffffff7f;
    }
  }
  return uVar2;
}

