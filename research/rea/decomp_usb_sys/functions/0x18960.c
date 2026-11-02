// rea decompile_all
// name: FUN_00018960
// address: 0x18960
// body: available
// range: 0x18960-0x18a40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00018960(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FUN_00018c54(param_1,*param_2);
  lVar3 = DAT_00029268;
  if (lVar5 == 0) {
    uVar6 = 0xe0000040;
  }
  else {
    uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    *(undefined1 *)(lVar3 + 0x58) = uVar4;
    FUN_00018c98(param_1);
    KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
    plVar2 = (longlong *)(lVar5 + *(longlong *)(param_1 + 0x70));
    *(longlong *)plVar2[1] = *plVar2;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    lVar3 = *(longlong *)(lVar5 + 0x20);
    if (0 < *(int *)(lVar3 + 0x48)) {
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + -1;
    }
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x28) + 0x28);
    *piVar1 = *piVar1 + -1;
    FUN_0002358c(DAT_00029268 + 0x120);
    *(int *)(DAT_00029268 + 0x780) = *(int *)(DAT_00029268 + 0x780) + -1;
    FUN_000242f8(lVar5);
    FUN_000138d8((longlong *)(lVar5 + 0x28));
    ExFreePoolWithTag(lVar5,0);
    uVar6 = 0;
  }
  return uVar6;
}

