// rea decompile_all
// name: FUN_00018704
// address: 0x18704
// body: available
// range: 0x18704-0x18815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00018704(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar4 = FUN_000137e0((longlong *)(param_1 + 0x48),*param_2,8);
    if ((int)uVar4 < 0) {
      lVar5 = DAT_00029268 + 0x50;
    }
    else {
      uVar4 = FUN_00013910((longlong *)(param_1 + 0x58),param_2[1]);
      lVar2 = DAT_00029268;
      lVar5 = DAT_00029268 + 0x50;
      if (-1 < (int)uVar4) {
        uVar3 = KeAcquireSpinLockRaiseToDpc(lVar5);
        *(undefined1 *)(lVar2 + 0x58) = uVar3;
        lVar5 = param_2[2];
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x30) = (int)lVar5;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        KeReleaseSpinLock(lVar2 + 0x50);
        lVar5 = DAT_00029268;
        puVar1 = (uint *)(DAT_00029268 + 0x6fc);
        *(undefined4 *)(DAT_00029268 + 0x774) = *(undefined4 *)(param_1 + 0x30);
        *(int *)(lVar5 + 0x778) =
             (int)(((ulonglong)*(uint *)(param_1 + 0x30) * 1000000) / (ulonglong)*puVar1);
        return 0;
      }
    }
    lVar2 = DAT_00029268;
    uVar4 = uVar4 & 0xffffffff;
    uVar3 = KeAcquireSpinLockRaiseToDpc(lVar5);
    *(undefined1 *)(lVar2 + 0x58) = uVar3;
    FUN_00018d88(param_1);
    KeReleaseSpinLock(lVar2 + 0x50,*(undefined1 *)(lVar2 + 0x58));
  }
  else {
    uVar4 = 0xe0000021;
  }
  return uVar4;
}

