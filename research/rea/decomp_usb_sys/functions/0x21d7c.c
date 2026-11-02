// rea decompile_all
// name: FUN_00021d7c
// address: 0x21d7c
// body: available
// range: 0x21d7c-0x21f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00021d7c(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
  do {
    lVar12 = *(longlong *)(param_1 + 0x28);
    plVar10 = (longlong *)(param_1 + 0x28);
    do {
      uVar2 = *(uint *)(param_2 + (ulonglong)*(uint *)(lVar12 + 0x30) * 4);
      uVar6 = uVar2 >> 0x10 & 0xff00;
      uVar11 = (uVar2 & 0xffffff00) << 0x10 | uVar6 | uVar2 & 0xff0000;
      for (puVar8 = *(undefined8 **)(lVar12 + 0x58); puVar8 != (undefined8 *)(lVar12 + 0x58);
          puVar8 = (undefined8 *)*puVar8) {
        *(uint *)puVar8[9] = uVar11;
        puVar8[9] = puVar8[9] + 4;
        if ((ulonglong)puVar8[8] <= (ulonglong)puVar8[9]) {
          puVar8[9] = puVar8[7];
        }
      }
      for (puVar8 = (undefined8 *)*puVar13; puVar8 != puVar13; puVar8 = (undefined8 *)*puVar8) {
        if (puVar8[0xe] == 0) {
          plVar7 = (longlong *)
                   (**(code **)(*(longlong *)puVar8[8] + 8))((longlong *)puVar8[8],puVar8[9]);
          puVar8[0xe] = plVar7;
          if (plVar7 != (longlong *)0x0) {
            lVar5 = *plVar7;
            puVar8[0xf] = lVar5;
            puVar8[0x11] = lVar5;
            uVar3 = *(uint *)(plVar7 + 1);
            *(undefined4 *)(puVar8 + 0x12) = 0;
            puVar8[0x10] = (ulonglong)uVar3 + lVar5;
            goto LAB_00021e63;
          }
          *(int *)(lVar12 + 0xc0) = *(int *)(lVar12 + 0xc0) + 1;
        }
        else {
LAB_00021e63:
          cVar1 = *(char *)((ulonglong)*(uint *)(puVar8 + 0x12) + 0x5c + (longlong)puVar8);
          if (-1 < cVar1) {
            iVar4 = *(int *)(puVar8 + 10);
            if (iVar4 == 0) {
              *(uint *)(puVar8[0x11] + (longlong)cVar1 * 4) = uVar11;
            }
            else if (iVar4 == 1) {
              *(short *)(puVar8[0x11] + (longlong)cVar1 * 2) = (short)(uVar11 >> 0x10);
            }
            else if (iVar4 == 2) {
              puVar9 = (undefined1 *)((longlong)(cVar1 * 3) + puVar8[0x11]);
              *puVar9 = (char)(uVar6 >> 8);
              puVar9[1] = (char)((uVar2 & 0xff0000) >> 0x10);
              puVar9[2] = (char)((uVar2 & 0xffffff00) >> 8);
            }
          }
          *(int *)(puVar8 + 0x12) = *(int *)(puVar8 + 0x12) + 1;
          if (*(uint *)((longlong)puVar8 + 0x54) <= *(uint *)(puVar8 + 0x12)) {
            *(undefined4 *)(puVar8 + 0x12) = 0;
            puVar8[0x11] = puVar8[0x11] + (ulonglong)*(uint *)((longlong)puVar8 + 0x6c);
            if ((ulonglong)puVar8[0x10] <= (ulonglong)puVar8[0x11]) {
              (**(code **)(*(longlong *)puVar8[8] + 0x10))
                        ((longlong *)puVar8[8],puVar8[9],puVar8[0xe]);
              puVar8[0xe] = 0;
              puVar8[0x11] = 0;
              puVar8[0x10] = 0;
              puVar8[0xf] = 0;
            }
          }
        }
      }
      *(int *)(lVar12 + 0xa8) = *(int *)(lVar12 + 0xa8) + 1;
      plVar10 = plVar10 + 1;
      lVar12 = *plVar10;
    } while (lVar12 != 0);
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return;
    }
    param_2 = param_2 + (ulonglong)param_4 * 4;
  } while( true );
}

