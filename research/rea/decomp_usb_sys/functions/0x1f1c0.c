// rea decompile_all
// name: FUN_0001f1c0
// address: 0x1f1c0
// body: available
// range: 0x1f1c0-0x1f2ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001f1c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  
  lVar3 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  lVar4 = DAT_00029268;
  lVar1 = param_2[4];
  plVar2 = *(longlong **)(lVar1 + 0x28);
  uVar5 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar4 + 0x58) = uVar5;
  FUN_000230e4(plVar2,param_2,lVar1);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  KeReleaseSpinLock(lVar4 + 0x50,*(undefined1 *)(lVar4 + 0x58));
  if (0 < *(int *)(lVar1 + 0x4c)) {
    *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + -1;
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2);
  *(longlong *)plVar6[1] = *plVar6;
  *(longlong *)(*plVar6 + 8) = plVar6[1];
  plVar6[1] = (longlong)plVar6;
  *plVar6 = (longlong)plVar6;
  ExFreePoolWithTag(param_2,0);
  lVar1 = DAT_00029268;
  plVar2 = plVar2 + 5;
  *(int *)plVar2 = (int)*plVar2 + -1;
  FUN_0002358c(lVar1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x0001f2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar3 + 0x18,0);
  return;
}

