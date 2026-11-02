// rea decompile_all
// name: FUN_0001a930
// address: 0x1a930
// body: available
// range: 0x1a930-0x1aad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0001a930(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  
  uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (*(short *)(uVar4 + 0x58) == 0) {
    KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar8 = (ulonglong *)ExAllocatePoolWithTag(0,0xa8,0x5f6e6577);
      if (puVar8 == (ulonglong *)0x0) {
        puVar8 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar8,0,0xa8);
        puVar1 = puVar8 + 0xc;
        puVar2 = puVar8 + 2;
        *puVar8 = (ulonglong)&PTR_FUN_00027f38;
        puVar8[3] = (ulonglong)puVar2;
        *puVar2 = (ulonglong)puVar2;
        puVar8[6] = 0;
        *(undefined1 *)(puVar8 + 7) = 0;
        puVar2 = puVar8 + 8;
        puVar8[9] = (ulonglong)puVar2;
        *puVar2 = (ulonglong)puVar2;
        puVar2 = puVar8 + 10;
        puVar8[0xb] = (ulonglong)puVar2;
        *puVar2 = (ulonglong)puVar2;
        puVar8[0xe] = 0;
        puVar8[0xd] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar1 = puVar8 + 0xf;
        puVar8[0x11] = 0;
        puVar8[0x10] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar8[0x12] = 0;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        *(undefined4 *)(puVar8 + 1) = 0x1111000b;
      }
      if (puVar8 == (ulonglong *)0x0) {
        uVar9 = 0xc000009a;
      }
      else {
        puVar8[4] = uVar4;
        puVar8[5] = param_1;
        *(ulonglong **)(uVar4 + 0x18) = puVar8;
        lVar6 = DAT_00029268;
        uVar7 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        *(undefined1 *)(lVar6 + 0x58) = uVar7;
        plVar5 = *(longlong **)(param_1 + 0x1a00);
        plVar3 = (longlong *)((longlong)puVar8 + *(longlong *)(param_1 + 0x1a08));
        lVar6 = *plVar5;
        plVar3[1] = (longlong)plVar5;
        *plVar3 = lVar6;
        *(longlong **)(*plVar5 + 8) = plVar3;
        *plVar5 = (longlong)plVar3;
        lVar6 = DAT_00029268;
        *(int *)(param_1 + 0x1a10) = *(int *)(param_1 + 0x1a10) + 1;
        KeReleaseSpinLock(lVar6 + 0x50,
                          CONCAT71((int7)((ulonglong)plVar3 >> 8),*(undefined1 *)(lVar6 + 0x58)));
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0xe0000050;
    }
    KeReleaseMutex(DAT_00029268 + 0x18,0);
    *(undefined4 *)(param_2 + 0x30) = uVar9;
  }
  else {
    uVar9 = 0xc0000022;
    *(undefined4 *)(param_2 + 0x30) = 0xc0000022;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return uVar9;
}

