// rea decompile_all
// name: FUN_000139ec
// address: 0x139ec
// body: available
// range: 0x139ec-0x13aa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000139ec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  uVar1 = KeAcquireSpinLockRaiseToDpc();
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined1 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = IoAllocateWorkItem(param_2);
    *(longlong *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = param_2;
      KeClearEvent(param_1 + 0x38);
      IoQueueWorkItem(*(undefined8 *)(param_1 + 0x10),FUN_00013aac,1,param_1);
    }
  }
  KeReleaseSpinLock(param_1,*(undefined1 *)(param_1 + 8));
  return uVar3;
}

