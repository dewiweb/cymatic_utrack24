// rea decompile_all
// name: FUN_00017110
// address: 0x17110
// body: available
// range: 0x17110-0x17203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00017110(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x1d0) = uVar1;
  if (*(int *)(param_1 + 0x28) - 1U < 2) {
    KeSetTimer(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x120),param_1 + 0xe0);
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    KeCancelTimer(param_1 + 0x128);
  }
  puVar3 = (undefined8 *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = KsPinGetLeadingEdgeStreamPointer(*(undefined8 *)(param_1 + 0x38),1);
    if (lVar2 != 0) {
      *puVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x28);
      if (*(int *)(param_1 + 0x84) == 1) {
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x20);
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x24);
      }
      *(longlong *)(param_1 + 0x70) = lVar2;
      if (*(char *)(param_1 + 0x50) != '\0') {
        FUN_0001cf40((ulonglong *)*puVar3,0,(ulonglong)*(uint *)(param_1 + 0x68));
      }
      goto LAB_000171dd;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_000171dd:
  KeReleaseSpinLock(param_1 + 0x1c8,*(undefined1 *)(param_1 + 0x1d0));
  return puVar3;
}

