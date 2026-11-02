// rea decompile_all
// name: FUN_0001ca20
// address: 0x1ca20
// body: available
// range: 0x1ca20-0x1cb72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0001ca20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  lVar5 = DAT_000201c0;
  lVar1 = DAT_000201c0 + 0x20;
  uVar6 = KeAcquireSpinLockRaiseToDpc(lVar1);
  puVar8 = (undefined8 *)0x0;
  plVar7 = (longlong *)(lVar5 + 8);
  *(undefined1 *)(lVar5 + 0x28) = uVar6;
  do {
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x18) + (longlong)puVar8);
      if (plVar3 != plVar7) {
        puVar8 = (undefined8 *)((longlong)plVar3 - *(longlong *)(lVar5 + 0x18));
        goto LAB_0001ca7b;
      }
LAB_0001ca95:
      KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar5 + 0x28));
      puVar8 = (undefined8 *)0x0;
      goto LAB_0001caa4;
    }
    if ((longlong *)*plVar7 == plVar7) goto LAB_0001ca95;
    puVar8 = (undefined8 *)(*plVar7 - *(longlong *)(lVar5 + 0x18));
LAB_0001ca7b:
    if (puVar8 == (undefined8 *)0x0) goto LAB_0001ca95;
  } while (puVar8[3] != param_2);
  KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar5 + 0x28));
LAB_0001caa4:
  uVar6 = KeAcquireSpinLockRaiseToDpc(lVar1);
  *(undefined1 *)(lVar5 + 0x28) = uVar6;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)ExAllocatePoolWithTag(0,0x40,0x42737661);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      *puVar8 = &PTR_FUN_0001ed98;
      puVar2 = puVar8 + 1;
      puVar8[2] = puVar2;
      *puVar2 = puVar2;
      *(undefined4 *)(puVar8 + 4) = 1000;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffffffffffff;
      puVar8[3] = param_2;
      plVar3 = *(longlong **)(lVar5 + 0x10);
      plVar7 = (longlong *)((longlong)puVar8 + *(longlong *)(lVar5 + 0x18));
      lVar4 = *plVar3;
      plVar7[1] = (longlong)plVar3;
      *plVar7 = lVar4;
      *(longlong **)(*plVar3 + 8) = plVar7;
      *plVar3 = (longlong)plVar7;
    }
  }
  KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar5 + 0x28));
  return puVar8;
}

