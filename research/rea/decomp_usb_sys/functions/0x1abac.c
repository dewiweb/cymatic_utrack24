// rea decompile_all
// name: FUN_0001abac
// address: 0x1abac
// body: available
// range: 0x1abac-0x1acce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001abac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30) + 0x18);
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_000116c8((longlong)(puVar2 + 6),(longlong **)0x0);
    lVar3 = puVar2[5];
    uVar5 = KeAcquireSpinLockRaiseToDpc(lVar3 + 0xd0);
    *(undefined1 *)(lVar3 + 0xd8) = uVar5;
    KeReleaseSpinLock(lVar3 + 0xd0,uVar5);
    lVar3 = DAT_00029268;
    uVar5 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    *(undefined1 *)(lVar3 + 0x58) = uVar5;
    plVar1 = (longlong *)((longlong)puVar2 + *(longlong *)(param_1 + 0x1a08));
    *(longlong *)plVar1[1] = *plVar1;
    lVar4 = DAT_00029268;
    lVar3 = *plVar1;
    *(longlong *)(lVar3 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    *(int *)(param_1 + 0x1a10) = *(int *)(param_1 + 0x1a10) + -1;
    KeReleaseSpinLock(lVar4 + 0x50,
                      CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar4 + 0x58)));
    (**(code **)*puVar2)(puVar2,1);
  }
  KeReleaseMutex(DAT_00029268 + 0x18,0);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}

