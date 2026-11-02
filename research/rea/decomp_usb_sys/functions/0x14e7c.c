// rea decompile_all
// name: FUN_00014e7c
// address: 0x14e7c
// body: available
// range: 0x14e7c-0x14fc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00014e7c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    uVar4 = 0xc0000001;
  }
  else {
    uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x818);
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x840) = 0;
    *(undefined8 *)(param_1 + 0x848) = 0;
    *(undefined1 *)(param_1 + 0x820) = uVar3;
    KeReleaseSpinLock(param_1 + 0x818,uVar3);
    *(undefined1 *)(DAT_00029268 + 0x868) = 0;
    FUN_00015a30(param_1);
    FUN_00021138((longlong *)(param_1 + 400));
    if (param_2 == 0) {
      FUN_00015b58(param_1);
      FUN_00015a30(param_1);
      lVar6 = 0;
      do {
        lVar2 = DAT_00029268;
        if (lVar6 == 0) {
          if ((longlong *)*plVar1 == plVar1) break;
          lVar6 = *plVar1 - *(longlong *)(param_1 + 0xe0);
        }
        else {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar6);
          if (plVar5 == plVar1) break;
          lVar6 = (longlong)plVar5 - *(longlong *)(param_1 + 0xe0);
        }
        if (lVar6 == 0) break;
        uVar3 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        plVar5 = (longlong *)(DAT_00029268 + 0x120);
        *(undefined1 *)(lVar2 + 0x58) = uVar3;
        FUN_0002375c(plVar5,lVar6);
        KeReleaseSpinLock(lVar2 + 0x50,*(undefined1 *)(lVar2 + 0x58));
        FUN_0001a86c(lVar6);
        *(undefined1 *)(lVar6 + 0x1b14) = 0;
      } while( true );
    }
    FUN_0001568c(param_1);
    FUN_00015138(param_1);
    *(undefined1 *)(param_1 + 0x7c0) = 0;
    uVar4 = 0;
  }
  return uVar4;
}

