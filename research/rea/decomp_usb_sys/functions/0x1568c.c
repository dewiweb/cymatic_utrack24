// rea decompile_all
// name: FUN_0001568c
// address: 0x1568c
// body: available
// range: 0x1568c-0x158d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001568c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  plVar1 = (longlong *)(param_1 + 0xd0);
  while( true ) {
    lVar3 = DAT_00029268;
    if (lVar5 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
        return;
      }
      lVar5 = *plVar1 - *(longlong *)(param_1 + 0xe0);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar5);
      if (plVar2 == plVar1) {
        return;
      }
      lVar5 = (longlong)plVar2 - *(longlong *)(param_1 + 0xe0);
    }
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0x1b13) != '\0') {
      uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar3 + 0x58) = uVar4;
      if (*(longlong **)(lVar5 + 0x1e8) != (longlong *)(lVar5 + 0x1e8)) {
        plVar2 = (longlong *)(lVar5 + 0xf8 + *(longlong *)(param_1 + 0x1a0));
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        *(int *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) + -1;
      }
      KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
      lVar3 = DAT_00029268;
      uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar3 + 0x58) = uVar4;
      if (*(longlong **)(lVar5 + 0x3f8) != (longlong *)(lVar5 + 0x3f8)) {
        plVar2 = (longlong *)(lVar5 + 0x308 + *(longlong *)(param_1 + 0x1b8));
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        *(int *)(param_1 + 0x6a0) = *(int *)(param_1 + 0x6a0) + -1;
      }
      KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
      lVar3 = DAT_00029268;
      if (*(longlong *)(lVar5 + 0x1480) != 0) {
        uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        *(undefined1 *)(lVar3 + 0x58) = uVar4;
        if (*(longlong **)(lVar5 + 0x1680) != (longlong *)(lVar5 + 0x1680)) {
          plVar2 = (longlong *)(lVar5 + 0x1470 + *(longlong *)(param_1 + 0x1d0));
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + -1;
        }
        KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
      }
      lVar3 = DAT_00029268;
      if (*(longlong *)(lVar5 + 0x1720) != 0) {
        uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        *(undefined1 *)(lVar3 + 0x58) = uVar4;
        if (*(longlong **)(lVar5 + 0x18f0) != (longlong *)(lVar5 + 0x18f0)) {
          plVar2 = (longlong *)(lVar5 + 0x1710 + *(longlong *)(param_1 + 0x1e8));
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(int *)(param_1 + 0x6a8) = *(int *)(param_1 + 0x6a8) + -1;
        }
        KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
      }
      (**(code **)(*(longlong *)(lVar5 + 0x308) + 8))(lVar5 + 0x308);
      (**(code **)(*(longlong *)(lVar5 + 0xf8) + 8))(lVar5 + 0xf8);
      *(undefined1 *)(lVar5 + 0x1b13) = 0;
    }
  }
  return;
}

