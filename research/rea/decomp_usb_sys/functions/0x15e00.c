// rea decompile_all
// name: FUN_00015e00
// address: 0x15e00
// body: available
// range: 0x15e00-0x15fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00015e00(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                byte param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  plVar2 = (longlong *)(param_1 + 0xb0);
  lVar7 = 0;
  do {
    while( true ) {
      do {
        if (lVar7 == 0) {
          if ((longlong *)*plVar2 == plVar2) {
            return iVar9;
          }
          lVar7 = *plVar2 - *(longlong *)(param_1 + 0xc0);
        }
        else {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + lVar7);
          if (plVar1 == plVar2) {
            return iVar9;
          }
          lVar7 = (longlong)plVar1 - *(longlong *)(param_1 + 0xc0);
        }
        if (lVar7 == 0) {
          return iVar9;
        }
        if (*(char *)(lVar7 + 0xa0) == '\0') {
          bVar5 = param_5 & 2;
        }
        else {
          bVar5 = param_5 & 1;
        }
      } while ((bVar5 == 0) || (*(char *)(lVar7 + 0xa2) == '\0'));
      puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,0x20,0x5f6e6577);
      if (puVar6 == (ulonglong *)0x0) {
        puVar6 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar6,0,0x20);
        puVar6[1] = (ulonglong)puVar6;
        *puVar6 = (ulonglong)puVar6;
      }
      if (puVar6 != (ulonglong *)0x0) break;
      if (-1 < iVar9) {
        iVar9 = -0x1ffffffe;
      }
    }
    *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined4 *)(puVar6 + 2) = param_2;
    plVar1 = (longlong *)(lVar7 + 0x78);
    plVar4 = *(longlong **)(lVar7 + 0x80);
    plVar3 = (longlong *)((longlong)puVar6 + *(longlong *)(lVar7 + 0x88));
    *plVar3 = *plVar4;
    plVar3[1] = (longlong)plVar4;
    *(longlong **)(*plVar4 + 8) = plVar3;
    *plVar4 = (longlong)plVar3;
    *(int *)(lVar7 + 0x90) = *(int *)(lVar7 + 0x90) + 1;
    if (*(uint *)(lVar7 + 0x94) < *(uint *)(lVar7 + 0x90)) {
      do {
        if ((longlong *)*plVar1 == plVar1) break;
        plVar3 = (longlong *)*plVar1;
        if (plVar3 == plVar1) {
          lVar8 = 0;
        }
        else {
          *(longlong *)plVar3[1] = *plVar3;
          *(longlong *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (longlong)plVar3;
          *plVar3 = (longlong)plVar3;
          lVar8 = (longlong)plVar3 - *(longlong *)(lVar7 + 0x88);
        }
        *(int *)(lVar7 + 0x90) = *(int *)(lVar7 + 0x90) + -1;
        if (lVar8 != 0) {
          ExFreePoolWithTag(lVar8,0);
        }
      } while (*(uint *)(lVar7 + 0x94) < *(uint *)(lVar7 + 0x90));
    }
    if (*(longlong *)(lVar7 + 0x98) != 0) {
      KeSetEvent(*(longlong *)(lVar7 + 0x98),0,0);
    }
  } while( true );
}

