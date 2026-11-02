// rea decompile_all
// name: FUN_00022808
// address: 0x22808
// body: available
// range: 0x22808-0x22a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022808(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *local_res8;
  
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
  do {
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_res8 = (longlong *)(param_1 + 0x28);
    do {
      uVar10 = 0;
      for (puVar7 = *(undefined8 **)(lVar9 + 0x58); puVar7 != (undefined8 *)(lVar9 + 0x58);
          puVar7 = (undefined8 *)*puVar7) {
        iVar11 = *(int *)puVar7[9];
        piVar5 = (int *)puVar7[9] + 1;
        puVar7[9] = piVar5;
        if ((int *)puVar7[8] <= piVar5) {
          puVar7[9] = puVar7[7];
        }
        uVar10 = (iVar11 >> 8) + uVar10;
        if ((int)uVar10 < 0x800000) {
          if ((int)uVar10 < -0x800000) {
            uVar10 = 0xff800000;
          }
        }
        else {
          uVar10 = 0x7fffff;
        }
      }
      for (puVar7 = (undefined8 *)*puVar12; puVar7 != puVar12; puVar7 = (undefined8 *)*puVar7) {
        if (puVar7[0xe] == 0) {
          plVar6 = (longlong *)
                   (**(code **)(*(longlong *)puVar7[8] + 8))((longlong *)puVar7[8],puVar7[9]);
          puVar7[0xe] = plVar6;
          iVar11 = 0;
          if (plVar6 != (longlong *)0x0) {
            lVar3 = *plVar6;
            puVar7[0xf] = lVar3;
            puVar7[0x11] = lVar3;
            uVar4 = *(uint *)(plVar6 + 1);
            *(undefined4 *)(puVar7 + 0x12) = 0;
            puVar7[0x10] = (ulonglong)uVar4 + lVar3;
            goto LAB_000228ec;
          }
          *(int *)(lVar9 + 0xc0) = *(int *)(lVar9 + 0xc0) + 1;
        }
        else {
LAB_000228ec:
          iVar11 = 0;
          cVar1 = *(char *)((ulonglong)*(uint *)(puVar7 + 0x12) + 0x5c + (longlong)puVar7);
          if (-1 < cVar1) {
            iVar2 = *(int *)(puVar7 + 10);
            if (iVar2 == 0) {
              iVar11 = *(int *)(puVar7[0x11] + (longlong)cVar1 * 4);
            }
            else if (iVar2 == 1) {
              iVar11 = (uint)*(ushort *)(puVar7[0x11] + (longlong)cVar1 * 2) << 0x10;
            }
            else if (iVar2 == 2) {
              puVar8 = (undefined1 *)((longlong)(cVar1 * 3) + puVar7[0x11]);
              iVar11 = (uint)CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]) << 8;
            }
          }
          uVar4 = *(uint *)(puVar7 + 0x12) + 1;
          *(uint *)(puVar7 + 0x12) = uVar4;
          if (*(uint *)((longlong)puVar7 + 0x54) <= uVar4) {
            *(undefined4 *)(puVar7 + 0x12) = 0;
            puVar7[0x11] = puVar7[0x11] + (ulonglong)*(uint *)((longlong)puVar7 + 0x6c);
            if ((ulonglong)puVar7[0x10] <= (ulonglong)puVar7[0x11]) {
              (**(code **)(*(longlong *)puVar7[8] + 0x10))
                        ((longlong *)puVar7[8],puVar7[9],puVar7[0xe]);
              puVar7[0xe] = 0;
              puVar7[0x11] = 0;
              puVar7[0x10] = 0;
              puVar7[0xf] = 0;
            }
          }
        }
        uVar10 = (iVar11 >> 8) + uVar10;
        if ((int)uVar10 < 0x800000) {
          if ((int)uVar10 < -0x800000) {
            uVar10 = 0xff800000;
          }
        }
        else {
          uVar10 = 0x7fffff;
        }
      }
      *(uint *)(param_2 + (ulonglong)*(uint *)(lVar9 + 0x30) * 4) =
           (uVar10 & 0xff00 | uVar10 << 0x10) << 8 | (uVar10 & 0xff0000 | 0x4000) >> 8;
      *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
      local_res8 = local_res8 + 1;
      lVar9 = *local_res8;
    } while (lVar9 != 0);
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return;
    }
    param_2 = param_2 + (ulonglong)param_4 * 4;
  } while( true );
}

