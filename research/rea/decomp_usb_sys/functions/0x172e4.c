// rea decompile_all
// name: FUN_000172e4
// address: 0x172e4
// body: available
// range: 0x172e4-0x17477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000172e4(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (*(short *)(lVar3 + 0x58) == 0) {
    KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
    if (*(char *)(param_1 + 0x48) == '\0') {
      uVar8 = 0xc0000001;
    }
    else {
      puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0xa8,0x5f6e6577);
      if (puVar7 == (ulonglong *)0x0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar7,0,0xa8);
        puVar1 = puVar7 + 2;
        *puVar7 = (ulonglong)&PTR_FUN_00027e68;
        puVar7[3] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar1 = puVar7 + 4;
        puVar7[5] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar1 = puVar7 + 0xc;
        puVar7[0xd] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar7[0xe] = 0x10;
        puVar1 = puVar7 + 0xf;
        puVar7[0x11] = 0;
        puVar7[0x10] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        *(undefined4 *)(puVar7 + 1) = 0x1111000c;
        *(undefined4 *)((longlong)puVar7 + 0x94) = 0x20;
        *(undefined1 *)(puVar7 + 0x14) = 0;
        *(undefined1 *)((longlong)puVar7 + 0xa1) = 0;
        *(undefined1 *)((longlong)puVar7 + 0xa2) = 0;
      }
      if (puVar7 == (ulonglong *)0x0) {
        uVar8 = 0xc000009a;
      }
      else {
        *(ulonglong **)(lVar3 + 0x18) = puVar7;
        lVar5 = DAT_00029268;
        uVar6 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        *(undefined1 *)(lVar5 + 0x58) = uVar6;
        plVar4 = *(longlong **)(param_1 + 0x58);
        plVar2 = (longlong *)((longlong)puVar7 + *(longlong *)(param_1 + 0x60));
        lVar3 = *plVar4;
        plVar2[1] = (longlong)plVar4;
        *plVar2 = lVar3;
        *(longlong **)(*plVar4 + 8) = plVar2;
        *plVar4 = (longlong)plVar2;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        KeReleaseSpinLock(lVar5 + 0x50,
                          CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(lVar5 + 0x58)));
        uVar8 = 0;
      }
    }
    KeReleaseMutex(DAT_00029268 + 0x18,0);
    *(undefined4 *)(param_2 + 0x30) = uVar8;
  }
  else {
    uVar8 = 0xc0000022;
    *(undefined4 *)(param_2 + 0x30) = 0xc0000022;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return uVar8;
}

