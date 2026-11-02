// rea decompile_all
// name: FUN_00024fa8
// address: 0x24fa8
// body: available
// range: 0x24fa8-0x251b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024fa8(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  uVar5 = KeAcquireSpinLockRaiseToDpc(lVar7 + 0xd0);
  *(undefined1 *)(lVar7 + 0xd8) = uVar5;
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  UNLOCK();
  *(undefined1 *)(param_3 + 0x51) = 1;
  *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(param_2 + 0x30);
  IoFreeIrp(param_2);
  LOCK();
  piVar1 = (int *)(param_1 + 0x2c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(param_1 + 0x30,0,0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(param_1 + 0x50,0,0);
  }
  plVar2 = (longlong *)(param_1 + 0x1f0);
  if ((longlong *)*plVar2 == plVar2) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar2 - *(longlong *)(param_1 + 0x200);
  }
  if (param_3 == lVar7) {
    while ((((longlong *)*plVar2 != plVar2 &&
            (lVar7 = *plVar2 - *(longlong *)(param_1 + 0x200), lVar7 != 0)) &&
           (*(char *)(lVar7 + 0x51) != '\0'))) {
      plVar4 = (longlong *)*plVar2;
      if (plVar4 != plVar2) {
        *(longlong *)plVar4[1] = *plVar4;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        plVar4[1] = (longlong)plVar4;
        *plVar4 = (longlong)plVar4;
      }
      if ((*(int *)(lVar7 + 0x54) < 0) || (*(int *)(*(longlong *)(lVar7 + 0x40) + 4) < 0)) {
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        if (*(int *)(*(longlong *)(lVar7 + 0x40) + 4) == -0x3fff9000) {
          *(undefined1 *)(param_1 + 0x29) = 0;
        }
        FUN_00024648(lVar7);
      }
      else {
        *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(*(longlong *)(lVar7 + 0x40) + 0x24);
        (**(code **)**(undefined8 **)(param_1 + 0x1a8))();
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        if (*(char *)(param_1 + 0x29) != '\0') {
          FUN_00024dec(param_1);
        }
      }
      else if ((*(char *)(param_1 + 0x29) != '\0') && (*(int *)(param_1 + 0x68) < 1)) {
        LOCK();
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        UNLOCK();
        cVar6 = KeInsertQueueDpc(param_1 + 0x1b0,0);
        if (cVar6 == '\0') {
          LOCK();
          piVar1 = (int *)(param_1 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            KeSetEvent(param_1 + 0x50,0);
          }
        }
      }
    }
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x2c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(param_1 + 0x30,0,0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    KeSetEvent(param_1 + 0x50,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000251ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(*(longlong *)(param_1 + 8) + 0xd0,
                    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xd8));
  return;
}

