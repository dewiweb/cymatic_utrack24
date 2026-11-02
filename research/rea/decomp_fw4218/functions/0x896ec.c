// rea decompile_all
// name: FUN_000896ec
// address: 0x896ec
// body: available
// range: 0x896ec-0x89b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000896ec(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r5;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint uVar13;
  int local_48;
  uint local_3c;
  int local_38;
  
  *(undefined1 *)((int)param_1 + 0x40e) = 0;
  local_3c = 1;
  local_38 = 0x19;
  if (0x3ff < param_3) {
    unaff_r5 = DAT_00089b98;
  }
  local_48 = 0;
  iVar10 = 0x43;
  if (param_3 < 0x400) {
    return 0;
  }
  iVar9 = 0;
  do {
    (**(code **)(*param_1 + 0x18))(param_1,iVar10);
LAB_0008975c:
    do {
      iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,2000);
      if (iVar5 < 0) {
LAB_00089848:
        iVar9 = iVar9 + 1;
        if (299 < iVar9) {
          if (iVar10 != 0x43) goto LAB_00089a4c;
          iVar10 = 0x15;
          iVar9 = 0;
          break;
        }
      }
      else {
        if (iVar5 == 1) {
          iVar9 = 0x80;
        }
        else {
          if (iVar5 != 2) {
            if (iVar5 == 4) {
              (**(code **)*param_4)(param_4,param_2,local_48);
              (**(code **)(*param_1 + 0x18))(param_1,6);
              (**(code **)(*param_1 + 0x20))(param_1);
              return 1;
            }
            if ((iVar5 == 0x18) &&
               (iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,1000), iVar5 == 0x18)) {
              (**(code **)(*param_1 + 0x18))(param_1,6);
              (**(code **)(*param_1 + 0x20))(param_1);
              return 0;
            }
            goto LAB_00089848;
          }
          iVar9 = 0x400;
        }
        if (iVar10 == 0x43) {
          *(undefined1 *)((int)param_1 + 0x40e) = 1;
        }
        *(char *)(param_1 + 2) = (char)iVar5;
        iVar10 = 0;
        iVar5 = 0;
        puVar11 = (undefined1 *)((int)param_1 + 9);
        if ((uint)(*(char *)((int)param_1 + 0x40e) == '\x01') + iVar9 != -3) {
          do {
            iVar7 = (**(code **)(*param_1 + 0x1c))(param_1,1000);
            if (iVar7 < 0) goto LAB_00089b50;
            *puVar11 = (char)iVar7;
            iVar5 = iVar5 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar5 < (int)((uint)(*(char *)((int)param_1 + 0x40e) == '\x01') + iVar9 + 3));
        }
        uVar13 = (uint)*(byte *)((int)param_1 + 9);
        if (uVar13 == (~(uint)*(byte *)((int)param_1 + 10) & 0xff)) {
          uVar6 = local_3c;
          if (uVar13 != local_3c) {
            uVar6 = local_3c - 1;
          }
          if (uVar13 == local_3c || uVar13 == uVar6) {
            pbVar12 = (byte *)((int)param_1 + 0xb);
            if (*(char *)((int)param_1 + 0x40e) == '\x01') {
              uVar6 = 0;
              if (0 < iVar9 + -1) {
                uVar6 = (uint)*(ushort *)(unaff_r5 + (uint)*pbVar12 * 2);
                bVar4 = *(byte *)(param_1 + 3);
                pbVar2 = pbVar12;
                for (iVar5 = iVar9 + -1 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                  uVar8 = (uint)bVar4;
                  bVar4 = pbVar2[3];
                  uVar6 = ((uint)*(ushort *)(unaff_r5 + (uVar8 ^ uVar6 >> 8) * 2) ^ uVar6 << 8) &
                          0xff00ffff;
                  uVar6 = ((uint)*(ushort *)(unaff_r5 + ((uint)pbVar2[2] ^ uVar6 >> 8) * 2) ^
                          uVar6 << 8) & 0xff00ffff;
                  pbVar2 = pbVar2 + 2;
                }
              }
              if (-1 < iVar9 + -1) {
                uVar6 = ((uint)*(ushort *)(unaff_r5 + ((uint)pbVar12[iVar9 + -1] ^ uVar6 >> 8) * 2)
                        ^ uVar6 << 8) & 0xff00ffff;
              }
              if (uVar6 == (uint)pbVar12[iVar9 + 1] + (uint)pbVar12[iVar9] * 0x100)
              goto LAB_00089978;
            }
            else {
              bVar4 = 0;
              if (0 < iVar9 + -1) {
                bVar4 = *pbVar12;
                bVar1 = *(byte *)(param_1 + 3);
                pbVar2 = pbVar12;
                for (iVar5 = iVar9 + -1 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                  cVar3 = bVar4 + bVar1;
                  bVar1 = pbVar2[3];
                  bVar4 = cVar3 + pbVar2[2];
                  pbVar2 = pbVar2 + 2;
                }
              }
              if (-1 < iVar9 + -1) {
                bVar4 = bVar4 + pbVar12[iVar9 + -1];
              }
              if (pbVar12[iVar9] == bVar4) {
LAB_00089978:
                if (uVar13 == local_3c) {
                  iVar5 = param_3 - local_48;
                  if (iVar9 < param_3 - local_48) {
                    iVar5 = iVar9;
                  }
                  if (0 < iVar5) {
                    FUN_000039e0(param_2 + local_48,pbVar12,iVar5);
                    local_48 = local_48 + iVar5;
                  }
                  if (local_48 == param_3) {
                    iVar7 = (**(code **)*param_4)(param_4,param_2,local_48);
                    if (iVar7 == 0) goto LAB_00089a4c;
                    local_48 = 0;
                    if (iVar5 < iVar9) {
                      local_48 = iVar9 - iVar5;
                      FUN_000039e0(param_2,(int)param_1 + iVar5 + 0xb,local_48);
                    }
                  }
                  local_38 = 0x1a;
                  local_3c = local_3c + 1 & 0xff;
                }
                local_38 = local_38 + -1;
                if (local_38 < 1) {
LAB_00089a4c:
                  (**(code **)(*param_1 + 0x18))(param_1,0x18);
                  (**(code **)(*param_1 + 0x18))(param_1,0x18);
                  (**(code **)(*param_1 + 0x18))(param_1,0x18);
                  (**(code **)(*param_1 + 0x20))(param_1);
                  return 0;
                }
                (**(code **)(*param_1 + 0x18))(param_1,6);
                iVar9 = 0;
                goto LAB_0008975c;
              }
            }
          }
        }
LAB_00089b50:
        (**(code **)(*param_1 + 0x18))(param_1,0x15);
        (**(code **)(*param_1 + 0x20))(param_1);
        iVar9 = 0;
      }
    } while (iVar10 == 0);
  } while( true );
}

