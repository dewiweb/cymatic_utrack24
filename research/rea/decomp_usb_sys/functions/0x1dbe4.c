// rea decompile_all
// name: FUN_0001dbe4
// address: 0x1dbe4
// body: available
// range: 0x1dbe4-0x1dd84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001dbe4(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *_Dst;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong _Size;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      uVar7 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x38) = uVar7;
      while ((longlong *)*plVar1 != plVar1) {
        plVar4 = (longlong *)*plVar1;
        lVar9 = *plVar4;
        plVar8 = plVar4 + -0x15;
        *plVar1 = lVar9;
        *(longlong **)(lVar9 + 8) = plVar1;
        LOCK();
        lVar9 = plVar4[-8];
        plVar4[-8] = 0;
        UNLOCK();
        if (lVar9 != 0) {
          plVar4[-3] = 0;
          goto LAB_0001dc63;
        }
        puVar3 = *(undefined8 **)(param_1 + 0x58);
        *plVar4 = param_1 + 0x50;
        plVar4[1] = (longlong)puVar3;
        *puVar3 = plVar4;
        *(longlong **)(param_1 + 0x58) = plVar4;
      }
      plVar8 = (longlong *)0x0;
LAB_0001dc63:
      KeReleaseSpinLock(param_1 + 0x30,*(undefined1 *)(param_1 + 0x38));
      if (plVar8 == (longlong *)0x0) {
        return;
      }
      uVar2 = *(uint *)(plVar8[0x17] + 8);
      _Dst = (void *)plVar8[3];
      uVar7 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0x98) = uVar7;
      plVar4 = *(longlong **)(param_1 + 0x60);
      if (plVar4 == (longlong *)(param_1 + 0x60)) {
LAB_0001dd3b:
        KeReleaseSpinLock(param_1 + 0x90,*(undefined1 *)(param_1 + 0x98));
        _Size = 0;
      }
      else {
        *(longlong *)plVar4[1] = *plVar4;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        plVar4[1] = (longlong)plVar4;
        *plVar4 = (longlong)plVar4;
        lVar9 = (longlong)plVar4 - *(longlong *)(param_1 + 0x70);
        if (lVar9 == 0) goto LAB_0001dd3b;
        uVar6 = *(uint *)(lVar9 + 0x50);
        if (uVar2 < *(uint *)(lVar9 + 0x50)) {
          uVar6 = uVar2;
        }
        _Size = (ulonglong)uVar6;
        memcpy(_Dst,(void *)(lVar9 + 0x10),_Size);
        plVar5 = *(longlong **)(param_1 + 0x68);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        plVar4 = (longlong *)(lVar9 + *(longlong *)(param_1 + 0x70));
        lVar9 = *plVar5;
        plVar4[1] = (longlong)plVar5;
        *plVar4 = lVar9;
        *(longlong **)(*plVar5 + 8) = plVar4;
        *plVar5 = (longlong)plVar4;
        KeReleaseSpinLock(param_1 + 0x90,
                          CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(param_1 + 0x98)));
      }
      *(undefined4 *)(plVar8 + 6) = 0;
      plVar8[7] = _Size;
      IofCompleteRequest(plVar8,0);
    } while (*(int *)(param_1 + 0xa0) != 0);
  }
  return;
}

