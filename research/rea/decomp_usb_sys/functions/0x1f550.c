// rea decompile_all
// name: FUN_0001f550
// address: 0x1f550
// body: available
// range: 0x1f550-0x1f63e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001f550(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = DAT_00029268 + 0x18;
  KeWaitForSingleObject(lVar6,0,0,0,0);
  lVar2 = DAT_00029268;
  lVar4 = DAT_00029268 + 0x50;
  uVar3 = KeAcquireSpinLockRaiseToDpc(lVar4);
  *(undefined1 *)(lVar2 + 0x58) = uVar3;
  if (*(char *)(param_1 + 0x28) != '\0') {
    plVar5 = (longlong *)0x0;
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (plVar5 == (longlong *)0x0) {
        if ((longlong *)*plVar1 == plVar1) goto LAB_0001f5f8;
        plVar5 = (longlong *)(*plVar1 - *(longlong *)(param_1 + 0x20));
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (longlong)plVar5);
        if (plVar5 == plVar1) goto LAB_0001f5f8;
        plVar5 = (longlong *)((longlong)plVar5 - *(longlong *)(param_1 + 0x20));
      }
      if (plVar5 == (longlong *)0x0) goto LAB_0001f5f8;
      FUN_000230e4(*(longlong **)(plVar5[4] + 0x28),plVar5,plVar5[4]);
    } while( true );
  }
LAB_0001f610:
  KeReleaseSpinLock(lVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001f638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar6,0);
  return;
LAB_0001f5f8:
  *(undefined8 *)(DAT_00029268 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar3 = *(undefined1 *)(lVar2 + 0x58);
  goto LAB_0001f610;
}

