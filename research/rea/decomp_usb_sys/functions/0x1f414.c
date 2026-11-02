// rea decompile_all
// name: FUN_0001f414
// address: 0x1f414
// body: available
// range: 0x1f414-0x1f548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001f414(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = DAT_00029268 + 0x18;
  KeWaitForSingleObject(lVar11,0,0,0,0);
  lVar6 = DAT_00029268;
  lVar9 = DAT_00029268 + 0x50;
  uVar7 = KeAcquireSpinLockRaiseToDpc(lVar9);
  *(undefined1 *)(lVar6 + 0x58) = uVar7;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar10 = 0;
    plVar1 = (longlong *)(param_1 + 0x10);
LAB_0001f47b:
    if (lVar10 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_0001f506;
      lVar10 = *plVar1 - *(longlong *)(param_1 + 0x20);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar10);
      if (plVar2 == plVar1) goto LAB_0001f506;
      lVar10 = (longlong)plVar2 - *(longlong *)(param_1 + 0x20);
    }
    if (lVar10 == 0) goto LAB_0001f506;
    if (*(longlong *)(lVar10 + 0x30) != 0) {
      lVar3 = *(longlong *)(lVar10 + 0x20);
      plVar4 = *(longlong **)(lVar3 + 0x28);
      *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x30);
      plVar5 = *(longlong **)(lVar3 + 0x78);
      plVar2 = (longlong *)(lVar10 + *(longlong *)(lVar3 + 0x80));
      lVar3 = *plVar5;
      plVar2[1] = (longlong)plVar5;
      *plVar2 = lVar3;
      *(longlong **)(*plVar5 + 8) = plVar2;
      *plVar5 = (longlong)plVar2;
      *(int *)(plVar4 + 0xe) = (int)plVar4[0xe] + 1;
      if ((*(char *)((longlong)plVar4 + 0x79) == '\0') &&
         (cVar8 = (**(code **)(*plVar4 + 0x10))(plVar4), cVar8 != '\0')) {
        *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
      }
    }
    goto LAB_0001f47b;
  }
LAB_0001f51c:
  KeReleaseSpinLock(lVar9,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001f542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar11,0);
  return;
LAB_0001f506:
  *(longlong *)(DAT_00029268 + 0x188) = param_1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar7 = *(undefined1 *)(lVar6 + 0x58);
  goto LAB_0001f51c;
}

