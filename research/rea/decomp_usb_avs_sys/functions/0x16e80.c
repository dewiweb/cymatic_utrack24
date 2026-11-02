// rea decompile_all
// name: FUN_00016e80
// address: 0x16e80
// body: available
// range: 0x16e80-0x16f06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016e80(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  uVar1 = KeAcquireSpinLockRaiseToDpc(param_2 + 0x1c8);
  *(undefined1 *)(param_2 + 0x1d0) = uVar1;
  if (*(char *)(param_2 + 0x80) != '\0') {
    *(undefined1 *)(param_2 + 0x1b8) = 1;
    lVar2 = KeQueryPerformanceCounter(local_res10);
    *(longlong *)(param_2 + 0x1b0) = (lVar2 * 10000000) / local_res10[0];
    KeSetTimer(param_2 + 0x128,*(undefined8 *)(param_2 + 0x1a8),param_2 + 0x168);
  }
                    /* WARNING: Could not recover jumptable at 0x00016f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(param_2 + 0x1c8,*(undefined1 *)(param_2 + 0x1d0));
  return;
}

