// rea decompile_all
// name: FUN_00014040
// address: 0x14040
// body: available
// range: 0x14040-0x140df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00014040(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 8))();
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  uVar2 = KeAcquireSpinLockRaiseToDpc(lVar1 + 0x4098);
  KeCancelTimer(lVar1 + 0x4018);
  *(undefined8 *)(lVar1 + 0x40a8) = 0;
  *(undefined8 *)(lVar1 + 0x40b8) = 0;
  *(undefined8 *)(lVar1 + 0x40d0) = 0;
  *(undefined8 *)(lVar1 + 0x40c0) = 0;
  *(undefined8 *)(lVar1 + 0x40d8) = 0;
  *(undefined8 *)(lVar1 + 0x40c8) = 0;
  *(undefined8 *)(lVar1 + 0x40e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(lVar1 + 0x4098,uVar2);
  return;
}

