// rea decompile_all
// name: FUN_00011590
// address: 0x11590
// body: available
// range: 0x11590-0x11685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00011590(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_38 [4];
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  lVar2 = IoBuildSynchronousFsdRequest
                    (0x1b,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),0,0,0,local_28,
                     local_38);
  if (lVar2 == 0) {
    return 0xc000009a;
  }
  lVar1 = *(longlong *)(lVar2 + 0xb8);
  *(undefined **)(lVar1 + -0x40) = &DAT_0001e890;
  *(undefined1 *)(lVar1 + -0x47) = 8;
  *(undefined2 *)(lVar1 + -0x38) = 0x30;
  *(undefined2 *)(lVar1 + -0x36) = 0x613;
  *(undefined8 *)(lVar1 + -0x28) = 0;
  *(longlong *)(lVar1 + -0x30) = param_1 + 0x3fd0;
  *(longlong *)(param_1 + 0x3ff0) = param_1 + 8;
  *(undefined4 *)(lVar2 + 0x30) = 0xc00000bb;
  uVar3 = IofCallDriver(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
  if ((int)uVar3 == 0x103) {
    KeWaitForSingleObject(local_28,5,0,0,0);
    uVar3 = (ulonglong)local_38[0];
  }
  if (-1 < (int)uVar3) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3ff8);
  }
  return uVar3;
}

