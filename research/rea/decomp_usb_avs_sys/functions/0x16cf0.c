// rea decompile_all
// name: FUN_00016cf0
// address: 0x16cf0
// body: available
// range: 0x16cf0-0x16e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016cf0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_0001ede0;
  KeCancelTimer();
  KeCancelTimer(param_1 + 0x25);
  lVar4 = DAT_000201c0;
  lVar2 = param_1[7];
  uVar5 = KeAcquireSpinLockRaiseToDpc(DAT_000201c0 + 0x20);
  puVar6 = (undefined8 *)0x0;
  plVar1 = (longlong *)(lVar4 + 8);
  *(undefined1 *)(lVar4 + 0x28) = uVar5;
  do {
    if (puVar6 != (undefined8 *)0x0) {
      plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x18) + (longlong)puVar6);
      if (plVar3 != plVar1) {
        puVar6 = (undefined8 *)((longlong)plVar3 - *(longlong *)(lVar4 + 0x18));
        goto LAB_00016d7e;
      }
LAB_00016d9c:
      KeReleaseSpinLock(lVar4 + 0x20,*(undefined1 *)(lVar4 + 0x28));
      puVar6 = (undefined8 *)0x0;
      goto LAB_00016daf;
    }
    if ((longlong *)*plVar1 == plVar1) goto LAB_00016d9c;
    puVar6 = (undefined8 *)(*plVar1 - *(longlong *)(lVar4 + 0x18));
LAB_00016d7e:
    if (puVar6 == (undefined8 *)0x0) goto LAB_00016d9c;
  } while (puVar6[3] != lVar2);
  KeReleaseSpinLock(lVar4 + 0x20,*(undefined1 *)(lVar4 + 0x28));
LAB_00016daf:
  uVar5 = KeAcquireSpinLockRaiseToDpc(lVar4 + 0x20);
  *(undefined1 *)(lVar4 + 0x28) = uVar5;
  if (puVar6 != (undefined8 *)0x0) {
    lVar2 = *(longlong *)(lVar4 + 0x18);
    plVar1 = (longlong *)((longlong)puVar6 + lVar2);
    **(undefined8 **)((longlong)puVar6 + lVar2 + 8) = *(undefined8 *)((longlong)puVar6 + lVar2);
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    (**(code **)*puVar6)(puVar6,1);
  }
  KeReleaseSpinLock(lVar4 + 0x20,*(undefined1 *)(lVar4 + 0x28));
  if (param_1[0xf] != 0) {
    (**(code **)(**(longlong **)(param_1[3] + 0x18) + 0x28))();
    param_1[0xf] = 0;
  }
  lVar2 = *(longlong *)(param_1[6] + 0x38);
  plVar1 = (longlong *)((longlong)param_1 + lVar2);
  **(undefined8 **)((longlong)param_1 + lVar2 + 8) = *(undefined8 *)((longlong)param_1 + lVar2);
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  *param_1 = &PTR_FUN_0001ed98;
  return;
}

