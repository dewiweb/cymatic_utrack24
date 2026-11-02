// rea decompile_all
// name: FUN_00025224
// address: 0x25224
// body: available
// range: 0x25224-0x2538d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025224(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char local_res8 [8];
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    while (*(int *)(param_1 + 0x68) < 2) {
      lVar7 = FUN_00024a34(param_1 + 0x150);
      if (lVar7 == 0) {
        return;
      }
      puVar3 = *(ulonglong **)(lVar7 + 0x40);
      FUN_000264d0(puVar3,0,0x98);
      *(undefined2 *)((longlong)puVar3 + 2) = 9;
      *(undefined2 *)puVar3 = 0x80;
      puVar3[3] = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
      *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)(lVar7 + 0x28);
      uVar4 = *(ulonglong *)(lVar7 + 0x58);
      puVar3[5] = 0;
      puVar3[7] = 0;
      puVar3[6] = uVar4;
      *(undefined4 *)(puVar3 + 4) = 3;
      *(longlong *)(lVar7 + 0x68) = param_1;
      *(undefined1 *)(lVar7 + 0x51) = 0;
      plVar5 = *(longlong **)(param_1 + 0x1f8);
      plVar2 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x200));
      lVar6 = *plVar5;
      plVar2[1] = (longlong)plVar5;
      *plVar2 = lVar6;
      *(longlong **)(*plVar5 + 8) = plVar2;
      *plVar5 = (longlong)plVar2;
      LOCK();
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      UNLOCK();
      uVar8 = FUN_00024e5c(param_1,puVar3,FUN_00024f88,lVar7,local_res8);
      if (local_res8[0] == '\0') {
        LOCK();
        piVar1 = (int *)(param_1 + 0x2c);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          KeSetEvent(param_1 + 0x30,0,0);
        }
        LOCK();
        piVar1 = (int *)(param_1 + 0x48);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          KeSetEvent(param_1 + 0x50,0,0);
        }
        plVar2 = *(longlong **)(param_1 + 0x1f8);
        if (plVar2 != (longlong *)(param_1 + 0x1f0)) {
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
        }
        FUN_00024648(lVar7);
      }
      if ((int)uVar8 < 0) {
        return;
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
    }
  }
  return;
}

