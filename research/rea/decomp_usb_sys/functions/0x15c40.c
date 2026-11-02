// rea decompile_all
// name: FUN_00015c40
// address: 0x15c40
// body: available
// range: 0x15c40-0x15d1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015c40(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  lVar4 = DAT_00029268;
  plVar2 = (longlong *)(DAT_00029268 + 400);
  FUN_00020bb4(plVar2);
  uVar5 = KeAcquireSpinLockRaiseToDpc(lVar4 + 0x50);
  lVar6 = 0;
  plVar1 = (longlong *)(lVar4 + 0x1a8);
  *(undefined1 *)(lVar4 + 0x58) = uVar5;
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar1 == plVar1) break;
      lVar6 = *plVar1 - *(longlong *)(lVar4 + 0x1b8);
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x1b8) + lVar6);
      if (plVar3 == plVar1) break;
      lVar6 = (longlong)plVar3 - *(longlong *)(lVar4 + 0x1b8);
    }
    if (lVar6 == 0) break;
    FUN_0002055c(lVar6);
    *(undefined1 *)(lVar6 + 0x1b0) = 1;
  } while( true );
  lVar6 = 0;
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar2 == plVar2) goto LAB_00015cfa;
      lVar6 = *plVar2 - *(longlong *)(lVar4 + 0x1a0);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x1a0) + lVar6);
      if (plVar1 == plVar2) {
LAB_00015cfa:
                    /* WARNING: Could not recover jumptable at 0x00015d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        KeReleaseSpinLock(lVar4 + 0x50,*(undefined1 *)(lVar4 + 0x58));
        return;
      }
      lVar6 = (longlong)plVar1 - *(longlong *)(lVar4 + 0x1a0);
    }
    if (lVar6 == 0) goto LAB_00015cfa;
    FUN_0001fdd8(lVar6);
    *(undefined1 *)(lVar6 + 0x178) = 1;
  } while( true );
}

