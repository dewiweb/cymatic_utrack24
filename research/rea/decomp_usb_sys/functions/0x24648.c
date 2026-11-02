// rea decompile_all
// name: FUN_00024648
// address: 0x24648
// body: available
// range: 0x24648-0x246ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024648(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar5 = KeAcquireSpinLockRaiseToDpc(lVar2 + 0x40);
  *(undefined1 *)(lVar2 + 0x48) = uVar5;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  plVar1 = (longlong *)(param_1 + *(longlong *)(lVar2 + 0x38));
  lVar4 = *plVar3;
  plVar1[1] = (longlong)plVar3;
  *plVar1 = lVar4;
  *(longlong **)(*plVar3 + 8) = plVar1;
  *plVar3 = (longlong)plVar1;
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
                    /* WARNING: Could not recover jumptable at 0x000246a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(lVar2 + 0x40,
                    CONCAT71((int7)((ulonglong)plVar1 >> 8),*(undefined1 *)(lVar2 + 0x48)));
  return;
}

