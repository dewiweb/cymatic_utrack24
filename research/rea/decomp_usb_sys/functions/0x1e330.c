// rea decompile_all
// name: FUN_0001e330
// address: 0x1e330
// body: available
// range: 0x1e330-0x1e4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001e330(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  lVar4 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  lVar6 = DAT_00029268;
  plVar2 = (longlong *)param_2[6];
  uVar5 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar6 + 0x58) = uVar5;
  FUN_000231cc(plVar2,param_2);
  FUN_0002446c((longlong)param_2);
  KeReleaseSpinLock(lVar6 + 0x50,*(undefined1 *)(lVar6 + 0x58));
  if ((int)plVar2[3] != 200) {
    lVar6 = 0;
    plVar1 = plVar2 + 6;
LAB_0001e3b4:
    if (lVar6 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_0001e3ee;
      lVar6 = *plVar1 - plVar2[8];
    }
    else {
      plVar3 = *(longlong **)(plVar2[8] + lVar6);
      if (plVar3 == plVar1) goto LAB_0001e3ee;
      lVar6 = (longlong)plVar3 - plVar2[8];
    }
    if (lVar6 == 0) goto LAB_0001e3ee;
    if (0 < *(int *)(lVar6 + 0x50)) {
      *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
    }
    goto LAB_0001e3b4;
  }
  if (param_2[7] != 0) {
    lVar6 = 0;
    plVar1 = plVar2 + 6;
    do {
      if (lVar6 == 0) {
        if ((longlong *)*plVar1 == plVar1) goto LAB_0001e44e;
        lVar6 = *plVar1 - plVar2[8];
      }
      else {
        plVar3 = *(longlong **)(plVar2[8] + lVar6);
        if (plVar3 == plVar1) goto LAB_0001e44e;
        lVar6 = (longlong)plVar3 - plVar2[8];
      }
      if (lVar6 == 0) goto LAB_0001e44e;
    } while (lVar6 != param_2[7]);
    param_2[7] = 0;
    if (0 < *(int *)(lVar6 + 0x50)) {
      *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
    }
  }
LAB_0001e44e:
  plVar1 = (longlong *)((longlong)param_2 + *(longlong *)(param_1 + 0x20));
  *(longlong *)plVar1[1] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  ExFreePoolWithTag(param_2,0);
  lVar6 = DAT_00029268;
  *(int *)(plVar2 + 5) = (int)plVar2[5] + -1;
  FUN_0002358c(lVar6 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x0001e4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar4 + 0x18,0);
  return;
LAB_0001e3ee:
  *(int *)(DAT_00029268 + 0x764) = *(int *)(DAT_00029268 + 0x764) + -1;
  goto LAB_0001e44e;
}

