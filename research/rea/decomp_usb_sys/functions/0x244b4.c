// rea decompile_all
// name: FUN_000244b4
// address: 0x244b4
// body: available
// range: 0x244b4-0x2458b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000244b4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  FUN_00024594(param_1);
  puVar8 = (ulonglong *)0x0;
  if (param_2 != 0) {
    do {
      puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x58,0x5f6e6577);
      puVar6 = (ulonglong *)0x0;
      if (puVar5 != (ulonglong *)0x0) {
        FUN_000264d0(puVar5,0,0x58);
        puVar5[1] = (ulonglong)puVar5;
        *puVar5 = (ulonglong)puVar5;
        puVar6 = puVar5;
      }
      if (puVar6 == (ulonglong *)0x0) {
        FUN_00024594(param_1);
        return 0xe0000002;
      }
      uVar4 = KeAcquireSpinLockRaiseToDpc(param_1 + 6);
      *(undefined1 *)(param_1 + 7) = uVar4;
      plVar2 = (longlong *)param_1[1];
      plVar1 = (longlong *)((longlong)puVar6 + param_1[2]);
      lVar3 = *plVar2;
      plVar1[1] = (longlong)plVar2;
      *plVar1 = lVar3;
      *(longlong **)(*plVar2 + 8) = plVar1;
      *plVar2 = (longlong)plVar1;
      KeReleaseSpinLock(param_1 + 6,CONCAT71((int7)((ulonglong)plVar1 >> 8),(char)param_1[7]));
      uVar7 = (int)puVar8 + 1;
      puVar8 = (ulonglong *)(ulonglong)uVar7;
    } while (uVar7 < param_2);
  }
  return 0;
}

