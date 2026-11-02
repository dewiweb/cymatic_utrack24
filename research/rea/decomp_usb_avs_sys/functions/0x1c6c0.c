// rea decompile_all
// name: FUN_0001c6c0
// address: 0x1c6c0
// body: available
// range: 0x1c6c0-0x1c955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001c6c0(longlong *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3;
    do {
      bVar1 = *param_2;
      if ((bVar1 & 0xf8) == 0xf8) {
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,param_2,1);
        }
      }
      else {
        if ((char)bVar1 < '\0') {
          if (bVar1 == 0xf0) {
            *(undefined4 *)(param_1 + 0xc) = 1;
            *(byte *)param_1[10] = *param_2;
            *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
            param_1[10] = param_1[10] + 1;
            if (*(uint *)(param_1 + 9) <= *(uint *)(param_1 + 0xb)) {
              if (*(uint *)(param_1 + 0xb) != 0) {
                puVar3 = (undefined8 *)*param_1;
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,param_1 + 1);
                }
                *(undefined4 *)(param_1 + 0xb) = 0;
                param_1[10] = (longlong)(param_1 + 1);
              }
              *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
            }
          }
          else if (bVar1 == 0xf7) {
            *(undefined4 *)(param_1 + 0xc) = 0;
            *(byte *)param_1[10] = *param_2;
            *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
            param_1[10] = param_1[10] + 1;
            if (*(uint *)(param_1 + 9) <= *(uint *)(param_1 + 0xb)) {
              if (*(uint *)(param_1 + 0xb) != 0) {
                puVar3 = (undefined8 *)*param_1;
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,param_1 + 1);
                }
                *(undefined4 *)(param_1 + 0xb) = 0;
                param_1[10] = (longlong)(param_1 + 1);
              }
              *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
            }
            *(undefined1 *)((longlong)param_1 + 0x5d) = 0;
            *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
          }
          else {
            if ((int)param_1[0xb] != 0) {
              if ((int)param_1[0xb] != 0) {
                puVar3 = (undefined8 *)*param_1;
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,param_1 + 1);
                }
                *(undefined4 *)(param_1 + 0xb) = 0;
                param_1[10] = (longlong)(param_1 + 1);
              }
              *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
            }
            *(undefined4 *)(param_1 + 0xc) = 0;
            uVar2 = (&DAT_0001e210)[*param_2 & 0x7f];
            *(undefined1 *)((longlong)param_1 + 0x5d) = uVar2;
            *(undefined1 *)((longlong)param_1 + 0x5c) = uVar2;
            *(byte *)param_1[10] = *param_2;
            *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
            param_1[10] = param_1[10] + 1;
            if (*(uint *)(param_1 + 9) <= *(uint *)(param_1 + 0xb)) {
              if (*(uint *)(param_1 + 0xb) != 0) {
                puVar3 = (undefined8 *)*param_1;
                if (puVar3 != (undefined8 *)0x0) {
                  (**(code **)*puVar3)(puVar3,param_1 + 1);
                }
                *(undefined4 *)(param_1 + 0xb) = 0;
                param_1[10] = (longlong)(param_1 + 1);
              }
              *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
            }
          }
        }
        else {
          if (((int)param_1[0xb] == 0) && ((int)param_1[0xc] == 0)) {
            if (*(char *)((longlong)param_1 + 0x5c) < '\x01') {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,param_2,1);
              goto LAB_0001c919;
            }
            param_1[10] = param_1[10] + 1;
            *(undefined4 *)(param_1 + 0xb) = 1;
          }
          *(byte *)param_1[10] = *param_2;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
          param_1[10] = param_1[10] + 1;
          if (*(uint *)(param_1 + 9) <= *(uint *)(param_1 + 0xb)) {
            if (*(uint *)(param_1 + 0xb) != 0) {
              puVar3 = (undefined8 *)*param_1;
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,param_1 + 1);
              }
              *(undefined4 *)(param_1 + 0xb) = 0;
              param_1[10] = (longlong)(param_1 + 1);
            }
            *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
          }
          if ((int)param_1[0xc] == 0) {
            *(char *)((longlong)param_1 + 0x5d) = *(char *)((longlong)param_1 + 0x5d) + -1;
          }
        }
        if ((*(char *)((longlong)param_1 + 0x5d) == '\0') && ((int)param_1[0xc] == 0)) {
          if ((int)param_1[0xb] != 0) {
            puVar3 = (undefined8 *)*param_1;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,param_1 + 1);
            }
            *(undefined4 *)(param_1 + 0xb) = 0;
            param_1[10] = (longlong)(param_1 + 1);
          }
          *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5c);
        }
      }
LAB_0001c919:
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

