// rea decompile_all
// name: FUN_00016a30
// address: 0x16a30
// body: available
// range: 0x16a30-0x16b81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016a30(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = DAT_00029268;
  lVar1 = DAT_00029268 + 0x50;
  uVar4 = KeAcquireSpinLockRaiseToDpc(lVar1);
  plVar5 = (longlong *)(lVar3 + 400);
  lVar6 = 0;
  *(undefined1 *)(lVar3 + 0x58) = uVar4;
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar5 == plVar5) break;
      lVar6 = *plVar5 - *(longlong *)(lVar3 + 0x1a0);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x1a0) + lVar6);
      if (plVar2 == plVar5) break;
      lVar6 = (longlong)plVar2 - *(longlong *)(lVar3 + 0x1a0);
    }
    if (lVar6 == 0) break;
    FUN_000264d0((ulonglong *)(lVar6 + 0x10c),0,0x24);
    *(undefined8 *)(lVar6 + 0x130) = 0;
    *(undefined8 *)(lVar6 + 0x138) = 0;
    *(undefined4 *)(lVar6 + 0x140) = 0;
    FUN_000264d0((ulonglong *)(lVar6 + 0x144),0,0x34);
    *(undefined4 *)(lVar6 + 0x130) = 0xffffffff;
    *(undefined4 *)(lVar6 + 0x138) = 0xffffffff;
    *(undefined4 *)(lVar6 + 0x48) = 0;
    *(undefined4 *)(lVar6 + 0x4c) = 0;
    *(undefined4 *)(lVar6 + 0x50) = 0;
  } while( true );
  lVar6 = 0;
  plVar5 = (longlong *)(lVar3 + 0x1a8);
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar5 == plVar5) goto LAB_00016b66;
      lVar6 = *plVar5 - *(longlong *)(lVar3 + 0x1b8);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x1b8) + lVar6);
      if (plVar2 == plVar5) {
LAB_00016b66:
                    /* WARNING: Could not recover jumptable at 0x00016b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar3 + 0x58));
        return;
      }
      lVar6 = (longlong)plVar2 - *(longlong *)(lVar3 + 0x1b8);
    }
    if (lVar6 == 0) goto LAB_00016b66;
    *(undefined8 *)(lVar6 + 0x10c) = 0;
    *(undefined8 *)(lVar6 + 0x114) = 0;
    *(undefined8 *)(lVar6 + 0x11c) = 0;
    FUN_000264d0((ulonglong *)(lVar6 + 0x124),0,0x24);
    *(undefined8 *)(lVar6 + 0x148) = 0;
    *(undefined8 *)(lVar6 + 0x150) = 0;
    *(undefined4 *)(lVar6 + 0x138) = 0xffffffff;
    *(undefined4 *)(lVar6 + 0x140) = 0xffffffff;
    *(undefined4 *)(lVar6 + 0x48) = 0;
    *(undefined4 *)(lVar6 + 0x4c) = 0;
    *(undefined4 *)(lVar6 + 0x50) = 0;
  } while( true );
}

