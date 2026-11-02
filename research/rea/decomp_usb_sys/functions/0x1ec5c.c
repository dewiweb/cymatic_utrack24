// rea decompile_all
// name: FUN_0001ec5c
// address: 0x1ec5c
// body: available
// range: 0x1ec5c-0x1ecdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001ec5c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  lVar1 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  lVar2 = DAT_00029268;
  uVar3 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar2 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(DAT_00029268 + 0x188) = 0;
  KeReleaseSpinLock(lVar2 + 0x50,*(undefined1 *)(lVar2 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001ecd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar1 + 0x18,0);
  return;
}

