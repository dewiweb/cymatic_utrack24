// rea decompile_all
// name: FUN_00021f84
// address: 0x21f84
// body: available
// range: 0x21f84-0x220f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00021f84(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  
  bVar10 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x87);
  bVar4 = false;
  do {
    lVar2 = *(longlong *)(param_1 + 0x28 + (ulonglong)(bVar10 & 7) * 8);
    if (lVar2 != 0) {
      uVar7 = *(uint *)(param_2 + (ulonglong)*(uint *)(lVar2 + 0x30) * 4);
      if (((byte)uVar7 & 0xfc) == 0x80) {
        uVar6 = uVar7 & 3;
        if (uVar6 != 0) {
          plVar8 = (longlong *)(lVar2 + 0x88);
LAB_00021ff1:
          lVar9 = 0;
LAB_00021ff6:
          if (lVar9 == 0) {
            if ((longlong *)*plVar8 == plVar8) break;
            lVar9 = *plVar8 - *(longlong *)(lVar2 + 0x98);
          }
          else {
            plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + lVar9);
            if (plVar1 == plVar8) break;
            lVar9 = (longlong)plVar1 - *(longlong *)(lVar2 + 0x98);
          }
          if (lVar9 == 0) break;
          puVar5 = (undefined1 *)FUN_00024350(lVar9);
          if (puVar5 == (undefined1 *)0x0) {
            *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + 1;
          }
          else {
            *puVar5 = (char)(uVar7 >> 8);
            FUN_000243a8(lVar9,1);
            bVar4 = true;
          }
          goto LAB_00021ff6;
        }
      }
      else {
        *(int *)(lVar2 + 0xbc) = *(int *)(lVar2 + 0xbc) + 1;
      }
    }
LAB_00022070:
    param_3 = param_3 + -1;
    if (param_3 == 0) goto LAB_0002208b;
    bVar10 = bVar10 + 1;
    param_2 = param_2 + (ulonglong)param_4 * 4;
  } while( true );
  *(int *)(lVar2 + 0xac) = *(int *)(lVar2 + 0xac) + 1;
  uVar6 = uVar6 - 1;
  uVar7 = uVar7 >> 8;
  if (uVar6 == 0) goto LAB_00022070;
  goto LAB_00021ff1;
LAB_0002208b:
  if (!bVar4) {
    return;
  }
  plVar8 = (longlong *)(param_1 + 0x28);
LAB_000220da:
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    return;
  }
  lVar9 = 0;
  plVar1 = (longlong *)(lVar2 + 0x88);
  do {
    if (lVar9 == 0) {
      if ((longlong *)*plVar1 == plVar1) break;
      lVar9 = *plVar1 - *(longlong *)(lVar2 + 0x98);
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x98) + lVar9);
      if (plVar3 == plVar1) break;
      lVar9 = (longlong)plVar3 - *(longlong *)(lVar2 + 0x98);
    }
    if (lVar9 == 0) break;
    FUN_00024408(lVar9);
  } while( true );
  plVar8 = plVar8 + 1;
  goto LAB_000220da;
}

