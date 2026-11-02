// rea decompile_all
// name: FUN_00025660
// address: 0x25660
// body: available
// range: 0x25660-0x2579c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00025660(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  
  lVar4 = *(longlong *)(param_3 + 0x68);
  lVar5 = *(longlong *)(lVar4 + 8);
  uVar8 = KeAcquireSpinLockRaiseToDpc(lVar5 + 0xd0);
  *(undefined1 *)(lVar5 + 0xd8) = uVar8;
  *(int *)(lVar4 + 0x1b0) = *(int *)(lVar4 + 0x1b0) - *(int *)(param_3 + 0x2c);
  bVar7 = false;
  if ((*(int *)(param_2 + 0x30) < 0) || (*(int *)(*(longlong *)(param_3 + 0x40) + 4) < 0)) {
    *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + 1;
  }
  else {
    bVar7 = true;
  }
  if (*(char *)(param_3 + 0x50) == '\0') {
    if (!bVar7) {
      if (*(int *)(*(longlong *)(param_3 + 0x40) + 4) != -0x3fff9000) {
        plVar6 = *(longlong **)(lVar4 + 0x1c0);
        plVar2 = (longlong *)(param_3 + *(longlong *)(lVar4 + 0x1c8));
        *plVar2 = *plVar6;
        plVar2[1] = (longlong)plVar6;
        *(longlong **)(*plVar6 + 8) = plVar2;
        *plVar6 = (longlong)plVar2;
        *(undefined1 *)(lVar4 + 0x1d0) = 1;
        goto LAB_00025708;
      }
      *(undefined1 *)(lVar4 + 0x29) = 0;
    }
    FUN_00024648(param_3);
  }
LAB_00025708:
  if (*(int *)(lVar4 + 0x68) == 1) {
    FUN_00024dec(lVar4);
  }
  if ((*(char *)(param_3 + 0x50) == '\0') && (*(int *)(lVar4 + 0x68) < 1)) {
    (**(code **)**(undefined8 **)(lVar4 + 0x1a8))();
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x2c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(lVar4 + 0x30,0,0);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x48);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(lVar4 + 0x50,0,0);
  }
  IoFreeIrp(param_2);
  KeReleaseSpinLock(*(longlong *)(lVar4 + 8) + 0xd0,*(undefined1 *)(*(longlong *)(lVar4 + 8) + 0xd8)
                   );
  return 0xc0000016;
}

