// rea decompile_all
// name: FUN_00023948
// address: 0x23948
// body: available
// range: 0x23948-0x23d0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00023948(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res18;
  int local_res20;
  int local_48;
  
  FUN_00024180((longlong)param_1,param_2);
  lVar7 = 0;
  iVar11 = 1;
  iVar9 = 1;
  local_res18 = 1;
  local_res20 = 1;
  local_48 = 1;
  do {
    if (lVar7 == 0) {
      if ((longlong *)*param_1 == param_1) goto LAB_00023ad0;
      lVar7 = *param_1 - param_1[2];
    }
    else {
      plVar6 = *(longlong **)(param_1[2] + lVar7);
      if (plVar6 == param_1) {
LAB_00023ad0:
        lVar7 = 0;
        iVar9 = iVar11;
LAB_00023adc:
        do {
          while( true ) {
            do {
              if (lVar7 == 0) {
                if ((longlong *)*param_1 == param_1) {
                  return;
                }
                lVar7 = *param_1 - param_1[2];
              }
              else {
                plVar6 = *(longlong **)(param_1[2] + lVar7);
                if (plVar6 == param_1) {
                  return;
                }
                lVar7 = (longlong)plVar6 - param_1[2];
              }
              if (lVar7 == 0) {
                return;
              }
            } while ((((param_2 != *(longlong *)(lVar7 + 0x20)) || (*(char *)(lVar7 + 0x7b) == '\0')
                      ) || (*(char *)(lVar7 + 0x7c) != '\0')) ||
                    (iVar10 = *(int *)(lVar7 + 0x18), iVar10 < 1));
            if ((3 < iVar10) && (iVar10 != 0x65)) break;
            puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x98,0x5f6e6577);
            if (puVar5 == (ulonglong *)0x0) {
              puVar5 = (ulonglong *)0x0;
            }
            else {
              FUN_000264d0(puVar5,0,0x98);
              puVar5[1] = (ulonglong)puVar5;
              *puVar5 = (ulonglong)puVar5;
            }
            if (puVar5 != (ulonglong *)0x0) {
              puVar1 = puVar5 + 3;
              if (*(char *)(lVar7 + 0x78) == '\0') {
                *(undefined4 *)puVar1 = 2;
                *(int *)(puVar5 + 4) = iVar9;
                iVar9 = iVar9 + 1;
                local_res18 = iVar9;
              }
              else {
                *(undefined4 *)puVar1 = 1;
                *(int *)(puVar5 + 4) = iVar11;
                iVar11 = iVar11 + 1;
              }
              *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)(lVar7 + 0x48);
              *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)(lVar7 + 0x1c);
              FUN_00023280(lVar7,(longlong)puVar1);
              plVar6 = *(longlong **)(lVar7 + 0x30);
              if (plVar6 == (longlong *)(lVar7 + 0x30)) {
                lVar4 = 0;
              }
              else {
                lVar4 = (longlong)plVar6 - *(longlong *)(lVar7 + 0x40);
              }
              FUN_00023d14((longlong)param_1,param_2,lVar7,lVar4,(longlong)puVar5);
              *(undefined1 *)(lVar7 + 0x7c) = 1;
            }
          }
        } while (iVar10 != 200);
        iVar10 = 0;
        plVar6 = (longlong *)(lVar7 + 0x30);
        lVar4 = 0;
        do {
          iVar9 = local_res18;
          if (lVar4 == 0) {
            if ((longlong *)*plVar6 == plVar6) goto LAB_00023adc;
            lVar4 = *plVar6 - *(longlong *)(lVar7 + 0x40);
          }
          else {
            plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x40) + lVar4);
            if (plVar3 == plVar6) goto LAB_00023adc;
            lVar4 = (longlong)plVar3 - *(longlong *)(lVar7 + 0x40);
          }
          if (lVar4 == 0) goto LAB_00023adc;
          puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x98,0x5f6e6577);
          if (puVar5 == (ulonglong *)0x0) {
            puVar5 = (ulonglong *)0x0;
          }
          else {
            FUN_000264d0(puVar5,0,0x98);
            puVar5[1] = (ulonglong)puVar5;
            *puVar5 = (ulonglong)puVar5;
          }
          if (puVar5 == (ulonglong *)0x0) goto LAB_00023adc;
          if (*(char *)(lVar7 + 0x78) == '\0') {
            *(undefined4 *)(puVar5 + 3) = 4;
            *(int *)(puVar5 + 4) = local_48;
            local_48 = local_48 + 1;
          }
          else {
            *(undefined4 *)(puVar5 + 3) = 3;
            *(int *)(puVar5 + 4) = local_res20;
            local_res20 = local_res20 + 1;
          }
          *(undefined4 *)((longlong)puVar5 + 0x1c) = 1;
          uVar2 = *(undefined4 *)(lVar7 + 0x1c);
          *(int *)(puVar5 + 5) = iVar10;
          *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
          iVar10 = iVar10 + 1;
          FUN_00023d14((longlong)param_1,param_2,lVar7,lVar4,(longlong)puVar5);
          *(undefined1 *)(lVar7 + 0x7c) = 1;
        } while( true );
      }
      lVar7 = (longlong)plVar6 - param_1[2];
    }
    if (lVar7 == 0) goto LAB_00023ad0;
    if (((((param_2 == *(longlong *)(lVar7 + 0x20)) && (*(char *)(lVar7 + 0x7b) != '\0')) &&
         ((*(char *)(lVar7 + 0x7c) == '\0' &&
          ((*(int *)(lVar7 + 0x18) == 100 && (*(char *)(lVar7 + 0x78) == '\0')))))) &&
        ((plVar6 = param_1, lVar4 = FUN_00023fc0(param_1,param_2,3), lVar4 != 0 ||
         (lVar4 = FUN_00023fc0(plVar6,param_2,2), lVar4 != 0)))) &&
       (*(char *)(lVar4 + 0x7b) != '\0')) {
      puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x98,0x5f6e6577);
      if (puVar5 == (ulonglong *)0x0) {
        puVar5 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar5,0,0x98);
        puVar5[1] = (ulonglong)puVar5;
        *puVar5 = (ulonglong)puVar5;
      }
      if (puVar5 != (ulonglong *)0x0) {
        *(int *)(puVar5 + 4) = iVar9;
        *(undefined4 *)(puVar5 + 3) = 6;
        iVar9 = iVar9 + 1;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)(lVar4 + 0x48);
        *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)(lVar4 + 0x1c);
        *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)(lVar7 + 0x1c);
        FUN_00023280(lVar4,(longlong)(puVar5 + 3));
        plVar6 = *(longlong **)(lVar7 + 0x30);
        if (plVar6 == (longlong *)(lVar7 + 0x30)) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)plVar6 - *(longlong *)(lVar7 + 0x40);
        }
        FUN_00023d14((longlong)param_1,param_2,lVar4,lVar8,(longlong)puVar5);
        *(undefined1 *)(lVar4 + 0x7c) = 1;
        *(undefined1 *)(lVar7 + 0x7c) = 1;
      }
    }
  } while( true );
}

